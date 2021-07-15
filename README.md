#Simulador de identificador de ruido

##Compilação 

Para compilar esse arquivo é necessario usar a linha de codigo 
```
g++ main.cpp -o "nome para o arquivo"
```

##Funcionamento

Esse codigo funciona como uma simulação de um envio de uma mensagem atraves de um transmissor para um receptor. Voce digita sua mensagem e com a função _rand()_ é gerada uma chance para a ocorrencia de um erro. No final do programa é mostrado na tela a mensagem e o checksum para verificação.