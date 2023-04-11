#include <iostream>
#include <queue>
using namespace std;
int ans, TC;
int N, M, priority;
queue<pair<int, int>> que;
priority_queue<int> pq;

int printer()
{
    while (!que.empty())
    {
        int idx = que.front().first;
        int val = que.front().second;
        // 프린터 대기열 큐에 있는 원소를 꺼낸다.
        que.pop();
        // 우선순위가 반영된 순서와 일치하는지 확인
        if (pq.top() == val)
        {
            // 일치한다면 그대로 출력
            pq.pop();
            ++ans;
            // 찾고자 하는 대상인 경우 return
            if (idx == M)
            {
                return ans;
            }
        }
        else // 우선순위에 맞지 않으면 순서를 뒤로 보낸다.
        {
            que.push({ idx,val });
        }
    }
}

void init()
{
    ans = 0;
    while (!que.empty()) { que.pop(); }
    while (!pq.empty()) { pq.pop(); }
}

void input()
{
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
    {
        cin >> priority;
        que.push({ i, priority });
        pq.push(priority);
    }
}

int main()
{    
    // freopen("input.txt", "r", stdin);
    cin >> TC;
    for (int tc = 0; tc < TC; ++tc)
    {
        init();
        input();
        cout << printer() << endl;
    }

    return 0;
}