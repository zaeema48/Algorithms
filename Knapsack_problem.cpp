// GREEDY METHOD 
// 1. KNAPSACK PROBLEM 
//FRACTIONAL KNAPSACK PROBLEM 

#include<iostream>
using namespace std; 

struct Item{
    int Profit;
    int Weight; 
};

int Knapsack(struct Item arr[], int n, int capacity ){
    float pw[n];
    for(int i=0; i<n; i++){
        pw[i]=(float)arr[i].Profit/(float)arr[i].Weight;
    }
    
    int K[n]={0};   //Checking whether obj is used or not 
    float profit=0; //initializing profit outside the while loop as to update it everytime
    while(capacity>0){
        float maxP=-1;
        int index=0; 
        for(int i=0; i<n; i++){ //to find the max profit in that pass
            if(K[i]==0&&maxP<pw[i]){
              index=i;
              maxP=pw[i];
            }
        }
        K[index]=1;
        //reducing the capacity and adding the profit 
        if(capacity>=arr[index].Weight){
            capacity=capacity-arr[index].Weight;
            profit=profit+arr[index].Profit;
            cout<<"Taking the item "<<index<<" with capacity "<<arr[index].Weight<<endl;
            }
        else{
            cout<<"Taking the item "<<index<<" with capacity "<<capacity<<endl;
            capacity=0; 
            profit+=capacity*pw[index];
            break; 
        }
    }
    cout<<"The profit is "<<profit; 
    
    return 0; 
    
}

int main(){
    struct Item arr[]={{10,5},{14,7},{15,5},{49,7},{81,9},{12,3},{18,2}}; 
    int n = 7; 
    int capacity=20; 
    Knapsack(arr, n, capacity); 
    return 0; 
}