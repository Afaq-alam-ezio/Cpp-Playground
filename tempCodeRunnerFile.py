import time
from win32com.client import Dispatch

v = Dispatch("SAPI.SpVoice")

x = time.localtime()

def drink():
        print("Hello Afaq,its Time to drink a glass of water. current time is", time.strftime("%H-%M", x, "pm"))
        v.speak("Hello Afaq,its Time to drink a glass of water")
        time.sleep(10) # here 3600 means 1 hour of time delay

while True: #  this loop is in infinite mode
    drink()
