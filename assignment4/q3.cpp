// Write a program interleave the first half of the queue with second half.
// Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void Interleave(int n,queue<int>&q){
if(n%2!=0){
return;
}
stack<int>st;
int half=n/2;
for(int i=0;i<half;i++){
    st.push(q.front());
    q.pop();
}
while(!st.empty()){
q.push(st.top());
st.pop();
}
//this symbolsis the second part of the of the array
for(int i=0;i<half;i++){
    q.push(q.front());
    q.pop();
}
//putting the first halsf again in the stack
for(int i=0;i<half;i++){
    st.push(q.front());
    q.pop();
}
while(!q.empty()&&!st.empty()){
    //from stack
    q.push(st.top());
    st.pop();
//from queue
    q.push(q.front());
    q.pop();
}
while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main(){
//becuase q is a data strucuture therefore we need to implent it with the help of arrays
queue<int>q;
int n=6;
int arr[n]={4, 7, 11, 20, 5, 9};
//these are even numbers only


for(int i=0;i<6;i++){
    q.push(arr[i]);
}
//4 7 11 20 5 9
Interleave(n,q);




    return 0;
}

