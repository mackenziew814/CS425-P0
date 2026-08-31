#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/**
 * This function returns the product of the two given integers.
 * 
 * @param a The first integer
 * @param b The second integer
 * @return the prodcut of a and b
 */
int multiply(int a, int b);

/**
 * This function returns the incorrect sum of the two given integers, this
 * is done by adding one to the integers' sum.
 * 
 * @param a The first integer
 * @param b The second integer
 * @return the sum of a and b plus 1
 */
int incorrectAddition(int a, int b);

#endif // LAB_H
