#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    int max = 0, max_location;
    
    bool isEnd = false;
    
    for(int i=0; i<priorities.size(); i++){
        if(priorities[i] > max){
            max = priorities[i];
            max_location = i;
        }
    }
    
    for(int i=max_location; i<priorities.size(); i++){
        if(priorities[i]>=priorities[location]){ answer++; }
            
        if(i==location){ isEnd=true; break; }
    }
    
    if( !isEnd ){
        for(int i=0; i<max_location; i++){
            if(priorities[i]>=priorities[location]){ answer++; }
            if(i==location){ break; }
        }
    }
    
    return answer;
}