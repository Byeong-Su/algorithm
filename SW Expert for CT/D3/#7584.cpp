//자가 복제 문자열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWpMsQfaCPMDFAQi
#include <iostream>

using namespace std;

//모든 문자 반전 (1101 -> 0010)
string func_f(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){ s[i]='1'; }
        else{ s[i]='0'; }
    }
    return s;
}

//문자열 좌우 반전 (1101 -> 1011)
string func_g(string s){
    string res;
    
    for(int i=0; i<s.size(); i++){
        res+=s[s.size()-1 - i];
    }
    return res;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,K;      //테스트케이스 수, 몇번째 문자인지
    string s="0";
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> K;
        while(s.size()<K){
            s=(s + '0' + (func_g(func_f(s))) );
        }
        cout << '#' << t << ' ' << s[K-1] << '\n';
    }

    return 0;
}

//문자열 좌우 반전 (1101 -> 1011)
/*
string func_g(string s){
    char tmp_c;
    for(int i=0; i<s.size(); i++){
        tmp_c=s[i];
        s[i]=s[s.size()-1 - i];
        s[s.size()-1 - i]=tmp_c;
    }
    tmp_c=s[0];
    s[0]=s[1];
    s[1]=tmp_c;
    return s;
}*/