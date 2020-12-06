#include <iostream>
using namespace std; 
int main()
{
    int i;
    for (i=1; i<=100; i++)
    {
        //if divisible by 3 and 5, print both
        if (i%5 == 0 && i%3==0)      
            cout<<"Fizz&Buzz "; //both 
         
        // number divisible by 3, print 'Fizz'
        else if ((i%3) == 0)    
            cout<<"Fizz ";                 
         
        // number divisible by 5, print 'Buzz'  
        else if ((i%5) == 0)                       
            cout<<"Buzz ";                 
     
        else // print the number            
           cout<<i<<" ";                 
    }
    return 0;
}
