// Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
// Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
//  put all 0s first, then all 1s and all 2s in last.
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {0, 1, 2, 0, 0, 1, 2};
    // best optimal solution using three pointer approach
    //  we are three pointer to differntiate between four parts
    // 0-low-1
    // low-mid
    // mid-high =unsorted part
    // high-n-1-last part of the array
    // imnitially mid is pointing to 0 and also low is pointing to 0
    int mid = 0;
    int low = 0;
    int high = 6;
    int temp;
    // everythimg is pointed by mid only
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            // iss case mwin hme isse 0 to low-1 wale part mein dalnna hai
            // either use swap function directly to swap the low and mid or write swap code
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
         else if (arr[mid] == 2)
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    for (int k = 0; k < 7; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}

// to sort the using bubble sorting algo
//  int arr[7]={0,1,2,0,0,1,2};
//  for( i=0;i<7;i++){
//      for(j=i+1;j<7;j++){
//          if(arr[i]>arr[j]){
//              temp=arr[i];
//              arr[i]=arr[j];
//              arr[j]=temp;
//          }
//      }
//  }
//  // printing the array again
//  for(int k=0;k<7;k++){
//      cout<<arr[k]<<" ";
//  }
// int arr[7]={0,1,2,0,0,1,2};
//     for(i=0;i<7;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         if(arr[i]==1){
//             count1++;
//         }
//         if(arr[i]==2){
//             count2++;
//         }
//     }
//     for(int i=0;i<count0;i++){
//         arr[i]=0;
//     }
//    for(int i=count0;i<count0+count1;i++){
//         arr[i]=1;
//     }
//     for(int i=count0+count1;i<count0+count1+count2;i++){
//         arr[i]=2;
//     }
//     cout<< count2++<<endl;
//     cout<< count1++<<endl;
//     cout<< count0++<<endl;
//     //printing the array after overwrinting
//     for(int k=0;k<7;k++){
//          cout<<arr[k]<<" ";
//      }
// writing the the code again
// nrrd to sum of 3 to maximum



//VERY VERY IMPORTANT TO PASS BY REFRENCE IN SWAP FUNCTION OTHERWISE THE CODE WILL NOT WORK
/// using the function 
#include <iostream>
using namespace std;
// defining the function for swapping he numbers
// reference ke saath not creaye copyies if you are using the function
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sortcolor(int arr[], int d)
{

    int low = 0;
    int mid = 0;
    int high = d - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid = mid + 1;
            low = low + 1;
        }
        else if (arr[mid] == 1)
        {
            mid = mid + 1;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            //yaha excange karne ke baad usko aage nhi badana like in case of fiest becayse waha var phele check karne hai
            // 0-low-1
            //low-mid-1
            //mid -high
            //high+1- n-1
                
                high = high - 1;
            }
        }
}


int main()
{

    int arr[7] = {0, 2, 1, 0, 1, 0, 2};
    // sorting the three colours
    // required three pointer approach called dutch national flag method
    // passing the function in the array
    sortcolor(arr, 7);
    // printing the array agaun after sorting
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
