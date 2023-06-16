#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    result = a_dictionary.copy()
    data_list = list(result.keys())
    for i in data_list:
        result[i] *= 2
    return (result)
