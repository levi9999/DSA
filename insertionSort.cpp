#include<stdio.h>
#include<iostream>


int main()
{
	int arr[5]={1,6,5,2,4};
	int k=0;
	for(int p=0 ; p<5 ; p++){
		std::cout<<arr[p];
	}
	std::cout<<"\n\n";

	for(int j=2 ; j<=5 ; j++)
	{
		k=arr[j];
		// put all j in sorted array A[i....]
		int i=j-1;
		while(i>0 && arr[i]>k )
			{
				arr[i+1]=arr[i];
				i=i-1;
			}
		arr[i+1]=k;


	}
	for(int p=0 ; p<5 ; p++){
		std::cout<<arr[p];
	}

	std::cout<<"\n";

	
	std::cout<<"\nSUCCESSFUL EXECUTION !!!";
	return 0;

}