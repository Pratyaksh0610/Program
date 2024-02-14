// #include<iostream>
// using namespace std;

// class pair2;
// class pair1{
//     private:
//     int a=5;
//     int b=66;
//     int c=0;
//     public:

//     void cal(pair2 f ,pair2 s);
// };
// class pair2{
//     private:
//     int d=99;
//     int e=87;
//     int f=5;
//     public:

//     friend void pair1::cal(pair2 f,pair2 s);
// };



// void pair1:: cal(pair2 f,pair2 s){
//     cout<<f.d<<endl;
//         return ;
// }


// //making a func
// int main(){
    
//     return 0;
// }


//Part 2 Making entire class a friend//
#include<iostream>
using namespace std;

class pair2;
class pair1{
    private:
    int a=5;
    int b=66;
    int c=0;
    public:

    void cal(pair2 f ,pair2 s);//{
    //     cout<<f.d<<endl;
    //     return ;
    // }
};
class pair2{
    private:
    int d=99;
    int e=87;
    int f=5;
    public:

    //friend pair1;
    friend void pair1::cal(pair2 f,pair2 s);
};

void pair1:: cal(pair2 f,pair2 s){
    cout<<f.d<<endl;
        return ;
}


//making a func
int main(){
    
    return 0;
}