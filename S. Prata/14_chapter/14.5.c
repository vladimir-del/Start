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
    char SecondName[MAXNAME];
};

struct student {
    struct name name;
    float grade[3];
    float AverageGrade;
};


int main(void)
{
	struct student CSIZE[4] = 
    { 
        {"Vladimir", "Draga"},
        {"Viktor", "Ivanov"},
        {"Ivan", "Petriv"},
        {"Oleg", "Sidorov"},
};
	
	
	return 0;
}