#include <stdio.h>
#include <stdlib.h>
#define STD 5

typedef struct Student{
    char id[6];
	char name[20];
	double score;
}Student;

void input(Student*);
void output(Student*);
Student NO1(Student*);
void Fail(Student*,Student*);
int failnum=0;

int main(void){
	Student std[6];

	input(std);
	output(std);

	return 0;
}

void input(Student* std){
	for(int i=1;i<=STD;i++){
		printf("Please input No.%d student's ID:",i);
		scanf("%s",std[i].id);
		printf("Please input No.%d student's Name:",i);
		scanf("%s",std[i].name);
		printf("Please input No.%d student's score:",i);
		scanf("%lf",&std[i].score);
		printf("\n");
	}
}

void output(Student* std){
	Student failarray[6];
	for(int i = 0 ; i < 6 ; i++)
        failarray[i].score = (double)0;
	for(int i=1;i<=STD;i++){
		printf("Student %d\n",i);
		printf("%-7s %s","ID:\n",std[i].id);
		printf("%-7s %s","Name:\n",std[i].name);
		printf("%-7s %f","Score:\n\n",std[i].score);
	}
	for(int i=1;i<=STD;i++)
		if(std[i].score<60)
			failarray[i].score++;
	NO1(std);
	Fail(std,failarray);
}

Student NO1(Student* std){
	int max=std[1].score,j;
	for(int i=1;i<=STD;i++)
		if(std[i].score>max){
			max=std[i].score;
			j=i;
		}
	printf("\n%s get No.1 in this exam\n",std[j].name);
}

void Fail(Student* std,Student* failarray){
	printf("Fail Student:\n");
	for(int i=1;i<=STD;i++)
		if(failarray[i].score)
			printf("%s\n",std[i].name);
}
