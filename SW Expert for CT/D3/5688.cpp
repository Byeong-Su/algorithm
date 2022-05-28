//5688. 세제곱근을 찾아라
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWXVyCaKugQDFAUo&categoryId=AWXVyCaKugQDFAUo&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++)    {
        unsigned long long num, ans = 0;
        
        cin >> num;
        
        for(unsigned long long i = 1; i * i * i <= num; i++)        {
            if(i * i * i == num)            {
                ans = i;
                break;
            }
        }
        
        cout << "#" << t << " ";        
        if(ans == 0){ cout << -1; }
        else{ cout << ans; }
        cout << '\n';
    }
    return 0;
}

//세제곱 결과 규칙 활용한것(100개중 99개만 맞음)
/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    for(int t=1; t<=T; t++){
        unsigned long long n, num, ans=0;
        cin >> n;
        
        //n이 끝자리 1인 수의 세제곱일때
        if(n%10==1){
            num=1;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }
        }
        //n이 끝자리 2인 수의 세제곱일때
        else if(n%10==8){
            num=2;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 3인 수의 세제곱일때
        else if(n%10==7){
            num=3;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 4인 수의 세제곱일때
        else if(n%10==4){
            num=4;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 5인 수의 세제곱일때
        else if(n%10==5){
            num=5;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 6인 수의 세제곱일때
        else if(n%10==6){
            num=6;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 7인 수의 세제곱일때
        else if(n%10==3){
            num=7;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 8인 수의 세제곱일때
        else if(n%10==2){
            num=8;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 9인 수의 세제곱일때
        else if(n%10==9){
            num=9;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        //n이 끝자리 0인 수의 세제곱일때
        else if(n%10==0){
            num=10;
            while(num<1000000){
                if(num*num*num==n){ ans=num; }
                num+=10;
            }            
        }
        
        cout << '#' << t << ' ';
        if(ans==0){ cout << -1; }
        else{ cout << ans; }
        cout << '\n';
        
        
    }


    return 0;
}

*/