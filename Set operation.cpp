#include<stdio.h>
int accept(int *p);
int display(int *p, int n);
int union_(int a[],int b[],int c[]);
int intersec(int a[],int b[],int inter[]);
int differ(int a[],int b[],int dif[]);
int sym_dif(int a[],int b[],int s_dif[]);
int main()
{
    int a[5],b[5],uni[10],n,m,o,choice,inter[10],rec;
    int d,dif[10],s_dif[10];
    
    printf("Enter element of A:");
    accept(a);
    printf("Enter element of B:");
    accept(b);
    printf("\nA=");
    display(a,5);
    printf("\nB=");
    display(b,5);
    label:
    printf("\nEnter your choice:\n 1.union \n 2.intersectin \n 3.Difference \n 4.Symmetric difference of two sets\n ");
    scanf("\n%d",&choice);
   switch(choice)
    {
        case 1:printf("\n*****Union of A & B:*****\n");
               n=union_(a,b,uni);
              break;
        case 2:printf("\n*****Intersection of A & B:*****\n");
         m=intersec(a,b,inter);
              break;
        case 3:printf("\n*****Difference of A-B:*****\n");
        d=differ(a,b,dif);;
        break;
        case 4:printf("\n*****Symetric Differnce of sets*****\n");
        o=sym_dif(a,b,s_dif);
        break;
        default:printf("\nEnvalid Entry pleace cheak again \nThank You");
        
              
    }
    printf("\n\nIf u want to recheak '1' else to exit '0': ");
    scanf("%d",&rec);
    if(rec==1)
    {
        goto label;
    }
    else
    {
        printf("\n******Thank You********");
    }
}

int accept(int *p)
{
   for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
   return 0; 
}

int display(int *p,int n)
{printf("{");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("}");
    return 0;
}
int union_(int a[],int b[],int c[])
{
   int i,j,k=0;
   for(i=0;i<5;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
    
   for(i=0;i<5;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }

  
  
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    return 0;
 }

int intersec(int a[],int b[],int inter[])
{
    int i=0,j=0,k=0;
    while(i<5 && j<5)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<a[i])
        {
            j++;
        }
        else
        {
            inter[k]=a[i];
            printf("%d ",inter[k]); 
            k++;
           i++;
            j++;
             
            
        }
        
          
        
    }
    
    return 0;
}


int differ(int a[],int b[],int dif[])
{
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
         }
            if(j==5)
            {
                dif[k]=a[i];
                printf("%d ",dif[k]);
            
           }
        
    }
   return 0; 
}



int sym_dif(int a[],int b[],int s_dif[])

{// set A-B
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
         }
            if(j==5)
            {
                s_dif[k]=a[i];
               printf("%d ",s_dif[k]);
            }
       }
    
    //set B-A
   
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
         }
            if(j==5)
            {
                s_dif[k]=b[i];
                printf("%d ",s_dif[k]);
             }
        }
    
 
    
   return 0;
}
