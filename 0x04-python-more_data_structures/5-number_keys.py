#!/usr/bin/python3
def number_keys(a_dictionary):
    result = 0
    data_list = list(a_dictionary.keys())
    for i in data_list:
        result += 1
    return (result)
