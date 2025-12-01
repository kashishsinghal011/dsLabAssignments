// We are given an array of n distinct numbers. The task is to sort all even-placed numbers in
// increasing and odd-placed numbers in decreasing order.
//  The modified array should contain all sorted even-placed numbers
// followed by reverse sorted odd-placed numbers.
// Note that the first element is considered as even placed because of its index 0. 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
int n =8;
vector<int>even;
vector<int>odd;
vector<int>result;
for(int i=0;i<8;i++){
    if(i%2==0){
    even.push_back(arr[i]);
    }
    else{
    odd.push_back(arr[i]);
    }
}
sort(even.begin(),even.end());
sort(odd.begin(),odd.end(),greater<int>());
for(auto x:even){
    result.push_back(x);
}
for(auto x:odd){
    result.push_back(x);
}


for(auto x:result){
    cout<< x <<" ";
}

    return 0;
}














