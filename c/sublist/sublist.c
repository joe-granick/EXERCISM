#include "sublist.h"
comparison_result_t check_lists(int *list_to_compare, int *base_list,size_t list_to_compare_element_count,size_t base_list_element_count){

  if(list_to_compare_element_count == 0 && base_list_element_count == 0) return EQUAL;
  size_t list_pointer = 0, base_pointer = 0;
  if(list_to_compare_element_count > base_list_element_count)
  {
    if(base_list_element_count == 0) return SUPERLIST;
    while(list_pointer < list_to_compare_element_count){
      base_pointer = 0;
      while(base_list[base_pointer++] == list_to_compare[list_pointer++])
      {if(base_pointer==base_list_element_count) return SUPERLIST;}
      list_pointer++;
    }
  }
  else{
    if(list_to_compare_element_count == 0) return SUBLIST;
    while(base_pointer < base_list_element_count){
      list_pointer = 0;
      while(list_to_compare[list_pointer++] == base_list[base_pointer++])
      {if(list_pointer==list_to_compare_element_count) return  (base_list_element_count == list_to_compare_element_count) ? EQUAL : SUPERLIST;}

    }
  }

  return UNEQUAL;
}
