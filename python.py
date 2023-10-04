T = int(input())  # รับจำนวนชุดทดสอบ

for _ in range(T):
    N, K = map(int, input().split())  # รับจำนวนเยลลี่และจำนวนน้องค่ายคอม
    colors = input()  # รับสีของเยลลี่ทั้งหมด

    unique_colors = set(colors)  # นับจำนวนสีของเยลลี่ทั้งหมดโดยใช้เซต

    if len(unique_colors) >= K:
        print("YES")
    else:
        print("NO")
