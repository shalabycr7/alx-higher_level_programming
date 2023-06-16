#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    mat_data = matrix.copy()

    for i in range(len(matrix)):
        mat_data[i] = list(map(lambda x: x**2, matrix[i]))

    return (mat_data)
