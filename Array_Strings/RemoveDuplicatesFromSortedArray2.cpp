
#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>

const long mod = 998244353;

const int N = 1e6 + 10;

 int removeDuplicates(vector<int>& nums) {

        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                nums[i-1] = 1000;
            }
        }

        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1000){
            ans.push_back(nums[i]);
            }
        }

nums = ans;

return nums.size();

}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

//ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    vector<int>nums;


    removeDuplicates(nums);



    return 0;
}




