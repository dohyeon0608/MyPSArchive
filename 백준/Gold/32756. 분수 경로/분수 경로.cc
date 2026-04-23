#include <iostream>
#include <vector>

using namespace std;

char result[1001];
int end_of_string = 0;

long long euclidean(long long a, long long b) {
    long long r = a % b;
    if (r == 0) return b;
    return euclidean(b, r);
}

// n: 자연수
bool is_binary(long long n) {
    bool result = true;
    while (n > 1) {
        if ((n & 1) == 1) {
            result = false;
            break;
        }
        n >>= 2;
    }
    return result;
}

void add_step(char step) {
    result[end_of_string++] = step;
}

int log2(long long n) {
    int result = 0;
    while (n > 1) {
        result++;
        n >>= 1;
    }
    return result;
}

bool get_digit(long long n, int p) {
    long long result = n & ((long long)1 << p);
    return (result != 0);
}

void move_y(int& old_y, int new_y) {
    if (new_y > old_y) {
        for (int i = 0; i < new_y - old_y; i++) {
            add_step('U');
        }
    }
    else {
        for (int i = 0; i < old_y - new_y; i++) {
            add_step('D');
        }
    }
    old_y = new_y;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, d;
    cin >> n >> d;

    long long GCD = euclidean(n, d);
    n /= GCD;
    d /= GCD;

    if (d < 0) {
        n *= -1; d *= -1;
    }

    if (!is_binary(d)) {
        cout << -1 << "\n";
        return 0;
    }

    if (n == 0) {
        cout << 0 << "\n\n";
        return 0;
    }

    int size = 0;
    bool negative = false;
    int y = 0;

    if (n < 0) {
        size = 1;
        n += ((long long)1 << (log2(-n) + 2));
        negative = true;
    }

    size += log2(n);
    int decimal_point = log2(d);

    int lowest = 0;
    while (true) {
        if (get_digit(n, lowest) == 1) break;
        lowest++;
    }

    move_y(y, lowest - decimal_point);
    for (int i = lowest; i <= size; i++) {
        if (i == size) {
            if(negative) add_step('L');
            else add_step('R');
        }
        else {
            if (get_digit(n, i) == 1) add_step('R');
            move_y(y, y + 1);
        }
    }

    cout << end_of_string << "\n" << result;

    return 0;
}