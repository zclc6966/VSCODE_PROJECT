#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STU_PER_CLASS 50     // 每个行政班最多 50 人
#define MAX_ADMIN_PER_TEACH 20   // 一个教学班最多 20 个行政班
#define MAX_TOTAL_STU (MAX_STU_PER_CLASS * MAX_ADMIN_PER_TEACH)

/*学生信息结构体，包含 名字 学号 实验成绩 期中成绩 期末成绩 项目成绩 总成绩 */
/* 单个学生 */
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

/* 行政班：有班号、有学生，没有教师 */
typedef struct
{
    char    class_id[20];              // 班号，如 "2026010915"；无则 ""
    Student stu[MAX_STU_PER_CLASS];    // 本班学生
    int     stu_count;                 // 本班实际人数
} AdminClass;

/* 教学班：有教师、挂若干行政班，没有班号 */
typedef struct
{
    char       teacher[20];            // 任课教师；无则 ""
    AdminClass admin[MAX_ADMIN_PER_TEACH];  // 内嵌，不用 malloc
    int        admin_count;            // 实际行政班个数
} TableScore;
