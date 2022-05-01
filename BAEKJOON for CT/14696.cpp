#include <iostream>

using namespace std;

int n,a,b,tmp;
int arr_a[5], arr_b[5];

void reset(){
    for(int i=0; i<6; i++){
        arr_a[i]=0;
        arr_b[i]=0;
    }
}

char compare(){
    for(int i=4; i>0; i--){
        if(arr_a[i]>arr_b[i]){
            return 'A';
        }
        else if(arr_a[i]<arr_b[i]){
            return 'B';
        }
    }
    return 'D';
}

int main()
{
    cin >> n;
    
    for(int i=0; i<n; i++){
        reset();
        cin >> a;
        for(int j=0; j<a; j++){
            cin >> tmp;
            arr_a[tmp]++;
        }
        cin >> b;
        for(int j=0; j<b; j++){
            cin >> tmp;
            arr_b[tmp]++;
        }
        cout << compare() << '\n';
    }

    return 0;
}