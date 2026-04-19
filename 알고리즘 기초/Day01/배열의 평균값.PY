# 정수 배열 numbers가 매개변수로 주어집니다. 
# numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.
def solution(numbers):
    total = 0
    count = 0
    
    for num in numbers:
        total += num
        count += 1
        
    return total / count