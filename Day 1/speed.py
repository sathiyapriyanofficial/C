import time

last_time = []

while True:
    time.sleep(1)
    last_time.append(time.time())

    if len(last_time) > 2:
        avg_time = (last_time[-1] - last_time[-2]) * 1000
        print(f"Average time between prints: {avg_time} ms")