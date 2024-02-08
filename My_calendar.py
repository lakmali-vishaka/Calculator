
import calendar


yes = "y"
No ="N"

print("if you need to get specific month of a year type 'Y' or if you need to getentire calender type'N' ")
ans =input("you response :")

#get month of a year
if ans == yes:
   year =int(input("enter the year:"))
   month =int(input("enter the month")) 

   print(calendar.month(year,month))

elif ans == No:

  year =int(input("enter the year:"))
  #to get entire calander
  print(calendar.calendar(year))
