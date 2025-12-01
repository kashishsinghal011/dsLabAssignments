// You are given two integer arrays a[] and b[] of equal size.
//  A sum combination is formed by adding one element from a[] and one from b[], using each index pair (i, j) at most once. 
// Return the top k maximum sum combinations, sorted in non-increasing order.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){

vector<int>a={1,2,3,4,5};
vector<int>b={5,3,4,6,7};
int n;
cout<<"Enter the number of the top most elments in the list";
cin>>n;
// to calculate the top most element of the bothe array we can do sorting and then add elemnts from thr last basically

int a1;
a1=a.size();
int  max=0;
int b1=b.size();
// for(int i=0;i<a1;i++){
//     for(int j=0;j<b1;j++){
//         if(a[i]+b[j]>max){
//             max=a[]
//         }
//     }
// }
vector<int> result;
sort(a.begin(),a.end());
sort(b.begin(),b.end());


for(int i=0;i<n;i++){
    int ans=a[a1-1-i]+b[b1-1-i];
result.push_back(ans);
}

for(auto x: result){
    cout<< x<<" ";
}


    return 0;
}














