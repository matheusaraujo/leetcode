class Solution:
    def __init__(self):
        self.below20 = ['','One','Two','Three','Four','Five',
            'Six','Seven','Eight','Nine','Ten','Eleven',
            'Twelve','Thirteen','Fourteen','Fifteen','Sixteen',
            'Seventeen','Eighteen','Nineteen']
        self.tens = ['', '', 'Twenty', 'Thirty', 'Forty', 'Fifty',
            'Sixty', 'Seventy', 'Eighty', 'Ninety']
        self.thousands = ['','Thousand','Million','Billion']

    def numberToWordsThreeDigits(self, num: int) -> List[str]:
        if num == 0: return ['']
        elif num < 20: return [self.below20[num]]
        elif num < 100: return [self.tens[num // 10], self.below20[num % 10]]
        else: return [self.below20[num // 100], 'Hundred'] + self.numberToWordsThreeDigits(num % 100)

    def numberToWords(self, num: int) -> str:
        if num == 0: return "Zero"
        result = []
        for i in range(len(self.thousands)):
            if num % 1000 != 0:
                result = self.numberToWordsThreeDigits(num % 1000) + [self.thousands[i]] + result
            num //= 1000

        result = filter(lambda r: r != "", result)

        return " ".join(result)
