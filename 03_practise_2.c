#include<stdio.h>
int main()
{
int phy, chem, maths;
float total;
{
printf("Enter phy Marks\n");
}
scanf("%d",&phy);
{
printf("Enter chem Marks\n");
}
scanf("%d",&chem);
{
printf("Enter maths Marks\n");
}
scanf("%d",&maths);

total=(phy+maths+chem)/3;
if((total<40)||phy<33||maths<33||chem<33)
{
    printf("Your total percentage is %f and you are fail\n",total);
}
else{
    printf("Your total percentage is %f and you are pass\n",total);
}

//else
//{printf("Pass");}

    return 0;
}