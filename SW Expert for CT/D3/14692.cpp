//sw expert 14629 통나무 자르기

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
	int N,T;
	
	cin >> T;
	
	for(int t=1; t<=T; t++){
		cin >> N;
		
		cout << '#' << t << ' ';
		
		if(N%2==0){ cout << "Alice\n"; }
		else { cout << "Bob\n"; }
	}
	
	return 0;
}