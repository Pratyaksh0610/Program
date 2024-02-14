#include<iostream>
using namespace std;

void inc(int n){
    if(n==1){
        cout<<n<<" ";
    }
    else {
    inc(n-1);
    cout<<n<<" ";
    }

}
 
int main(){
    int n;
    cin >> n;
  
    inc(n);
    return 0;
}


