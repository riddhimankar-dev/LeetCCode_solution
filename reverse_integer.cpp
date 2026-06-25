#include<iostream>
#include<climits>
using namespace std;
class Solution{
public:

 int reverse(int n){
    int ans = 0;
    
    while(n>0){
    int digit = n % 10;

    if((ans > INT_MAX /10) || ( ans < INT_MIN/10)){
        return 0;
    }
    ans = ans * 10 + digit;
    n = n/10;
    }
    return ans; 
 }
};
int main(){
    int n ;
    cout<<"Enter Number : ";
    cin>>n;

    Solution s;
    cout<<"Reversed Number : "<<s.reverse(n);
    return 0;
}