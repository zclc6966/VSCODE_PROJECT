#include<stdio.h>
#include<stdlib.h>
#include<claim.h>
#include<math.h>

int ReadStudentInfo(const char* filename, struct TableScore * pTableSc)
{
    int a,b,c,d,ret,count;
    char name[20],number[20];
    char line[256];
    typedef struct
    {
        char name[20];
        char StudentNumber[20];
        int  ExperimentGrade;
        int  MiddleGrade;
        int  FinalGrade;
        int  ProjectGrade;
        int  TotalGrade;
    } Student;
    Student stu[50];
    FILE *fp=fopen(filename,"r+");
    if(fp==NULL)
    {
        perror("fopen");
        return 0;
    }
    
    while(fgets(line,sizeof(line),fp)!=NULL)//fgets存数据，每行都是从line[0]重新开始存
    {
        line[strcspn(line,"\r\n")]='\0';
        if(line[0]=='\0')
        {
            continue;
        }
        ret=sscanf(line,"%s %s %d %d %d %d %d",name,number,&a,&b,&c,&d);
        if(ret!=6)
        {
            continue;
        }
        strcpy(stu[count].name,name);
        strcpy(stu[count].StudentNumber,number);//数组的赋值只能通过strcpy来
        stu[count].ExperimentGrade=a;
        stu[count].MiddleGrade=b;
        stu[count].FinalGrade=c;
        stu[count].ProjectGrade=d;
        stu[count].TotalGrade=(a*0.2+b*0.3+c*0.3+d*0.2+0.5);//加上0.5来实现四舍五入 

    }
    fclose(fp);
        return;
}