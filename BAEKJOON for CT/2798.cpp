#include <iostream>

using namespace std;

int main()
{
int n,m,sum=0,temp;
cin >> n >> m;
int arr[n];
for(int i = 0; i<n; i++){ cin >> arr[i]; }
for(int i=0; i<n; i++){
	temp=0;
	temp+=arr[i];	
	for(int j=i+1; j<n; j++){
		temp=arr[i];
		temp+=arr[j];
		for(int k=j+1; k<n; k++){
			temp=arr[i]+arr[j];
			temp+=arr[k];
			if(sum<=temp && temp<=m){ sum=temp; }
		}
	}
}
cout << sum;
return 0;
}
