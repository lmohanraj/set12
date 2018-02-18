 #include<stdio.h>
 int main()
 {
 	int n,k,a[10],j,t,i;
 	printf("no of elements\n");
 	scanf("%d",&n);
 	printf("enter the elements\n");
 	for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            printf("enter element to search\n");
            scanf("%d",&k);
           	for(i=0;i<n;i++)
           	{
           	     for(j=0;j<n;j++)
           	         {
           		if(a[i]<a[j])
           		{
           			t=a[i];
           			a[i]=a[j];
           			a[j]=t;
           		}
           	         }
           	}printf("the element is %d",a[k-1]);
            return 0;
  }
