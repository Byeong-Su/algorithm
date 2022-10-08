#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

//pair<string,int>의 int 값 기준 내림차순 정렬용
bool comp(pair<string, int> &a, pair<string,int> &b){
    if(a.second==b.second){ return a.first<b.first; }
    return a.second > b.second;
}

//pair<string,pair<int,int>에서 pair<int,int>의 첫번째 int 값 기준 내림차순 정렬용
bool comp_2(pair<string,pair<int,int>> &a, pair<string,pair<int,int>> &b){
    if(a.second.first==b.second.first){ return a.second.first<b.second.first; }
    return a.second.first > b.second.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;    
    
    //장르별 재생횟수 합산용
    unordered_map<string,int> sort_um;
    //전체 곡의 재생횟수로 내림차순 정렬하기 위한 벡터
    vector<pair<string,pair<int,int>>> v;
    
    //unordered_map과 vector에 값 삽입
    for(int i=0; i<genres.size(); i++){
        v.push_back(make_pair(genres[i],make_pair(plays[i],i)));
        if(sort_um.find(genres[i]) != sort_um.end()){
            sort_um[genres[i]]+=plays[i];
        }else{
            sort_um.insert(make_pair(genres[i],plays[i]));
        }
    }
    
    //장르별 재생횟수로 내림차순 정렬하기 위한 벡터
    vector<pair<string,int>> sort_v(sort_um.begin(), sort_um.end());
    //장르별 정렬
    sort(sort_v.begin(), sort_v.end(), comp);
    //전체곡의 재생횟수별 정렬
    sort(v.begin(), v.end(), comp_2);
    
    //완전탐색으로 장르별 재생횟수 높은 곡 최대 2개 출력되도록함
    for(int i=0; i<sort_v.size(); i++){
        int cnt=2;
        for(int j=0; j<v.size(); j++){
            if(cnt==0){ break; }
            if(sort_v[i].first.compare(v[j].first)==0){
                answer.push_back(v[j].second.second);
                cnt--;
            }
        }
    }
    
    return answer;
}