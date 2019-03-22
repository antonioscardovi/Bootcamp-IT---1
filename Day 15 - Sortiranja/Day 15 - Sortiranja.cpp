#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

void BubbleSort(int lista[], int velicina);
void SelectionSort(int lista[], int velicina);
void InsertionSort(int lista[], int velicina);

int main()
{
	int lista[30];
	int lista1[30];
	int lista2[30];
	srand(time(0));

	for (int i = 0; i < 30; i++) {
		lista[i] = rand() % 999;
	}
	for (int i = 0; i < 30; i++) {
		lista1[i] = rand() % 999;
	}
	for (int i = 0; i < 30; i++) {
		lista2[i] = rand() % 999;
	}

	// BUBBLE SORT
	cout << "BUBBLE SORT" << endl;
	cout << "Before: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << lista[i] << " ";
	}
	cout << endl;


	BubbleSort(lista, 30);

	cout << "After: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << lista[i] << " ";
	}
	cout << endl;


	// SELECTION SORT
	cout << "SELECTION SORT" << endl;
	cout << "Before: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << lista1[i] << " ";
	}
	cout << endl;


	SelectionSort(lista1, 30);

	cout << "After: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << lista1[i] << " ";
	}
	cout << endl;


	cout << "INSERTION SORT" << endl;
	cout << "Before: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << lista2[i] << " ";
	}
	cout << endl;

	InsertionSort(lista2, 30);

	cout << "After: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << lista2[i] << " ";
	}
}

void BubbleSort(int lista[], int velicina) {
	int temp, j;
	bool bilaZamjena = true;

	for (int i = 0; bilaZamjena == true; i++) {
		bilaZamjena = false;
		for (j = 0; j < velicina - 1 - i; j++) {
			if (lista[j] > lista[j + 1]) {
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bilaZamjena = true;
			}
		}
	}
}

void SelectionSort(int lista[], int velicina) {
	int min, temp;

	for (int i = 0; i < velicina; i++) {
		min = i;

		for (int j = 0; j < velicina; j++) {
			if (lista[j] > lista[min]) {
				min = j;
			}
			temp = lista[i];
			lista[i] = lista[min];
			lista[min] = temp;
		}
	}

 
}

void InsertionSort(int lista[], int velicina) {
	int key, j;
	for (int i = 1; i < velicina; i++) {
		key = lista[i];
		j = i - 1;
		
		while (j >= 0 && key < lista[j]) {
			lista[j + 1] = lista[j];
			j = j - 1;
		}
		lista[j + 1] = key;
			
	}
}