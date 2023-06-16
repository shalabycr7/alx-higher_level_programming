#!/usr/bin/python3
def uniq_add(my_list=[]):
    data_list = set(my_list)
    result = 0
    for i in data_list:
        result += i
    return (result)
