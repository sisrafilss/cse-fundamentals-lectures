
sample_dict = {
    "name": "Kelly",
    "age": 25,
    "salary": 8000,
    "city": "New york"
}

# Keys to extract
keys = ["name", "salary"]

output = {key:value for (key, value) in sample_dict.items() if key in keys}

print(output)

