import serial
ser = serial.Serial('COM4', 115200)
while True:
    print ser.readline()
