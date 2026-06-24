#include<iostream>
using namespace std;
bool isPalindrome(int x){
    if(x <0){
        return false;
    }

    int original = x;
    long long reverse =0;


    while(x>0){
        int digit = x % 10;    
        reverse = reverse * 10 + digit ;
         x= x/10;
    }

    return original == reverse;
}
int main(){
    int num ;
    cout<<"Enter a number : ";
    cin>>num;

    if(isPalindrome(num)){
        cout<<"number is a palindrome.";
    }else{
        cout<<"number is not a palindrome";
    }
    return 0;
}


// logic :

// num = 5607
// sum =0
// digit = 5607 % 10 = 7
// sum = sum + digit === 0 + 7 
// num = num /10 == 5607/10 = 560 

// repeat this while num >0