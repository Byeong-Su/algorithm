#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    int reminder[42]={0};
    
    for(int i=0; i<10; i++){
        cin >> n;
        reminder[n%42]++;
    }
    
    for(int i=0; i<42; i++){
        if(reminder[i]!=0){ cnt++; }
    }
    
    cout << cnt;
    
    return 0;
}