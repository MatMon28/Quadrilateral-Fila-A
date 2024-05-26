/*
#include<iostream>
#include <cstring>

#include "Quadrilatero.h"
#include "Rettangolo.h"
#include "Rombo.h"

const int LISTL = 6;

Quadrilateral* Lista[LISTL];

void Show() {

	int i;

	for (i = 0; i < LISTL; i++)
		Lista[i]->Drawing();

}

int main() {

	TextArea a1, a2;
	char t1[SLEN] = "testo 1";
	char t2[SLEN] = "testo 2";
	char t3[SLEN] = "testo 3";

	memcpy(a1.string, t1, strlen(t1) + 1);
	a1.size = 8;
	memcpy(a2.string, t2, strlen(t2) + 1);
	a2.size = 14;

	Rectangle rectA(10, 5);
	Rectangle rectB(3, 7, a1);
	Rectangle rectC = rectA;

	Rhombus rhoA(6, 2, a2);
	Rhombus rhoB = rhoA;
	Rhombus rhoC(4, 3);

	Lista[0] = &rectA;
	Lista[1] = &rectB ;
	Lista[2] = &rectC;
	Lista[3] = &rhoA;
	Lista[4] = &rhoB;
	Lista[5] = &rhoC;

	Show();

	rectA.SetFontSize(20);
	rectC = rectA;
	rhoC = rhoA;
	rectB.SetTextArea(a2);
	rhoB.SetText(t3);

	if (rectC == rectA)
		cout << "i due rettangoli sono UGUALI" << endl;
	else 
		cout << "i due rettangoli sono DIVERSI" << endl;
	if (rhoC == rhoA)
		cout << "i due rombi sono UGUALI" << endl;
	else
		cout << "i due rombi sono DIVERSI" << endl;
	Show();

	return 0;

}
*/