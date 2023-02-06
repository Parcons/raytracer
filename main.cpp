#include <stdio.h>
#include "tuple.h"

int main() {
     Tuple x = point(3, 2, 1) - point(5, 6, 7);
     printf("I wonder if this works. x = (%d, %d, %d, %d)\n", x.x, x.y, x.z, x.w);
     return 0;
}
