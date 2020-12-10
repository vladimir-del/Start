/*-------------------------------------------------
//Date: 06.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 5
//-------------------------------------------------
/* 
Text programmming exersice.
5. Write a program that fits the following recipe:
a. Externally define a name structure template with two members: a string to hold the
first name and a string to hold the second name.
b. Externally define a student structure template with three members: a name
structure, a grade array to hold three floating-point scores, and a variable to hold
the average of those three scores.
c. Have the main() function declare an array of CSIZE (with CSIZE = 4 ) student
structures and initialize the name portions to names of your choice. Use functions
to perform the tasks described in parts d., e., f., and g.
d. Interactively acquire scores for each student by prompting the user with a student
name and a request for scores. Place the scores in the grade array portion of the
appropriate structure. The required looping can be done in main() or in the
function, as you prefer.
e. Calculate the average score value for each structure and assign it to the proper
member.
f. Print the information in each structure.
g. Print the class average for each of the numeric structure members.
*/

#include <stdio.h>
#include <string.h>

#define MAXNAME 40

struct name {
    char FirstName[MAXNAME];
    char LastName[MAXNAME];
};

struct student {
    struct name name;
    float grade[3];
    float AverageGrade;
};

int getname(struct student *);
void inputgrades(struct student *);
void printstruct(const struct student *, int n);
void averagegrade(struct student *);

int main(void)
{
	struct student CSIZE[4] = 
    { 
        {"Vladimir", "Draga"},
        {"Viktor", "Ivanov"},
        {"Ivan", "Petriv"},
        {"Oleg", "Sidorov"},
};


printstruct(CSIZE, 4);

inputgrades(CSIZE);

printstruct(CSIZE, 4);


	return 0;
}

void printstruct(const struct student *s, int n)
{
    puts("Your class and grade");
    for (int i = 0; i < n; i++)
    {
    printf("Name Student:%s %s\n", (s+i)->name.FirstName, (s+i)->name.LastName);
    printf("His grades:%0.2f, %0.2f, %0.2f\n", (s+i)->grade[0],(s+i)->grade[1], (s+i)->grade[2]);
    printf("His averagegrade = %.2f\n", (s + i)->AverageGrade);
	puts("");
    }
}


int getname(struct student *s)
{
    int i = 0;
    char inputname[MAXNAME];
    printf("Enter student`s Lastname:");
    //fgets(inputname, MAXNAME, stdin);
    //s_gets(inputname, MAXNAME);
    scanf("%s", inputname);
    for (; i < 4; i++)
    {
        if (strcmp(inputname, (s + i)->name.LastName) == 0)
        {
            return i;
        }   
    }
    return -1;
}

void inputgrades(struct student *s)
{
    int n = getname(s);
	if (n == -1)
    return;
	printf("input three grades:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("Grade %d = ",i);
		scanf("%f", &(s + n)->grade[i]);
	}
	averagegrade(s);
}

void averagegrade(struct student *s)
{
	float temp[4] = {0};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0 ; j < 3; j++)
			temp[i] += (s + i)->grade[j];
	(s + i)->AverageGrade = temp[i]/3;
	}
}
