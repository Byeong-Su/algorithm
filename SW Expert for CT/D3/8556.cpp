//sw expert 8556 북북서
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T, pos, dir1, dir2, idx, cnt;
    string s;
    cin>> T;
    
    for(int t=1; t<=T; t++){
        //문자열 입력
        cin >> s;
        //출력할 분자값, 출력할 분모값, 처리한 문자 개수 초기화
        dir1=0, dir2=0, idx=0;
        pos = s.size()-1;
        
        //분모값을 가장 큰 분모값으로 통일하기 위해 west와 north 개수 카운트
        cnt=0;
        for(int i=0; i<s.size(); ){
            cnt++;
            if(s[i]=='w'){ i+=4; }
            else{ i+=5; }
        }
        //분모값을 2의 카운트된 개수-1 제곱 값으로
        dir2=pow(2,cnt-1);
        
        //입력한 문자열 역순으로 탐색하면서 값 계산
        while(pos>0){
            //문자가 west인 경우
            if(s[pos]=='t'){ 
                //첫 입력인 경우
                if(idx==0){
                    dir1+=(90*dir2);
                }
                //+90/2^n
                //분모값을 2의 카운트된 개수-1로 통일했으므로 분자값도 그에 맞춰줌
                else{
                    dir1+=(90*(dir2/pow(2,idx)));
                }
                pos-=4;
            }
            //문자가 north인 경우
            else{
                //첫 입력인 경우
                if(idx==0){
                    dir1+=0;
                }
                //-90/2^n
                //분모값을 2의 카운트된 개수-1로 통일했으므로 분자값도 그에 맞춰줌
                else{
                    dir1-=(90*(dir2/pow(2,idx)));
                }
                pos-=5;
            }
            //처리한 문자 개수 +1
            idx++;
        }
        
        cout << '#' << t << ' ';
        //기약분수 만들기
        while( (dir2>1) && (dir1%2==0) ){
            dir1/=2;
            dir2/=2;
        }
        if(dir2==1){ cout << dir1 << '\n'; }
        else{ cout << dir1 << '/' << dir2 << '\n'; }
    }

    return 0;
}
