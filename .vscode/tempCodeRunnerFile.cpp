import time
from win32com.client import Dispatch

v = Dispatch("SAPI.SpVoice")

x = time.localtime()


def drink():
    if x == x+5:
        print("Hello Afaq,its Time to drink a glass of water.")
        v.speak("Hello Afaq,its Time to drink a glass of water.")


drink()
