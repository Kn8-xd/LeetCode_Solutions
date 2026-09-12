class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        minfreq=Counter(words[0])
        for word in words:
            minfreq &=Counter(word)
        return list(minfreq.elements())