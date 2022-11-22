salary = 30000
has_flat = True
good_person = False

if salary > 35000 and has_flat:
    if good_person:
        print("You are the perfect one!")
    else:
        print("We need a good person")
elif salary > 4000 or has_flat:
    print("Salary over 40000 or having a flat is enough")