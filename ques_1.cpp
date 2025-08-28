
#include <iostream>
using namespace std;

int main(){

    int val;
    int arr[]={5,10,12,32,45,87};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the number to find";
    cin>>val;

    int low=0,high=size-1,mid=0;
    int found=-1;

    while(low<high){
        mid=(high+low)/2;
        if(arr[mid]==val){
            cout<<"The desired number at position:"<<mid+1;
            found=1;
            break;
        }
        else if(arr[mid]>=val){
            high=mid-1;
        }
        else if(arr[mid]<=val){
            low=mid+1;
        }
    }
    if(found!=1){
        cout<<"Number not found";
    }

    return 0;
}
