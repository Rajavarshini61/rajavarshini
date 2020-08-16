/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief A c-program to calculate the statistics of a given set of numbers
 *        given below :
 *         -Maximum
 *         -Minimum
 *         -Mean
 *         -Median
 *        
 *        note-This program calculates the basic statistics of integer
 *             and and sorts the final rounded off value.
 *
 *
 *
 * @author Rajavarshini
 * @date Edited august 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *p);

/**
 * @brief This function is to print the array that is sorted descendingly.
 *
 *        note-The function prints all the data in the array.
 *
 * @param p character pointer of the array test
 *
 * @return nothing
 */
void sort_array(unsigned char *p, unsigned int N);
/**
 * @brief This function is to sort the array in descending order.
 *
 *        note-It sorts the data given and sends it to print.
 *
 * @param p character pointer of the array test
 * @param N length of the array test
 *
 * @return nothing
 */
 unsigned int find_mean(unsigned char *p,unsigned int N);
 /**
 * @brief This function is to find the mean of the following test data.
 *
 *        note-The function returns the mean of the data to display and 
 *              rounded-off value.
 *
 * @param p character pointer of the array test
 * @param N length of the array test
 *
 * @return the mean of datas.
 */
unsigned int find_median(unsigned char *p,unsigned int N);
/**
 * @brief This function is to find the median of the following test data.
 *
 *        note-The function finds the median for both odd and even set of 
 *             datas.
 *
 * @param p character pointer of the array test
 * @param N Length of the array test
 *
 * @return median of datas
 */
unsigned int find_maximum(unsigned char *p, unsigned int N);
/**
 * @brief This function is to print the array that is sorted descendingly.
 *
 *        note-The function returns the maximum of the data to display and 
 *              rounded-off value.
 *
 * @param p character pointer of the array test
 * @param N length of the array test
 *
 * @return maximum value in data
 */
unsigned int find_minimum(unsigned char *p, unsigned int N);
/**
 * @brief This function is to find the minimum value in the sorted data list.
 *
 *        note-The function finds out the minimum value in the data to display
 *
 * @param p character pointer of the array test
 * @param N Length of the array test
 *
 * @return minimum value in data.
 */
void print_statistics();
/**
 * @brief This function calls all the statistical methods to return its value 
 *        and prints it in a neat way.
 *
 *        note-The function prints all the statistical answers of the data, 
 *             rounded-off values.
 *
 * @return nothing
 */

 


#endif /* __STATS_H__ */
