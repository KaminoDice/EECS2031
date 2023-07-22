#include <stdio.h>
#include <string.h>

#include "Student.h"

/* Type your code here */
Student InitStudent() {
    Student s;
    strcpy(s.name, "Louie");
    s.gpa = 1.0;
    return s;
}

Student SetName(char *name, Student s) {
    strcpy(s.name, name);
    return s;
}
Student SetGPA(double gpa, Student s) {
    s.gpa = gpa;
    return s;
}

void GetName(char* studentName, Student s) {
    strcpy(studentName, s.name);
}

double GetGPA(Student s) {
    return s.gpa;
}