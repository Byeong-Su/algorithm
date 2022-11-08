#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    //탐색 위치를 저장할 인덱스
    int idx=0;
    
    //number.size()-k길이 만큼의 문자열이 출력결과 이므로 number.size()-k만큼 반복
    for(int i=0; i<number.size()-k; i++){
        //최대값 초기화
        char max = 0;
        //idx~k+i 범위에서 하나라도 남겨야 최종적으로 number.size()-k 길이의 문자열을 return할 수 있음
        for(int j=idx; j<=k+i; j++){
            if(max<number[j]){
                //최대값 갱신
                max=number[j];
                //최대값의 다음 위치로 인덱스 갱신(다음위치부터 탐색하기 위함)
                idx=j+1;
            }
        }
        answer+=max;
    }
    
    return answer;
}