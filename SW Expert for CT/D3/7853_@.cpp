//오타
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWttUKkq5hQDFASy
//아래가 더 효율적인 코드임
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;          //테스트케이스 수    
    cin >> T;
    for(int t=1; t<=T; t++){
        string str;     //입력 문자열
        string arr[1001];
        bool isExist;
        long long cnt=1;

        cin >> str;
        
        for(int i=0; i<str.length(); i++){
            //단어의 첫자리인 경우
            if(i==0){
                arr[i]+=str[i];
                arr[i+1]+=str[i];
            }
            //단어의 끝자리인 경우
            else if(i==str.length()-1){
                //스펠링 중복되는지 확인
                isExist=false;
                for(int j=0; j<arr[i-1].length(); j++){
                    if(arr[i-1][j]==str[i]){ isExist=true; }
                }
                //중복 안되면 삽입
                if(!isExist){ arr[i-1]+=str[i]; }

                //스펠링 중복되는지 확인
                isExist=false;
                for(int j=0; j<arr[i].length(); j++){
                    if(arr[i][j]==str[i]){ isExist=true; }
                }
                //중복 안되면 삽입
                if(!isExist){ arr[i]+=str[i]; }
            }
            //사이자리의 단어인 경우
            else{
                //스펠링 중복되는지 확인
                isExist=false;
                for(int j=0; j<arr[i-1].length(); j++){
                    if(arr[i-1][j]==str[i]){ isExist=true; }
                }
                //중복 안되면 삽입
                if(!isExist){ arr[i-1]+=str[i]; }

                //스펠링 중복되는지 확인
                isExist=false;
                for(int j=0; j<arr[i].length(); j++){
                    if(arr[i][j]==str[i]){ isExist=true; }
                }
                //중복 안되면 삽입
                if(!isExist){ arr[i]+=str[i]; }

                //스펠링 중복되는지 확인
                isExist=false;
                for(int j=0; j<arr[i+1].length(); j++){
                    if(arr[i+1][j]==str[i]){ isExist=true; }
                }
                //중복 안되면 삽입
                if(!isExist){ arr[i+1]+=str[i]; }
            }           


        }
        //중복 제거한 배열 값 곱하기
        for(int i=0; i<str.length(); i++){
            cnt*=arr[i].size();
            cnt%=(long long)(1e9 + 7);
        }
        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}


//더 효율적인 코드
/*
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long sum = 1;
		string a;
		cin >> a;

		for (int i = 0; i < a.size(); i++) {
			if (i == 0) {
				if (a[i] != a[i + 1])
					sum *= 2;
			}
			else if (i == a.size() - 1) {
				if (a[i] != a[i - 1])
					sum *= 2;
			}
			else {
				if (a[i] == a[i - 1] && a[i] != a[i + 1])
					sum *= 2;
				else  if (a[i] != a[i - 1] && a[i] == a[i + 1])
					sum *= 2;
				else  if (a[i] != a[i - 1] && a[i] != a[i + 1] && a[i - 1] == a[i + 1])
					sum *= 2;
				else  if (a[i] != a[i - 1] && a[i] != a[i + 1] && a[i - 1] != a[i + 1])
					sum *= 3;
			}
			sum = sum % (1000000007);
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}
*/