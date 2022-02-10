#include <bits/stdc++.h>
using namespace std;
struct job
{
    int id;
    int no;
};
bool comp(job a, job b)
{
    if (a.no == b.no)
    {
        return a.id > b.id;
    }
    return a.no < b.no;
}
int main()
{
    job a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i].id;
        cin >> a[i].no;
    }
    sort(a, a + 5, comp);
    for (int i = 0; i < 5; i++)
        cout << a[i].id << " " << a[i].no << endl;
}