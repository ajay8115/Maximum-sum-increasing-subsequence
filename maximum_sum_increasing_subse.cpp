#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
using namespace std;

int maxSumIS(int a[], int n)
{
    int dp[n];
    dp[0] = a[0];

    for (int i = 0; i < n; i++)
    {
        int maxi = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                maxi = max(maxi, dp[j]);
            }
        }

        dp[i] = maxi+a[i];
    }

    int max_sum =0;
    for (int i = 0; i < n; i++)
    {
         max_sum = max(max_sum , dp[i]);
    }
    
    return max_sum;
}