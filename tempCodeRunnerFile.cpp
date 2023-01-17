#include <iostream>
using namespace std;
template <typename T> 
void insertionSort(T d[],int N){ 
    for(int i=1;i<N;i++){ 
		cout << "Pass " << i << ":"; 
		
		int j= i-1; 
    	T key = d[i]; 
    	while(d[j]<key && j>=0)
    	{ 
           d[j+1]=d[j];
           j--; 
    	}
       d[j+1]=key; 

		for(int j=0;j < N;j++){  
			cout << d[j] ; 
			if(j!=N-1) cout << " "; 
		}
		cout << endl; 
	}
}