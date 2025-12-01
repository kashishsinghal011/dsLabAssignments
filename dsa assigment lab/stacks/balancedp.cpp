// Write a program that checks if an expression has balanced parentheses.  

#include<iostream>
#include<stack>
using namespace std;

int main (){

string str="({})]]";
stack<char>st;
bool flag=false;
//storing all the opening values in the stack then comparing it the correspondng closing brackets
for(int i=0;i<str.size();i++){
    if(str[i]=='('||str[i]=='{'||str[i]=='['){
        st.push(str[i]);
    }
    else{
    if(st.empty()){
    // flag=true;
    cout<< "closing brackets are more";
    return 0;
    }
    if((str[i]==')'&& st.top()=='(') ||(str[i]==']'&&st.top()=='[')||(str[i]=='}'&&st.top()=='{')){
        st.pop();
    }
    else{
        flag=true;
        break;
    }
}
}
if(flag){
    cout<<"not the balanced ones";
}
else if(!st.empty()){
    cout<<"opening  brackets are more";
}
else{
    cout<<"balanced";
}
    return 0;
}