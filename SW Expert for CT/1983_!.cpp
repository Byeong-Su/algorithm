//조교의 성적 매기기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PwGK6AcIDFAUq&categoryId=AV5PwGK6AcIDFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
//등급구간 찾는 조건문
//{"D0","C-","C+",...,"A0",A+}배열 설정 후
//rate 계산 값 십의자리만 구하여 배열에서 값 찾는게 더 깔끔할듯
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T,N,K;                  //테스트케이스,학생 수,학생 번호
    cin >> T;
    
    for(int t=1; t<=T; t++){
        vector<pair<int,int>> v;        //<총점, 학생번호>
        cin >> N >> K;
        for(int i=1; i<=N; i++){
            int mid, final, assignment;  //시험,과제 점수
            cin >> mid >> final >> assignment;
            v.push_back(make_pair( (mid*35)+(final*45)+(assignment*20),i ));
        }
        //오름차순 정렬
        sort(v.begin(), v.end());
        //낮은 점수부터 순서대로 등급 구간 나눠서 점수 매기기
        for (int j = 1; j <= N; j++) {
			if (v[j].second == K) {
			    //등급 구간 찾기
				int rate = (double)j / N * 100;

				if (rate < 10)
					cout << "#" << t << " " << "D0" << endl;
				else if (rate < 20)
					cout << "#" << t << " " << "C-" << endl;
				else if (rate < 30)
					cout << "#" << t << " " << "C0" << endl;
				else if (rate < 40)
					cout << "#" << t << " " << "C+" << endl;
				else if (rate < 50)
					cout << "#" << t << " " << "B-" << endl;
				else if (rate < 60)
					cout << "#" << t << " " << "B0" << endl;
				else if (rate < 70)
					cout << "#" << t << " " << "B+" << endl;
				else if (rate < 80)
					cout << "#" << t << " " << "A-" << endl;
				else if (rate < 90)
					cout << "#" << t << " " << "A0" << endl;
				else
					cout << "#" << t << " " << "A+" << endl;
				break;
			}
		}
    }
    return 0;
}