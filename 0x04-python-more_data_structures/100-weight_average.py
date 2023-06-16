#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0
    num_val = 0
    den_val = 0
    for val in my_list:
        num_val += val[0] * val[1]
        den_val += val[1]
    return (num_val / den_val)
