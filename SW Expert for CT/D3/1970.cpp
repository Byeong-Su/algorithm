//SW expert 1970. 쉬운 거스름돈

#include <iostream>
#include <string>

using namespace std;

int main(){
	int N,t;
	
	int money[8]={50000, 10000, 5000, 1000, 500, 100, 50, 10};
	
	cin >> t;
	
	for(int i=1; i<=t; i++){
		cin >> N;
		int change[8]={0};
		
		for(int j=0; j<8; j++){
			while(N>=money[j]){
				N-=money[j];
				change[j]++;
			}
		}
		
		cout << '#' << i << '\n';
		for(int j=0; j<8; j++){
			cout << change[j] << ' ';
		}
		cout << '\n';
	}
}