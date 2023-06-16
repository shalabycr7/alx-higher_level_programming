#!/usr/bin/python3
def conv(value_list):
    num = 0
    data_list = max(value_list)
    for val in value_list:
        if data_list > val:
            num += val
    return (data_list - num)


def roman_to_int(roman_string):
    if not roman_string:
        return 0
    if not isinstance(roman_string, str):
        return 0

    roman_numbers = {'I': 1, 'V': 5, 'X': 10,
                     'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    data_list = list(roman_numbers.keys())
    result = 0
    last_rom = 0
    value_list = [0]
    for ch in roman_string:
        for r_num in data_list:
            if r_num == ch:
                if roman_numbers.get(ch) <= last_rom:
                    result += conv(value_list)
                    value_list = [roman_numbers.get(ch)]
                else:
                    value_list.append(roman_numbers.get(ch))

                last_rom = roman_numbers.get(ch)
    result += conv(value_list)
    return (result)
