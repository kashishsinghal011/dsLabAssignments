// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to wait after the ith day
// to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.
// Input: [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;
stack<int>st;
int main (){ 
vector<int> vc={73,74,75,71,69,72,76,73};
vector<int> ans(vc.size(), 0);
for(int i=vc.size()-1;i>=0;i--){
while(st.size()>0&&vc[st.top()]<=vc[i]){
    st.pop();
}
if(!st.empty()){
    ans[i] = st.top() - i;
}

st.push(i);
}


for(int it : ans){
    cout<<it<<" ";
}


    return 0;
}
