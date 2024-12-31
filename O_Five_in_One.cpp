#include<iostream>
using namespace std;
int numberOfPalindrome(int n[],int s)//function that calaulate number of palindrome numbers.
{
    int c =0;
    for (int i=0;i<s;i++)
    { 
        int rev=0;
        int n2=n[i];
        while(n2!=0 )
    	{
		    rev = rev*10 + n[i]%10;
            n2 = n2/10;
        }
        if(rev==n[i])
             c++;
    }
    return c;
}
int maximum (int n[], int s)
{ 
    int max=n[0];
    for(int i=1;i<s;i++)
        if(n[i]>max)
            max=n[i];
    return max;
}
 int minimum (int n[], int s)
 {
    int min=n[0];
    for(int i=1;i<s;i++)
        if(n[i]<min)
            min=n[i];
    return min;
 }
int numberOfPrime(int n[], int s)
{
    int c=0;
    for(int i=0;i<s;i++)
    {
    	bool isprime=true;
        if (n[i]<=1)
        continue;
        
        for (int j = 2; j < n[i]; j++)
        {
            if (n[i] % j == 0){
              isprime=false;
              break;
            }
            

            
        }
        if (isprime==true)
        c++; 
  
   }
	
    return c;
}




int maxDivisors(int n[], int s)
{
    int max=0,maxdiv=0;
    for(int i=0;i<s;i++)
    {
        int c=0;
        for(int j=2;j<n[i];j++)
        {
            if(n[i]%j==0)
                c++;
            if(c>max )
            {
                max=c;
                maxdiv=n[i];
            }
            else if(maxdiv< n[i] && c==max)
                maxdiv=n[i]; 
                        
        }
    }
    return maxdiv;
}


int main()
{
    int s;
    cin >> s;
    int n[s];
    for(int i=0;i<s;i++)
        cin >> n[i];
    cout<< "The maximum number : " << maximum (n,s)<<endl;
    cout<< "The minimum number : " << minimum (n,s)<<endl;
    cout<< "The number of prime numbers : " << numberOfPrime(n,s)<<endl;
    cout<< "The number of palindrome numbers : " << numberOfPalindrome(n,s)<<endl;
    cout<< "The number that has the maximum number of divisors : " << maxDivisors(n,s)<<endl;
    return 0;
}
