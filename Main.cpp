#include<iostream>
#include <cstring>
#include <vector>
#include "Quadrilatero.h"
#include "Rettangolo.h"
#include "Rombo.h"

vector <Quadrilateral*> Lista;

/// @brief print every object on the vector
/// @param n number of objects in the vector
void Show(int n);

/// @brief select the operation to do
/// @param n number of objects in the vector
/// @param r quadrilateral to add
/// @param bye quadrilateral to delete 
void Menu(int cmd, Quadrilateral* r, int bye );

int main() {

	
	
	TextArea a1, a2;
	char t1[SLEN] = "testo 1";
	char t2[SLEN] = "testo 2";
	char t3[SLEN] = "testo 3";

	memcpy(a1.string, t1, strlen(t1) + 1);
	a1.size = 8;
	memcpy(a2.string, t2, strlen(t2) + 1);
	a2.size = 14;
	Rectangle rectDefault; // quadrilatero di default
	Rectangle rectA(10, 5);
	Rectangle rectB(3, 7, a1);
	Rectangle rectC = rectA;

	Rhombus rhoA(6, 2, a2);
	Rhombus rhoB = rhoA;
	Rhombus rhoC(4, 3);

	Lista.insert(Lista.begin() , &rectA);
	Lista.insert(Lista.begin()+1 , &rectB);
	Lista.insert(Lista.begin() + 2, &rectC);
	Lista.insert(Lista.begin() + 3, &rhoA);
	Lista.insert(Lista.begin() + 4, &rhoB);

	Menu(1, &rectDefault, 1);
	Menu(3, &rectDefault, 2); 
	Menu(1, &rectDefault, 1);
	Menu(2, &rhoC, 1);
	Menu(1, &rectDefault, 1);
	Menu(4, &rectDefault, 1);
	Menu(1, &rectDefault, 1);
	rectA.SetFontSize(20);
	rectC = rectA;
	rhoC = rhoA;
	rectB.SetTextArea(a2);
	rhoB.SetText(t3);

	return 0;

}

void Show(int n) {

	int i;

	for (i = 0; i < n; i++)
		Lista[i]->Drawing();

}

void Menu(int cmd, Quadrilateral* r, int bye)
{
	int lastPlace = Lista.size(); // number of objects in the vector
	
	cout << endl << "____________Menù____________" << endl;
	cout << "	1) Visualizza forme" << endl;
	cout << "	2) Aggiungi forma" << endl;
	cout << "	3) Rimuovi forma" << endl;
	cout << "	4) Rimuovi tutto" << endl;
	cout << "____________________________" << endl << endl;

	if (cmd == 1)
	{
		cout << "Hai selezionato: 1-visualizza forme " << endl;
		Show(Lista.size());
		if (Lista.size()==0)
			cout << "Non sono presenti forme" << endl << endl;
	}
	else if(cmd == 2)
	{
		
		cout << "Hai selezionato: 2-aggiungi forma " << endl;
		if (lastPlace < 50)
		{
			Lista.insert(Lista.begin() + lastPlace - 1, r);
		}
		else
		{
			cout << "Ipossibile aggiungere altre forme. Limite di quadrilateri raggiunto (50) " << endl;
		}

	}
	else if (cmd == 3)
	{
		cout << "Hai selezionato: 3-rimuovi forma " << endl;
		
		Lista.erase(Lista.begin() + bye - 1);
	}
	else if (cmd == 4)
	{
		cout << "Hai selezionato: 4-rimuovi tutto " << endl;
		Lista.clear();
	}

	return;
}
