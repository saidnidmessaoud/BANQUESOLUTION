#include <iostream>
#include"Compte.h"
#include"CompteEpargne.h"
#include"CompteCourant.h"
#include"Devise.h"
#include"Client.h"
#include"CompteEpargnePayant.h"
#include"App_Banque.h"
using namespace std;

int main()
{
    Client* X = new Client("said", "nidmessaoud", 20);
    Devise M1(90);
    Devise M2(40);
    Devise M3(80);
    Devise M4(50);
    CompteCourant* A = new CompteCourant(*X, M1, M2);
    CompteEpargne* B = new CompteEpargne(*X, M2);
    CompteCourant* C = new CompteCourant(*X, M3, M4);
    CompteEpargne* D = new CompteEpargne(*X, M4);
    X->ajouter(A);
    X->ajouter(B);
    X->ajouter(C);
    X->ajouter(D);

    App_Banque* APP1 = new App_Banque();
    APP1->ajouter_Client(X);

    APP1->ajouter_Compte(A);
    APP1->ajouter_Compte(B);
    APP1->ajouter_Compte(C);
    APP1->ajouter_Compte(D);

    APP1->afficher_client();
    cout << endl;
    cout << endl;
    APP1->afficher_compte();





    cout << endl;
    cout << endl;

    A->retirerArgent(M2);

    cout << endl;
    cout << endl;



    cout << endl;
    cout << endl;

    B->deposerArgent(M1);
    cout << endl;
    cout << endl;

    APP1->afficher_compte();

    CompteEpargnePayant* G = new CompteEpargnePayant(*X, M1);
    cout << "la taille est :" << sizeof(G) << endl;
}

