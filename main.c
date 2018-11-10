#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,swap,n,a[20],freq=1;
   printf("enter size of array a");
   scanf("%d",&n);
    printf("enter the elements of array a");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("sorted array is\n");
   for(j=0;j<n-1;j++)
   {
       for(i=0;i<n-1;i++)
       {
           if(a[i]>a[i+1])
           {
               swap=a[i];
               a[i]=a[i+1];
               a[i+1]=swap;
                    }
       }
   }
   for(i=0;i<n;i++)
   {printf("%d",a[i]);
 }
   for(i=0;i<n;i++)
   {freq=1;
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
          freq++;
}

printf("freq of %d is %d\n",a[i],freq);
 if(freq>1)
{i=i+freq-1;}
}
        return 0;
}
