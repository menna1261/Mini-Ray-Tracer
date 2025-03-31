#include<iostream>
#include<fstream>
#include<Vec3.h>

using namespace std ;


int main(){

    int imageHeight = 256;
    int imageWidth = 256;

   
    ofstream outputImage("output2.ppm");
    outputImage << "P3\n"<<imageHeight<<" "<<imageWidth<<"\n"<<"255\n";
    

    for(int i = 0 ; i< imageWidth;i++){
        for(int j =0 ; j<imageHeight;j++){

            //normalizing the rgb values between 0 and 1
            auto r = float(i) / (imageWidth-1);
            auto g = float(j) / (imageHeight-1);
            auto b = 0;

            //converting the normalized values to be from 0 to 255 (real pixel colors)

            int Cr = int(255.999 * r);
            int Cg = int(255.999 * g);
            int Cb = int(255.999 * b);

            outputImage<<Cr<<" "<<Cg<<" "<<Cb<<"\n";


        }
    }

    outputImage.close();

}
