#include <bits/stdc++.h>
using namespace std;
vector<int> root(int a, int b, int c)
{
    vector<int> v;
    float x1, x2, discriminant, realPart, imaginaryPart;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        v.push_back(floor(x1));
        v.push_back(floor(x2));
    }

    else if (discriminant == 0)
    {
        x1 = -b / (2 * a);
        v.push_back(floor(x1));
        v.push_back(floor(x1));
        sort(v.begin(), v.end(), greater<int>());
        return v;
    }

    else
    {
        v.push_back(-1);
        return v;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> res = root(a, b, c);
    if (res.size() == 1 && res[0] == -1)
    {
        cout << "Imaginary";
    }
    else
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
}