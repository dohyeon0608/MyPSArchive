def run():
    dp = [1, 1]
    for i in range(2, 491):
        dp.append(dp[i - 1] + dp[i - 2])
        
    while True:
        X = int(input())
        if X == -1: break
        else: print(f"Hour {X}: {dp[X-1]} cow(s) affected")
        
run()