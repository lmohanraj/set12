 #include<stdio.h>
 int main()
 {
 	int n,k,a[10],c=0,i;
 	printf("no of elements\n");
 	scanf("%d",&n);
 	printf("enter the elements\n");
 	for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            printf("enter element to search\n");
            scanf("%d",&k);
           	for(i=0;i<n;i++)
           	{
           		if(a[i]==k)
           		c++;
           	}
            printf("no of repetitions=%d",c);
            return 0;
  }
