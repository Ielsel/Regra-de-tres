# Calculadora de Regra de Três (C)

Este repositório contém um programa simples em C que executa regra de três simples em loop contínuo.  
Ele lê três valores do usuário — `a`, `b` e `c` — e calcula o valor correspondente de `x` pela fórmula:

O programa repete o processo indefinidamente, permitindo vários cálculos sem reiniciar a aplicação.

---

## Pré-requisitos

- Compilador C compatível com C99 ou superior  
  Ex: `gcc`, `clang`, `MSVC`
- (Opcional) Locale configurado para exibir acentos corretamente  
  O programa usa `setlocale(LC_ALL, "")`, que depende das configurações de idioma do sistema.

---

## Compilação

### GCC (Linux/macOS/WSL)

gcc -std=c99 -Wall -Wextra -o regra_de_tres main.c

### Clang

clang -std=c99 -Wall -Wextra -o regra_de_tres main.c

### MinGW (Windows)

gcc -std=c99 -Wall -Wextra -o regra_de_tres.exe main.c


---

## Execução

- **Linux/macOS:**

    ./regra_de_tres

- **Windows:**

    regra_de_tres.exe


---

## Exemplo de uso

Digite os valores:

Se em... 10

|

Eu tenho... 25

Então em... 4

|

X

Eu tenho: 10,0

**Explicação:**

- `a = 10` (se em 10 unidades…)
- `b = 25` (…eu tenho 25 unidades)
- `c = 4` (então em 4 unidades…)
- Resultado: `10,0` (eu terei 10 unidades)

---

## Como funciona

O programa roda dentro de um laço infinito com `while(true)`, repetindo:

1. Solicita `a`, `b` e `c`
2. Calcula `x = b * c / a`
3. Exibe o resultado com uma casa decimal
4. Reinicia o ciclo

---

