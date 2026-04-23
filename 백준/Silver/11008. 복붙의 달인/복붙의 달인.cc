#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int T;
	string s, p;
	int slen, plen, result;

	cin >> T;
	
	while(T-- > 0) {
		cin >> s >> p;

		plen = p.length();
		slen = s.length();
		result = 0;

		for(int i = 0; i < slen;) {
			if(p.compare(s.substr(i, plen)) == 0) {
				i += plen;
			} else {
				i++;
			}
			result++;
		}

		cout << result << "\n";
	}

	return 0;
}