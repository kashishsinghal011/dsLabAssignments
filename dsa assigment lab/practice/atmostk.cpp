// Given a non-empty integer array arr[]. 
// Your task is to find and return the top k elements which have the highest frequency in the array.
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main (){

unordered_map<int,int>mpp;
int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
for(int x:arr){
    mpp[x]++;
}
int n;
cout<<"Enter Number of maximum that we want to print";
cin>>n;
vector<int>result;
int max=0;
//either we can apply sorting function on the mao
//this will going to sort the mao according to key value
sort(mpp.begin(),mpp.end());
int m=mpp.size();
int i=0;
while(i<m){
    result.push_back(mpp[m-i-1]);
    i++;
}
for(auto x:result){
    cout << x;
}


    return 0;
}