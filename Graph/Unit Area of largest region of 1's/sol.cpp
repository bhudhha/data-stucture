// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> grid = { {1, 1, 1, 0},
//                                  {0, 0, 1, 0},
//                                  {0, 0, 0, 1} }
//     vector<int> adj[]
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int f, k;

struct node
{
    int mod, sum;
    char s[700];
    int len;
};

queue<node> Q;
bool v[512][5200];

int main()
{
    scanf("%d%d", &f, &k);
    Q.push({0, 0, 0, 0});
    while (!Q.empty())
    {
        node a = Q.front();
        Q.pop();
        for (int i = 0; i < 10; i++)
        {
            node b = a;
            b.s[b.len++] = i + '0';
            b.mod = (b.mod * 10 + i) % f;
            b.sum += i;
            if (v[b.mod][b.sum] || b.sum > k)
                continue;
            v[b.mod][b.sum] = 1;
            if (b.mod == 0 && b.sum == k)
            {
                puts(b.s);
                return 0;
            }
            Q.push(b);
        }
    }
    puts("-1");
    return 0;
}