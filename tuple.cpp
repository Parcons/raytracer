struct Tuple { int x,y,z,w; };

Tuple point(int x, int y, int z){
    return Tuple {x, y, z, 1};
}

Tuple vector(int x, int y, int z){
    return Tuple {x, y, z, 0};
}

Tuple operator+(Tuple a, Tuple b){
    return Tuple {a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w};
}

Tuple operator-(Tuple a, Tuple b){
    return Tuple {a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w};
}