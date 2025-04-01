#include<iostream>
#include<fstream>
#include<Vec3.h>
#include<Color.h>

using namespace std ;


int main(){

    int imageHeight = 256;
    int imageWidth = 256;

   
    ofstream outputImage("output3.ppm");
    outputImage << "P3\n"<<imageHeight<<" "<<imageWidth<<"\n"<<"255\n";
    

    for(int i = 0 ; i< imageWidth;i++){
        for(int j =0 ; j<imageHeight;j++){

           writeColor(outputImage, {float(i)/(imageWidth-1), float(j)/(imageHeight-1) , 0});

        }
    }

    outputImage.close();

}
