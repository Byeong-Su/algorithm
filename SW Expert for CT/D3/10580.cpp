//sw expert 10580 전봇대
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    
    int T, N, s, e, ans;
    
    cin >> T;
    
    for(int t=1; t<=T; t++){
        ans=0;
        //전선 수 입력
        cin >> N;
        //전선 위치 저장용 벡터
        vector<pair<int,int>> v;
        //전선 위치 입력 및 저장
        for(int i=0; i<N; i++){
            cin >> s >> e;
            v.push_back(make_pair(s,e));
        }
        //전선 전체 완전 탐색
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                //j번째 전선이 i번째 전선 안쪽에 위치한 경우
                if(v[i].first<v[j].first && v[i].second>v[j].second){
                    ans++;
                }
                //i번째 전선이 j번재 전선 안쪽에 위치한 경우
                else if(v[i].first>v[j].first && v[i].second<v[j].second){
                    ans++;
                }
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }

    return 0;
}