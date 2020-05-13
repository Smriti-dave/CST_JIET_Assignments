//3. MAXIMUM HIGHT OF STAIRS
#include<stdio.h>
main()
{
    int blocks=20;
    int stairs=0;
    while(blocks!=0)
    {
        if(stairs+1<= blocks)
        {
            stairs++;
            blocks=blocks-stairs;
        }
        else
        {
            break;
        }   
    }
    printf("no of stairs are %d",stairs);
}
