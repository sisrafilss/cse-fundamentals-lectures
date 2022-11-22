""" Problem
    Download an image and set as desktop wallpaper automatically
"""
import requests
import json
import PyWallpaper

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# Get the json
response = requests.get(api_url)
content = response.content.decode('UTF-8')

# convert the string to json
dict_content = json.loads(content)

# get the image url
imgage_url = dict_content['url']

# download image
res = requests.get(imgage_url)

# save the image
with open('apod.png', 'wb') as image:
    image.write(res.content)

# change current desktop wallpaper
PyWallpaper.change_wallpaper('D:\Phitron - Source Code\Lectures\Python\Module 06 Lab Class 02\apod.png') # full path of the image

