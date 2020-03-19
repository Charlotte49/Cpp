//
// Created by win on 30/10/2019.
//

#ifndef TP2_EXO3_H
#define TP2_EXO3_H


enum Content {VIDE, ROND, CROIX};

class JeuMorpion {
private :
    int grille[3][3];
    bool placer_coup ( int ligne, int colonne, Content c);
public :
    void init ();
    bool placer_rond ( int ligne, int colonne);
    bool placer_croix ( int ligne, int colonne);
    void afficherGrille();
    bool gagner(Content c);
    bool rempli();
    void start();
// à compléter

};


#endif //TP2_EXO3_H
