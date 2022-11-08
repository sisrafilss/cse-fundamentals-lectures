from itertools import permutations

words = ["I", "Love", "Bangladesh"]

for word in permutations(words):
    print(word)

numbers = [1, 2, 3]
for i in permutations(numbers):
    print(i)