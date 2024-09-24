# **Cvicenie 2 - 25.9.2024**

## **Podmienky**

pri podmienkach sa pouzivaju znaky: ==, !=, <, >, <=, >=

zlozene podmienky: || (or), && (and)

AND ma vzdy prednost pred OR (skratene vyhodnocovanie)
- pokial chceme vyhodnotit OR pred AND treba pouzit zatvorky

**Logical OR (||)**

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| 1           | 1           | 1      |
| 1           | 0           | 1      |
| 0           | 1           | 1      |
| 0           | 0           | 0      |

**Logical AND (&&)**

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| 1           | 1           | 1      |
| 1           | 0           | 0      |
| 0           | 1           | 0      |
| 0           | 0           | 0      |

## Incrementations / Decrementations

V C sa da pouzit operator ++, -- na inkrementaciu, dekrementaciu premennej

```c
int number1 = 5;
int number2 = number1++;
//here value of number2 is 5 and value of number1 is 6
```

```c
int number1 = 5;
int number2 = ++number1;
//here value of number2 is 6 and value of number1 is 6
```

## **Cykly (LOOPS)**

**FOR loop:**
for(int i = <start>; i <= <condition>; i++)

- da sa ist aj opacne
```c
for(int i = end; i >= <condition>; i--){
    //body
}
```
**WHILE loop:**
```c
while (condition){
    //body
}
```

**DO WHILE loop:**
```c
do{
    //body
} while(condition);
```
do{
} while(condition);


**INFINITE LOOP:**

```c
for(;;)
while(1)
do{}while(1);
```

## **Integer POLIA / ARRAYS:**

Datova struktura, ktora umoznuje uchovavat viacero hodnot rovnakeho datoveho typu

**Inicializacia:**

```c
int array[] = {1, 2, 3, 4, 5}; //size = 5
int array[5] = {1, 2, 3} //size = 5, but values on last two indices are garbage (WRONG USAGE), we dont need to set length if we assign values in definition
int array[5] = {0}; //best case - all values inicialized to 0
int length = sizeof(array) / sizeof(int);

#define SIZE 5
int array[SIZE] = {0}; //we inicialized empty array of size 5
```
Indexy poli vzdy zacinaju od 0
