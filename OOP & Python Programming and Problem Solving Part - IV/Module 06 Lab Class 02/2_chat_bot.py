""" Chatbot
    Steps:
    1. Input/Listen
    2. Process/Decide
    3. Output/Talkback
"""
greet_words = ['hi', 'hello', 'yo', 'hey']
bye_words = ['bye', 'tata', 'biday']
bad_words = ['dog', 'poca']


def listen():
    return input("Say something: ")

def decide(command):
    command = command.lower()
    broken_words = command.split(" ")
    
    for word in broken_words:
        if word in greet_words:
            talkback("Hi man!")
            break
        elif word in bye_words:
            talkback("Tata bye bye!")
            break
        elif word in bad_words:
            talkback("You are a bad guy. Behave yourself!")
            break


def talkback(response):
    print(response)

command = listen()
decide(command)