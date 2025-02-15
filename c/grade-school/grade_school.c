#include "grade_school.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void init_roster(roster_t* roster){
  roster = malloc(sizeof(roster_t));
  (*roster).count = 0;
} 
void add_student(roster_t* roster, char* name, uint8_t grade){
  student_t n_stu; 
  n_stu.grade = grade;
  strcpy(n_stu.name, name);
  (*roster).students[(*roster).count] = n_stu;
  (*roster).count++; 
  
}
roster_t get_grade(roster_t* roster, uint8_t grade){
  roster_t grade_roster;
  init_roster(&grade_roster);
  for(size_t i = 0; i < (*roster).count; i++)
  {if(roster->students[i].grade == grade) add_student(&grade_roster,roster->students[i].name, grade);}
  return grade_roster;
}
