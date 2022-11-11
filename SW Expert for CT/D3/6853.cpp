//sw expert 6853 직사각형과 점

#include <iostream>
#include <string>

using namespace std;

int main(){
	int T, x1, x2, y1, y2, N, a, b;
	
	cin >> T; 
	
	for(int t=1; t<=T; t++){
		int in_cnt=0, out_cnt=0, line_cnt=0;
	
		cout << '#' << t;
		cin >> x1 >> y1 >> x2 >> y2 >> N;
		while(N--){
			//점의 위치 입력
			cin >> a >> b;
			//점이 직사각형 안에 있는 경우
			if(x1<a && y1<b && a<x2 && b<y2){
				in_cnt++;
			}
			//점이 직사각형의 밖에 있는 경우
			else if(a<x1 || b<y1 || x2<a || y2<b){
				out_cnt++;
			}
			//점이 직사각형 한 변 위에 있는 경우
			else{
				line_cnt++;
			}
		}
		cout << ' ' << in_cnt << ' ' << line_cnt << ' ' << out_cnt << '\n';
	}
	
	return 0;
}