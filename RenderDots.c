#include <stdio.h>

#define x 168
#define y 44
#define set dotmat[i][j] = '*'
#define clr dotmat[i][j] = ' '

void Render() {
	char dotmat[y][x];
	int i, j, k=0;
	
	int centre_x = x/2, centre_y = y/2;
	int radius = 5;
	
	for(i=0; i<y; i++) {
		for(j=0; j<x; j++) {
			if((j == centre_x && i != centre_y) || (j != centre_x && i == centre_y))
				clr;
			else if((i-centre_y)*(i-centre_y) * (j-centre_x)*(j-centre_x) < 5000)
				set;
			else
				clr;
		}
	}
	
	for(i=0; i<y; i++){
		for(j=0; j<x; j++)
			printf("%c", dotmat[i][j]);
		printf("\n");
	}
}

main() {
	Render();
}
