#include <iostream>

using namespace std;

void CountSort(int A[], int n){
    int max=-1;
    for(int i=0; i<n; i++){
        if(A[i]>max)
        max=A[i]; 
    }
    int B[max+1]={0}; // 0 to max index hence max+1; 
    for(int i=0; i<n; i++){
        B[A[i]]++; 
    }
    for(int i=1; i<=max; i++){
        B[i]+=B[i-1]; 
    }
    int C[n]; 
    int pos; 
    for(int i=n-1; i>=0; i--){
        pos=--B[A[i]]; 
        C[pos]=A[i]; 
    }
    for(int i=0; i<n; i++){
        cout<<C[i]<<" "; 
    }
}
int main(){
    int A[]= {2, 1, 1, 0, 2, 5, 4, 0, 2, 8, 7, 7, 9, 2, 0, 1, 9};
    int n = 17;
    
    CountSort(A, n);
    
    return 0; 
}