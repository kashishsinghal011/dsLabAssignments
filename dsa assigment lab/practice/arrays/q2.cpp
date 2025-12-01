// splitting the strings into three non empty strings

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool split(string s){
if(s.size()<3){
    return false;
}
unordered_map<char,int>mpp;
for(auto it :s){
    mpp[it]++;
}
for(auto it:mpp){
    if(it.second>=3){
        return true;
    }
}
return false;
}
int main (){
string s;
s="abcdef";
if(split(s)){
    cout<<"yes you can split strings";
}
else{
    cout<<"no you cannot split ";
}






    return 0;
}