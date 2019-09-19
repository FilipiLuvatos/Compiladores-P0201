/*

Nome: Jean Lourenço     RA: 22.216.015-2
Nome: Filipi de Luca    RA: 22.216.027-7

*/

#include <stdio.h>
#include <conio.h>

char GuardaTudo[200][20] = {0};
int linha = 0;
int coluna = 0;
int auxN = 0;


/*                           Retorna esses valores: 
              Numero = n   Letra = s  Caracter invalido = $   Espaço = #           */
char checaletra(char letrinha){

if(letrinha == '0' || letrinha == '1' ||  letrinha == '2' || letrinha == '3' ||  letrinha == '4' ||  letrinha == '5' ||  letrinha == '6' ||  letrinha == '7' || letrinha == '8' || 
letrinha == '9'){
return 'n';
}

if(letrinha == 'A' || letrinha == 'B' || letrinha == 'C' || letrinha == 'D' || letrinha == 'E' || letrinha == 'F' || letrinha == 'G'
|| letrinha == 'H' || letrinha == 'I' || letrinha == 'J' || letrinha == 'K' || letrinha == 'L' || letrinha == 'M' || letrinha == 'N'
|| letrinha == 'O' || letrinha == 'P' || letrinha == 'Q' || letrinha == 'R' || letrinha == 'S' || letrinha == 'T' || letrinha == 'U'
|| letrinha == 'V' || letrinha == 'W' || letrinha == 'X' || letrinha == 'Y' || letrinha == 'Z'|| 

letrinha == 'a' || letrinha == 'b' || letrinha == 'c' || letrinha == 'd' || letrinha == 'e' || letrinha == 'f' || letrinha == 'g' || 
letrinha == 'h' || letrinha == 'i' || letrinha == 'j' || letrinha == 'k' || letrinha == 'l' || letrinha == 'm' || letrinha == 'n' ||
letrinha == 'o' || letrinha == 'p' || letrinha == 'q' || letrinha == 'r' ||letrinha == 's' ||  letrinha == 't' || letrinha == 'u' || 
letrinha == 'v' || letrinha == 'w' || letrinha == 'x' || letrinha == 'y' || letrinha == 'z' ){
return 's';
}

if(letrinha == '\'' || letrinha == '\"' || letrinha == '!' || letrinha == '@' || letrinha == '#' || letrinha == '$' || letrinha == '%'
|| letrinha == '&' || letrinha == '*' || letrinha == '(' || letrinha == ')' || letrinha == '_' || letrinha == '-'
|| letrinha == '+' || letrinha == '=' || letrinha == '`' || letrinha == '{' || letrinha == '[' || letrinha == '^'
|| letrinha == '~' || letrinha == '}' || letrinha == ']' || letrinha == '?' || letrinha == '/'|| letrinha == ';'|| letrinha == ':'
|| letrinha == '>'|| letrinha == '<'|| letrinha == '.'|| letrinha == ','|| letrinha == '\\' || letrinha == '|'){
return '$';
}

else
{
    return '#';
}

}

int main(int argc, char* argv[]){

char palavra[200] = {0};
char letra;
int aux = 0;

printf("\n\nDigite numeros ou letras maiusculos ou minusculos: \n");

// Lendo tudo inclusive espaços.
scanf("%[^\n]c", palavra);


for(int i = 0; i < 100; i++){

// Checa o caracter para saber se é número ou letra.
letra = checaletra(palavra[i]);

if(letra == 'n'){
  
    if(auxN == 0 || checaletra(palavra[i-1]) == '#'){
    printf("N(");
    auxN = 1;
    }
    
    printf("%c", palavra[i]);

    if( checaletra(palavra[i+1]) == 's' ){
    printf(")");
    }

}

// Checa se é letra.
if(letra == 's'){

// Roda até encontrar o próximo espaço, e encerra o for. Incrimenta no For principal a distancia até o espaço. 
for(int k = i; k < 200; k++){
    
    char nova = checaletra(palavra[k]);

    if(nova == 's'){
    GuardaTudo[linha][coluna] = palavra[k];

    if(aux == 0){
    printf("V(%i)", linha);
    aux = 1;
    }

    coluna++;  
    }

    if(nova == 'n'){
    GuardaTudo[linha][coluna] = palavra[k];
    coluna++;
    }

    if(nova == '#'){
    i = i + coluna;
    aux = 0;  
    linha++;
    coluna = 0;
    break;  
    }
}

}

// Checa se é espaço.    
if(letra == '#'){

    if(auxN == 1){
    printf(")");
    auxN = 0;
    }
}

// Checa se o caracter é inválido.
if(letra == '$'){
    printf("Caracter invalido.");
    break;
}

}

printf("\n\nMatriz:\n");

for (int i = 0; i < linha; i++)
{
    for (int k = 0; GuardaTudo[i][k] != '\0'; k++)
    {
        printf("%c", GuardaTudo[i][k]);
    }
printf("\n");
}


printf("\n\n");
getch();
return 0;
}
