#include<stdio.h>
#include<string.h>
struct sheet
{
    int rollno;
    char name[20];
    int marks[10];
    int total;
    float average;
    char rem[10];
    char cl[20];

} students[100];
int main()
{
    int a,b,n,flag=1;
    char ch;
    printf("how many students\n");
    scanf("%d",&n);
    for(a=1;a<=n;++a)
    {
        printf("enter the detail of the student no: %d\n",n-a);
        printf("Name?\n");
        scanf("%s",&students[a].name);
        printf("Roll No?\n");
        scanf("%d",&students[a].rollno);
        printf("Marks?\n");
        students[a].total=0;
        for(b=1;b<=5;++b)
        {
            printf("marks for subject of subject code %d\n",b);
            scanf("%d",&students[a].marks);
            students[a].total+=students[a].marks;
            if(students[a].marks[b]<40)
            flag=0; 
        }
        students[a].average= (float)students[a].total/5.0;
        if((students[a].average)>=75&&(flag=1))
        strcpy(students[a].cl,"Distiction");
        else
        if((students[a].average)>=65&&(flag=1))
        strcpy(students[a].cl,"first class");
        else
        if((students[a].average)>=55&&(flag=1))
        strcpy(students[a].cl,"second division");
        else
        if((students[a].average)>=45&&(flag=1))
        strcpy(students[a].cl,"third division");
        else
        strcpy(students[a].cl,"no division");
        if(flag==1)
        strcpy(students[a].rem,"Pass");
        else
        strcpy(students[a].rem,"Fail");
        flag=1;
    }
    for(a=1;a<=n;++a)
    {
        printf("\tname:%s \t rollno:%d\n",students[a].name,students[a].rollno);
        printf("\tclass:%s\t remarks:%s\n",students[a].cl,students[a].rem);
        printf("________-----------_________\n");
    }
    return 0;
}
