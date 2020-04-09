#include<stdio.h> 
int main (void)
{int m,k,n;
    scanf("%d",&m);
    for(k=0;k<m;k++)
    {   
	scanf("%d",&n);
    if(n<=1)
        printf("Input Error\n");
    else
    {int i,j,a=1;
    if (n>546)
    printf("Overflow\n");
    else{
	    for(j=2;j<=n;j++)
	    {   
		    for(i=2;i<j;i++)
	        {   
			    a=j%i;
	            if(a==0)
	            break;
	        }
	        if(a!=0)
	            printf("%d,",j);
	        if(j==n)
	        
		        printf("\n");

	    }
	    }
	    }
   
       
    } 
return 0;
}
