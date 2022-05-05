#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int T,N,num;
    vector<int> v;
    cin >> T;
    for(int t=0; t<T; t++){
        cin >> N;
        //배열 초기화
        v.clear();
        //배열 입력
        for(int i=0; i<N; i++){
            cin >> num;
            v.push_back(num);
        }
        //정렬
        sort(v.begin(),v.end());
        //출력
        cout << '#' << t+1;
        for(int i=0; i<N; i++){
            cout << ' ' << v[i];
        }
        cout << '\n';
    }
	
	return 0;
}