#include <iostream>

using namespace std ; 
 
int main()
{
    long int n  ; 
    cin >> n ; 
    long int t[n] ; 
    for (int i = 0 ; i < n ; ++i)
    {
        cin >> t[i] ;
    }
    long int moves = 0  ; 
    for (int i = 0 ; i < n-1 ; ++i)
    {
        //cout << t[i]<<'\n' ;
        if (t[i]>t[i+1])
        {
            long int aux ; 
        
            aux = t[i] - t[i+1]  ;
            t[i+1]+=aux  ; 
            moves+=aux ; 
            //aux = 0 ; 
        }

    }
    cout << moves ;




}