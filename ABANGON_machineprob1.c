/*Instruction: Write the Student Record Program (name, q1,q2, q3,ave, remarks) using Global variables and User-Define Functions getRecord(), computeAVe(), and display().*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define p printf
#define s scanf

void getRecord();
void computeAve();
void display();

char name[MAX][50], remarks[MAX][50];
float q1[MAX], q2[MAX], q3[MAX], ave[MAX];
int studentNum, i;

int main()
{
    p("Enter the number of Students(maximum of 50 Students): ");
    s("%d", &studentNum);

    getRecord();
    computeAve();
    display();
    return 0;
}

void getRecord()
{
    for (i=0; i<studentNum; i++)
    {
        p("Student Name: ");
        s("%s", name[i]);

        p("Quiz 1 Score: ");
        s("%f", &q1[i]);
        p("Quiz 2 Score: ");
        s("%f", &q2[i]);
        p("Quiz 3 Score: ");
        s("%f", &q3[i]);
    }
}

void computeAve()
{
    for (i=0; i<studentNum; i++)
    {
        ave[i] =(q1[i]+q2[i]+q3[i])/3.0;

        if (ave[i] >=75)
        {
            strcpy(remarks[i], "PASSED");
        }
        else 
        {
            strcpy(remarks[i], "FAILED");
        }
    }
}

void display()
{
    system("cls");
    p("NAME\t\tQ1\tQ2\tQ3\tAVERAGE\tREMARKS\n");
    for(i=0; i<studentNum; i++)
    {
        p("%s\t\t%6.2f\t%6.2f\t%6.2f\t%6.2f\t%s\n",name[i],q1[i],q2[i],q3[i],ave[i],remarks[i]);
    }
}
