class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        map = dict()
        secret = [i for i in secret]
        guess = [i for i in guess]
        for i in secret:
            map[i] = map.get(i, 0) + 1

        b, c = 0, 0
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                b += 1
                map[secret[i]] -= 1
                secret[i] = '-'
                guess[i] = '-'
        
        for i in guess:
            if map.get(i, 0) > 0:
                map[i] -= 1
                c += 1

        return f'{b}A{c}B'
