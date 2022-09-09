#include <stdlib.h>
#include <stdio.h>

typedef double rand_type; // change double to int

rand_type my_rand() {
    char buff[sizeof(rand_type)];
    for (size_t i = 0 ; i < sizeof(rand_type) ; ++i)
        buff[i] = (char) rand();
    return *(rand_type *) buff;
}

int main() {
    int i ; // srand as you want
    for (i = 0 ; i < 10 ; ++i)
        printf("%g\n", my_rand()); // change %g to %d
    return 0 ;
}
