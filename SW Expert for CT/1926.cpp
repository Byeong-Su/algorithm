//간단한 369게임
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PTeo6AHUDFAUq&categoryId=AV5PTeo6AHUDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
//아래 방법 말고 {3,6,9}의 배열 만들어서 각 자리수 마다 3,6,9인지 검사하는게 더 빠를듯
#include <iostream>

using namespace std;

void game(int num){
    int digit_1, digit_10, digit_100;
    //1의 자리수 일때
    if(num<10){
        //369일때
        if(num%3==0){
            cout << '-';
        } else {
            cout << num;
        }
    }
    //10의 자리수 일때
    else if(num<100){
        digit_1=(num%10);
        //0인경우 방지
        if(digit_1==0){ digit_1=1; }
        digit_10=(num/10);
        //0인경우 방지
        if(digit_10==0){ digit_10=10; }
        //두 자리수 다 369
        if( (digit_10%3==0) && (digit_1%3==0) ){
            cout << "--";
        }
        //한 자리수만 369
        else if( (digit_10%3==0) || (digit_1%3==0) ){
            cout << '-';
        }else{
            cout << num;
        }
    }
    //100의 자리수 일때
    else if(num<1000){
        digit_1=(num%10);
        digit_10=((num%100)/10);
        digit_100=((num%1000)/100);//0인경우 방지
        if(digit_1==0){ digit_1=1; }
        //0인경우 방지
        if(digit_10==0){ digit_10=10; }
        //0인경우 방지
        if(digit_100==0){ digit_100=100; }
        //세 자리수 다 369
        if( (digit_100%3==0) && (digit_10%3==0) && (digit_1%3==0) ){
            cout << "---";
        }
        //두 자리수만 369
        else if( ((digit_100%3==0) && (digit_10%3==0)) || ((digit_10%3==0) && (digit_1%3==0)) ||((digit_100%3==0) && (digit_1%3==0)) ){
            cout << "--";
        }
        //한 자리수만 369
        else if( (digit_100%3==0) || (digit_10%3==0) || (digit_1%3==0) ){
            cout << '-';
        }
        else{
            cout << num;
        }
    }
    //1000 일때
    else{

    }
    cout << ' ';
}

int main(){
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        game(i);
    }

    return 0;
}