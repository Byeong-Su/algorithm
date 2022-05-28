//7675. 통역사 성경이
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWqPvqoqSLQDFAT_&categoryId=AWqPvqoqSLQDFAT_&categoryType=CODE&problemTitle=7675&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//string s;
//cin >> s;
//위 형식 오류뜨면
//#include <string> 넣어주면 됨
//
//a:97 z:122 A:65 Z:90

//c++은 공백포함 문자열 받지않고 공백띄우면 문자열 하나씩 저장되므로 ' '기준으로 split할 필요없음
//=>위 때문에 do while 문 사용

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int t=1; t<=T; t++){
        int n;
        cin >> n;

        cout<<'#'<<t<<' ';
        for(int i=0; i<n; i++){
            int ans =0;
            string s;

            do{
                cin>>s;

                if(s[0]>='A'&&s[0]<='Z'){
                    bool flag = false;
                    //구두점으로 끝나는 경우
                    if(s[s.size()-1]=='!'||s[s.size()-1]=='?'||s[s.size()-1]=='.'){
                        //첫문자 대문자고 첫문자+구두점 2문자인 경우 (O인 경우)
                        if(s.size()==2)ans++;
                        //첫문자 구두점 사이문자 소문자만 있으면 continue(O인 경우)
                        //아니면 flag true로 만들고 break; (X인 경우)
                        else{
                            for(int i=1; i<s.size()-1; i++){
                                if(s[i]>='a'&&s[i]<='z')continue;
                                flag = true;
                                break;
                            }
                        }
                    }
                    //구두점으로 끝나지 않는 경우
                    else{
                        for(int i=1; i<s.size(); i++){
                            //첫문자 구두점 사이문자 소문자만 있으면 continue(O인 경우)
                            //아니면 flag true로 만들고 break; (X인 경우)
                            if(s[i]>='a'&&s[i]<='z')continue;
                            flag = true;
                            break;
                        }
                    }
                    //위 결과에 따라 이름이면 카운트 증가
                    if(!flag)ans++;
                }
            //구두점 만날때까지 반복
            }while(s[s.size()-1]!='!'&&s[s.size()-1]!='?'&&s[s.size()-1]!='.');
            cout<<ans<<' ';
        }
        cout<<'\n';
          
    }
    return 0;
}