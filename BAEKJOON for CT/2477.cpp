//6각형이므로 최대값이 나온 index의 +3,+4index의 값이 빼줄 직사각형임
#include <iostream>

using namespace std;

int main()
{
    int a[6],b[6],k=0,i,n=0,min=0,max=0;
    cin >> n;
    for(i=0;i<6;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<6;i++)
    {
        if(max<b[i]*b[(i+1)%6])
        {
            max=b[i]*b[(i+1)%6];
            k=i;
        }
    }
    min=b[(k+3)%6]*b[(k+4)%6];
    max=max-min;
    cout << max*n;
}