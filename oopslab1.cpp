#include<iostream>
using namespace std;

class football{
    public:
    string team_name;
    int win,loss;
    string mvp;

    void team_info(){
        cout<<team_name<<endl;
        cout<<win<<endl;
        cout<<loss<<endl;
        cout<<mvp<<endl;
    }
};
int main(){
    football team1;
    team1.team_name="Manchester UTD";
    team1.win=12;
    team1.loss=5;
    team1.mvp="Messi";

    team1.team_info();
    return 0;
}