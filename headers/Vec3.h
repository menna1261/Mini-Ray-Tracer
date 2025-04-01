#ifndef VEC3_H
#define VEC3_H

#include<iostream>
#include<cassert>

template<typename T>
class Vec3{

    public:
    T val[3];
    T x , y, z;
 

    public :
    Vec3(T x , T y , T z ) {
        val[0] = x;
        val[1] = y;
        val[2] = z;
        this->x = x; this->y = y; this->z = z;
    }
 
    // Accessing elements
    T operator [] (int index){
        assert (index < 3);
        return val[index];
    }

    //Addition
    Vec3 operator += (const Vec3 v2){
       
        val[0]+=v2.val[0];
        val[1]+=v2.val[1];
        val[2]+=v2.val[2];

        return *this;
 
    }

    // subtraction
    Vec3 operator -= ( const Vec3 v2){

        val[0]-=v2.val[0];
        val[1]-=v2.val[1];
        val[2]-=v2.val[2];

        return *this;
 
    }

    // multiplication ( vector * scalar)
    Vec3 operator  *= (T num){
     
        val[0]*=num;
        val[1]*=num;
        val[2]*=num;
     
        return *this;
    }
    
    Vec3 operator  * (T num){
     
        val[0]*=num;
        val[1]*=num;
        val[2]*=num;
     
        return *this;
    }



    //Divisions
    Vec3 operator /= (T num){
        
        assert(num != 0);
        
        val[0]/=num;
        val[1]/=num;
        val[2]/=num;
     
        return *this;

    }
    
    //Multiplication (vector * vector)
    Vec3 operator  * (const Vec3 v) const{

        Vec3 res = {val[0]*v.val[0],val[1]*v.val[1],val[2]*v.val[2]};
        return res;
    }

    //printing the vector
    friend std::ostream& operator << (std::ostream& out, const Vec3<T>&v){
        out<<v.val[0]<<" " <<v.val[1] <<" "<<v.val[2];
        return out;
    }

    friend Vec3<T> operator + (Vec3<T>& v1, Vec3<T>& v2){
        v1[0] += v2[0];
        v1[1] += v2[1];
        v1[2] += v2[2];

        return v1;
    }

};

#endif