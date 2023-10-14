import serial
import pyautogui as pg


pg.FAILSAFE=False


ser = serial.Serial("COM3",'9600')
while True:
    read = ser.readline().decode('ascii')
    readArray = read.split()
    b = readArray[0]
    f = readArray[1]
    c = readArray[2]
    x = readArray[3]
    y = readArray[4]
    m = readArray[5]
    print(b, ' ', f, ' ', c, ' ', x,' ',y,' ',m)
    if c=='c':
        pg.click(button='left')
    if b=='b':
        pg.press('b')
    if f=='f':
        pg.press('f')

    pg.moveTo(int(x), int(y))
