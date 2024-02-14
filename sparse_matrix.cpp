#include <iostream>
using namespace std;

class Element
{
public:
    int i, j, x;
};

class sparse
{
public:
    int I, J, num;
    

    sparse(int a, int b, int c)
    {
        I = a;
        J = b;
        num = c;
    }
    Element *ele = new Element[num + 1];

    void read()
    {
        ele[0].i = I;
        ele[0].j = J;
        ele[0].x = num;

        for (int i = 1; i <= num; i++)
        {
            cin >> ele[i].i >> ele[i].j >> ele[i].x;
        }
    }
    void disp()
    {
        int k = 1;
        cout << endl;
        for (int l = 0; l < I; l++)
        {
            for (int m = 0; m < J; m++)
            {
                if (ele[k].i == l && ele[k].j == m)
                {
                    cout << ele[k++].x << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    // void add(sparse &s1,sparse &s2){
    //     Element *added=new Element[s1.ele[0].x+s2.ele[0].x];
    //     added[0].i=s1.ele[0].i;
    //     added[0].j=s1.ele[0].j;

    //     int i=1,j=1;
    //     int k=1;
    //     while(i<=s1.ele[0].x&&j<=s2.ele[0].x){
    //         if(s1.ele[i].i==s2.ele[j].i){
    //             if(s1.ele[i].j==s2.ele[j].j){
    //                 added[k].i=s1.ele[i].i;
    //                 added[k].j=s1.ele[i].j;
    //                 added[k].x=s1.ele[i].x+s2.ele[j].x;
    //                 i++;
    //                 j++;
    //                 k++;
    //             }
    //             else if(s1.ele[i].j<s2.ele[j].j){
    //                 added[k].i=s1.ele[i].i;
    //                 added[k].j=s1.ele[i].j;
    //                 added[k].x=s1.ele[i].x;
    //                 i++;
    //                 k++;
    //             }
    //             else{
    //                 added[k].i=s2.ele[j].i;
    //                 added[k].j=s2.ele[j].j;
    //                 added[k].x=s2.ele[j].x;
    //                 j++;
    //                 k++;
    //             }
    //         }
    //         else if(s1.ele[i].i<s2.ele[j].i){
    //             added[k].i=s1.ele[i].i;
    //             added[k].j=s1.ele[i].j;
    //             added[k].x=s1.ele[i].x;
    //             i++;
    //             k++;
    //         }
    //         else {
    //             added[k].i=s2.ele[j].i;
    //             added[k].j=s2.ele[j].j;
    //             added[k].x=s2.ele[j].x;
    //             j++;
    //             k++;
    //         }
    //     }
    //     int z = 1;
    //     cout<<endl;
    //     for (int l = 0; l < s1.ele[0].i; l++)
    //     {
    //         for (int m = 0; m < s1.ele[0].j; m++)
    //         {
    //             if (ele[z].i == l && ele[z].j == m)
    //             {
    //                 cout << ele[z++].x << " ";
    //             }
    //             else
    //             {
    //                 cout << "0 ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;

    // }
};
sparse* transpose(sparse &s)
{
    int row = s.ele[0].i;
    int col = s.ele[0].j;
    int nums = s.ele[0].x;
    sparse *s1 = new sparse(col, row, nums);
    //Element *el = new Element[nums + 1];
    s1->ele[0].i = col;
    s1->ele[0].j = row;
    s1->ele[0].x = nums;

    int k1 = 1;
    for (int m = 0; m <= col; m++)
    {
        for (int l = 0; l <= row; l++)
        {
            if (s.ele[l].j == m)
            {
                s1->ele[k1].i = s.ele[l].j;
                s1->ele[k1].j = s.ele[l].i;
                s1->ele[k1].x = s.ele[l].x;
                k1++;
            }
        }
    }
    return s1; 
    return s1;
}
int main()
{
    sparse s1(5, 5, 5);
    s1.read();
    s1.disp();
    sparse* s2=transpose(s1);
    s2->disp();
    return 0;
}