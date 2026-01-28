/*convolutiondll.c*/

#include <stdio.h>

void _stdcall convolute(double *model,double *response,double *conv,int length)
{
	int i,j;
	for(i=0;i<length;i++){
		for(j=i;j<length;j++){
			conv[j] += response[i]*model[j-i];
		}
	}
}