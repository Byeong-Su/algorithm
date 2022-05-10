//교환학생
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXxNn6GaPW4DFASZ
//3시간 넘게 걸려서 품
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    int n, start;      //들을 수업 일 수, 수업 시작 일
    int sum,res,min;    //1주일 수업 시간 합, 결과, 최소 일 수
    int arr[7], week[7];

    cin >> T;
    for(int t=1; t<=T; t++){
        //입력
        cin >> n;
        sum=0, min=1000001;
        for(int i=0; i<7; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        
        for(int j=0; j<7; j++){
            res=0;
            
            //수업 시작일부터 날짜 시작되게 배열 재정렬
            for(int i=0; i<7; i++){
                week[i]=arr[(j+i)%7];
            }
    
            //일주일 안에 끝나는 분량인 경우
            if(n<=sum){
                int tmp=0;
                for(int i=0; i<7; i++){
                    tmp+=week[i];
                    if(tmp==n){ res=i+1; break; }
                }
            }
            //일주일 이상 걸리는 경우
            else{
                if(sum==1 || (n%sum)==0){
                    //마지막주는 7일일지 3일일지 열어봐야 앎
                    res+=((n/sum)-1)*7;
                    //마지막주 계산
                    int tmp=0;
                    for(int i=0; i<7; i++){
                        tmp+=week[i];
                        if(tmp==sum){ res+=(i+1); break; }
                    }
                }
                else{
                    res+=((n/sum)*7);
                    int tmp=0;
                    for(int i=0; i<7; i++){
                        tmp+=week[i];
                        if((n%sum)==tmp){ res+=(i+1); break; }
                    }
                }
            }
            if(res<min){ min=res; }
        }        
           //출력
        cout << '#' << t << ' ' << min << '\n';
    }

    return 0;
}