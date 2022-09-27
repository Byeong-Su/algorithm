#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    vector<string> category;
    vector<int> category_sum;
    
    //clothes 벡터의 종류에 해당하는 값만 category벡터에 저장
    for(int i=0; i<clothes.size(); i++){
        category.push_back(clothes[i][1]);
    }
    
    //같은 종류끼리 모여있게 category 정렬
    sort(category.begin(), category.end());
    
    int begin=0, end=0, pos=0;
    string str = category[0];
    //종류별로 몇개씩 있는지 확인해 category_sum벡터에 추가
    while(pos<category.size()){
        //같은 문자열 아니면 category_sum에 현재 종류의 개수 추가하고 다음 카테고리로 넘어감
        if(str.compare(category[pos])!=0){
            end=pos-1;
            category_sum.push_back(end-begin+1);
            str=category[pos];
            begin=pos;
        }
        //마지막 인덱스 경우 처리
        if(pos==category.size()-1){
            end=pos;
            category_sum.push_back(end-begin+1);
        }
        pos++;
    }
    
    //종류별 선택가능한 경우의 수인 (category_sum + 1)을 곱해줌
    //아무것도 입지 않는 경우도 있기 때문에 +1
    for(int i=0; i<category_sum.size(); i++){
        answer*=(category_sum[i]+1);
    }
    
    //아무것도 안입는 경우 빼줌
    return answer-1;
}