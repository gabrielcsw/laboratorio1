#include <iostream>
#include <stdlib.h>
#include "primo.h"
#include "fat.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
	int n, fat;

	n = atoi(argv[1]);

	system("clear");

		fat = fatorial(n);
		cout << "Valor de entrada:" << n << endl;
		cout << "O maior número primo anterior ao fatorial de " << n << "(" << fat << ") eh: " << primo(fat-1) << endl;
		return 0;
}
