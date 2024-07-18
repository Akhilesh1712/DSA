//recursion
#include <iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//factorial of a number
/*int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*fact(n-1);
 } 
int main() {
    
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;
    cout<<fact(n);

    return 0;
}*/
//fibonacii series
/*int fibo(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	return fibo(n-1) + fibo(n-2);
}
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<fibo(n);
	return 0;
}*/
//step problem(2 step ya 1)
/*int step(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n<0)
	{
		return 0;
	}
	int ans= step(n-1) + step(n-2);
	return ans;
}
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<step(n);
	return 0;
}*/
//check if array is sorted or not
/*bool sort(int a[],int n)
{
	if(n==1)
	{
		return true;
	}
	bool res=sort(a+1,n-1);
	return (a[0]<a[1] && res);
}
int main()
{
	int a[]={1,2,4,5,6};
	cout<<sort(a,5);
	return 0;
}*/
//print the number in inc or dec ord
//dec
/*void dec(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<endl;
	dec(n-1);
}
int main()
{ 
   int n;
   cout<<"enter"<<endl;
   cin>>n;
   dec(n);
   return 0;
}*/
//inc
/*void inc(int n)
{
	if(n==0)
	{
		return;
	}
	inc(n-1);
	cout<<n<<endl;
}
int main()
{ 
   int n;
   cout<<"enter"<<endl;
   cin>>n;
   inc(n);
   return 0;
}*/
//find the first occurence and last occurence of num in array
/*int first(int a[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key)
	{
		return i;
	}
	return first(a,n,i+1,key);
	
}
int last(int a[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
    }
    int res=last(a,n,i+1,key);
    if(res!=-1)
    {
    	return res;
	}
    if(a[i]==key)
    {
    	return i;
	}
	return -1;
}
int main()
{
	int a[]={1,2,4,5,6,2,8,6,7,2,7,54,2,44};
	cout<<first(a,14,0,2)<<endl;
	cout<<last(a,14,0,2);
	return 0;
}*/
//replace pi by 3.14 in the string
/*void rep(string s)
{
	if(s.length()==0)
	{
		return ;
	}
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.14";
		rep(s.substr(2));
	}
	else
	{
		cout<<s[0];
		rep(s.substr(1));
	}
}
int main()
{
	rep("pippxtpix11mpixpi");
	return 0;
}*/
//removing all the duplicate 
/*string removedp(string s)
{
	if(s.length()==0){
		return " " ;
	}
	char ch=s[0];
	string ans=removedp(s.substr(1));
	if(ch==ans[0])
	{
		return ans;
	}
	return ch + ans;
}
int main()
{
	cout<<removedp("aaaaaaaabbbbbbgggghhhhrrrrrjjjkk");
	return 0;
}*/
//move all x to the last in the string
/*string movex(string s)
{
	if(s.length()==0){
		return " " ;
	}
	char ch=s[0];
	string ans=movex(s.substr(1));
	if(ch=='x')
	{
		return ans + ch;
	}
	return ch + ans;
}
int main()
{
	cout<<movex("kshkjhxjksfhxhxxxakjhfdhxxxkjsahxxksjhjkx");
	return 0;
}*/
//printing the substring
/*void sub(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return ;
	}
	char ch=s[0];
	string res=s.substr(1);
	sub(res,ans);
	sub(res,ans + ch);
}
int main()
{ 
   sub("abv"," ");
   return 0;
}*/
// programme spelling the digits
/*string digit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void digi(int n,string a[])
{
	if(n==0)
	{
		return;
    }
    int digit=n%10;
    n=n/10;
    digi(n,a);
    cout<<a[digit];
}
int main()
{
	int n;
	cin>>n;
	digi(n,digit);
	return 0;
}*/
//0-1 knapsack
/*int kap(int value[],int wt[],int n,int w)
{
	if(n==0||w==0)
	{  
	    return 0;
	}
	if(wt[n-1]>w)
	{
		return kap(value,wt,n-1,w);
    }
	return max(kap(value,wt,n-1,w-wt[n-1]) + value[n-1],kap(value,wt,n-1,w));	
}
int main()
{
	int wt[]={10,20,30};
	int value[]={100,50,150};
	int w=50;
	cout<<kap(value,wt,3,w);
	return 0;
}*/
//josep problem
/*int josep(int n,int k)
{
	if(n==0)
	{
		return 0;
	}
	return (josep(n-1,k)+k)%n;
}
int main()
{
	int n,k;
	cout<<"enter the no of participate"<<endl;
	cin>>n;
	cout<<"enter to skip time"<<endl;
	cin>>k;
	cout<<josep(n,k);
	return 0;
}*/



