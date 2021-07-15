#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    char string [30]{{'0'}},erro;
    int soma=0,checksum, tamanho;
    srand(time(NULL));

    cout<<"Digite sua mensagem de ate 30 caracteres:  ";
    cin>>string;

    cout<<"valores em ASCII:  ";

    for (tamanho = 0; string[tamanho] != 0 ; tamanho++)
    {
        soma+=string[tamanho];
        printf("\n%d\n", string[tamanho]);
    }
    
    checksum = soma % 256;

    printf("Soma: %d\n",soma);

    printf("Checksum:\nEm int: %d         Em char: %c\n\n",checksum,checksum);


    erro=rand() % 100;

    if(erro < 50){
        soma+=(rand() % 10);
        checksum = soma % 256;
        string[rand() % tamanho]+=rand() % 10;
        cout<<"\n\nOCORREU UM ERRO\n\n";
    }


    cout<<"Mensagem recebida:  ";

    for (tamanho = 0; string[tamanho] != 0 ; tamanho++)
    {
        
        printf("\n%c\n", string[tamanho]);
    }
    

    printf("Soma: %d\n",soma);

    printf("Checksum:\nEm int: %d         Em char: %c\n\n",checksum,checksum);
    

}