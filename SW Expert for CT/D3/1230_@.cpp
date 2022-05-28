//1230. [S/W 문제해결 기본] 8일차 - 암호문3
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14zIwqAHwCFAYD
//list 문제
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	for (int t = 1; t <= 10; t++){
		int n, x, y, s;
		char c;
		list<int> lt;
		//auto itr = lt.begin();
		list<int>::iterator iter = lt.begin();

		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> x;
			lt.push_back(x);
		}

		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> c;
			if (c == 'I'){
				list<int> tmp;
				iter = lt.begin();

				cin >> x >> y;
				//형이 달라 iter += x;안됨
				for (int j = 0; j < x; j++) { iter++; }
				for (int j = 0; j < y; j++){
					cin >> s;
					tmp.push_back(s);
				}
				lt.splice(iter, tmp);
                /*이거 대신 써도 됨(인덱스가 내가 생각한거랑 다른듯)
                for (int j = 0; j < x; j++) { iter++; }
				for (int j = 0; j < y; j++) {
					cin >> s;
					lt.insert(iter, s);
				}
                */
			}
			else if (c == 'D'){
				iter = lt.begin();
				cin >> x >> y;
				for (int j = 0; j < x; j++) { iter++; }
				for (int j = 0; j < y; j++) { iter = lt.erase(iter); }
			}
			else if (c == 'A'){
				cin >> y;
				for (int j = 0; j < y; j++){
					cin >> s;
					lt.push_back(s);
				}
			}
		}

		iter = lt.begin();
		cout << "#" << t << ' ';
		//list 출력 방법 1
		/*for (iter = lt.begin(); iter != lt.end(); iter++) {
			cout << *iter << " ";
		}*/
		//list 출력 방법 2
		for (int i = 0; i < 10; i++, iter++) {
			cout << *iter << " ";
		}
		cout << endl;
	}
	return 0;
}