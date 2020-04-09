#include<stdio.h> 
int main ()
{   
    int x,k;
	scanf("%d",&x);
	for(k=0;k<x;k++)
	{
        int a[3][3],b[3][3],c[3][3];
	    int i=0,j=0;
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
		        scanf("%d",&a[i][j]);
		    }
	    }
	    i=0,j=0;
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
		        scanf("%d",&b[i][j]);
		    }
	    }
	    i=0,j=0;
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
		    	c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
			}
	    }
	    i=0,j=0;
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
		    	printf("%d ",c[i][j]);
		    	if(j==2)
		    	printf("\n");
		    }
		    
		}
	}
	return 0;
}
       
	
