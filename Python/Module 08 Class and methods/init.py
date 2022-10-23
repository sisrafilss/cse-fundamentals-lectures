class Phone:
    # class attribute
    manufactured: "China"

    # Constructor method
    def __init__(self, brand, price, color):
        # instance attributes
        self.brand = brand
        self.price = price
        self.color = color

    # method
    def send_sms(self, text, number):
        sms = f"Sending: {text} | to: {number}"
        return sms

my_phone = Phone('Realme', 'White', 12000)

print(my_phone.brand, my_phone.color, my_phone.price) # expected: Realme 12000 White
