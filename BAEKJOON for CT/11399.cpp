#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N,res=0;
    cin >> N;
    int P[N];
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    //정렬
    sort(P,P+N);
    
    //각 자리의 대기시간
    for(int i=N-1; i>=0; i--){
        for(int j=i-1; j>=0; j--){
            P[i]+=P[j];
        }
        res+=P[i];
    }
    
    cout << res;
    
    return 0;
}
