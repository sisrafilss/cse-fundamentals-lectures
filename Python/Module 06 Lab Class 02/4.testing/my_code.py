import requests

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

def get_response(url):
    return requests.get(url)

if __name__ == "__main__": # this line prevent the code from executing the function while testing
    res = get_response(api_url)
    print(res.status_code)