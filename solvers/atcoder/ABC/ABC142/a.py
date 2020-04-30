N = int(input())
nums = [i for i in range(1, N+1)]
ans = nums[0::2]
print(len(ans)/len(nums))
