//sw expert 10912 외로운 문자
#include <iostream>
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
        //문자열 오름차순 정렬
        sort(s.begin(), s.end());
        
        vector<char> v;
        for(int i=0; i<s.size(); i++){
            if(v.size()==0){ v.push_back(s[i]); }
            else if(v.back()==s[i]){ v.pop_back(); }
            else{ v.push_back(s[i]); }
        }
        
        cout << '#' << t << ' ';
        if(v.size()==0){ cout << "Good\n"; }
        else{
            for(int i=0; i<v.size(); i++){
                cout << v[i];
            }
            cout << '\n';
        }
    }

    return 0;
}
