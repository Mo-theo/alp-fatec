Algoritmo de verificação de par ou ímpar em C++ utilizando apenas ferramentas como estruturas de decisão IF.

![Diagrama](L2_ex4.png)


graph TD
    INICIO --> "Par ou impar?"
    "Par ou impar?" --> "Digite um número inteiro positivo"
    "Digite um número inteiro positivo" --> n1
    n1 --> |n1, resto: inteiro| "n1, resto: inteiro"
    "n1, resto: inteiro" --> |n1, resto: inteiro| "n1, resto: inteiro<br>n1&lt;-0, resto&lt;-0"
    "n1, resto: inteiro" --> |resto &lt;- n1 MOD 2| "resto &lt;- n1 MOD 2"
    "resto &lt;- n1 MOD 2" --> |SE (resto = 0) ENTÃO| "O número digitado é par"
    "resto &lt;- n1 MOD 2" --> |SENÃO| "O número digitado é impar"
    "O número digitado é par" --> FIM
    "O número digitado é impar" --> FIM
