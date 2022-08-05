#include <bits/stdc++.h>
using namespace std;
long long int res = 0;
void merge(long long arr[], long long l, long long m, long long r)
{
         long long n1 = m-l+1, n2 = r-m;
         long long left[n1], right[n2];
         for(long long i = 0; i < n1; i++)
            left[i] = arr[l+i];
         for(long long i = 0; i < n2; i++)
            right[i] = arr[m+i+1];
        
        int i = 0, j = 0, k = l;
        while(i < n1 && j < n2)
        {
            if(left[i] <= right[j])
                arr[k++] = left[i++];
            else
            {
                 arr[k++] = right[j++];
                 res += (n1-i);
            }
        }
        while(i < n1)
        {
            arr[k++] = left[i++];
        }
        while(j < n2)
        {
            arr[k++] = right[j++];
        }
    }
void mergeSort(long long arr[], long long l, long long r)
{
        if(l >= r)
            return;
            
            long long m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
}
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
           mergeSort(arr, 0, n-1);
    return res;
    }

int main()
{
    long long n=5;
    long long  nums[5] = {2, 5, 1, 3, 4};
    long long int ans= inversionCount(long long arr[], long long n)
    return 0;
}
