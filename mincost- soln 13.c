#include<stdio.h>
#include<stdlib.h>
int mincost(int n,int m,int a[n+2][m+2])
{
	int sum=99999,t,i,j;
	for( i=1;i<n+1;i++)
	{
		for( j=1;j<m+1;j++)
		{
			t=a[i][j];
			if(a[i-1][j]<0)
			t+=a[i-1][j];
			if(a[i+1][j]<0)
			t+=a[i+1][j];
			if(a[i][j-1]<0)
			t+=a[i][j-1];
			if(a[i][j+1]<0)
			t+=a[i][j+1];
			
			if(t<sum)
			sum=t;
		}
		
	}
	return sum;
}
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int a[n+2][m+2];
	
	for( i=0;i<n+2;i++)
	{
		for( j=0;j<m+2;j++)
		{
		    if(i==0||i==n+1||j==0||j==m+1)
		    a[i][j]=0;
		    
			
		else
			scanf("%d",&a[i][j]);
		}
	}
	
	int c=mincost(n,m,a);
	printf("%d",c);
	

	return 0;
}
