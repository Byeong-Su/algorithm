//sw expert 1229 암호문 2

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
			
			auto itr = lt.begin();
			for(int j=0; j<x; j++){
				itr++;
			}
			
			if(c=='I'){
				list<int> tmp;
				
				for(int j=0; j<y; j++){
					cin >> num;
					tmp.push_back(num);
				}
				
				lt.splice(itr,tmp);
				//lt2.splice(iter2, lt1)
				//- lt2에서 iter2이 가리키는 곳에 lt1의 모든 원소를 잘라 붙임
				//- lt2.splice(iter2, lt1, iter1); lt2의 iter2가 가리키는 곳에 lt1의 iter1이 가리키는 원소를 잘라 붙임
				//- lt2.splice(iter2, lt1, iter1_1, iter1_2); lt2의 iter2가 가리키는 곳에 lt1의 [iter1_1 , iter1_2) 까지의 원소를 잘라 붙임
			} else {
				for(int j=0; j<y; j++){
					itr = lt.erase(itr);
					//lt.erase(iter)
					//- iterator가 가리키는 원소를 삭제
				}
			}
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