#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    data_list = list(a_dictionary.keys())
    data_list.sort()
    for i in data_list:
        print(f"{i}: {a_dictionary.get(i)}")
