#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "\nenter number of input elements\n"<< endl;;
	cin >> n;
	double seq[n];
	for (int i=0;i<n;i++){
		cout << "\nenter 1 number\n"<< endl;;
		cin >> seq[i];
	}

	// increasing order
	for (int j=1;j<n;j++){
		double key =seq[j];
		int i = j-1;
		while((i>=0)&&(seq[i]>key)){
			cout<<seq[i+1]<<seq[i];
			seq[i+1]=seq[i];
			i--;
		}
		seq[i+1]=key;
	}

	cout<<"\nSequence in increasing order\n";
	for(int i=0;i<n;i++){
		cout << seq[i]<<" ";
	}
	cout<<endl;

	//decreasing order
	for (int j=1;j<n;j++){
		double key =seq[j];
		int i = j-1;
		while((i>=0)&&(seq[i]<key)){
			seq[i+1]=seq[i];
			i--;
		}
		seq[i+1]=key;
	}

	cout<<"\nSequence in decreasing order\n";
	for(int i=0;i<n;i++){
		cout << seq[i]<<" ";
	}
	cout<<endl;


	return 0;

}