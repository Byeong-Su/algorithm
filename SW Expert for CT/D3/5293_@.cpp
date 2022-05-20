//이진 문자열 복원
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWUiwoe6o00DFAVT&categoryId=AWUiwoe6o00DFAVT&categoryType=CODE&problemTitle=5293&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
//백트레킹
//문자열  NULL검사를 기존 s=""에서 !s.empty()로 바꾸고 문자열 초기화를 s=""에서 s.clear()로 바꾸니까 됨
#include <iostream>

using namespace std;

string s;
int sum;

void func(string bits, int a, int b, int c, int d){
    //종료조건 되었는데 출력 문자열인 s에 아무것도 저장안되었으면 비정상 종료
    if(!s.empty()){ return; }
    //"01"이 3개고 "10"이 하나인 경우 "01100110"이런식으로 만들어도 결국 10이 2개 필요함
    //따라서 절대값으로 2이상 차이나면 비정상 종료
    if( abs(b-c)>1 ){ return; }
    //-1이 나오면 없는걸 가져와 쓴것이므로 비정상 종료
    if( a<0 || b<0 || c<0 || d<0 ){ return; }
    //다 알맞게 하나씩 썼다면 정상 종료
    if( a==0 && b==0 && c==0 && d==0 ){
        s=bits;
        return;
    }
    if(bits[bits.length()-1]=='0'){
        func(bits+"0", a-1, b, c, d);
        func(bits+"1", a, b-1, c, d);
        return;
    }
    func(bits+"0", a, b, c-1, d);
    func(bits+"1", a, b, c, d-1);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,A,B,C,D;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        //입력 및 초기화
        cin >> A >> B >> C >> D;
        sum=A+B+C+D;
        s.clear();
        func("0",A,B,C,D);
        func("1",A,B,C,D);
        
        cout << '#' << t << ' ';
        if(s.empty()){ cout << "impossible"; }
        else{ cout << s; }
        cout << '\n';
    }

    return 0;
}
/*
출력예시
인풋
1
2 2 2 1
아웃풋
0 2221
00 1221
000 0221
0000 -1221
0001 0121
00010 0111
000100 -1111
000101 0011
0001010 0001
00010100 -1001
00010101 0-101
0001011 0010
00010110 0000
00010111 001-1
00011 0120
001 1121
01 2121
1 2221
#1 00010110
*/