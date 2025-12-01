#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char name[50];
    char gen[10];
    int mark;
    printf("Please Enter Your name\n");
    scanf("%[^\n]s",name);
    getchar();
    printf("Hii");
    for(int i=0;name[i]!='\0';i++){
        printf("%c",toupper(name[i]));
    }
    printf(" 👋\n");
    printf("\nEnter Your Gender\n");
    scanf("%s",gen);
     for(int j=0;gen[j]!='\0';j++){
        gen[j]=tolower(gen[j]);
    }
    if(strcmp(gen,"male")==0)
    {
        printf("Enter Your Score\n");
        scanf("%d",&mark);
        if(mark >= 95 && mark<= 100)
        printf("YouR Scholarship Amount is ₹10k");
        else if(mark >= 90 && mark< 95)
        printf("YouR Scholarship Amount is ₹7k");
        else if(mark >= 85 && mark<90)
        printf("YouR Scholarship Amount is ₹5k");
        else if(mark >= 80 && mark<85)
        printf("YouR Scholarship Amount is ₹2k");
        else if(mark<80)
        printf("Sorry You Are Not Eligible For The scholarship");
        else
        printf("Invalid Input");

    }
    if(strcmp(gen,"female")==0)
    {
        printf("Enter Your Score\n");
        scanf("%d",&mark);
        if(mark >= 95 && mark<= 100)
        printf("YouR Scholarship Amount is ₹15k");
        else if(mark >= 90 && mark< 95)
        printf("YouR Scholarship Amount is ₹10k");
        else if(mark >= 85 && mark<90)
        printf("YouR Scholarship Amount is ₹8k");
        else if(mark >= 80 && mark<85)
        printf("YouR Scholarship Amount is ₹5k");
        else if(mark<80)
        printf("Sorry You Are Not Eligible For The scholarship");
        else
        printf("Invalid Input");

    }
    return 0;

}