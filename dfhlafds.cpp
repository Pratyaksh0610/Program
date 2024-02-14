#include<iostream>
using namespace std;
int maximumProfit(int budget[], int n) {
    // Write your code here
    if(n==1){
        return budget[0];
    }
    int profit=maximumProfit(budget+1,n-1);
    int price=budget[0];
    int s=0;
    for(int i=0;i<n;i++){
        if(price<=budget[i]){
            s++;
        }
    }
    int profit2=(price*s);
    if(profit2>profit){
        return profit2;
    }
    else{
        return profit;
    }
    
}
int main(){
    return 0;
}