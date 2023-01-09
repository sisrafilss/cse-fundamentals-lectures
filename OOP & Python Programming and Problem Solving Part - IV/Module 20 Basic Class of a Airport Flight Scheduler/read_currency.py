import csv

info = None

with open("./data/currencyrate.csv", "r") as file:
    lines = csv.reader(file)
    for line in lines:
        if "Bangladesh" in line[0]:
            info = line
            break

# homework
# convert 50 USD to BDT
def usd_to_bdt(usd):
    usd_rate = float(info[3])
    print(f"{usd} USD = {usd * usd_rate} BDT")

usd_to_bdt(50)


# convert 5000 BDT to USD
def bdt_to_usd(bdt):
    bdt_rate = float(info[2])
    print(f"{bdt} BDT = {bdt * bdt_rate} USD")
    
bdt_to_usd(5000)