//merge sort
#include<iostream>
#include<vector>
using namespace std;
 void sort(vector<int>&arr,int start,int end,int mid){
    int md=mid+1;
    //restoring the value of start to copy back to temp
    int m=start;
    int n=arr.size();
    vector<int>temp;
    while(start<=mid&& md<=end){
        if(arr[start]<arr[md]){
            temp.push_back(arr[start]);
            start++;
        }
        else{
            temp.push_back(arr[md]);
            md++;
        }
    }
    while(start<=mid){
        temp.push_back(arr[start]);
        start++;
    }
    while(md<=end){
        temp.push_back(arr[md]);
        md++;
    }
    //copying back to og array
    for(int i=0;i<temp.size();i++){
    arr[m+i]=temp[i];
    }
}
void merge_sort(vector<int>&arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    merge_sort(arr,start,mid);//left side
    merge_sort(arr,mid+1,end);//right side
    sort(arr,start,end,mid);


}

int main (){

vector<int>arr={1,8,9,2,3};
int start=0;
int end=arr.size()-1;
merge_sort(arr,start,end);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
}


    return 0;
} 
