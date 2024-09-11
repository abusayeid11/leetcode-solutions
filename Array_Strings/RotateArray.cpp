

#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>

const long mod = 998244353;

const int N = 1e6 + 10;


public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k %= n;

       reverse(nums.begin(), nums.end());
       reverse(nums.begin(), nums.begin() + k);
       reverse(nums.begin()+k, nums.end());

    }


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

//ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    vector<int>nums;
    int k;

    removeDuplicates(nums,k);



    return 0;
}




