//PUTERA NAQIB KHUSAIRI - CB24019
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char StudentMajor[250] , CourseLevel[250];
    int NumberOfCredit;
    float price;

    printf("Please Insert Your Major:");
    gets(StudentMajor);
    printf("Please Insert Your Course Level:");
    gets(CourseLevel);
    printf("Please Insert Your Number Of Credit:");
    scanf("%d",&NumberOfCredit);
    getchar();
    if(strcmp(StudentMajor,"science, technology, engineering or math (STEM)")==0)
    {
        if(strcmp(CourseLevel,"undergraduate")==0)
        {
            if(NumberOfCredit <= 15)
            {
                price = 50;
            }
            else if(NumberOfCredit > 15)
            {
                price = 50 + 70;
            }
        }
        else if(strcmp(CourseLevel,"graduate")==0)
        {
            if(NumberOfCredit <= 12)
            {
                price = 100;
            }
            else if(NumberOfCredit > 12)
            {
                price = 100 + 120;
            }
        }
    }
    else
    {
        if(strcmp(CourseLevel,"undergraduate")==0)
        {
            if(NumberOfCredit <= 15)
            {
                price = 40;
            }
            else if(NumberOfCredit > 15)
            {
                price = 40 + 60;
            }
        }
        else if(strcmp(CourseLevel,"graduate")==0)
        {
            if(NumberOfCredit <= 12)
            {
                price = 80;
            }
            else if(NumberOfCredit > 12)
            {
                price = 80 + 100;
            }
        }
    }
    printf("\n---------------------------------");
    printf("\nYour Major:");
    puts(StudentMajor);
    printf("Your Course Level:");
    puts(CourseLevel);
    printf("Your Number Of Credit:%d",NumberOfCredit);
    printf("\n---------------------------------\n");
    printf("Your Registration Fee: $%.2f",price);
    return 0;
}
