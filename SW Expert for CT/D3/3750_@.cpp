//Digit sum
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWHPiSYKAD0DFAUn
//재귀함수는 void로 돌려줘야 한다.
#include <iostream>
#include <string>

using namespace std;

int res;

void recursion(string n){
    int sum=0;
    string n_;
    
    //원래 문자열의 각자리의 합 구하기
    for(int i=0; i<n.size(); i++){
        sum+=(n[i]-'0');
    }
    //합을 넘겨줄 문자열에 저장
    n_=to_string(sum);
    //계산 결과가 1자리 아니면 재귀호출
    if(n_.size()==1){
        res=sum;
    }else{
        recursion(n_);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n;

    int T;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> n;
        recursion(n);
        //출력
        cout << '#' << t << ' ' << res << '\n';
    }

    return 0;
}