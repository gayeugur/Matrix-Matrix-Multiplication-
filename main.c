
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100


float** matrixmatrixMultiply(float** sequence1,float** sequence2);
float** matrixmatrixMultiply2(float** sequence1,float** sequence2);
float** matrixmatrixMultiply3(float** sequence1,float** sequence2);
float** matrixmatrixMultiply4(float** sequence1,float** sequence2);
float** matrixmatrixMultiply5(float** sequence1,float** sequence2);
float** matrixmatrixMultiply6(float** sequence1,float** sequence2);


int main(void) {


	float** sequence1=(float**)malloc(sizeof(float*)*SIZE);
	int j,i;
	for(i=0; i<SIZE; i++){
		sequence1[i]=(float*)malloc(sizeof(float)*SIZE);
	}
	float** sequence2=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
		sequence2[i]=(float*)malloc(sizeof(float)*SIZE);
	}
	float number1,number2;
	srand(time(NULL));
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			number1=(rand()%2)+1.2;
			number2=(rand()%10)+1.5;
			sequence1[i][j]= number1;
			sequence2[i][j]= number2;
	}
		}
		float second;
		clock_t start,finish;
		start = clock();
		matrixmatrixMultiply(sequence1,sequence2);

			finish = clock();
			second=(float)(finish - start) / CLOCKS_PER_SEC;
			printf("i-j-k %dx%d sonucu icin gecen sure : %f\n",SIZE,SIZE,second);
			  for (i = 0; i < SIZE; i++) {
			        free(sequence1[i]);
			    }  for (i = 0; i < SIZE; i++) {
			        free(sequence2[i]);
			    }
			free(sequence1);
			free(sequence2);
	return EXIT_SUCCESS;
}

float** matrixmatrixMultiply(float** sequence1,float** sequence2){
	int i,j,k;
	float** result=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
			result[i]=(float*)malloc(sizeof(float)*SIZE);
			}
		for(i=0; i<SIZE; i++){
			for(j=0; j<SIZE; j++){
				for(k=0; k<SIZE; k++){
					result[i][j]+=sequence1[i][k]*sequence2[k][j];
				}
			}
		}
		return result;
	}
float** matrixmatrixMultiply2(float** sequence1,float** sequence2){
	int i,j,k;
	float** result=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
			result[i]=(float*)malloc(sizeof(float)*SIZE);
			}
		for(i=0; i<SIZE; i++){
			for(k=0; k<SIZE; k++){
				for(j=0; j<SIZE; j++){
					result[i][j]+=sequence1[i][k]*sequence2[k][j];
				}
			}
		}
		return result;
	}
float** matrixmatrixMultiply3(float** sequence1,float** sequence2){
	int i,j,k;
	float** result=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
			result[i]=(float*)malloc(sizeof(float)*SIZE);
			}
		for(j=0; j<SIZE; j++){
			for(i=0; i<SIZE; i++){
				for(k=0; k<SIZE; k++){
					result[i][j]+=sequence1[i][k]*sequence2[k][j];
				}
			}
		}
		return result;
	}
float** matrixmatrixMultiply4(float** sequence1,float** sequence2){
	int i,j,k;
	float** result=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
			result[i]=(float*)malloc(sizeof(float)*SIZE);
			}
			for(j=0; j<SIZE; j++){
				for(k=0; k<SIZE; k++){
					for(i=0; i<SIZE; i++){
						result[i][j]+=sequence1[i][k]*sequence2[k][j];
				}
			}
		}
		return result;
	}
float** matrixmatrixMultiply5(float** sequence1,float** sequence2){
	int i,j,k;
	float** result=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
			result[i]=(float*)malloc(sizeof(float)*SIZE);
			}
	for(k=0; k<SIZE; k++){
		for(i=0; i<SIZE; i++){
			for(j=0; j<SIZE; j++){
				result[i][j]+=sequence1[i][k]*sequence2[k][j];
				}
			}
		}
		return result;
	}
float** matrixmatrixMultiply6(float** sequence1,float** sequence2){
	int i,j,k;
	float** result=(float**)malloc(sizeof(float*)*SIZE);
	for(i=0; i<SIZE; i++){
			result[i]=(float*)malloc(sizeof(float)*SIZE);
			}
	for(k=0; k<SIZE; k++){
			for(j=0; j<SIZE; j++){
				for(i=0; i<SIZE; i++){
					result[i][j]+=sequence1[i][k]*sequence2[k][j];
				}
			}
		}
		return result;
	}

