import math

def main():
    T = int(input())
    results = []

    for _ in range(T):
        H, X, Y1, Y2, K = map(int, input().split())

        if K == 1 or X * K + Y2 >= Y1 * K:
            results.append(-(-H // X))
            results.append("Appended message after if condition")
        else:
            initial_damage = Y1 * K
            remaining_health = H - initial_damage
            additional_hits = -(-remaining_health // (Y1 - Y2))
            results.append(K + additional_hits)
            results.append("Appended message after else condition")

    # Output results
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
