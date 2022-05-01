#include <iostream>
#include <deque>

using namespace std;

int main()
{
    string s;
    int mode=0; //1=정방향입력, 2=출력 3, 역방향입력
    deque<char> dq;
    
    getline(cin, s);
    
    s+='\n';
    
    for(int i=0; i<s.length(); i++){
        if(s[i]=='<'){
            dq.push_back(s[i]);
            while(s[i]!='>'){
                i++;
                dq.push_back(s[i]);
            }
            while(!dq.empty()){
                cout << dq.front();
                dq.pop_front();
            }
        }else if(s[i]==' ' || s[i]=='\n'){
            while(!dq.empty()){
                cout << dq.front();
                dq.pop_front();
            }
            cout << ' ';
        }else{
            dq.push_front(s[i]);
        }
    }

    return 0;
}

//getline
//
//<iostream>헤더의 getline
//n-1개의 문자를 읽어 str에 저장하고, 마지막 문자는 자동으로 NULL로
//cin.getline(변수 주소, 최대 입력 수, 제한자); 제한자 별도 지정 않으면 '\n'로 인식
//Ex) cin.getline(char *s, streamsize n, char dlim);
//
//<string>헤더의 getline
//지정한 구분자를 만날 때 까지 문자열을 입력받아 string에 저장
//getline(입력스트림, string객체, 구분자)
//Ex) getline(cin, str);
//주의! 이전에 입력을 한 적있으면 입력버퍼에 '\n'가 남아 getline(cin, str)해도 아무것도 안남음
//해결책 => cin.ignore()로 버퍼 비워주면 됨