#include <iostream>
#include <cmath>

using namespace std;

int *DecToBinVector(int *bin, int dec, int tamanho){
	
	int i, j = 0;
	
	for(i = tamanho-1; i >= 0; i--){
		dec&(int)pow(2, j) ? bin[i] = 1: bin[i] = 0;
		j++;
	}
	
	return bin;
}

int *p10(int *bin){
	int *vet = new int[10];
	
	vet[0] = bin[2];
	vet[1] = bin[4];
	vet[2] = bin[1];
	vet[3] = bin[6];
	vet[4] = bin[3];
	vet[5] = bin[9];
	vet[6] = bin[0];
	vet[7] = bin[8];
	vet[8] = bin[7];
	vet[9] = bin[5];
	
	return vet;
}

int *p8(int *bin){
	int *vet = new int[8];
	
	vet[0] = bin[5];
	vet[1] = bin[2];
	vet[2] = bin[6];
	vet[3] = bin[3];
	vet[4] = bin[7];
	vet[5] = bin[4];
	vet[6] = bin[9];
	vet[7] = bin[8];
	
	return vet;
}


int main(int argc, char const* argv[]){
	
	int *bin;
	int dec, i;
	
	cin >> dec;
	
	bin = new int[10];
	
	bin = DecToBinVector(bin, dec, 10);
	
	for(i = 0; i < 10; i++){
		cout << bin[i];
	}
	
	cout << endl << endl;
	
	bin = p10(bin);
	
	for(i = 0; i < 10; i++){
		cout << bin[i];
	}
	
	cout << endl << endl;
	
	free(bin);
	
	return 0;
}
