#include <stdio.h>
typedef struct student
{
    int num;
    char name[20];
    int mic, lin, pro;
    int tot;
    double avg;
    char grade;
}Student;

void input_data(Student *pary);
void calc_data(Student *pary);
void print_data(Student *pary);

int main(void){
    Student ary[5];
    input_data(ary);
    calc_data(ary);
    printf("결과값은?\n");
    print_data(ary);    
    return 0;
}