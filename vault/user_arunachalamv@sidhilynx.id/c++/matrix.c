#include <stdio.h>
int main()
{
   int n,m,i,j;
   printf("enter the values of n and m:");
   scanf("%d%d",&n,&m);
   int arr1[n][m],arr2[n][m],add[n][m];
    
   printf("enter the number for the matrix 1:");
    
      for(i=0;i<n;i++)
    {
           for(j=0;j<m;j++)
              {
                   scanf("%d",&arr1[i][j]);
              }
    }

  printf("enter the numbers for the matrix 2:");
        for(i=0;i<n;i++)
           {
             for(j=0;j<m;j++)
                {
                scanf("%d",&arr2[i][j]);
                }
           }

      printf("the addition of two matrix arr1 and arr2:\n{\n");
        for(i=0;i<n;i++)
          {
                for(j=0;j<n;j++)
                  {
                    add[i][j]=arr1[i][j]+arr2[i][j];
                    printf("%d\t",add[i][j]);
                  }
             printf("\n");
               
}
   
    printf("}\n");
return 0;
}