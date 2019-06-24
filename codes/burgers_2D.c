#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
	int i, j;
	int nx, ny, nt, c, s;
	double *x, *y, dx, dy, sigma, nu, dt;
	
	//Declaração de variáveis
	s = 2;
	nx = 41;
	ny = 41;
	nt = 120;
	c = 1;
	dx = s/(nx-1);
	dy = s/(ny-1);
	sigma = 0.0009;
	nu = 0.01;
	dt = sigma*dx*dy/nu;
	
	//Inicializando variaveis
	x = (double *)malloc(nx*sizeof(double));
	y = (double *)malloc(ny*sizeof(double));
	
	for(i=0; i<nx; i++){ x[i] = i; }
	for(i=0; i<ny; i++){ y[i] = i; }
	
	/*for(i=0.; i<s; i=i+dx) {
		u[0][i] = 1;
		v[0][i] = 1;
		un[0][i] = 1;
		vn[0][i] = 1;
		comb[0][i] = 1;
	}
	*/
	
	free(x);
	free(y);
}

