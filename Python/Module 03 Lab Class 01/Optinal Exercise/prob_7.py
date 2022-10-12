str_x = "Emma is good developer. Emma is Emma a writer Emma"

substr = ""
count = 0
str_x += " "
for char in str_x:
    if char == " ":
        if substr == "Emma":
            count += 1
        substr = ""
    else:
        substr += char
  

print(f"Emma appeard {count} times")