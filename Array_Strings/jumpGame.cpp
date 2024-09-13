

#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>

const long mod = 998244353;

const int N = 1e6 + 10;

 bool canJump(vector<int>& nums) {
        int k = 0;

        for(int i=0;i<nums.size();i++){
            if(k <i) break;
            k = max(k, i + nums[i]);
        }

         return k >= nums.size()-1;
    }


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

//ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    vector<int>nums;


    canJump(nums);



    return 0;
}





