#include<iostream>
using namespace std;
void fabonacii()
{
	int n,t1=0,t2=1,nextterm=0,i;
	cout<<"Enter the no. of terms:";
	cin>>n;
	for(i=1;i<n;i++)
	{
	if(i==1)
	{
		cout<<" "<<t1;
		continue;
	}
	if(i==2)
	{	
	cout<<t2<<" ";
	}
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;
	cout<<nextterm<<" ";
	}
}
	void factorial()
{
		int n,i,fact=1;
	cout<<"Enter the number:";
	cin>>n;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<"factorial is  "<<fact;
}
	void power()
{
		int n,m,i;
	cout<<"enter the base ";
	cin>>m;
	cout<<"enter the power ";
	cin>>n;
	int p=m;
	for(i=2;i<=n;i++)
	{
		p*=m;
	}
	cout<<"the value of "<<m<<" raised  to power "<<n<<" is "<<p;
}

	int GCD(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
	int fabonacii(int n)
{
	if((n==1)||(n==0))
    {
    	return(n);
    }
	else
	{
		return(fabonacii(n-1)+fabonacii(n-2));
	 } 
}
	int factorial(int n)
{
		if(n>1)
		return n*factorial(n-1);
	else
		return 1;
		
}
	int power(int base,int powerraise)
{
	if(powerraise!=0)
		return(base*power(base,powerraise-1));
	else
		return 1;	
}

	int GCDrecursion(int a,int b)
{
	if (b == 0) 
    return a; 
    else
	return GCD(b, a % b); 
}
	
	int main()
{
	int a;int b;
	int n,result;
	char ch;
	do{
		cout<<"Enter 1 to calculate GCD with recursion: ";
		cout<<"\nEnter 2 to calculate GCD without recursion:";
		cout<<"\nEnter 3 to calculate fabonacii:";
		cout<<"\nEnter 4 to calculate fabonacii without recursion:";
		cout<<"\nEnter 5 to calculate power:";
		cout<<"\nEnter 6 to calculate power without recursion:";
		cout<<"\nEnter 7 to calculate factorial:";
		cout<<"\nEnter 8 to calculate factorial without recursion:";
			cout<<"\nEnter Your Choice : ";
			cin>>n;
			cout<<"\n";
	switch(n){
		case 1 : 	
					cout<<"Enter the numbers:";
					cin>>a>>b;
					cout<<GCDrecursion(a,b);
					break;
				
		case 2 : 	
					cout<<"\nEnter numbers:";
					cin>>a>>b;
					cout<<GCD(a,b);
					break;
		case 3 : 	
					cout<<"\nEnter the number:";
					cout<<fabonacii(a);
					break;
		case 4 : 
					
					fabonacii();
					break;
		case 5 : 
					cout<<"\nEnter the number:";
					cin>>a>>b;
					cout<<power(a,b);
					break;
		case 6 : 	
					power();
		        	 break;
		case 7 :
					
					cout<<"\nEnter the number:";
					cin>>a;
					cout<<factorial(a);
				 	break;
		case 8 : 	factorial();
				 	break;		         
	}
	cout<<"\n want to enter more(y/n) :";
	cin>>ch;
  }while(ch!='n');
	return 0;
	}
	

