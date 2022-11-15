//sw expert 11856 반반
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    
    int T;
    string s;
    
    cin >> T;
    
    for(int t=1; t<=T; t++){
        cin >> s;
        vector<char> v;
        for(int i=0; i<s.size(); i++){
            v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        
        cout << '#' << t << ' ';
        if( (v[0]==v[1]) && (v[1]!=v[2]) && (v[2]==v[3]) ){
            cout << "Yes\n";
        }
        else{ cout << "No\n"; }
    }

    return 0;
}
