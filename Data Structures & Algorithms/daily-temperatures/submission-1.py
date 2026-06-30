class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0] * len(temperatures)  # Initialize result array with 0s
        stack = []  #pair: (temp,index)

        for i, current_temp in enumerate(temperatures):
            # Check if the current temperature is warmer than the temperature at indices in the stack
            while stack and stack[-1][0] < current_temp:
                stack_t,stack_i= stack.pop()
                res[stack_i]=i-stack_i
            stack.append((current_temp,i))
        return res