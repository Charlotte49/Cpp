//
// Created by win on 14/11/2019.
//

#include <cstdlib>
#include "PGM.h"
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;


int PGM::nbImages=0;

int PGM::getNbImage()
{
    return nbImages;
}

void PGM::setWidth(int Width)
{
    PGM::width = Width;
}

void PGM::setHeight(int Height)
{
    PGM::height = Height;
}

void PGM::setMaxvalue(int Maxvalue)
{
    PGM::maxvalue = Maxvalue;
}

void PGM::setData(int **Data)
{
    PGM::data = Data;
}

int** PGM::initImage()
{
    data= new int*[height];

    for (int i = 0; i < height; ++i)
    {
        data[i]=new int[width];
    }

    return data;
}


void PGM::deleteImage()
{
    for (int i = 0; i < height; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

int** PGM::createImage(int minpix=0, int maxpix=255)
{
    data = initImage();
    srand( time(NULL) );

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {

            data[i][j]=rand() % (maxpix+1-minpix) + minpix;
        }
    }
    return data;
}

PGM::PGM()
{
    setWidth(10);
    setHeight(10);
    setMaxvalue(255);
    setData(initImage());

    nbImages++;
}

PGM::PGM(int width, int height, int minpix, int maxpix)
{
    setHeight(height);
    setWidth(width);
    setMaxvalue(maxpix);
    setData(createImage(minpix, maxpix));
    nbImages++;
}

PGM::~PGM()
{
    deleteImage();
    nbImages--;
    cout << getNbImage() << endl;
}

PGM::PGM(PGM const& image) : width(image.width), height(image.height), maxvalue(image.maxvalue)
{
    data = initImage();
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            data[i][j]=image.data[i][j];
        }
    }
    nbImages++;
}


void PGM::afficherImage()
{
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << data[i][j] << "  ";
        }
        cout << endl;
    }
}

void PGM::writeFile(char* filename)
{
    ofstream myfile;
    myfile.open (filename);
    myfile << "P2\n";
    myfile << width << " " << height << "\n";
    myfile << maxvalue << "\n";

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            myfile << data[i][j] << "  ";
        }
        myfile << endl;
    }
}

void PGM::drawrect(int x1, int y1, int x2, int y2, int val)
{
    for (int i = y1; i <= y2; ++i)
    {
        for (int j = x1; j <= x2; ++j)
        {
            data[i][j]=val;
        }
    }
}


void PGM::drawline(int x1, int x2, int line, int val)
{
    for (int i = x1; i <= x2; ++i)
    {
        data[line][i]=val;
    }
}

void PGM::drawcross(int x, int y, int val)
{
    data[x][y]=val;
    data[x+1][y+1]=val;
    data[x-1][y-1]=val;
    data[x-1][y+1]=val;
    data[x+1][y-1]=val;
}

void PGM::readFile(char* filename) {
    ifstream myfile;
    string line;
    stringstream s;
    myfile.open(filename);
    if (myfile.is_open()){
        getline(myfile,line);
        s << myfile.rdbuf();
        s >> width >> height;
        s>>  maxvalue;

        data=initImage();

        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                s>> data[i][j];
            }
        }

    }
    myfile.close();
}

void PGM::thresholding(int th, char* filename)
{

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            data[i][j]>th? data[i][j]=maxvalue:data[i][j]=0;
        }
    }

    writeFile(filename);
}

void PGM::filterImage(char* filename, int k)
{
    int pixel=data[1][1];
    int colonne=1;
    int ligne=1;
    int a,b,c,d,e,f,g,h=0;
    int median=0;

    while(colonne<width && ligne<height)
    {
        if(colonne>=width-1)
        {
            colonne=1;
            ligne++;
        }

        else if(ligne>=height-1 && colonne>=width)
        {
            break;
        }

        else
        {
            for (int i = 1; i < width; ++i)
            {
                a=data[ligne-1][i-1];
                b=data[ligne-1][i];
                c=data[ligne-1][i+1];
                d=data[ligne][i-1];
                pixel=data[ligne][i];
                e=data[ligne][i+1];
                f=data[ligne+1][i-1];
                g=data[ligne+1][i];
                h=data[ligne+1][i+1];

                int tab[9]={a,b,c,d,pixel,e,f,g,h};
                int* tab2 = tab;

                sort(tab2, tab2+9);
                median=tab2[4];

                pixel=median;
            }
            colonne++;
        }
    }
}