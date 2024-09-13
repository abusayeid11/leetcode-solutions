

#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>

const long mod = 998244353;

const int N = 1e6 + 10;

  int jump(vector<int>& nums) {
        int n = nums.size();

        for(int i=1;i<n;i++){
            nums[i] = max(nums[i-1], nums[i]+i);
        }

        int ind = 0, ans = 0;

        while(ind < n-1){
            ans++;
            ind = nums[ind];
        }

        return ans;
    }


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

//ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    vector<int>nums;


    jump(nums);



    return 0;
}





