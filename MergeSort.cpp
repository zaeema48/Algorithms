#include<iostream>
using namespace std; 

int arr[]={38, 27, 43, 3, 9, 82, 10};

void Merge(int l, int mid, int h){
    int i=l, j=mid+1, k=l;
    int temp[10];
     
    while(i<=mid && j<=h){  //storing and comparing the arrays till one of the array gets terminated. 
        if(arr[i]<=arr[j])
        temp[k]=arr[i++];
        
        else
        temp[k]=arr[j++];
        
        k++;
    }
    
    while(i<=mid || j<=h){  //storing the leftover elements 
        if(i<=mid)
        temp[k]=arr[i++];
        
        else
        temp[k]=arr[j++];
        
        k++;
    }
    
    for(k=l; k<=h; k++){        //storing the elements back to the original array. 
        arr[k]=temp[k];
    }
}

void MergeSort(int l, int h){
    if(l<h){
    int mid=(l+h)/2;
    MergeSort(l, mid);
    MergeSort(mid+1, h);
    Merge(l, mid, h);
    }
}

int main(){
    
   MergeSort(0, 6);
   
   cout<<"Printing the sorted array"<<endl;
   for (int i=0; i<7; i++){
       cout<<arr[i]<<" ";
   }
    
}