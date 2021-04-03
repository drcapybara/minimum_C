/**
 * @file minimum.c
 * @author Dustin Ray
 * @version 0.1
 * @date 2021-04-02
 * 
 * 
 */

#include <stdio.h>

/**
 * @brief Finds minimum value from passed array.
 * 
 * @param theArray array to search for min value.
 * @return int value which is minimum value from array.
 */
int findMin(const int theArray[]) {

   int min = theArray[0];
   for (int i = 0; i < 6; i++) {
      if (theArray[i] < min) {
         min = theArray[i];
      }
   }
   return min;
}

/**
 * @brief Main method for program.
 * 
 */
int main() {

   const int intSet[6] = {106, 23, 78, 90, 10, 100};
   const int minValue = findMin(intSet);
   
   char s[100] = "The minimum value of this array is: ";

   printf("%s%d\n", s, minValue);

   return 0;
}


