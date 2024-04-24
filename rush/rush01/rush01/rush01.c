/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:47:35 by angemart          #+#    #+#             */
/*   Updated: 2024/02/18 14:47:40 by angemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Función para verificar si las restricciones se cumplen en una fila o columna
int check_constraints(int row_or_col[4]) 
{
    int heights[5] = {0}; // Array para contar las alturas (índice 1-4)
    int i = 0;

    // Verifica la restricción de no repetición de alturas
    while (i < 4) 
    {
        int height = row_or_col[i];
        if (heights[height] == 1) {
            // Altura repetida, no cumple la restricción
            return 0;
        }
        heights[height] = 1;
        i++;
    }

    // Verifica las vistas desde arriba y los lados
    if (row_or_col[0] != 1 || row_or_col[3] != 4) 
    {
    // Vista desde la izquierda o arriba no coincide con el valor proporcionado
        return 0;
    }
    // Si todas las restricciones se cumplen, devuelve 1
    return 1;
}

// Función para resolver el problema
// Función para verificar si un número ya está presente en la fila o columna
bool isSafe(int matrix[4][4], int row, int col, int num) {
    int i = 0;
    while (i < 4) {
        if (matrix[row][i] == num || matrix[i][col] == num) {
            return false;
        }
        i++;
    }
    return true;
}

// Función para resolver el problema utilizando backtracking
bool solvePuzzle(int matrix[4][4]) {
    int row = 0, col = 0;
    bool found = false;

    // Buscar una celda vacía
    while (row < 4) {
        col = 0;
        while (col < 4) {
            if (matrix[row][col] == 0) {
                found = true;
                break;
            }
            col++;
        }
        if (found) {
            break;
        }
        row++;
    }

    // Si no hay celdas vacías, hemos encontrado una solución
    if (!found) {
        return true;
    }

    // Probar números del 1 al 4 en la celda vacía
    int num = 1;
    while (num <= 4) {
        if (isSafe(matrix, row, col, num)) {
            matrix[row][col] = num;
            if (solvePuzzle(matrix)) {
                return true;
            }
            matrix[row][col] = 0; // Retroceder si no se encuentra una solución
        }
        num++;
    }

    return false;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Parsear los valores de entrada
    int input[16];
    int i = 0;
    while (i < 16) {
        sscanf(argv[1], "%d", &input[i]);
        i++;
    }

    // Crear la matriz inicial con ceros
    int matrix[4][4] = {0};

    // Llenar la matriz con los valores de entrada
    i = 0;
    while (i < 16) {
        int row = i / 4;
        int col = i % 4;
        matrix[row][col] = input[i];
        i++;
    }

    // Resolver el problema
    if (solvePuzzle(matrix)) {
        // Imprimir la solución
        int j = 0;
        while (j < 4) {
            int k = 0;
            while (k < 4) {
                printf("%d ", matrix[j][k]);
                k++;
            }
            printf("\n");
            j++;
        }
    } else {
        printf("Error\n");
    }

    return 0;
}

// int main(int argc, char *argv[])
// {
//     if (argc != 2)
//     {
//         printf("Error: Debes proporcionar una cadena de entrada válida.\n");
//         return (1);
//     }
//     solve_rush01(argv[1]);
//     return (0);
// }

