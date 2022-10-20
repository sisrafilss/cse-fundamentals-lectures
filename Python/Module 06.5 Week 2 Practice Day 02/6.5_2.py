import time
import requests
import json
from win10toast import ToastNotifier
toaster = ToastNotifier()

def api_response():
    api_url = 'http://www.boredapi.com/api/activity/'
    response = requests.get(api_url)
    content = response.content.decode('UTF-8')
    dict_data = json.loads(content)
    return dict_data['activity']



while True:
    message = api_response()
    toaster.show_toast(message, duration=5)

# toaster.show_toast("Hello World!!!",
# "Python is 10 seconds awsm!",
# duration=10)

# toaster.show_toast("Example two",
# "This notification is in it's own thread!",
# icon_path=None,
# duration=5,
# threaded=True)
# # Wait for threaded notification to finish
# while toaster.notification_active(): time.sleep(0.1)