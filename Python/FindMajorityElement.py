def MajorEle(numList):
    idx, ctr = 0, 1

    for i in range(1, len(numList)):
        if numList[idx] == numList[i]:
            ctr += 1
        else:
            ctr -= 1
            if ctr == 0:
                idx = i
                ctr = 1
    return numList[idx]

print(MajorEle([1, 2, 5, 1, 10, 1, 1, 18, 15, 5, 6, 8, 9, 5, 5, 5, 5, 5]))
