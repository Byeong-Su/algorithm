//2805. 농작물 수확하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV7GLXqKAWYDFAXB
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string str;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N,sum=0;		//농장의 크기,합산
        cin >> N;
        int arr[N][N];
        for(int i=0; i<N; i++){
            cin >> str;
            for(int j=0; j<N; j++){
             	arr[i][j]=str[j]-'0';   
            }
        }
        //합산
        int left=N/2, right=N/2;
        for(int i=0; i<N; i++){
            for(int j=left; j<=right; j++){
                    sum+=arr[i][j];
             }
            //수확 칸 증가하는 부분
            if(i<N/2){  left--; right++; }
            //수확 칸 감소하는 부분
            else{ left++; right--; }
        }
        
        cout << '#' << test_case << ' ' << sum << '\n';
	}
	return 0;
}