#include <stdio.h> 
#include <string.h> 

void printArray(int arr[], int n) 
{ 
for (int i=0; i<n; i++) 
	printf("%d ", arr[i]); 
} 

int main() 
{ 
	int n = 10; 
	int arr[n]; 

	// Fill whole array with 100. 
	memset(arr, 10, n*sizeof(arr[0])); 
    //each byte of 10 ie 4 bytes will be converted to 10 in hex and then four hexes to dec.
	printf(" after memset()\n"); 
	printArray(arr, n); 

    
	return 0; 
} 
