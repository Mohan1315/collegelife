m = int(input())

set_m = set(map(int, input().split()))

n = int(input())

set_n = set(map(int, input().split()))


symmetric_diff = set_m.symmetric_difference(set_n)


result = sorted(symmetric_diff)


for item in result:
    print(item)
