#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int solution(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;
    
    //오름차순 정렬
    sort(arrayA.begin(), arrayA.end());
    sort(arrayB.begin(), arrayB.end());
    
    //arrayA[0]와 arrayB[0]의 약수의 개수 구하기
    //(n의 배수는 n을 약수로 가진다는 것을 이용)
    vector<int> divosorA;
    vector<int> divosorB;
    for(int i=2; i<=sqrt(arrayA[0]); i++){
        if(arrayA[0]%i==0){
            //나누는 수가 약수이면 추가
            divosorA.push_back(i);
            //나누어진 결과가 약수이면 추가
            if(arrayA[0]/i!=i){ divosorA.push_back(arrayA[0]/i); }
        }
    }
    for(int i=2; i<=sqrt(arrayB[0]); i++){
        if(arrayB[0]%i==0){
            //나누는 수가 약수이면 추가
            divosorB.push_back(i);
            //나누어진 결과가 약수이면 추가
            if(arrayB[0]/i!=i){ divosorB.push_back(arrayB[0]/i); }
        }
    }
    //arrayA[0]와 arrayB[0]도 arrayA[0]와 arrayB[0]의 약수로 추가
    divosorA.push_back(arrayA[0]);
    divosorB.push_back(arrayB[0]);
    //arrayA[0]와 arrayB[0]의 약수 내림차순 정렬
    sort(divosorA.begin(), divosorA.end(), greater<>());
    sort(divosorB.begin(), divosorB.end(), greater<>());
    
    //arrayA[0]의 가장 큰 약수부터 문제의 조건에 해당하는지 확인
    for(int i=0; i<divosorA.size(); i++){
        bool flagA=true;
        //arrayA의 모든 수를 나눌 수 있는지 확인
        for(int j=0; j<arrayA.size(); j++){
            if(arrayA[j]%divosorA[i]!=0){ flagA=false; break; }
        }
        //arrayA의 모든 수를 나눌 수 있으면 arrayB의 수를 하나도 나눌 수 없는지 확인
        if(flagA==true){
            for(int j=0; j<arrayB.size(); j++){
                if(arrayB[j]%divosorA[i]==0){ flagA=false; break; }
            }
        }
        //arrayA의 모든 수를 나눌 수 있으면 arrayB의 모든 수 나눌 수 없으면 현재 answer값과 divosorA[i] 비교해 크면 answer값을 divosorA[i]로
        if(flagA==true){
            answer=max(answer,divosorA[i]);
            //큰 수 부터 확인하므로 이하의 약수는 탐색하지 않기위해 break;
            break;
        }
    }
    //arrayB[0]의 가장 큰 약수부터 문제의 조건에 해당하는지 확인
    for(int i=0; i<divosorB.size(); i++){
        bool flagB=true;
        //arrayB의 모든 수를 나눌 수 있는지 확인
        for(int j=0; j<arrayB.size(); j++){
            if(arrayB[j]%divosorB[i]!=0){ flagB=false; break; }
        }
        //arrayB의 모든 수를 나눌 수 있으면 arrayA의 수를 하나도 나눌 수 없는지 확인
        if(flagB==true){
            for(int j=0; j<arrayA.size(); j++){
                if(arrayA[j]%divosorB[i]==0){ flagB=false; break; }
            }
        }
        //arrayA의 모든 수를 나눌 수 있으면 arrayB의 모든 수 나눌 수 없으면 현재 answer값과 divosorA[i] 비교해 크면 answer값을 divosorA[i]로
        if(flagB==true){
            answer=max(answer,divosorB[i]);
            //큰 수 부터 확인하므로 이하의 약수는 탐색하지 않기위해 break;
            break;
        }
    }
    
    return answer;
}