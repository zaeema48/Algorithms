#include <iostream>

using namespace std;

void CountSort(int A[], int n){
    int max = 0; 
    for( int i = 0; i<n; i++){
        if(A[i]>max)
        max = A[i];
    }
    int count [max + 1] = {0} ; // max+1 bcz 0 to last element 
    
    //Calculating the frequency and storing it in count array 
    for(int j=0; j<n; j++){
        count[A[j]]=count[A[j]]+1;
    }
    int j = 0 , i = 0 ; //i is for position of elements of array A. j is for count array.
    while(i<n){
        if(count[j]>0){ //checking whether the element exists in array. 
            A[i]=j; 
            i++;    //incrementing i only when the element exists. 
            count[j]=count[j]-1;    //decreasing the frequency.
        }
        else    //when frequency of count index is 0 for an element. 
            j++;
        }
        for(int i = 0; i < n; i++){
            cout<<A[i]<<" ";
        }
}

int main(){
    int A[]= {2, 1, 1, 0, 2, 5, 4, 0, 2, 8, 7, 7, 9, 2, 0, 1, 9};
    int n = 17;
    
    CountSort(A, n);
    
    return 0; 
}
