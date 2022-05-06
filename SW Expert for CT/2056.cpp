//연월일 달력
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QLkdKAz4DFAUq&categoryId=AV5QLkdKAz4DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    //월 별 최대 일 저장
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int T,year,month,day;
    string s, s_year, s_month, s_day;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> s;
        //문자열 자르기
        s_year=s.substr(0,4);
        s_month=s.substr(4,2);
        s_day=s.substr(6,2);
        //string to int
        year=stoi(s_year);




        
        month=stoi(s_month);
        day=stoi(s_day);
        cout << '#' << t << ' ';
        //유효성 검사
        if( (1<=month && month<=12) && (1<=day && day<=arr[month])){
            if(year<1000){ cout << '0' << year; }
            else{ cout << year; }
            cout << '/';
            if(month<10){ cout << '0' << month; }
            else{ cout << month; }
            cout << '/';
            if(day<10){ cout << '0' << day; }
            else{ cout << day; }
            cout << '\n';
        }else {
            cout << -1 << '\n';
        }


    }
	return 0;
}