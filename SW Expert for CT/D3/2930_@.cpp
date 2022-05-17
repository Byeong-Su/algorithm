//힙
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV-Tj7ya3jYDFAXr&categoryId=AV-Tj7ya3jYDFAXr&categoryType=CODE&problemTitle=2930&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//완전 이진트리로 삽입하고 부모노드와 비교해 swap해주면서 루트노드 만날때 까지 해주면됨
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int num, cmd;
        priority_queue<int> pq;
    
        cin >> num;
        cout << "#" << tc;
        
        for(int i = 0; i < num; i++)
        {
            cin >> cmd;
            if(cmd == 1)
            {
                int n;
                cin >> n;
                pq.push(n);
            }
            else
            {
                if(pq.empty())
                    cout << " -1";
                else
                {
                    cout << " " << pq.top();
                    pq.pop();
                }
            }
        }
        cout << endl;
    }
        
    return 0;
}

/*예제는 되는데 런타임에러 뜨는거
#include <iostream>
#include <vector>

using namespace std;

vector<int> heap;

void heap_swap(int parent, int child){
    int tmp=heap[parent];
    heap[parent]=heap[child];
    heap[child]=tmp;
}

void heap_insert(int num){
    heap.push_back(num);
    int idx=heap.size()-1;
    while(idx>0){
        //자식노드 값이 클 경우 스왑
        if( heap[(idx-1)/2] < heap[idx]){ heap_swap((idx-1)/2, idx); }
        idx=(idx-1)/2;
    }

}

void heap_delete(){
    //루트노드 말단노드 교환
    heap_swap(0,heap.size()-1);
    heap.pop_back();
    int idx=0, left_child, right_child;
    //루트로간 말단 노드부터 교환(주어진 조건에따라 자식 두개면 큰 값을 바꿔야함)
    while(idx<heap.size()){
        left_child=2*idx+1; right_child=2*idx+2;
        if( heap[left_child] >= heap[right_child] ){
            heap_swap(idx,left_child);
            idx=left_child;
        }
        else{
            heap_swap(idx, right_child);
            idx=right_child;
        }
    }
}



int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,mode,num;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;

        cout << '#' << t;
        for(int i=0; i<N; i++){
            cin >> mode >> num;
            if(mode==1){ heap_insert(num); }
            else{
                if(heap.empty()){ cout << ' ' << -1; }
                else{cout << ' ' << heap[0]; heap_delete(); }
            }
        }
        //출력
        cout << '\n';
    }

    return 0;
}*/