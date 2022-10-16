#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) { 
    for(int i=0; i<sizes.size(); i++){
        if(sizes[i][0]<sizes[i][1]){ swap(sizes[i][0],sizes[i][1]); }
        if(sizes[0][0]<sizes[i][0]){ swap(sizes[0][0],sizes[i][0]); }
        if(sizes[0][1]<sizes[i][1]){ swap(sizes[0][1],sizes[i][1]); }
    }
    
    return sizes[0][0] * sizes[0][1];
}