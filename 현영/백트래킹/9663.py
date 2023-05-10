n = int(input())
col = [0 for _ in range(n)]
visited = [False for _ in range(n+1)]
cnt = 0


def board(i):

    if i == n:
        global cnt
        cnt += 1
        return

    for j in range(1, n+1):
        if not visited[j]:
            col[i] = j
            if promising(i):
                visited[j] = True
                board(i+1)
                visited[j] = False


def promising(i):
    k = 0
    flag = True

    # 이미 판에 놓인 행들만 체크
    while k < i and flag:
        # 같은 열에 있거나 대각선에 있을 때
        if col[i] == col[k] or abs(col[i]-col[k]) == i - k:
            flag = False
        k += 1

    return flag


board(0)
print(cnt)