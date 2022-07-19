#include<iostream>
using namespace std;

void main(){
    int arr[10]={7, 11, 9, 2 ,17, 4}
    for(i=1; i<10; i++){
        int temp;
        for(j=0; j<10-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}