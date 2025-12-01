// Quick Sort
#include<iostream>
#include<vector>
using namespace std;
//placing the last elment or the pivot element at the correct position 
int partition(vector<int>&arr,int start,int end){
    int post=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[post]);
            post++;
        }
    }
    return post-1;
}
void quick_sort(vector<int>&arr,int start,int end){
    if(start>=end){
        return;
    }
    int pivot=partition(arr,start,end);
    //left call 
    quick_sort(arr,start,pivot-1);
    //right call
    quick_sort(arr,pivot+1,end);
}
int main (){

vector<int>arr={5,2,3,4,1,0};
int start=0;
int end=arr.size()-1; 
quick_sort(arr,start,end);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}



    return 0;
}