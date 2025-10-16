// Problem Description:

// Here on earth, our 24-hour day is composed of two parts, each of 12hours. Each hour in each part has a corresponding hour in the other part separated by 12 hours: the hour essentially measures the duration since the start of the day part. For example, 1 hour in the first part of the day is equivalent to 13, which is 1 hour into the second part of the day. Now, consider the equivalent hours that are both prime numbers.

// We have 3 such instances for a 24-hour 2-part day:

// 5~17
// 7~19
// 11~23
// Accept two natural numbers D, P >1 corresponding respectively to number of hours per day and number of parts in a day separated by a space. D should be divisible by P, meaning that the number of hours per part (D/P) should be a natural number. Calculate the number of instances of equivalent prime hours. Output zero if there is no such instance.

// Note – That we require each equivalent hour in each part in a day to be a prime number.

// Example:

// Input:

// 24 2
// Output:

// 3 (We have 3 instances of equivalent prime hours: 5~17, 7~19 and 11~23.)
// Constraints:

// 10 <= D < 500
// 2 <= P < 50
#include <stdio.h>

int is_prime(int num) {
    if (num == 1) return 0;
    if (num == 2) return 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int D, P;
    printf("Enter values:");
    scanf("%d %d", &D, &P);

    int prime_count = 0;

    if (D % P == 0) {
        int limit = D / P;

        for (int i = 1; i <= limit; i++) {
            int not_prime = 0;
            int has_one = 0;
            int hours = i;

            int pair[P]; // Store the current pair

            for (int j = 0; j < P; j++) {
                pair[j] = hours + 12 * j;

                if (pair[j] == 1) {
                    has_one = 1;
                    break;
                }
                if (!is_prime(pair[j])) {
                    not_prime = 1;
                    break;
                }
            }

            if (!not_prime && !has_one) {
                prime_count++;
                printf("Prime Pair %d: ", prime_count);
                for (int k = 0; k < P; k++) {
                    printf("%d ", pair[k]);
                }
                printf("\n");
            }
        }
    }

    printf("Total Prime Pairs: %d\n", prime_count);
    return 0;
}
