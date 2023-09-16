# compares user output and correct output
import requests

def compare(user_output, correct_output):
  user_data = requests.get(user_output)
  if(user_data.status_code != 200):
    return "Something went wrong"
  user_data = user_data.text.split("\n")
  
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

compare("https://cses.fi/file/d3a4ceb9eac0dbef43c092350ddcd3cd9cf95447b0ed2ab65ec906e85c73072b/2/1/", "https://cses.fi/file/3b8780e7fb0fd7b2a3449a530f4dd293922711c03d4695220b7f045242f08e95/3/1/")
  
