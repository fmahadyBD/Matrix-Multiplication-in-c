#include <stdio.h>    
int main ()    
{    
    int a[10][310];
    int b[10][10];
    int i,j,k,sum=0,result[10][10],c,r,c1,r1;
    
    
    printf("Eikhane eto boro kn?\n\n");
    printf("Matrix multiplication  (😑)  \n\n");  
   
    
    printf("enter the r 1st Metrix's  number of row=");    
    scanf("%d",&r);
    
    printf("enter the r 1st Metrix's  number of column=");    
    scanf("%d",&c);  
    
    printf("enter the first matrix element=\n");    
            for(i=0;i<r;i++)    
{    
   
            for(j=0;j<c;j++)    
{    
    printf("enter the  element of %d  %d=\n",i,j); 
    scanf("%d",&a[i][j]);    
}    
}    

    printf("\n\nenter the 2nd Metrix's  number of row=");    
    scanf("%d",&r1);    
    printf("enter the 2nd Metrix's  number of column=");    
    scanf("%d",&c1);    
  
    printf("enter the 2nd matrix element=\n");    
            for(i=0;i<r1;i++)    
{    
            for(j=0;j<c1;j++)    
{    
    printf("enter the  element of %d  %d=\n",i,j); 
    scanf("%d",&b[i][j]);    
}    
} 

    printf("\n printing 1st the elements \n");     
            for(i=0;i<r;i++)    
    {    
        printf("\n");    
            for (j=0;j<c;j++)    
        {    
            printf("%d\t",a[i][j]);    
        }  

    printf("\n");   
    
} 
    printf("\n printing the 2nd elements \n");     
         for(i=0;i<r1;i++)    
    {    
        printf("\n");    
        for (j=0;j<c1;j++)    
        {    
            printf("%d\t",b[i][j]);    
        }  

    printf("\n");   
    
} 
if(c==r1){
for(i=0;i<r;i++)    
    {    
          
        for (j=0;j<c1;j++)    
        {    
          for (k=0;k<r1;k++)    
        {    
              sum=sum+a[i][k]*b[k][j];
              result[i][j]=sum;
              sum=0;
        }    
        }  

    
} 

 printf("\n printing Matrix multiplication\n");     
         for(i=0;i<r1;i++)    
    {    
        printf("\n");    
        for (j=0;j<c1;j++)    
        {    
            printf("%d\t",result[i][j]);    
        }  

    printf("\n");   
    
} 
}


else{
    printf("\n Sorry man! It can't multiplication\n");
    printf("\n Because  1st metrix's comulms number is not equal to 2nd matrix's rows\n");
}

return 0; 
    
    
}
