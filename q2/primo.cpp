#include "primo.h"

int ver_pri(int n, int i){
	if(n<2 || !(n%i)) return -1;
	if(n==2 || i*i>=n) return 1;
	return ver_pri(n,++i);
}

int primo(int n){
	if(n == 1) return 1;
	if(n > 2 && ver_pri(n,2) == 1) return n;
	else return primo(n-1);
}
