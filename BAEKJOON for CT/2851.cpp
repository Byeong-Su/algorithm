//이미 저장된값과 새로 비교할 값을 100으로 빼서
//절대값 취해 차가 작은것을 저장
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum=0, res, mushroom[10];
    
    for(int i=0; i<10; i++){
        cin >> mushroom[i];
        sum+=mushroom[i];
        if(i==0){ res=mushroom[i]; }
        else{
            if( abs(100-sum) <= abs(100-res) ){ res=sum; }
        }
    }
    
    cout << res;
    
    return 0;
}