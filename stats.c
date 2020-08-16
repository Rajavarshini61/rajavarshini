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
 * @file stats 
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
 * @author Rajavarshini
 * @date Edited august 2020
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned int N=sizeof(test)/sizeof(test[0]);
  unsigned char *p;
  p=test;
  unsigned int temp;
  unsigned int sum=0;
  /* Statistics and Printing Functions Go Here */
  
  void print_array(unsigned char *p){
  printf("\n\nThe sorted array:\n");
  int a=0;
  while(a<N){
  printf(" %d ,",*p++);
  a++;
  }}
  
  void sort_array(unsigned char *p, unsigned int N){
  for(int i=0;i<N;i++){
  for(int j=i+1;j<N;j++){
  if(*(p+i)<*(p+j)){
  
  temp=*(p+i);
  *(p+i)=*(p+j);
  *(p+j)=temp;
  }
  }
  }
  }
  
  unsigned int find_mean(unsigned char *p, unsigned int N){
  for(int i=0;i<N;i++){
  sum=sum+*(p+i);}
  unsigned int mean=sum/N;
  return round(mean);
  }
  
  unsigned int find_median(unsigned char *p,unsigned int N){
  if(N%2==0){
  return test[N/2];
  }
  else{
  return round(*(p+((N+1)/2))+*(p+((N+1)/2)+1)/2);}
  }
  
  unsigned int find_maximum(unsigned char *p,unsigned int N){
  unsigned int large=*p;
  for(int i=1;i<N;i++){
  if(large<*(p+i)){
  large=*(p+i);}
  }
  return round(large);}
  
  
  unsigned int find_minimum(unsigned char *p,unsigned int N){
  unsigned int small=*p;
  for(int j=1;j<N;j++){
  if(small>*(p+j)){
  small=*(p+j);}
  }
  return round(small);}
  
  void print_statistics(){
  printf("\n\nThe statistics of the given data is:\n");
  printf("MEAN- %d \n",find_mean(p,N));
  printf("MEADIAN- %d \n",find_median(p,N));
  printf("MAXIMUM VALUE- %d \n",find_maximum(p,N));
  printf("MINIMUM VALUE- %d \n",find_minimum(p,N));}
  
  print_statistics();
  sort_array(p,N);
  print_array(p);
  
  
  
  
  

}

/* Add other Implementation File Code Here */
