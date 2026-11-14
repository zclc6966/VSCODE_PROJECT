#include<stdio.h>
struct Person{
    int age;
    int height;
};
void swap(Person *array,int n)
{
    if(array==NULL||n<1)
    {
        printf("error");
        return;
    }
    int term;
    term=array[0].height;
    array[0].height=array[n-1].height;
    array[n-1].height=term;
    return;
}