//sw expert 1228 암호문 1

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
	
	for(int t=1; t<=10; t++){
		int N, num, x, y;
		char c;
		list<int> lt;
		
		cin >> N;
		for(int i=0; i<N; i++){
			cin >> num;
			lt.push_back(num);
		}
		
		cin >> N;
		for(int i=0; i<N; i++){
			cin >> c >> x >> y;
	
			list<int> tmp;
			auto itr = lt.begin();
			for(int j=0; j<x; j++){
				itr++;
			}
			for(int j=0; j<y; j++){
				cin >> num;
				tmp.push_back(num);
			}
			lt.splice(itr,tmp);
		}
		cout << '#' << t << ' ';
		auto itr = lt.begin();
		for(int i=0; i<10; i++){
			cout << *itr << ' ';
			itr++;
		}
		cout << '\n';
	}

	return 0;
}