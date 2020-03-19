#include <iostream>
#include "PGM.h"

using namespace std;

int main()
{
   /* char filename [15] = "../lena.pgm";
    char filename2 [15]= "../image.pgm";
    char filename3 [15]= "../image1.pgm";
    char filename4 [15]= "../image2.pgm";
    PGM image;
    image.readFile(filename);
    PGM IM=image;
    PGM IM2=image;
    image.drawrect(1,1,5,9,255);
    IM.drawline(1,5,2,255);
    IM2.drawcross(1,2,255);
    image.writeFile(filename2);
    IM.writeFile(filename3);
    IM2.writeFile(filename4);*/

   char filename [27]= "../noisyballon.pgm";
    //char filename [15] = "../lena.pgm";
   char filename1 [14]= "../copie.pgm";

   PGM image;
   image.readFile(filename);
   //PGM IM=image;
   image.filterImage(filename1,3);
  // IM.writeFile(filename1);


    return 0;
}