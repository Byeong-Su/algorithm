//날짜 계산기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PnnU6AOsDFAUq&categoryId=AV5PnnU6AOsDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    cin >> T;

    //1월 2월 순으로 인덱스 맞춰주기위해 [0]에 0 삽입
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int mon_1, day_1, mon_2, day_2, sum;
    for(int t=1; t<=T; t++){
        sum=0;
        cin >> mon_1 >> day_1 >> mon_2 >> day_2;

        //첫달 일 수 계산
        sum+=((arr[mon_1]-day_1)+1);
        //첫달, 마지막달 사이 일 수 계산
        for(int i=mon_1 + 1; i<mon_2; i++){
            sum+=arr[i];
        }
        //마지막 달 일 수 계산
        if(mon_1<mon_2){
            sum+=day_2;
        }

        //출력
        cout << '#' << t << ' ' << sum << '\n';
    }

    return 0;
}