#include <string>
#include <vector>

using namespace std;

string alpha = "AEIOU";
int answer=0, cnt=0;

//재귀호출
void dfs(string tmp, string word)
{
    //찾는 단어인경우
    if (tmp == word){ answer = cnt; return; }
    //단어 길이는 5를 못 넘음
    if (tmp.length() > 5){ return; }
    //아래 for문에서 알파벳 하나를 더하고 재귀호출 하므로 cnt++
    cnt++;
    for (int i = 0; i < alpha.length(); i++){
        //순서대로 AEIOU하나씩 더하며 재귀호출
        dfs(tmp + alpha[i], word);
    }
}

int solution(string word) {
    dfs("", word);
    return answer;
}