// genereal stacks data strucutre
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main (){
stack<char>st;
string s="Datastrucutre";
int n=s.size();
for(int i=0;i<n;i++){
    st.push(s[i]);
}
while(!st.empty()){
    cout<<st.top();
    st.pop();
}


    return 0;
}