#include <stdio.h>

#define x_lim 167
#define y_lim 44
#define cx x_lim/2
#define cy y_lim/2
#define fill sheet[i][j] = '.'
#define clr sheet[i][j] = ' '

void clean(char sheet[][x_lim]) {
	int i, j;
	
	for(i=0; i<y_lim; i++) {
		for(j=0; j<x_lim; j++) {
			clr;
		}
	}
}

void drawAxes(char sheet[][x_lim]) {
	int i, j;
	
	for(i=0; i<y_lim; i++) {
		for(j=0; j<x_lim; j++) {
			if((j != cx && i == cy) || (j == cx && i != cy) || (j == cx && i == cy))
				fill;
		}
	}
}

void show(char sheet[][x_lim]) {
	int i, j;
	
	for(i=0; i<y_lim; i++) {
		for(j=0; j<x_lim; j++) {
			printf("%c", sheet[i][j]);
		}
		printf("\n");
	}
}

void shadeCircle(char sheet[][x_lim], int centre_x, int centre_y, int radius) {
	int i, j;
	
	for(i=0; i<y_lim; i++) {
		for(j=0; j<x_lim; j++) {
			if((i-cy+centre_y)*(i-cy+centre_y) + (j-cx-centre_x)*(j-cx-centre_x) <= radius*radius)
				fill;
		}
	}
}

void drawLine(char sheet[][x_lim], int m, int C) {
	int i, j;
	
	for(i=0; i<y_lim; i++) {
		for(j=0; j<x_lim; j++) {
			if((i - cy) == m * (cx - j) + C)
				fill;
		}
	}
}

main() {
	// This is an example main() function, which will generate a blank screen
	// See the Readme.txt below, to tinker with the code :)
	
	char sheet_name[y_lim][x_lim];
	
	clean(sheet_name);
	
	/*
		All state-change commands go here
	*/
	
	show(sheet_name);
}
