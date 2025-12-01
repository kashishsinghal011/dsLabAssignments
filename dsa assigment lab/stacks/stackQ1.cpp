// 2. Given a string,  reverse it using STACK. For example  “DataStructure” should be output as 
// “erutcurtSataD.”
#include<iostream>
#include<stack>
#include<string>

using namespace std;
int main (){
string str="DataStructure";
string res="";
stack<char>st;
//storing each element in the stack
for(int i=0;i<str.size();i++){
    st.push(str[i]);
}
// eliminating the stack
while(!st.empty()){
    res=res+st.top();
    st.pop();
}

//providing the result
cout<<res<<endl;

    return 0;
}