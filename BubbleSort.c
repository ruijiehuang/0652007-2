#define SIZE 10
//sort an array of integers using bubble sort algorithm
void bubbleSort(const int * const array, unsigned int size )
	{
		void swap(int *element1Ptr, int *element2Ptr );
		unsigned int pass;//pass counter
		unsigned int j;//comparison counter
	//loop to control passes	
	for (pass= 0;pass<SIZE;++pass){
		//loop to control comparisons during each pass
	    for(j=0;j<size-1;++j){
	    	    //swap adjacent elements if theyre out of order
				if(array[j]>array[j+1]){
					swap(&array[j],&array[j+1]);		
				}//end if
			}//end inner for
		}//end outer for
    }//end function bubbleSort
    
//swap values at memory locations to which element1Ptr and
//element2Ptr point
void swap(int *element1Ptr,int *element2Ptr)
{
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr= hold;
}//end function swap
