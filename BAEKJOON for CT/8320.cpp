//n보다 작은 수 중
//중복안되게 가능한 곱중 
//곱의 결과가 n보다 작은 것
#include <iostream>

using namespace std;

int main()
{
    int n,res=0;
    cin >> n;
    res+=n;
    for(int i=2; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(i*j<=n){res++;}
        }
    }
    cout << res;
    
    return 0;
}