// Given an array A, find the nearest smaller element for every element A[i] in the array such that the element has an index smaller than i.
//Input :
// Input: [4, 5, 2, 10, 8]
// Output : [-1, 4, -1, 2, 2]
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main (){
vector<int> vc={4,5,2,10,8};
vector<int>ans;
stack<int>st;
for(int i=0;i<vc.size();i++){
    while(st.size()>0&& st.top()>=vc[i]){
        st.pop();
    }
    if(st.empty()){
        ans.push_back(-1);
    }
    else{
        ans.push_back(st.top());
    }
    st.push(vc[i]);
}

for(auto it: ans){
    cout<<it<<" ";
}

    return 0;
}
