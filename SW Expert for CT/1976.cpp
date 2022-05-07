//사각 덧셈
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PttaaAZIDFAUq&categoryId=AV5PttaaAZIDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main()
{
    int T, H_1, H_2, H_sum, M_1, M_2, M_sum;      //테스트케이스 수, 시, 분
    cin >> T;
    for(int t=1; t<=T; t++){
        //시간 분 합계 초기화
        H_sum=0, M_sum=0;
        //입력
        cin >> H_1 >> M_1 >> H_2 >> M_2;
        //분 합산 60넘는 경우
        if(M_1+M_2>=60){
            H_sum++; M_sum=(M_1+M_2)-60;
        } else {
            M_sum=(M_1+M_2);
        }
        //시 합산 13넘는 경우
        if(H_sum+H_1+H_2>12){
            H_sum=(H_sum+H_1+H_2)-12;
        } else {
            H_sum=H_sum+H_1+H_2;
        }
        cout << '#' << t << ' ' << H_sum << ' ' << M_sum << '\n';
        
    }

    return 0;
}
