//
// Created by win on 30/10/2019.
//

#include "exo3.h"
#include <iostream> // cout cin endl

using namespace std;


bool JeuMorpion::placer_coup(int ligne, int colonne, Content c)
{
    if (ligne >= 3 || ligne < 0 || colonne >= 3 || colonne < 0)
    {
        return false;                                               //Test si hors du jeu
    }

    if(grille[ligne][colonne]!=VIDE)
    {
        return false;                                               //Test si déjà un O ou une X dans une case
    }

    this->grille[ligne][colonne] = c;                               //Si toutes les condtions sont bonnes on place soit une X ou un O

    return true;
}

void JeuMorpion::init()
{
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
           grille[i][j]=VIDE;                                       //Met toutes les cases vides
        }
    }

}

bool JeuMorpion::placer_rond(int ligne, int colonne)
{
    return placer_coup(ligne,colonne,ROND);
}

bool JeuMorpion::placer_croix(int ligne, int colonne)
{
    return placer_coup(ligne,colonne,CROIX);                        //Place une X en appelant placer coup pour vérifier les bonnes conditions de placement
}

void JeuMorpion::afficherGrille()
{
    cout << endl;
    for (int i = 0; i < 3 ; ++i)
    {
        cout << "|";
        for (int j = 0; j < 3; ++j)
        {
           char symbol = ' ';

           if(grille[i][j]==CROIX)
           {
               symbol='X';
           }
                                                                    //Lit le tableau pour savoir s'il doit afficher une case X, O ou vide
           else if(grille[i][j]==ROND)
           {
               symbol='O';
           }
           cout << symbol << "|";
        }
        cout << endl;

    }
}

bool JeuMorpion::gagner(Content c)
{
    //Test si ligne complète

    for(int i = 0; i < 3; i++)
    {
        bool ligne = true;
        for(int j = 0; j < 3; j++)
        {
            if(grille[i][j] != c)
            {
                ligne = false;
            }
        }
        if(ligne) return true;
    }


    //Test si colonne complète

    for(int i = 0; i < 3; i++)
    {
        bool colonne = true;
        for(int j = 0; j < 3; j++)
        {
            if(grille[j][i] != c)
            {
                colonne = false;
            }
        }
        if(colonne) return true;
    }


    //Tests si diagonale complète

    bool diag1 = true;
    for(int i =0; i < 3; i++)
    {
        if(grille[i][i] != c)
        {
            diag1 = false;
        }
    }
    if(diag1) return true;

    bool diag2 = true;
    for(int i =0; i < 3; i++)
    {
        if(grille[i][2-i] != c)
        {
            diag2 = false;
        }
    }
    if(diag2) return true;

    return false;
}

bool JeuMorpion::rempli()
{
    for (int i = 0; i < 3 ; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {                                       //Test si la grille est remplie
            if(grille[i][j]==VIDE)
            {
                return false;
            }
        }
    }
    return true;
}

void JeuMorpion::start()
{
    init();
    while (!gagner(CROIX) && !gagner(ROND) && !rempli())                //Tant que personne gagne ou que la grille est pleine car match nul, on fait jouer les joueurs
    {
        int ligne=0;
        int colonne=0;
        do
        {
            cout << "Joueur X:" << endl;                                //Redemande des coordonnées si le placement n'est pas bon
            cin >> ligne >> colonne;
        }while (!placer_croix(ligne, colonne));

        afficherGrille();

        if(gagner(CROIX) || rempli())
        {
            break;                                                      //Si le premier joueur gagne après son coup ou qu'il a rempli la grille on stop la boucle
        }

        do
        {
            cout << "Joueur O:" << endl;
            cin >> ligne >> colonne;
        }while (!placer_rond(ligne, colonne));

        afficherGrille();
    }
    if(gagner(CROIX))
    {
        cout << "Joueur X a gagné";
    }
    else if(gagner(ROND))
    {
        cout << "Joueur O a gagné";                            //Affiche le gagnant ou match nul
    }
    else
        {
        cout << "Match nul";
        }
}