
#include <string>
#include <vector>
#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    int first=0, second=0;
    bool end_check=false;
    char first_char = NULL;
    for(int i=0; i<s.size(); i++){
        if(first_char==NULL){ first_char=s[i]; first++; }
        else if(first_char!=s[i]){ second++; }
        else{ first++; }
            
            
        if(first!=0 && (first==second)){
            answer++; first_char=NULL; first=0; second=0;
            if(i==s.size()-1){ end_check=true; }
        }
        if(i==s.size()-1 && !end_check){ answer++; }
    }
    return answer;
}