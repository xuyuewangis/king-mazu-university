attrs = ["筋骨","敏捷","气势","反应","技巧","内力"]
tables = [['萧峰',20,17,20,20,18,19],
          ['杨过',18,19,17,20,18,18],
          ['令狐冲',12,17,14,20,19,13],
          ['张无忌',20,17,15,14,20,20],
          ['郭靖',19,18,19,18,19,20]]
names = [i[0] for i in tables]
scores = [i[1:] for i in tables]
totals = [sum(j) for j in scores]

for i in range(len(tables)):
    print("{}大侠的武功总得分为:{}".format(names[i],totals[i]))

avgs = []
for i in range(len(attrs)):
    avgs.append(sum([ j[i] for j in scores])/len(names))

for i in range(len(tables)):
    print("{}的平均分为{:.2f}".format(attrs[i],avgs[i]))
    

print("萧峰")
