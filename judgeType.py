def judgeType(Str):
    NUM= ["零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", \
           "玖", "拾", "佰", "仟", "万", "亿", "元", "整"]
    num= ["1","2","3","4","5","6","7","8","9","0"]

    for i in Str:
        if (i not in NUM )and (i not in num):
            return -1
        elif i in NUM:
            return 1
        else:
            return 0
