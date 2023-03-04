#include <iostream>
#include <algorithm>

void displayBars(int vet[]){
	for(int j=0;j<=9;j++){
		for(int i=0;i<vet[j];i++){
			std::cout << "|";
		}
		std::cout << "[" << vet[j] << "]" << std::endl;
	}
}

void bubbleSort(int vet[]){
	for(int j=0;j<=8;j++){
		for(int i=0;i<=8;j++){
			if(vet[i]>vet[i+1]){
				std::swap(vet[i],vet[i+1]);
			}
		}
	}
}

void selectionSort(int vet[]){
	for(int j=0;j<=8;j++){
		for(int i=0+j;i<=9;i++){
			if(vet[i]<vet[j])
				std::swap(vet[i],vet[j]);
		}
	}
}

void insertionSort(int vet[]){
	
	int chave;
	
	for(int j=0;j<=9;j++){
		chave=vet[j];
		for(int i=0;i<=j;i++){
			if(chave<vet[i]){
				chave=vet[j];
				vet[j]=vet[i];
				vet[i]=chave;
			}
		}
	}
}

int main(){
	
	int resposta, vet[10];
	
	for(int i=0;i<=9;i++){
		std::cout << "Digite o valor " << i+1 << " do arranjo: ";
		std::cin >> vet[i];
	}
	
	std::cout << std::endl;
	
	while(resposta!=1 && resposta!=2 && resposta!=3){
		std::cout << "Escolha o algoritmo de ordenacao que deseja usar para processar o seu arranjo(1-BUBBLE, 2-SELECTION ou 3-INSERTION): ";
		std::cin >> resposta;
		
		std::cout << std::endl << "Arranjo desordenado:" << std::endl;
		displayBars(vet);
	
		switch(resposta){
			case 1: bubbleSort(vet);
			break;
			case 2: selectionSort(vet);
			break;
			case 3: insertionSort(vet);
			break;
			default: std::cout << "Isso nao corresponde a nenhum algoritmo." << std::endl;
		}
	}	
	
	std::cout << std::endl;
	
	std::cout << "Arranjo ordenado:" << std::endl;
	displayBars(vet);
	
	return 0;
	
}
