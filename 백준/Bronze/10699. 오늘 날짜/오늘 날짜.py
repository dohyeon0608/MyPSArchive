import datetime

date = datetime.datetime.now() + datetime.timedelta(hours=9)
print(date.strftime("%Y-%m-%d"))