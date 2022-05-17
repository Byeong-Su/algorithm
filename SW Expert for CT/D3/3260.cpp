//3260. 두 수의 덧셈
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWBC1lOad9IDFAWr
//(첫번째 덧셈 부분에서 큰 문자열의 끝 인덱스터 더해주지 않음)
//A,B인덱스 하나씩 줘서 --한다음 작은쪽이 -1만나면 루트문 탈출하고 긴쪽만 계속 더해주는 방법이 나을듯
//스택 써도 됨
#include <iostream>
#include <deque>

using namespace std;

int main(){
	int T;		//테스트케이스 수
	string A,B;
    int idxA, idxB, tmp;    //문자열a인덱스, 문자열b인덱스, 자리별 올림수 위한 임시 숫자
    int numA, numB;
	
	cin >> T;
	for(int t=1; t<=T; t++){
		deque<int> sumDQ;
		
		cin >> A >> B;

        tmp=0;
        //문자열 끝부터 더해주기 위해 인덱스를 끝으로 지정
        idxA=A.size()-1, idxB=B.size()-1;

        while(idxA>=0 && idxB>=0){
            //char에서 int로 변환
            numA=A[idxA]-'0', numB=B[idxB]-'0';
            //합산
            if( tmp+numA+numB>=10 ){ sumDQ.push_front( (tmp+numA+numB)%10 ); tmp=1; }
            else{  sumDQ.push_front(tmp+numA+numB); tmp=0; }
            idxA--; idxB--;
        }
        //A,B 숫자 길이 같은 경우
        if(idxA==idxB){ if(tmp==1){ sumDQ.push_front(1); } }
        //A 숫자 길이가 큰 경우
        else if(idxA>-1){
            //A 나머지 길이 계산
            while(idxA>-1){
                //char에서 int로 변환
                numA=A[idxA]-'0';
                //합산
                if( tmp+numA>=10 ){ sumDQ.push_front( (tmp+numA)%10 ); tmp=1; }
                else{  sumDQ.push_front(tmp+numA); tmp=0; }
                idxA--;
            }
            //젤 높은자리 올림수 생긴 경우
            if(tmp==1){ sumDQ.push_front(1); }
        }
        //B 숫자 길이가 큰 경우
        else{
            //B 나머지 길이 계산
            while(idxB>-1){
                //char에서 int로 변환
                numB=B[idxB]-'0';
                //합산
                if( tmp+numB>=10 ){ sumDQ.push_front( (tmp+numB)%10 ); tmp=1; }
                else{  sumDQ.push_front(tmp+numB); tmp=0; }
                idxB--;
            }
            //젤 높은자리 올림수 생긴 경우
            if(tmp==1){ sumDQ.push_front(1); }
        }
		
        cout << '#' << t << ' ';
        while(sumDQ.size()>0){
            cout << sumDQ.front();
            sumDQ.pop_front();
        }
        cout << '\n';
	}
	
	return 0;
}