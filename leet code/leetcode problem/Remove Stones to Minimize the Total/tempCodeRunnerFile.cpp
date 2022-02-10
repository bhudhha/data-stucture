int findlag(vector<int> v)
{
    int res = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[res] < v[i])
        {
            res = i;
        }
    }
    return res;
}