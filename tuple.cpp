struct Tuple { int x,y,z,w; };

Tuple point(int x, int y, int z){
    return Tuple {x, y, z, 1};
}

Tuple vector(int x, int y, int z){
    return Tuple {x, y, z, 0};
}