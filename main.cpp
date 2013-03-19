#include <iostream>

using namespace std;

int main()
{
   int a[10][10],b[10][10],c[10][10],m,n,o,p,i,j;
cout<<"Enter number of rows of A: ";
cin>>m;
cout<<"Enter number of coloumns of A: ";
cin>>n;
cout<<endl<<"Enter elements of matrix A: "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element a"<<i+1<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<"Enter number of rows of B: ";
cin>>o;
cout<<"Enter number of coloumns of B: ";
cin>>p;
cout<<endl<<"Enter elements of matrix B: "<<endl;
for(i=0;i<o;i++)
{
for(j=0;j<p;j++)
{
    cout<<"Enter element b"<<i+1<<j+1<<": ";
cin>>b[i][j];
}
}
cout<<endl<<"Displaying Matrix A: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<endl<<"Displaying Matrix B: "<<endl<<endl;
for(i=0;i<o;i++)
{
for(j=0;j<p;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl<<endl;
}
if(n==o)
{
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
c[i][j]=0;
for(int k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
cout<<endl<<"Matrix A * Matrix B = Matrix C: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl<<endl;
}
}
else
cout<<"Multiplication not possible";
    return 0;
}
