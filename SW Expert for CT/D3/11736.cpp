//sw expert 11736 평범한 숫자
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    
    int T, N, num, ans_cnt;
    cin >> T;
    
    for(int t=1; t<=T; t++){
        ans_cnt=0;
        cin >> N;
        vector<int> v;
        for(int i=0; i<N; i++){
            cin >> num;
            v.push_back(num);
        }
        
        for(int i=1; i<v.size()-1; i++){
            if( (v[i-1]>v[i]||v[i]<v[i+1]) && (v[i-1]<v[i]||v[i]>v[i+1]) ){
                ans_cnt++;
            }
        }
        
        cout << '#' << t << ' ' << ans_cnt << '\n';
    }

    return 0;
}
