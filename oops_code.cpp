#include<iostream>
using namespace std;
class String{
    char *name;
    int length;
    public:
    String();
    String(char* str);
    int strlen(char* str);
    void strcpy(char* str1,char* str2);
    void input();
    void display();
    void strcat(String str2);
    char* get_name();
};

char* String:: get_name(){
    return name;
}

String :: String(){
    length = 0;
    name = new char[length+1];
}

String :: String(char *str){
    length = strlen(str);
    name = new char[length+1];
    strcpy(name,str);
}

int String :: strlen(char *str){
    int len = 0,i = 0;
    while(str[i] != '\0'){
        i++;
        len++;
    }
    return len;
}

void String :: strcpy(char *str1, char *str2){
    int i;
    for(i = 0; str2[i] != '\0'; i++){
        str1[i] = str2[i];
    }
    str1[i] = '\0';
}

void String :: input(){
    cout << "Enter string ";
    cin >> name;
}

void String :: display(){
    cout << "String-> " << name << endl;
}

void String :: strcat(String str2){
    int i = length;
    int j = 0;
    while(str2.name[j] != '\0'){
        name[i] = str2.name[j];
        j++;
        i++;
    }
    name[i] = '\0';
}

int main(){
    String s;
    s.input();
    s.display();
    char str[] = "A5_COE"; 
    s.strcat(str);
    String s1(str);
    s1.display();
    s.display();
    return 0;
}