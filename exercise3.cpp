#include<iostream>
using namespace std;
int main(){
    float total_amount;
    cout<<"Enter the total amount \n";
    cin>>total_amount;

    if(total_amount<100){
        cout<<"Sorry but no discount for you. Your total amount is\n "<<total_amount;
    }
    else if(total_amount>=100 && total_amount<500){
        cout<<"You get a 10 percent discount. Your total amount is\n "<<(total_amount)-((total_amount*10)/100);
    }
    else if(total_amount>=500){
        cout<<"You get a 20 percent discount. Your total amount is\n "<<total_amount-((total_amount*20)/100);
    }
    return 0;
}