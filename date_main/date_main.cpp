// date_main.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Heure.h"
#include "DateH.h"
using namespace std;
using namespace date;
int main()
{
    Heure H(14, 15, 30);

    Heure H1(12, 14, 40);
    
    if (H > H1)
    {
        H.afficher();
        cout << "cette heure est tardive que" << endl;
        H1.afficher();
    }
    else
    {
        H1.afficher();
        cout << "cette heure est tardive que" << endl;
        H.afficher();
    }
    cout << endl;

    DateH D(15, 2, 2000, 14, 55, 54);

    DateH D1(10, 7, 2015, 14, 15, 00);
   

    if (D > D1)
    {
        D.affiche();
        cout << "cette date est tardive que" << endl;
        D1.affiche();
    }
    else
    {
        D1.affiche();
        cout << " cette date est tardive que" << endl;
        D.affiche();
    }
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
