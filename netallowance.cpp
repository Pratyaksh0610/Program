#include<iostream>
using namespace std;
int main(){
    float net_salary,basic_salary,percentage_of_allowances,percentage_of_deductions;
    cout<<"Enter basic salary: ";
    cin>>basic_salary;
    
    cout<<"\nEnter percentage of allowances: ";
    cin>>percentage_of_allowances;

    cout<<"\nEnter percentage of deductions: ";
    cin>>percentage_of_deductions;

    net_salary=basic_salary+(basic_salary*percentage_of_allowances/100)-(basic_salary*percentage_of_deductions/100);
    cout<<"Net salary is: "<<net_salary;
    return 0;
}