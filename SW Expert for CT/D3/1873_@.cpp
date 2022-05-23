//1873. 상호의 배틀필드
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV5LyE7KD2ADFAXc&categoryId=AV5LyE7KD2ADFAXc&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=2
/*
map을 처음 입력받을때 탱크 처음 위치를
저장하잖아
그떄
탱크 모양을 놔두지말고
. 으로 만들어버려
그리고 위치랑 방향 정수로 저장
그리고 돌리면서 정수 3개로 탐색하는거지 y x d
맵은 안건들고
포탄쏠때만 지우고
맵은 처음에 입력받고
*/
#include<iostream>
#include<vector>
#include<cstring>
 
#define endl "\n"
#define MAX 20
using namespace std;
 
int H, W, N;
char MAP[MAX][MAX];
 
vector<char> Cmd;
pair<pair<int, int>, int> Tank;
 
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
 
void Initialize()
{
    Tank.first.first = Tank.first.second = Tank.second = -1;
    Cmd.clear();
    memset(MAP, 0, sizeof(MAP));
}
 
void Input()
{
    cin >> H >> W;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> MAP[i][j];
            if (MAP[i][j] == '<' || MAP[i][j] == '>' || MAP[i][j] == '^' || MAP[i][j] == 'v')
            {
                Tank.first.first = i;
                Tank.first.second = j;
                if (MAP[i][j] == '<') Tank.second = 1;
                else if (MAP[i][j] == '>') Tank.second = 0;
                else if (MAP[i][j] == '^') Tank.second = 3;
                else if (MAP[i][j] == 'v') Tank.second = 2;
            }
        }
    }
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        char A; cin >> A;
        Cmd.push_back(A);
    }
}
 
void Shooting()
{
    int x = Tank.first.first;
    int y = Tank.first.second;
    int dir = Tank.second;
 
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    while (1)
    {
        if (nx < 0 || ny < 0 || nx >= H || ny >= W) break;
 
        if (MAP[nx][ny] == '#') break;
        else if (MAP[nx][ny] == '*')
        {
            MAP[nx][ny] = '.';
            break;
        }
        else
        {
            nx = nx + dx[dir];
            ny = ny + dy[dir];
        }
    }
}
 
void Solution()
{
    for (int i = 0; i < Cmd.size(); i++)
    {
        char C = Cmd[i];
 
        if (C == 'S') Shooting();
        else if (C == 'U')
        {
            Tank.second = 3;
            int x = Tank.first.first;
            int y = Tank.first.second;
            int nx = x + dx[Tank.second];
            int ny = y + dy[Tank.second];
 
            if (nx < 0 || ny < 0 || nx >= H || ny >= W)
            {
                MAP[x][y] = '^';
            }
            else
            {
                if (MAP[nx][ny] == '.')
                {
                    Tank.first.first = nx;
                    Tank.first.second = ny;
                    MAP[nx][ny] = '^';
                    MAP[x][y] = '.';
                }
                else MAP[x][y] = '^';
            }
        }
        else if (C == 'D')
        {
            Tank.second = 2;
            int x = Tank.first.first;
            int y = Tank.first.second;
            int nx = x + dx[Tank.second];
            int ny = y + dy[Tank.second];
 
            if (nx < 0 || ny < 0 || nx >= H || ny >= W)
            {
                MAP[x][y] = 'v';
            }
            else
            {
                if (MAP[nx][ny] == '.')
                {
                    Tank.first.first = nx;
                    Tank.first.second = ny;
                    MAP[nx][ny] = 'v';
                    MAP[x][y] = '.';
                }
                else MAP[x][y] = 'v';
            }
        }
        else if (C == 'L')
        {
            Tank.second = 1;
            int x = Tank.first.first;
            int y = Tank.first.second;
            int nx = x + dx[Tank.second];
            int ny = y + dy[Tank.second];
 
            if (nx < 0 || ny < 0 || nx >= H || ny >= W)
            {
                MAP[x][y] = '<';
            }
            else
            {
                if (MAP[nx][ny] == '.')
                {
                    Tank.first.first = nx;
                    Tank.first.second = ny;
                    MAP[nx][ny] = '<';
                    MAP[x][y] = '.';
                }
                else MAP[x][y] = '<';
            }
        }
        else if (C == 'R')
        {
            Tank.second = 0;
            int x = Tank.first.first;
            int y = Tank.first.second;
            int nx = x + dx[Tank.second];
            int ny = y + dy[Tank.second];
 
            if (nx < 0 || ny < 0 || nx >= H || ny >= W)
            {
                MAP[x][y] = '>';
            }
            else
            {
                if (MAP[nx][ny] == '.')
                {
                    Tank.first.first = nx;
                    Tank.first.second = ny;
                    MAP[nx][ny] = '>';
                    MAP[x][y] = '.';
                }
                else MAP[x][y] = '>';
            }
        }
    }
}
 
void Print()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << MAP[i][j];
        }
        cout << endl;
    }
}
 
void Solve()
{
    int Tc; cin >> Tc;
    for (int T = 1; T <= Tc; T++)
    {
        Initialize();
        Input();
        Solution();
 
        cout << "#" << T << " ";
        Print();
    }
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
//    freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}


//내가푼거 - 시간초과 됨
/*
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, H, W, user_input, x, y;
	int target_x, target_y;
	char command;
	string str, user_str;

	cin >> T;

	for(int t=1; t<=T; t++){
		//입력
		cin >> H >> W;
		char map[W][H];
		for (int i = 0; i < H; i++) {
			cin >> str;
			for (int j = 0; j < W; j++) {
				map[i][j] = str[j];
				if (map[i][j] == '<' || map[i][j] == '>' || map[i][j] == '^' || map[i][j] == 'v') {
					x = i; y = j;
				}
			}
		}
		cin >> user_input >> user_str;

		for (int i = 0; i < user_str.size(); i++) {
			command = user_str[i];

			switch (command) {
			case 'U':
				//방향 바꾸기
				map[x][y] = '^';
				//이동
				if (y - 1 >-1 && map[x][y-1] == '.') {
					map[x][y] = '.';
					map[x][y-1] = '^';
					y=y-1;
				}
				break;
			case 'D':
				//방향 바꾸기
				map[x][y] = 'v';
				//이동
				if (y+1<H && map[x][y + 1] == '.') {
					map[x][y] = '.';
					map[x][y + 1] = 'v';
					y = y + 1;
				}
				break;
			case 'L':
				//방향 바꾸기
				map[x][y] = '<';
				//이동
				if (x-1 > -1 && map[x-1][y] == '.') {
					map[x][y] = '.';
					map[x-1][y] = '<';
					x = x-1;
				}
				break;
			case 'R':
				//방향 바꾸기
				map[x][y] = '>';
				//이동
				if (x+1 < W && map[x+1][y] == '.') {
					map[x][y] = '.';
					map[x+1][y] = '>';
					x = x + 1;
				}
				break;
			case 'S':
				if (map[x][y] == '<') {
					target_x = x; target_y = y;
					while (1) {
						target_x -= 1;
						if (target_x < 0 || map[target_x][target_y] == '#') { break; }
						else if (map[target_x][target_y] == '*') { map[target_x][target_y] = '.'; break; }
					}
				}
				else if (map[x][y] == '>') {
					target_x = x; target_y = y;
					while (1) {
						target_x += 1;
						if (target_x >= W || map[target_x][target_y] == '#') { break; }
						else if (map[target_x][target_y] == '*') { map[target_x][target_y] = '.'; break; }
					}
				}
				else if (map[x][y] == '^') {
					target_x = x; target_y = y;
					while (1) {
						target_y -= 1;
						if (target_y < 0 || map[target_x][target_y] == '#') { break; }
						else if (map[target_x][target_y] == '*') { map[target_x][target_y] = '.'; break; }
					}
				}
				else if (map[x][y] == 'v') {
					target_x = x; target_y = y;
					while (1) {
						target_y += 1;
						if (target_x >= H || map[target_x][target_y] == '#') { break; }
						else if (map[target_x][target_y] == '*') { map[target_x][target_y] = '.'; break; }
					}
				}
				break;
			default:
				cout << "Error" << '\n';
				break;
			}
		}

		cout << '#' << t << ' ';
		for (int i = 0; i < W; i++) {
			for (int j = 0; j < H; j++) {
				cout << map[i][j];
			}
			cout << '\n';
		}


	}
	return 0;
}*/