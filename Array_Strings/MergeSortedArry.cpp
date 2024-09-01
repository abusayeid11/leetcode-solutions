
#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>

const long mod = 998244353;

const int N = 1e6 + 10;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = 0, y = 0;

        vector<int>v;

        while(x < m && y < n){
            if(nums1[x] <= nums2[y]){
                v.push_back(nums1[x]);
                x++;
            }else{
                v.push_back(nums2[y]);
                y++;
            }
        }

        while(x < m){
             v.push_back(nums1[x]);
                x++;
        }
        while(y < n){
            v.push_back(nums2[y]);
                y++;
        }

        nums1 = v;

       for(int i=0;i<m+n;i++){
        cout << v[i] << " ";
       }

       cout << endl;
    }

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

//ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    vector<int>nums1, nums2;

    int n, m;


    merge(nums1, m, nums2, n);



    return 0;
}


