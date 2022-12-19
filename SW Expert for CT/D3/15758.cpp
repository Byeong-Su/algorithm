//무한 문자열
#include<iostream>

using namespace std;

//유클리드 호제법으로 최대공약수 구하기
int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
	int T, len;
	cin>>T;
    string s1, s2;
	
	for(int t = 1; t <= T; t++){
        //문자열 입력
		cin >> s1 >> s2;
        
        //최대공약수로 최소공배수 구하기
        len=(s1.size()*s2.size())/gcd(s1.size(), s2.size());
        
        cout << "#" << t << ' ';
        //s1문자열을 반복해 붙여 최소공배수 길이만큼의 문자열로 만들어줌
        string add_s1="";
        for(int i=1; i<=(len/s1.size()); i++){
            add_s1+=s1;
        }
        //s2문자열을 반복해 붙여 최소공배수 길이만큼의 문자열로 만들어줌
        string add_s2="";
        for(int i=1; i<=(len/s2.size()); i++){
            add_s2+=s2;
        }
        //같은 길이로 만든 s1, s2 문자열이 같은지 비교
        if(add_s1.compare(add_s2)==0){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
	}
    
	return 0;
}