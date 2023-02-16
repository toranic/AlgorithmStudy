# 파이썬이 훨씬 편하다..
# 10번 DNA 비밀번호 (12891)

import sys

input = sys.stdin.readline

S, P = map(int, input().split())
DNA = input().rstrip()
DNA_dict = {'A': 0, 'C': 1, 'G': 2, 'T': 3}
ACGT = list(map(int, input().split()))
result = 0

start_index = 0
end_index = P - 1

check_list = [0, 0, 0, 0]

for i, j in enumerate('ACGT'): # check_list 
    check_list[i] = DNA[start_index: end_index + 1].count(j)

while S > end_index:

    if (ACGT[0] <= check_list[0] and ACGT[1] <= check_list[1] and ACGT[2] <= check_list[2] and ACGT[3] <= check_list[3]):
        result += 1
        
    start_index += 1
    end_index += 1

    check_list[DNA_dict[DNA[start_index - 1]]] -= 1
    try:
        check_list[DNA_dict[DNA[end_index]]] += 1
    except:
        continue

print(result)
