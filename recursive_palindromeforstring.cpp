#include<cstring>

bool isPalindrome = true;
bool helper(char input[], int i, int j){

    if(i > j){ 
        return isPalindrome;
    }

    if(input[i] != input[j]){
        isPalindrome = false;
    }
    helper(input, i + 1, j - 1);
    return isPalindrome;
}
bool checkPalindrome(char input[]){

    int i = 0, j = strlen(input) - 1;
    bool output = helper(input, i, j);
    return output;
}
