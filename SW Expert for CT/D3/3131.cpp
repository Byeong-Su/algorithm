//100만 이하의 모든 소수
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV_6mRsasV8DFAWS
#include <iostream>
#include <cmath>

using namespace std;

int primeNum[1000001];

int main(int argc, char** argv)
{
    int number=1000000;
    
    //1. primeNum배열 초기화
    for(int i=2; i<=number; i++){
        primeNum[i]=i;
    }
    //2. 2부터 시작해 특정 수의 배수는 모두 삭제
    for(int i=2; i<=sqrt(number); i++){
        //primeNum[i] 0이면 이미 삭제된 수이므로 continue
        if(primeNum[i]==0){ continue; }
        //i*k (k<i) 까지의 수는 이미 검사했으므로 j는 i*i 부터 검사
        for(int j = i * i; j <= number; j += i){
            primeNum[j]=0;
        }
    }
    //3. 소수 출력
    for(int i=2; i<=number; i++){
        if(primeNum[i]!=0){ cout << primeNum[i] << ' '; }
    }

	
	return 0;
}

//함수형 풀이
/*
#include <iostream>
#include <cmath>

#define MAX 1000000

using namespace std;

int main()
{

    int primeNum[MAX+1];

    //소수배열 초기화
    for(int i=2; i<=MAX; i++){ primeNum[i]=i; }

    //2 부터 시작해 특정 수의 배수는 모두 삭제
    for(int i=2; i<=sqrt(MAX); i++){
        //primeNum이 이미 0이면 삭제된 수이므로 continue
        if(primeNum[i]==0){ continue; }
        //i*k (k<i)까지의 수는 이미 처리했으므로 j는 i*i부터 처리
        for(int j=i*i; j<=MAX; j+=i){
            primeNum[j]=0;
        }
    }

    //출력
    for(int i=2; i<=MAX; i++){
        if(primeNum[i]!=0){ cout << primeNum[i] << ' '; }
    }
    
    return 0;
}*/