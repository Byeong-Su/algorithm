//규칙찾기 문제
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int T, a, b, mul;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> a >> b;
		mul = 1;
		if (a % 10 == 0) {
			cout << 10 << endl;
		}
		else {
			for (int j = 0; j < ((b + 3) % 4) + 1; j++) { // b+3 해야 한다
				mul *= (a % 10);
			}
			cout << mul % 10 << endl;
		}
	}
	return 0;
}