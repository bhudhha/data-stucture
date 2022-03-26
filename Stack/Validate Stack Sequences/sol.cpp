#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countCollisions(string d)
    {
        int i = 0;
        int n = d.size();
        int count = 0;
        while (i < n)
        {
            if (d[i] == 'S')
            {
                i++;
                continue;
            }
            if (d[i] == 'R' and i < n - 1)
            {
                if (d[i + 1] == 'S')
                {
                    d[i] = 'S';
                    count += 1;
                    if (i > 0 and d[i - 1] == 'R')
                        i--;

                    else
                        i++;
                }
                else if (d[i + 1] == 'L')
                {
                    count += 2;
                    d[i] = 'S';
                    d[i + 1] = 'S';

                    if (i > 0 and d[i - 1] == 'R')
                        i--;
                    else
                        i++;
                }

                else
                    i++;
            }
            else if (d[i] == 'L' and i > 0)
            {
                if (d[i - 1] == 'S')
                {
                    count += 1;
                    d[i] = 'S';
                }
                else if (d[i - 1] == 'R')
                {
                    count += 1;
                    d[i] = 'S';
                    d[i - 1] = 'S';
                }
                i++;
            }
            else
                i++;
        }
        return count;
    }
};