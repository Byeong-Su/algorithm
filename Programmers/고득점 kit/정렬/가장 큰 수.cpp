#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
//합한 문자 비교해 큰순으로 정렬
// string1.compare(string2)가 아닌 <, >는 사전순으로 문자열을 정렬한다.
bool compare(string a, string b) {
    return a + b > b + a;
}
 
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    //int to string 한 후 벡터 v에 저장
    for(int i=0; i<numbers.size(); i++){
        v.push_back(to_string(numbers[i]));
    }
    //오름차순 정렬
    sort(v.begin(), v.end(), compare);
    //정렬된 문자열 합치기
    for(int i=0; i<v.size(); i++){
        answer += v[i];
    }
    //{0,0} 등 0만 있는경우 0이 아닌 00으로 이상하게 0을 출력하므로 예외처리
    if(answer[0]=='0'){ return "0"; }
    return answer;
}