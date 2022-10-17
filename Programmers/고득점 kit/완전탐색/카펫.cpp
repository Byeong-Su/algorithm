#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int min_value=6250000;
    
    for(int i=3; i<=2499; i++){
        for(int j=3; j<=i; j++){
            if( ((i-2)*(j-2)==yellow)&&((2*i+2*j-4)==brown) ){
                if( i-j<min_value ){
                    min_value=i-j;
                    answer.clear();
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
    }
    return answer;
}