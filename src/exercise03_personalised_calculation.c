/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: ERICK LAFIFA
 * Registration Number: ENB211-0059/2025
 * Variant ID: V16
 * Scenario: DISTANCE TRAVELLED
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
   int speed = 60;
    float time = 2.5f;
    float distance;

    distance = speed * time;

    printf("Distance: %.1f\n", distance);

    return 0;
}
