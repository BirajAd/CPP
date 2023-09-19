# compares user output and correct output
import requests

def compare(user_output, correct_output):
  user_data = requests.get(user_output)
  if(user_data.status_code != 200):
    return "Something went wrong"
  user_data = user_data.text.split("\n")
  print(user_data)
  
  correct_data = requests.get(correct_output)
  if(correct_data.status_code != 200):
    return "Something went wrong"
  correct_data = correct_data.text.split("\n")

  if(len(correct_data) != len(user_data)):
    return "Your format looks wrong"
  
  for u, c in zip(user_data, correct_data):
    if len(u) <= 10:
      print(u, c)
    else:
      u = u.split()
      c = c.split()
      print("562" in u, "562" in c)
      u = sum([int(i) for i in u])
      c = sum([int(i) for i in c])
      print("Sum: ", u, c)

compare("https://cses.fi/file/3ae701a5479be60e446124b08c44f332988b5e28b7bb2ccbd5389b29c39a81c6/3/1/", "https://cses.fi/file/fb96e3429c424c84ac0839d1533e5339650e1a922e95edc9798e979b219d90a8/2/1/")
  
