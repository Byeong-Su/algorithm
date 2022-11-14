#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int T;
    long long A,B;
    
	cin>>T;
    
	for(int t = 1; t <= T; ++t)
	{
        cin >> A >> B;
        cout << '#' << t << ' ' << (A*A)/(B*B) << '\n';
	}
	return 0;
}