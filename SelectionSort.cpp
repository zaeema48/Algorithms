#include<iostream>
using namespace std;

int main(){
    int arr[]={64, 25, 12, 20, 11};
    int n = 5; 
    for(int i=0; i<n; i++){
        int min_index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_index])
            min_index=j;
        }
        
        swap(arr[min_index], arr[i]);
        
    }
    
    /* min_index is used to temporarily store the minimum number and 
    i is used to point at the sorted array. */
    
    cout<<"The sorted array is "<<endl;
        for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
        }
    return 0; 
}
