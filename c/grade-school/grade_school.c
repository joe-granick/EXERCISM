#include "grade_school.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void init_roster(roster_t* roster){
  roster->count = 0;
  memset(roster->students, 0, MAX_STUDENTS * sizeof(student_t));
} 
bool add_student(roster_t* roster, char* name, uint8_t grade){
  if (roster->count == MAX_STUDENTS)
    return false; 
  student_t n_stu; 
  n_stu.grade = grade;
  strcpy(n_stu.name, name);
  (*roster).students[(*roster).count] = n_stu;
  (*roster).count++;
  return true;
}
roster_t get_grade(roster_t* roster, uint8_t grade){
  roster_t grade_roster;
  init_roster(&grade_roster);
  for(size_t i = 0; i < (*roster).count; i++)
  {if(roster->students[i].grade == grade) add_student(&grade_roster,roster->students[i].name, roster->students[i].grade);}
  return grade_roster;
}

roster_t* mSort(roster_t* roster)
{
  
}

void merge(int *arr, int *l_start, int *l_end int *r_start, int*,)
{

  int *temp = malloc()
}

void mergeSort(int* a, size_t l)
{
  if(l==1) return;
  mergesort(left);
  mergesort(right)
  merge();
}
