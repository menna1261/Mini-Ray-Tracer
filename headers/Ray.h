#ifndef RAY_H
#define RAY_H

#include<iostream>
#include<Vec3.h>

class ray{

    private:
        Vec3<double>origin;
        Vec3<double>direction;

    public:

    ray();
    ray(Vec3<double>orig , Vec3<double>dir) : origin(orig) , direction(dir) {}

    Vec3<double> at(double t){

        direction*=t;
        return origin+ direction;

    }

    Vec3<double> origin(){ return origin; }
    Vec3<double>direction(){ return direction;}


};





#endif