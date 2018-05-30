#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(const int * const array, unsigned int size ); //prototype

int main(void) {
	//initialize array a
	int a[SIZE]={245,3,97,85,657,156,87,17,32,222};
	
	unsigned int i; //counter
	
	puts(" Data items in original order");
	    //loop through array a
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
		}//end for
		
		bubbleSort(a, SIZE); //sort the array
		
		puts("\n Data items in ascending order");
		//loop through array a
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
	    }//end for
		
		puts("");
}//end main
