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
roster_t* get_grade(roster_t* roster, uint8_t grade){
  size_t count = 0;
  for(size_t i = 0; i < roster->count; i++)
  {if(roster->students[i].grade == grade) count++;}
  student_t* stu[count];
  for(size_t i = 0, j = 0; i < count; i++)
  {if((*roster).students[i].grade == grade) stu[j] = roster->students[i]; j++;}
  return (roster_t) {count, stu}
}
