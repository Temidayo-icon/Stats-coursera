/*********************************************************************************
 * Copyright (C) 2024 by Somuyiwa Temidayo
 
 * Redistribution, modification or use of this software in source or binary
 *forms is permitted as long as the files maintain this copright.Users are
 *permitted to modify this and use it to learn about the field of embedded software.
 *
 *
 * ***********************************************************************/
/**
 * @file stats.c
 * @brief This file is to be used to course 1 final assessment.
 *
 * @author Somuyiwa Temidayo
 * @date December 27, 2024
 * @Description: Implementation file for statistical analys * is on an array of unsigned char data. Functions include  * finding maximum, minimum, mean, median, and sorting the  * and sorting the array in descending order. 
 *
 */

#include <stdio.h>
#include "stats.h"

// Function definitions
   void main() {
       unsigned char test[40] = {29, 201, 190, 160, 9, 196, 3, 7, 115, 90, 55, 76, 126, 87, 27, 32, 200, 122, 170, 90,                                   94, 87, 177, 244, 201, 7, 15, 60, 8, 2, 5, 67, 7, 230, 240, 230, 99, 3, 110, 90 };
   
   printf("True Array:\n");
   print_array(test, 40);
   
   printf("\nSorted Array (Ascending):\n");
   sort_array(test, 40);
   print_array(test, 40);
   
   print_statistics(test, 40);
   
   }

  void print_statistics(unsigned char *array, unsigned int length){
	  printf("\nStatistics:\n");
	  printf("Minumum: %d\n", find_minimum(array, length));
	  printf("Maximum: %d\n", find_maximum(array, length));
	  printf("Mean: %d\n", find_mean(array, length));
	  printf("Median: %d\n", find_median(array, length));
}

  void print_array(unsigned char *array, unsigned int length){
  for (unsigned int i =0; i < length; i++){
       printf("%d ", array[i]);
  }
  printf("\n");
  }
 
  unsigned char find_median(unsigned char *array, unsigned int length){
      unsigned char sorted[length];
      for (unsigned int i=0; i < length; i++) {
             sorted[i] = array[i];
      }
      sort_array(sorted, length);
      return (length % 2 == 0) ? (sorted[length / 2 - 1] + sorted[length / 2]) / 2 : sorted[length / 2];
      }


  unsigned char find_mean(unsigned char *array, unsigned int length){
      unsigned char sorted[length];
      unsigned int sum = 0;
      for (unsigned int i=0; i < length; i++) {
	     sum += array[i];
      }
      return sum / length;
      }

 unsigned char find_maximum(unsigned char *array, unsigned int length){
    unsigned char max = array[0];
    for (unsigned int i=1; i < length; i++){
        if (array[i] > max){
	     max = array[i];
	}
    }
    return max;
 }
 unsigned char find_minimum(unsigned char *array, unsigned int length) {
	 unsigned char min = array[0];
	 for (unsigned int i = 1; i < length; i++){
	     if (array[i] < min){
	     min = array[i];
	     }
         }
	 return min;
 }
 void sort_array(unsigned char *array, unsigned int length){
     for (unsigned int i = 0; i < length - 1; i++){
         for (unsigned int j = i + 1; j < length; j++){
	      if (array[i] > array[j]) {
	          unsigned char temp = array[i];
		  array[i] = array[j];
		  array[j] = temp;
		  }
	  }
     }
}
