
// It is a sweltering summer day, and a boy wants to buy some ice cream bars.
// At the store, there are n ice cream bars. You are given an array costs of length n, 
// where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins to spend, 
// and he wants to buy as many ice cream bars as possible. 
// Note: The boy can buy the ice cream bars in any order.
// Return the maximum number of ice cream bars the boy can buy with coins.
// You must solve the problem by counting sort.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){

vector<int>costs={1,3,2,4,1};
sort(costs.begin(),costs.end());
int n;

cout<<"Enter the number of coins required ";
cin>>n;
int ans=0;


for(auto x:costs){
    if(x<=n){
    ans++;
    n=n-x;
    }
}

// finaly ans given the maximum number of coind=s that we can pick up
cout<<ans;



    return 0;
}