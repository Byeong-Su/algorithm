//부분 수열의 합
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV7IzvG6EksDFAXB&categoryId=AV7IzvG6EksDFAXB&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
//방법1. 백트레킹
//방법2. 비트마스킹

//백트래킹
#include <iostream>
#include <vector>

using namespace std;

int N,K,cnt;
vector<int> v;

void func(int node, int sum){
    //원하는 합이랑 현재 합 같은 경우 카운트 증가하고 해당분기 종료
    if(sum==K){ cnt ++; return; }
    //끝까지 다 탐색한 경우 종료
    if(node==N){ return; }

    //현재 원소를 합에 추가하지 않는 경우
    func(node+1, sum);
    //현재 원소를 합에 추가하는 경우
    func(node+1, sum+v[node]);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,num;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> K;
        v.clear(); cnt=0;
        for(int i=0; i<N; i++){
            cin >> num;
            v.push_back(num);
        }

        func(0,0);
        
        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}

//비트마스킹
/*테스트케이스만 맞다고 나옴
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,K,cnt,sum;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> K;
        int arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }

        cnt=0;
        // (1<<4 는 16)이므로 아래 포문은 0001부터 1111까지 반복
        for(int i=1; i < 1<<N; i++){
            sum=0;
            for(int j=0; j<N; j++){
                //첫번째의 경우 i:0001과 j:0001, 0010, 0100, 1000을 &연산해 공통된 부분만 더함
                if( (i&(i<<j)) != 0 ){ sum+=arr[j]; }
            }
            if(sum==K){ cnt++; }
        }
        
        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}
*/