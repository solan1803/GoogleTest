/*
 * Factorial.cpp
 *
 *  Created on: 24 Oct 2015
 *      Author: msolan
 */

int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}


