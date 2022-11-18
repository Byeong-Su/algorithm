//sw expert 10804 문자열의 거울상
#include <iostream>

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
        
        cout << '#' << t << ' ';
        for(int i=s.size()-1; i>=0; i--){
            switch(s[i]){
                case 'b':
                    cout << 'd';
                    break;
                case 'd':
                    cout << 'b';
                    break;
                case 'p':
                    cout << 'q';
                    break;
                case 'q':
                    cout << 'p';
                    break;
            }
        }
        cout <<'\n';
    }

    return 0;
}
