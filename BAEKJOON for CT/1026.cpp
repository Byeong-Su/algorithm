#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, ans = 0;
	cin >> N;
	int A[101], B[101];

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + N, greater<int>());

	for (int i = 0; i < N; i++) {
		ans += (A[i] * B[i]);
	}

	cout << ans;

	return 0;
}