#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    data_list = list(a_dictionary.keys())
    for val in data_list:
        if value == a_dictionary.get(val):
            del a_dictionary[val]
    return (a_dictionary)
