import requests
import json

words = ['boring', 'board']

def api_response(url):
    response = requests.get(url)
    content = response.content.decode("UTF-8")
    dict_content = json.loads(content)
    message = dict_content['activity']
    return message


def listen():
    return input(">> ")

def decide(command):
    command_lower = command.lower()
    for word in words:
        if word in command_lower:
            message = api_response('http://www.boredapi.com/api/activity/')
            talkback(message)


def talkback(response):
    print(response)



decide(listen())