class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        """
        digits: integer array digits
        number: incremented array
        """
        # join the list to form an integer
        digits = int("".join(list(map(str, digits))))
        # Increment and again turn it to a list
        number = list(str(digits + 1))
        # Return the incremented list
        return number
