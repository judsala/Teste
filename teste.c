1- SOMA = 91;

2 - int main() {

    int number = 5;
    int t1 = 0;
    int t2 = 1;
    int next = 0;
    int soma = 0;
    
    printf("%d %d", t1, t2);
    for (int i = 1; i <= number; i++)
    {
        next = t1 + t2;
        printf(" ");
        printf("%d", next);
        t1 = t2;
        t2 = next;
        soma += next;
    }
    printf("\n Soma : %d", soma + 1);
    return 0;
}

3 - 3) Descubra a lógica e complete o próximo elemento:



a) 1, 3, 5, 7, 9

b) 2, 4, 8, 16, 32, 64, 128

c) 0, 1, 4, 9, 16, 25, 36, 49

d) 4, 16, 36, 64, ____

e) 1, 1, 2, 3, 5, 8, 13

f) 2,10, 12, 16, 17, 18, 19, ____

4 - O caminhão estará mais perto de Ribeirão Preto uma vez que a velocidade do carro é maior e ele não pára nos pedágios, assim o carro estará mais próximo de Franca.

5 - int main() {

  char *str = "juliana";
  char str1[100];
  int end = 0, i = 0, start = 0;
  
  while (str[i] != '\0')
    i++;
    
  end = i;
  for (start = 0; start <= i; start++)
  {
    str1[start] = str[end];
    end--;
  }
  str1[start] = '\0';
  printf("%s", str1);  
}