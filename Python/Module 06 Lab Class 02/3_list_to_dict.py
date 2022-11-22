my_list = ['@F1', 'OBCD', '!', '@F2', 'ADDAB', '!', '@F3', 'OKKA', '!']

#expected: {'@F1': 'OBCD', '@F2': 'ABBAB', '@F3': 'OKKA'}

out_dict = {}

for i, val in enumerate(my_list):
    if '@' in val:
        out_dict[val] = my_list[i + 1]

print(out_dict)