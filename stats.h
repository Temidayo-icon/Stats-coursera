/********************************************************
 * File: stats.h
 * Author: Somuyiwa Temidayo
 * Date: December 27, 2024
 * Description: Header file for stats.c containing functi
 * on declarations for statistical analysis. This file de
 * fines all the functions used for analysis and manipula
 * ting an array of unsigned char data.
 * *****************************************************/

 #ifndef _STATS_H_
 #define _STATS_H_


 /**
  * @brief Prints the statistics of an array
  *
  * This function prints the maximum, minimum, mean and m
  * edian values of the provided array in a well-formatte
  * d output
  *
  * @param array Pointer to the array of unsigned chardata
  * @param length The length of the array
  */
 void print_statistics(unsigned char *array, unsigned int length);

 /**
  * @brief Prints an array to the screen
  *
  * This function iterates through the array and prints 
  * its elements in a single line for esy visualization.
  *
  * @pram array Pointer to the array of unsigned char data
  * @param length The length of the array
  */
 void print_array(unsigned char *array, unsigned int length);

 /**
  * @brief Finds the medin value of an array
  *
  * This function calculates and returns the median value of the giv
  * en array
  * It many internally sort a copy of the array to determine the med
  * ian.
  * @param array Pointer to the array of unsigned char data
  * @param length The length of the array
  * @return The median value as an unsigned char
  */
 unsigned char find_median(unsigned char *array, unsigned int length);

 /**
  * @brief Finds the mean value of an array
  *
  * This function calculates and returns the mean (average) value of
  * the given array by summing up all elements and diving by the array
  * length.
  *
  * @param array Pointer to the array of unsigned char data
  * @param length The length of the array
  * @return The maximim value as n unsigned char
  * */
 unsigned char find_mean(unsigned char *array, unsigned int length);

 /**
  * @brief Finds the maximim value of an array
  *
  * This function iterates through the array and returns the maximim
  * value found within it.
  *
  * @param array Pointer to the array of unsigned char data
  * @param length The length of the array
  * @return The maximum value as an unsigned char
  * */
 unsigned char find_maximum(unsigned char *array, unsigned int length);

 /**
  * @brief Finds the minimum value of an array
  *
  * This function iterates through the array and returns the minimum
  * vvalue found within it.
  *
  * @param array Pointer to the array of the unsigned char data
  * @param length The length of the array
  * @return The minimum value as an unsigned char
  **/
 unsigned char find_minimum(unsigned char *array, unsigned int length);

 /**
  * @brief Sorts an array in descending order
  *
  * This function sorts the given array of unsigned char data from
  * largest to smallest. The zeroth element will be the largest, and
  * the last element (n-1) will be the smallest.
  *
  * @param array Pointer to the array of unsigned char data
  * @param length The length of the array
  * */

 void sort_array(unsigned char *array, unsigned int length);

 #endif /* _STATS_H_ */

