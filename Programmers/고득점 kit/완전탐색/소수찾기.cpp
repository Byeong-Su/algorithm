#include <string>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

map<int, bool> map;

bool prime_num(string num){
    //string to int
    int n = stoi(num);
    
    //map[n]이 true이면 이미 확인한 수 이므로 중복 확인하지 않기 위해 false 반환
    if(map[n]){ return false; }
    
    map[n] = true;
    //예외처리
    if(n==1 || n==0){ return false; }
    if(n==2){ return true; }
    
    for(int i=2; i<=sqrt(n); i++){
        //0이면 이미 삭제된 수 이므로 false리턴
        if(n%i == 0){ 
            map[n] == -1;
            return false;
        }
    }
    map[n] == 1;
    
    return true;
}

int solution(string numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    //next_permutation으로 가능한 모든 조합을 찾음
    do{
        for(int i=1; i<=numbers.size(); i++){
            string num = numbers.substr(0, i);  
            //소수인지 확인
            if(prime_num(num)){ answer++; }
        }
    }while(next_permutation(numbers.begin(), numbers.end()));
    
    return answer;
}