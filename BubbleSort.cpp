// BubbleSort.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
void bubbleSort(std::vector<int>* a) {

	std::cout << a->at(0) << std::endl;
	for (int i = 0; i < (*a).size(); i++) {
		for (int j = 0; j < (*a).size() - 1 - i; j++) {
			if (a->at(j) > a->at(j + 1)) {
				int tmp = a->at(j);
				a->at(j) = a->at(j + 1);
				a->at(j + 1) = tmp;
			}
		}
	}
}
int main()
{
	std::vector<int> a = { 1, 2, 7, 3, 4,8, 2 };
	bubbleSort(&a);
	for (int g = 0; g < a.size(); g++) {
		std::cout << a[g] << std::endl;
	}

}

