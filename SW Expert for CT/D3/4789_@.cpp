//4789. 성공적인 공연 기획
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWS2dSgKA8MDFAVT&categoryId=AWS2dSgKA8MDFAVT&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=8
//s[0]~s[i]의 합이 해당 인덱스 이상인지 검사
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T,sum,ans,num;
    cin >> T;
    
    for(int t = 1; t <= T; t++){
        string s;
        sum = 0, ans = 0;
        cin >> s;
        
        for(int i = 0; i < s.size(); i++){
            num = s[i] - '0';
            
            if(num > 0){
                if(sum >= i)
                    sum += num;
                else{
                    ans += (i - sum);
                    sum = i + num;
                }
            }
        }
        cout << "#" << t << " " << ans << endl;
    }
    return 0;
}