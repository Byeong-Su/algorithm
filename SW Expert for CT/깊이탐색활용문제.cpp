//c++ (동작 x)
#include <iostream>
#include <cstring>

using namespace std;

char arr[4] = { 1,2,3,4 };
bool v[4] = { false };

void DFS(string str, int depth) {
	if (depth == 4) { cout << str << '\n';  return; }

	DFS(str + arr[depth], depth + 1);
	DFS(str, depth + 1);
}

void DFS2(string str, int depth) {
	if (depth == 4) { cout << str << '\n'; return; }

	for (int i = 0; i < 4; i++) {
		if (v[i]) { continue; }
		v[i] = true;
		DFS2(str + arr[i], depth + 1);
		v[i] = false;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "모두쓰지않고, 골라서 쓸 때\n";
	string s="";
	DFS(s, 0);

	cout << "모두 다 쓰고, 순서를 다르게\n";
	memset(v, false, sizeof(bool) * 4);
    s="";
	DFS2(s, 0);

	


	return 0;
}


//java
package test;

import java.io.*;
import java.util.*;

public class t1 {
    static int[] arr = {1, 2, 3, 4};
    static boolean[] v;
    
    static StringBuilder sb = new StringBuilder();    
    static int answer = 0;
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        sb.append("모두쓰지않고, 골라서 쓸때\n");
        DFS(new StringBuilder(), 0);

        sb.append("모두 다 쓰고, 순서를 다르게\n");
        v = new boolean[4];
        DFS2(new StringBuilder(), 0);
        
        bw.write(sb.toString());
        br.close();
        bw.flush();
        br.close();
    }
    
    // 모두쓰지않고, 골라서 쓸때
    public static void DFS(StringBuilder str, int depth) {
        if (depth == 4) {
            sb.append(str.toString()).append("\n");
            return;
        }
        DFS(new StringBuilder().append(str.toString()).append(arr[depth] + " "), depth + 1);
        DFS(new StringBuilder().append(str.toString()), depth + 1);        
    }
    
    //모두 다 쓰고, 순서를 다르게
    public static void DFS2(StringBuilder str, int depth) {
        if (depth == 4) {
            sb.append(str.toString()).append("\n");
            return;
        }
        
        for (int i = 0; i < 4; i++) {
            if (v[i]) continue;            
            v[i] = true;
            DFS2(new StringBuilder().append(str.toString()).append(arr[i] + " "), depth + 1);
            v[i] = false;
        }
    }
}