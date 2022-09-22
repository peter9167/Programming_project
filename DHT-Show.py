import schedule
import time
import Adafruit_DHT

sensor = Adafruit_DHT.DHT11
pin = 2

humidity, temperature = Adafruit_DHT.read_retry(sensor, pin)

def DHT_READ():
    humidity, temperature = Adafruit_DHT.read_retry(sensor, pin)

def DHT_SHOW():
    print("Current Temperature Humidity")
    print("┌──────┬────────┐")
    print("│ Temp │ {0:0.1f}*C │".format(temperature))
    print("├──────┼────────┤")
    print("│ Humi │  {1:0.1f}% │".format(humidity))
    print("└──────┴────────┘")

schedule.every(1).seconds.do(DHT_READ)
schedule.every(1).seconds.do(DHT_SHOW)

while True:
    schedule.run_pending()
    time.sleep(1)