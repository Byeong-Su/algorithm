//맨 처음 나오는 LL(커플석)은 양쪽 다 점유 가능하지만
//이 후 나오는 LL(커플석)은 하나만 이용 가능함을 활용
#include <iostream>

using namespace std;

int main()
{
    bool check=false;
    int n,res=0;
    string s;
    
    cin >> n >> s;
    
    for(int i=0; i<n; i++){
        if(s[i]=='S'){ res+=1; }
        else if(s[i]=='L'){
            if(check==false){ check=true; res+=2; }
            else{ res+=1; }
            i++;
        }
    }
    
    cout << res;
    
    
    return 0;
}