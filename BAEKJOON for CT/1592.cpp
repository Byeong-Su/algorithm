#include <iostream>

using namespace std;

int main()
{
    int n,m,l,idx=0,cnt=0;
    cin >> n >> m >> l;
    int arr[n]={1,0};
    
    while(arr[idx]!=m){
        //원으로 순서가 돌아가므로
        //범위n을 넘어가는 경우 위해 n으로 나눈 나머지로
        if(arr[idx]%2==1){
            idx=(idx+l)%n;
        }else{
            idx=(idx-l);
            //범위n보다 작은 경우 위해 -인경우 n만큼 더해줌
            if(idx<0){ idx+=n; }
        }
        arr[idx]++;
        cnt++;
    }
    cout << cnt;
    
    
    return 0;
}