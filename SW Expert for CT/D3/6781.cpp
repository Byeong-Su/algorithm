//sw expert 6781 삼삼 트리플 게임

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ans1, ans2;

void card_cnt(vector<char> card) {
    //카드번호당 카드 개수 저장
    int num1[10] = {0}, num2[10] = {0};
    
	for(int i=0; i<card.size(); i++){
        num1[int(card[i]-'0')]++;
        num2[int(card[i]-'0')]++;
    }
    
    //같은 숫자의 카드3개인 개수 카운트
    for(int i=1; i<10; i++){
        if(num1[i]>=3){
            num1[i]-=3;
            ans1++;
        }
    }
	//같은 숫자의 카드3개인인 카드 제외하고 남은 카드 중 연속 3개의 오름차순카드 개수 카운트
    for(int i=1; i<8; i++){
        while(num1[i]>0&&num1[i+1]>0&&num1[i+2]>0){
            num1[i]--; num1[i+1]--; num1[i+2]--;
            ans1++;            
        }
    }
    
    //원본 카드 셋에서 연속 3개의 오름차순카드 개수 카운트
    for(int i=1; i<8; i++){
        while(num2[i]>0&&num2[i+1]>0&&num2[i+2]>0){
            num2[i]--; num2[i+1]--; num2[i+2]--;
            ans2++;
        }
    }
}

int main() {
	int T;
	cin >> T;

	string number, color;

	for (int t = 1; t <= T; t++) {
        ans1=0, ans2=0;
        
		cin >> number >> color;

		vector<char> red;
		vector<char> green;
		vector<char> blue;

		//카드 색깔별 벡터에 각 색깔에 해당하는 카드의 숫자 체크
		for (int i = 0; i < number.size(); i++) {
			switch (color[i]) {
			case 'R':
				red.push_back(number[i]);
				break;
			case 'G':
				green.push_back(number[i]);
				break;
			case 'B':
				blue.push_back(number[i]);
			}
		}
        
		card_cnt(red);
        card_cnt(green);
        card_cnt(blue);

		cout << '#' << t << ' ';
		if (ans1>=3 || ans2>=3) { cout << "Win\n"; }
		else { cout << "Continue\n"; }
	}

	return 0;
}