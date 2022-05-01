//백준 8958
#include <iostream>

using namespace std;

int main()
{
    int T,cnt,value;
    cin >> T;
    string str;
    
    for(int i=0; i<T; i++){
        cin >> str;
        
        cnt=0, value=0;
        for(int j=0; j<str.length(); j++){
            //O인경우 (연속되면 cnt값 증가)
            if(str[j]=='O'){ cnt++; value+=cnt; }
            //X인 경우
            else{ cnt=0; }
        }
        //값 출력
        cout << value << '\n';
    }
    
    return 0;
}