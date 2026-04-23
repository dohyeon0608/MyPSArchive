import re

def solution(new_id):
    answer = re.sub('[.]$', '', re.sub('^$', 'a', re.sub('^[.]', '', re.sub('[.]{2,}', '.', re.sub('[^a-z0-9_.-]', '', new_id.lower()))))[0:15])
    if len(answer) < 3 : answer += answer[-1] * (3 - len(answer))
    
    return answer