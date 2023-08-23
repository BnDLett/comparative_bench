import time

def main():
  x = 1
  y = 1

  start = time.process_time_ns()
  
  for i in range(1_000_000):
    mult = x or y
    255*mult

  end = time.process_time_ns()

  print((end - start) / 10**6)

  x = 1
  y = 1

  start = time.process_time_ns()
  
  for i in range(1_000_000):
    if x or y:
      255*mult

  end = time.process_time_ns()

  print((end - start) / 10**6)

if __name__ == "__main__":
  main()
