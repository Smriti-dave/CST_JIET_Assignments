//2. DELETE DUPLICATE NUMBER
#include<stdio.h>
main()
{
    int i,j,n,size,k;
    size=13; 
    int ary[13]={1,2,3,3,4,5,6,7,7,2,8,9,0};
    for(i=0;i<=size;i++)
    {
        for(j=i+1;j<=size;j++)
        {
            if(ary[i]==ary[j])
            {
                for(k=j;k<size;k++)
                {
                    ary[k]=ary[k+1];
                }
            size--;
            j--;
            }
        
        }
        
    }
    for(i=0;i<=size;i++)
    {
        printf("%d\t",ary[i]);
    }
}

