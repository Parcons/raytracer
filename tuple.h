#include <string>

struct Tuple { int x,y,z,w; };

Tuple point(int x, int y, int z);

Tuple vector(int x, int y, int z);

Tuple operator+(Tuple a, Tuple b);

Tuple operator-(Tuple a, Tuple b);