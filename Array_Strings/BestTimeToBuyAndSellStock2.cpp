

#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>

const long mod = 998244353;

const int N = 1e6 + 10;


int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i=1;i<prices.size();i++){
             if(prices[i] > prices[i-1]){
                  profit += prices[i] - prices[i-1];
             }
        }

        return profit;
    }


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

//ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    vector<int>prices;


    maxProfit(prices);



    return 0;
}





