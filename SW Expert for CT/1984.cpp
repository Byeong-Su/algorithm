//중간 평균값 구하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5Pw_-KAdcDFAUq&categoryId=AV5Pw_-KAdcDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T,min,max;
    double sum;
    int arr[10];
    cin >> T;
    
    for(int t=1; t<=T; t++){
        sum=0.0;
        min=10001;
        max=0;
        for(int i=0; i<10; i++){
            cin >> arr[i];
            //최소값 찾기
            if(arr[i]<min){ min=arr[i]; }
            //최대값 찾기
            if(max<arr[i]){ max=arr[i]; }
            sum+=arr[i];
        }
        //최대,최소값 제외한 합산에서 8 나눠줌
        cout << '#' << t << ' ' << round((sum-max-min)/8) << '\n';
    }

    return 0;
}