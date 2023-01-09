class Shopper:
    def __init__(self, name):
        self.name = name
        self.cart = []
    
    def add_to_cart(self, item, price, quantity):
        self.cart.append({'item': item, 'price': price, 'quantity': quantity})

    def checkout(self, amount):
        price = 0
        for item in self.cart:
            price += item['price'] * item['quantity']
        if amount > price:
            return f"Here are your items and extra money {amount - price}"
        elif amount < price:
            return f"Please give me more money: {price - amount}"
        else:
            return "Here are your items."

shopping = Shopper('Bag Tan')
shopping.add_to_cart('shirt', 400, 3)
shopping.add_to_cart('shoes', 899, 4)
shopping.add_to_cart('pant', 1400, 2)

reply = shopping.checkout(8000)
print(reply) # expected: Here are your items and extra money 404