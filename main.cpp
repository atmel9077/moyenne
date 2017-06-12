#include <iostream>

#include <stdlib.h>

using namespace std;

double calculMoyenne(double tableau[], int longueur)
{
    double moyenne(0);

    for(int i=0; i<longueur; i++)
    {
        moyenne += tableau[i];
    }

    moyenne /= longueur;

    return moyenne;
}

int main()
{
    int nombreDeNotes(0);

    double moyenne(0);

    cout << "Combien de notes??? " << endl;

    cin >> nombreDeNotes;

    double tableauDesNotes[nombreDeNotes];

    for(int i=0; i<nombreDeNotes; i++)
    {
        cout << "Note n° " << i + 1 << " ";

        cin >> tableauDesNotes[i];
    }

    moyenne = calculMoyenne(tableauDesNotes, nombreDeNotes);

    cout << "Moyenne: " << moyenne << endl;

    system("PAUSE");

    return 0;
}
