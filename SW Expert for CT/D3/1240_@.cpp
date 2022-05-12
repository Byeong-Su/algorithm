//[S/W 문제해결 응용] 1일차 - 단순 2진 암호코드
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV15FZuqAL4CFAYD
//----------int <-> char <-> string 형변환-----------
//#include <string> 필요

// 1)int에서 string으로 변경하기
//  int data=100; string st=to_string(data);
// 2)string 에서 int로 변경하기
//  string st = "100"; int data = stoi(st);
// 3)int를 char로 변경하기
//  int data = 0; char ch = '9'; data = ch - '0';     (숫자 0은 아스키코드 48부터 시작하므로 48에 해당하는 '0' 빼줘야함)
// 4) int에서 char로 변경하기
//  int data = 9; char ch = (char)(data + 48);      (숫자 아스키코드는 48부터 시작하므로 +48)

#include <iostream>
#include <string>

using namespace std;

string code[10]={"0001101","0011001","0010011","0111101","0100011","0110001","0101111","0111011","0110111","0001011"};

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,inputSum, idxEnd;      //테스트케이스 수, 입력값 줄별 합, 코드 끝 인덱스
    int N, M;
    string inputStr;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> M;

        int res=0;
        int arr[N][M];
        for(int i=0; i<N; i++){
            inputSum=0;
            cin >> inputStr;
            for(int j=0; j<M; j++){
                arr[i][j]=inputStr[j]-'0';
                inputSum+=arr[i][j];
            }
            //아무 코드값도 없는 배열이면 끝에 9삽입
            if(inputSum==0){ arr[i][M-1]=9; }
        }
        //코드 계산
        for(int i=0; i<N; i++){
            //모두 0만 입력된 열이면 패스
            if(arr[i][M-1]!=9){
                for(int j=M-1; j>=0; j--){
                    if(arr[i][j]==1){ idxEnd=j; break; }
                }
                string arr_code="";
                //암호코드 문자열 추출
                for(int j=idxEnd-55; j<=idxEnd; j++){
                arr_code+=(char)(arr[i][j]+48);
                };
                
                //암호문->숫자배열로 변경
                string cutStr;
                int decodeNum[8];
                for(int j=0; j<8; j++){
                    cutStr=arr_code.substr(j*7,7);
                    //cout << cutStr << ' ';
                    for(int k=0; k<10; k++){
                        if(cutStr==code[k]){ decodeNum[j]=k; }
                    }
                }
                
                //코드 검증
                if( ( (decodeNum[0]+decodeNum[2]+decodeNum[4]+decodeNum[6])*3 + decodeNum[1]+decodeNum[3]+decodeNum[5]+decodeNum[7] )%10==0 ){
                    res=decodeNum[0]+decodeNum[2]+decodeNum[4]+decodeNum[6] + decodeNum[1]+decodeNum[3]+decodeNum[5]+decodeNum[7];
                }
            }
            
        }
        //출력
        cout << '#' << t << ' ' << res << '\n';
    }

    return 0;
}