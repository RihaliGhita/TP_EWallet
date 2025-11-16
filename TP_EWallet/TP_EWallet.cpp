// TP_EWallet.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "MoyenPaiement.h"
#include "CarteBancaire.h"
#include "CompteCrypto.h"
#include "ComptePayPal.h"
#include "E_Wallet.h"
int main()
{
	E_Wallet Wallet(6);
	Wallet.ajouter(new CarteBancaire("Rihali Ghita", "1234", 670));
	Wallet.ajouter(new ComptePayPal("Rihali Ghita", "ghita@mail.com", 300));
	Wallet.ajouter(new CompteCrypto("Rihali Ghita","@r456 ", "privateKEY", 1000));
	Wallet.payerGlobal(200);
	Wallet.afficher();
	
	MoyenPaiement *P=new CarteBancaire("Ghita","K5678",500);
	P->payer(550);
	P->afficher();
	MoyenPaiement* P1 = new CompteCrypto("Hajar","@t777","LL123",230);
	P1->afficher();
	P1->recharger(1200);
	P1->afficher();

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
