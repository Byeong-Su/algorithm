//백준 2999
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    string str;
    int N,R,C;
    vector<int> vec;        //약수 저장 벡터
    
    cin >> str;             //단어 입력
    N=str.length();         //단어 길이 저장
    
    //약수 찾기(중복제거x)
    for(int i=1; i<=sqrt(N); i++){
        if(N%i==0){
            vec.push_back(i);
            if( N%(N/i)==0 ){ vec.push_back(N/i); }
        }
    }
    //약수 오름차순으로 정렬
    sort(vec.begin(), vec.end());
    
    //R,C값 저장
    R=vec[vec.size()/2-1];
    C=vec[vec.size()/2];
    
    char arr[R][C];
    int cnt=0;
    
    //배열에 암호에 맞게 스펠링 하나씩 저장
    for(int i=0; i<C; i++){
        for(int j=0; j<R; j++){
            arr[j][i]=str[cnt];
            cnt++;
        }
    }
    
    //암호배열 출력
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout << arr[i][j];
        }
    }

    return 0;
}


//약수찾기 알고리즘
//1. 1~루트N까지 나눠지는 수 찾는다.(루트N인 이유는 정수N에 대해 루트N이 중앙점 이므로)
//2. 나머지연산 활용해 나눠지는 수 찾으면 약수벡터에 추가
//3. 2에서 찾은 나눠지는 수를 (N/나눠지는수)로 N을 다시 나눠 나머지 연산으로 약수인지 확인
//4. 3에서 찾은수 약수가 맞으면 약수벡터에 추가