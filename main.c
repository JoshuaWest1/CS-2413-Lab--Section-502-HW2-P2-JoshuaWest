/*
AUTHOR: Joshua Wade West
HW #: HW2 Problem 2
SPECIFICATION: Write a program to find the mean of n numbers using array
FOR: CS 2413 Lab- Section 502
*/
#include <stdio.h>
#include<stdlib.h>

int main(void) {
 int Array[999];//declare an array
 int Length;//declare a length of array
 int num;//variable used for desired new num
 int Position;//variable used for desired postion within array
int i;


printf("Enter the number of elements in the array : ");//asks user for array length
scanf("%d",&Length);//user input is saved as Length

for (i = 0; i < Length; i++){//loops for the length of the array
        Array[i] = rand() % 50;//inputs random nums into an array
printf("\nArray[%d] = %d\n", i, Array[i]);}//outputs the array


printf("\nEnter the number to be inserted : ");//asks user for a new number
scanf("%d",&num);//inputs new number into variable num

printf("\nEnter the position at which the number has to be added : ");//asks user for location of num
scanf("%d",&Position);//inputs the number as the Position variable

printf("\nThe array after insertion of %d is : ", num );//informs the user that the array will be shown with the new number


for (i = Length ; i >= Position; i--){Array[i] = Array[i - 1];}//a for loop that runs from loction to the end of the array & pushes each object in the array at and after the position down

Array[Position] = num;//inserts the num into position

for (i = 0; i < Length + 1; i++){// for the length of the array
       
printf("\nArray[%d] = %d", i, Array[i]);}//outputs the array

 return 0;
}