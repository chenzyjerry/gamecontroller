import serial
import pyautogui as pg
import os
import platform


pg.FAILSAFE=False

# be lazy
if platform.system() == 'Windows':
    ser = serial.Serial("COM3",'9600')
elif platform.system() == 'Darwin':
    ser = serial.Serial("/dev/cu.usbmodem212101",'9600')
elif platform.system() == 'Linux':
    ser = serial.Serial("/dev/ttyACM0",'9600')

leftDown = False
rightDown = False
while 1:
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
    if int(x) < 900:
        pg.keyDown('left')
        leftDown = True
    elif leftDown:
        pg.keyUp('left')
        leftDown = False
    if int(x) > 1000:
        pg.keyDown('right')
        rightDown = True
    elif rightDown:
        pg.keyUp('right')
        rightDown = False

    if int(y) < 400:
        pg.press('up')

    # pg.moveTo(int(x), int(y))