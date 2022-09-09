import pyautogui  as pg 
import time 

time.sleep(4)

for i in range(1000):
    pg.hotkey('ctrl','v')
    pg.press('enter')