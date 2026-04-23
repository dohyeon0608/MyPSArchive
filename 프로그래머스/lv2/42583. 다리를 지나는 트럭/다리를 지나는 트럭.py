def solution(bridge_length, weight, truck_weights):
    bol=truck_weights[:]
    doing=[]
    sec=[]
    second=0
    clear=[]
    while((bol != clear) or second<bridge_length):
        second+=1
        mov=truck_weights[0] if truck_weights!=[] else 0
        bro=0
        for i in range(len(doing)):
            sec[i]+=1
        if bridge_length in sec:
            x=sec.index(bridge_length)
            sec.remove(sec[x])
            clear.append(doing[x])
            doing.remove(doing[x])
        for i in range(len(doing)):
            bro+=doing[i]
        if bro+mov<=weight and truck_weights != []:
            doing.append(mov)
            sec.append(0)
            del truck_weights[0]
    return second