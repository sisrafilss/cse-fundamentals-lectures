class Shop:
    cart = []

    def __init__(self, buyer):
        self.buyer = buyer
        
    def add_to_cart(self, item):
        self.cart.append(item)


buyer_1 = Shop('Raju')
buyer_1.add_to_cart("T-Shirt")
print(buyer_1.cart) # expected: ['T-Shirt']

buyer_2 = Shop('Mannan')
buyer_2.add_to_cart('Mobile Phone')
print(buyer_1.cart) # expected: ['T-Shirt', 'Mobile Phone']
