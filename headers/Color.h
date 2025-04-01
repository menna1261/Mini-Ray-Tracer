#include<Vec3.h>
#include<iostream>

void writeColor(std::ostream&out, const Vec3<float>& pixel){

    float r = pixel.x;
    float b = pixel.y;
    float g = pixel.z;

    int Cr = int(255.999 * r);
    int Cg = int(255.999 * g);
    int Cb = int(255.999 * b);

    out<<Cr<<" "<<Cg<<" "<<Cb<<"\n";


}



