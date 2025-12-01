//to check if the it as balalanced
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main (){

string s="{{(}}";
int n=s.size();
stack<char>st;
bool check=true;
for(int i=0;i<n;i++){
if(s[i]=='('||s[i]=='{'||s[i]=='['){
st.push(s[i]);
}
else{
    if(st.empty()){
    check=false;
    break;
    }
if(s[i]==')'&& st.top()=='('||s[i]=='}'&& st.top()=='{'||s[i]==']'&& st.top()=='['){
    st.pop();
}
else{
    check=false;
    break;
}
}

//no of closing brackets are more 

// no of opening brackets are 
// if(!st.empty()){
//     check=false;
// }

}
if(st.empty()&& check){
    cout<<"this is valid one";
}
else{
    cout<<"this is not a valid one";
}

    return 0;
}