import time 

last_time = []

# RTOS not

while True:
    time.sleep(1)
    last_time.append(time.time())
    if len(last_time) > 2:
        print("Time difference:", (last_time[-1] - last_time[-2])*100000)


    
  
