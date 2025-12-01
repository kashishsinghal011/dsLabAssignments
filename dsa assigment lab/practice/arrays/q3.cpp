// String Anagrams 
// Given two strings str1 and str2, determine if they form an anagram pair. 
// Note: Two strings are considered anagrams if one string can be rearranged to form the other string.

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool check_anangram(string st1,string st2){
unordered_map<char,int>mpp;
for(auto it:st1){
    mpp[it]++;
}
int i=0;
while(i<=st2.size()){
    //elment is found
    if(mpp.find(st2[i])!=mpp.end()){
    mpp[st2[i]]--;
    }
    if(mpp[st2[i]]==0){
        mpp.erase(st2[i]);
    }
    else{
        return false;
    }
    i++;
}
if(mpp.size()==0){
    return true;
}
else{
    return false;
}
}
int main (){

string st1;
string st2;
st1="rat";
st2="tar";
if(check_anangram(st1,st2)){
    cout<<"yes These are they are anangrams";
}
else{
    cout<<"not they are not anangram ";
}




    return 0;
}






