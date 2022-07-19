#include<iostream>
using namespace std; 

int a[]={10, 16, 8, 12, 15, 6, 3, 9, 5};

// int Partition(int i, int j){
//     int pivot=a[i];
//     int start=i;
//     int end=j;
    
//     while(start < end){
//         while(a[start]<=pivot){
//             start++;
//         }
//         while(a[end]>pivot){
//             end--;
//         }
//         if(start<end)
//         swap(a[start], a[end]);
//     }
//     swap(a[i], a[end]);
    
    
//     return end;
// }
// void QuickSort( int i, int j){
//     if(i<j){
//         int loc;    //will return the position of pivot element
//         loc=Partition( i, j);
//         QuickSort( i, loc-1);
//         QuickSort( loc+1, j);
//     }
// }
int Partition( int l, int h){
    int pivot= a[l];
    int i=l;
    int j=h;
    while(i<j){
        do{
            i++;
        }while(a[i]<=pivot);
        
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j)
        swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;
}

void QuickSort(int l, int h ){
    if(l<h){
        int j=Partition(l, h);
        QuickSort(l, j);
        QuickSort(j+1, h);
    }
}

int main(){
    int n=9;
    
    QuickSort(0, n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}
