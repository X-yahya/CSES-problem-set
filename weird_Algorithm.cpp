// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ; 
int main() {
    
    int n ; 
    do 
    {
        cin>>n; 
    }while(n<0) ;
    
    while(n!=1)
    {
        if(n%2==0)
        {
            cout << n << '\t' ; 
            n /=2 ;
            
           
        }
        else 
        {
            cout << n << '\t' ; 
            n = n * 3+1 ; 
           
           
        }
    }
    cout << n  ; 
    
    
    return 0;
}