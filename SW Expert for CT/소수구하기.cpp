//소수구하기
#include <iostream>
#include <cmath>

using namespace std;

int primeNum[1001];

void primeNumberSieve(int number){

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
        /*단계별 확인
        cout << '[';
        for(int i=0; i<=number; i++){
            cout << primeNum[i] << ' ';
        }
        cout << ']' << '\n';
        */
    }
    //3. 소수 출력
    for(int i=2; i<=number; i++){
        if(primeNum[i]!=0){ cout << primeNum[i]; }
    }
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    primeNumberSieve(N);

	
	return 0;
}