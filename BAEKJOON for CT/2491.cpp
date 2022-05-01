#include <iostream>

using namespace std;

int main()
{
    int n, up_cnt=0, down_cnt=0, max=0;
    cin >> n;
    int arr[n];
    
    cin >> arr[0];
    for(int i=1; i<n; i++){
        cin >> arr[i];
        //증가하는 경우
        if(arr[i]>arr[i-1]){ up_cnt++; down_cnt=0; }
        //같은 경우(둘다 증가)
        else if(arr[i]==arr[i-1]){ up_cnt++; down_cnt++; }
        //작아지는 경우
        else{ up_cnt=0; down_cnt++; }
        
        //현재 기준 최대길이보다 크면 최신화
        if(up_cnt>max){ max=up_cnt; }
        else if(down_cnt>max){ max=down_cnt; }
    }
    
    cout << max+1;
    
    

    return 0;
}
