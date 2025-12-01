#include<iostream>
using namespace std;
int main(){
    //creating array
    int rs[3][3]={{3,4,5},{7,5,1},{9,2,0}};
    //to check first wehther it is going to multiply m1*n1 and m2*n2 then n1=m2;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<rs[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //calculating sum of each row 
    for(int i=0;i<3;i++){
        int sum1=0;
        for(int j=0;j<3;j++){
        sum1=sum1+rs[i][j];
        }
        cout<< "The sum of is " <<i<<sum1;
    }
//calculating sum of each column making row variable and column constant
    for(int i=0;i<3;i++){
        int sum2=0;
        for(int j=0;j<3;j++){
        sum2=sum2+rs[j][i];
        }
    cout<<"the sum is"<<sum2;
    }
    

    //after transposing printing
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<rs[i][j]<<" ";
        }
    cout<<endl;
    }

    return 0;
}
