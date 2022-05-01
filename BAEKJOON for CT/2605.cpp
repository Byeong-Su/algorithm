#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,num;
    
    cin >> n;
    
    vector<int> v;
    
    
    //크기 n의 공간일때 삽입되는 자리는 (n-i-1)
    for(int i=1; i<=n; i++){
        cin >> num;
        v.insert(v.begin()+(i-num-1),i);
    }
    
    for(int i=0; i<n; i++){
        cout << v[i] << ' ';
    }

    return 0;
}
