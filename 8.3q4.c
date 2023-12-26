#include<stdio.h>
main()
{
	int n,m;
	
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array size:");
	scanf("%d",&m);
	
	int i,j,a[n][m],b[n][m],c[n][m];
	printf("enter the value of array A element:\n");
	 
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++){
			
			printf("enter a[%d]",i);
			scanf("%d",&a[i][j]);
		}
		}
		
	printf("enter the value of array B element:\n");
	
	
	    for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++){ 
			printf("enter b[%d]",i);
			scanf("%d",&b[i][j]);
		}
		}	
		
		for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++){
			        c[i][j]=a[i][j]+b[i][j];
					printf("the sum of A and B element is:%d\n",c[i][j]); 
				}
	    }
	    
    
}
