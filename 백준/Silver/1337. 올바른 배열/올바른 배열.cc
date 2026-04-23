#include <stdio.h>
#include <map>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);

	int arr[N];
	map<int, bool> exists;
	for(int i = 0; i < N; i++) {
		scanf("%d", arr + i);
		exists[arr[i]] = true;
	}

	int result = 5;
	int result_temp = 0;

	for(int i = 0; i < N; i++) {
		result_temp = 0;
		for(int k = 1; k <= 4; k++) {
			if(exists[arr[i] + k]) {
				result_temp++;
			}
		}
		result_temp = 4 - result_temp;
		if(result_temp < result) result = result_temp;
	}

	printf("%d", result);

	return 0;
}