//Base64 Decoder
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5PR4DKAG0DFAUq&categoryId=AV5PR4DKAG0DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=3
#include <iostream>
 
using namespace std;
 
char decoding(char temp) {
    if(temp >= 'A' & temp <= 'Z') {
        temp = temp - 'A';
    } else if(temp >= 'a' & temp <= 'z') {
        temp = temp - 'a' + 26;
    } else if(temp >= '0' & temp <= '9') {
        temp = temp - '0' + 52;
    } else if(temp == '+') {
        temp = 62;
    } else {
        temp = 63;    
    }
    return temp;
}
 
int main(void) {
    int T;
    cin >> T;
 
    for(int t_case=0; t_case<T; t_case++) {
        string input, output = "";
        char temp;
        cin >> input;
 
        for(int i=0; i<input.length()/4; i++) {
            temp = decoding(input.at(i*4))*4 + decoding(input.at(i*4+1))/16;
            output += temp;
            temp = (decoding(input.at(i*4+1))%16)*16 + (decoding(input.at(i*4+2))/4);
            output += temp;
            temp = (decoding(input.at(i*4+2))%4)*64 + decoding(input.at(i*4+3));
            output += temp;
        }
        cout << "#" << t_case+1 << " " << output << "\n";
    }
 
    return 0;
}