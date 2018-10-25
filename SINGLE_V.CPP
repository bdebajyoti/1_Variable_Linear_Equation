#include<iostream.h>
#include<conio.h>
#include<string.h>
/*
Thank You For Your Guys,
Single Variable Linear Equation :-
--------------------------------
ax+b=c
x=(c-b)/a
where
a,b and c are the coefficients and constants of the equations
let for example,
3x+9=18
=>x=(18-9)/3
=>x=3
**This program is valid for those equation which folowed the above directional rule
the modified version will be uploaded soon.
*/
void sol(int a[3],char x,char y,int j);
void main()
{
char e[30],t1,t2='0';
int a[10];
int l,i,j=0,x;
clrscr();
cout<<"\nEnter The Equation:";
cin>>e;
l=strlen(e);
for(i=0;i<l;i++)
{
if(e[i]=='=')
{
if(e[i+1]=='-')
t2=e[i+1];
}
if(e[i]=='+' || e[i]=='-'|| e[i]=='/'|| e[i]=='*')
t1=e[i];
if(e[i]>='1' && e[i]<='9')
{
if((e[i+1]>='1' && e[i+1]<='9') && i+1<l)
{
a[j]=e[i]-'0';
a[j]=a[j]*10+e[i+1]-'0';
++i;
j++;
}
else
{
a[j]=e[i]-'0';
j++;
}
}
}
cout<<"\nEntered Equation Is:"<<e;
cout<<"\nNumber Generated are:";
for(i=0;i<j;i++)
cout<<a[i]<<endl;
sol(a,t1,t2,j);
getch();
}
void sol(int a[3],char x,char y,int j)
{
int x1;
switch(x)
{
case '+':if(y=='-')
	x1=(-a[j-1]-a[j-2])/a[j-3];
	else
	x1=(a[j-1]-a[j-2])/a[j-3];
	break;
case '-':if(y=='-')
	x1=(-a[j-1]+a[j-2])/a[j-3];
	else
	x1=(a[j-1]+a[j-2])/a[j-3];
	break;
}
cout<<"\nThus, The Value Of X Is:"<<x1;
}
