//selection sort
#include<iostream>
#include<algorithm>
using namespace std;

//  void swap(int*a,int* b){
//     int temp;//this is pointer used for storing address but we are storing the value
//     temp=*a;
//     *a=*b;
//     *b=temp;

//  }
int main (){
int min;
int arr[5]={11,35,24,10,45};
for(int i=0;i<5;i++){
    min=i;
    for(int j=i+1;j<5;j++){
        if (arr[min]>arr[j]){
            swap(arr[min],arr[j]);
        }
    }
}
for(int i=0;i<5;i++){
    cout<<arr[i] <<" ";
}

    return 0;
}