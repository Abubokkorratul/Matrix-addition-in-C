#include <stdio.h>

int main(){


 int i,j,n1,n2,sum=0;
 int ext;

 do{
      printf("Enter The [a]:");
      scanf("%d",&n1);

      printf("Enter The [b]:");
      scanf("%d",&n2);

 int arr1[n1][n2]={};
 int arr2[n1][n2]={};

      printf("\nEnter The Value for [%d]*[%d] Matrix1:\n\n",n1,n2);

      for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                  printf("Value For a[%d]*[%d]:",i+1,j+1);
                  scanf("%d",&arr1[i][j]);
            }
      printf("\n");
      }

      printf("\nYour Value of Matrix 1:\n");

      for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                 printf("%5d",arr1[i][j]);
            }
      printf("\n");
      }

       printf("\nEnter The Value for [%d]*[%d] Matrix2:\n\n",n1,n2);

      for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                  printf("Value For a[%d][%d]:",i+1,j+1);
                  scanf("%d",&arr2[i][j]);
            }
      printf("\n");
      }

      printf("Your Value of Matrix 2:\n");

      for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                 printf("%5d",arr2[i][j]);
            }
      printf("\n");
      }

      printf("\n\nThe Sum Of The Matrix is:\n");
      for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                  sum=arr1[i][j]+arr2[i][j];
                  printf("%5d",sum);
            }
            printf("\n");
      }

      printf("\nDo you want calculate again?:\n1.(Yes)\n2.(No)\n");
      scanf("%d",&ext);
      if(ext==2)
      return 0;

}while(ext==1);

}

