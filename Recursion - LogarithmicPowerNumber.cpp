
#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n)
{
    // write your code here
    if (n==0){
        return 1;
    }
    if(n%2==0)
    {
        return  powerLogarithmic(x,n/2)*powerLogarithmic(x,n/2);    
    }

    else{
        
        return  powerLogarithmic(x,n/2)*powerLogarithmic(x,n/2)*x;   
    }
}

int main()
{
    int n,x; 
    cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}
