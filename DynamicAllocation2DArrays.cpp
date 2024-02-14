#include<iostream>
using namespace std;

//Making a 2d array using dynamic allocation

int main(){
    int **ptr = new int *[10];
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        //ptr[i]=new int[i+1]; This will make a pyramidical structure. No need to give same number of columns. This will give i+1 number of columns 
        ptr[i]=new int[c];
        for(int j=0;j<c;j++){
            cin>>ptr[i][j];
        }
    }
    return 0;
}