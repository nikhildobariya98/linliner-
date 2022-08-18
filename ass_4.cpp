#include<stdio.h> 
#include<iostream>
using namespace std; 
inline int mul(int a, int b){return a*b;}

int main()  
{  
    int num;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);
	
	for(int i = 1; i <= 10; i++){
		cout << num  << " * " << i << " = " << mul(i, num) << endl;
	}  
  
    return 0;  
}  
   
