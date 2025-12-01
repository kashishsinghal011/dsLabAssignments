
// // // ________menu development______

#include<iostream>
using namespace std;
int arr[100];// defined globally
int n=0;
//creating array
    void create(){
        cout<<"Enter the number of elmenents";
        cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    }
// displaying array
    void display(){
        if(n==0){
            cout<<" this is not valid ";
        }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    }
//inserting 
    void insert(){
        if(n==0){
        cout<<"array is not created ";
        return;}
    //creating array
    int pos;
    int tar;
    
    cout<<"Enter the position"<<endl;
    cin>>pos;
    cout<<"Enter the target "<<endl;
    cin>>tar;
    for(int i=n;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=tar;

    for(int i=0;i<n+1;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//4.delete
    void del(){
    //creating array
    if(n==0){
        cout<<"array is not created ";
        return;
    }
    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    //upto n-1 not equal
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    //this is will also go to n-1
    for(int i=0;i<n-1;i++){
    cout<<arr[i]<< " ";
    }
    cout<<endl;
    
}
//3.linear seach
    void lisearch(){
    if(n==0){
        cout<<"array is not created ";
        return;
    }
    int tar;
    cout<<"Enter the target"<<endl;
    cin>>tar;
    //upto n-1 not equal
    
    //this is will also go to n-1
    for(int i=0;i<5;i++){
    if(arr[i]==tar){
    cout<< "The position  of the targeted element" <<i+1<<" "<<endl;
    }
    }
}


int main(){
    int a=0;
    while(a!=6){

    cout<<"Enter the choices [need to 1 to 5]";
    cin>>a;
    switch (a)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        lisearch();
        break;
    case 4:
        del(); 
        break;   
    case 5:
        insert();
        break;
    case 6:
        cout<<"Exit";
    
    }

}
return 0;
}








