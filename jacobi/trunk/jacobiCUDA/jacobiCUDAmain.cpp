
#include "stdafx.h"

//*****************************************************************************
int main(int argc, char** argv)
{
	//paramenters
	int				n;
	double			epsilon;
	struct boundary	b;
	long			step;
	char			*outFile = (char *)malloc(sizeof(char) * 128);

	//input
	int ok = input(argc, argv, &n, &epsilon, &step, &b, outFile);
	if (ok != 0)
	{
		getchar();
		return 0;
	}

	b.averageValue = (b.left + b.up + b.right + b.down) / 4;
	
	//jacobi CUDA 1D
	//jacobiCUDA_1D(argc, argv, n, epsilon, step, b, outFile);

	//jacobi CUDA 1D - Float
	jacobiCUDA_1D_F(argc, argv, n, (float)epsilon, step, b, outFile);

	//jacobi CUDA 2D
	//jacobiCUDA_2D(n, epsilon, step, b, outFile);

	//getchar();

	return 0;
}
