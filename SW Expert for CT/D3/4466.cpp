//�ִ� ����ǥ �����
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWOUfCJ6qVMDFAWg&categoryId=AWOUfCJ6qVMDFAWg&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=5
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, K;      //�׽�Ʈ���̽� ��, ���� ����, �ִ� ���� ���� ���� ����
    int max, sum;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        //�Է�
        cin >> N >> K;
        int grade[N];
        for (int i = 0; i < N; i++) {
            cin >> grade[i];
        }
        //�ִ밪 �ʱ�ȭ
        max = 0;
        //����
        sort(grade, grade + N, greater<int>());
        for (int i = 0; i < N; i++) {
            //������ �ʱ�ȭ
            sum = 0;
            //������ ���ϱ�
            for (int j = i; j < K; j++) {
                sum += grade[j];
            }
            //�ִ밪 ����
            if (sum > max) { max = sum; }
        }
        //���
        cout << '#' << t << ' ' << max << '\n';
    }

    return 0;
}