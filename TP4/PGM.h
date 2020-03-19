//
// Created by win on 14/11/2019.
//

#ifndef TP4_PGM_H
#define TP4_PGM_H


class PGM
{
private:
    int width;
    int height;
    int maxvalue;
    int** data;
    static int nbImages;

public:

    void setWidth(int width);

    void setHeight(int height);

    void setMaxvalue(int maxvalue);

    void setData(int **data);
    void afficherImage();

    int** initImage();
    void deleteImage();
    int** createImage(int minpix, int maxpix);

    PGM();

    PGM(int width, int height, int minpix, int maxpix);
    PGM(PGM const& image);
    void writeFile(char* filename);
    ~PGM();

   static int getNbImage();

    void drawline(int x1, int x2, int line, int val);
    void drawrect(int x1, int y1, int x2, int y2, int val);

    void drawcross(int x, int y, int val);
    void readFile(char* filename);
    void thresholding(int th, char* filename);

    void filterImage(char* filename, int k);
};


#endif //TP4_PGM_H
