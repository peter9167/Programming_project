from array import array
import numpy as np

list_data = [1, 2, 3]
array = np.array(list_data)

print(list_data) 
print(array.size) # numpy 데이터의 수(size)
print(array.dtype) # numpy 데이터의 자료형 출력
print(array[2])

# 0부터 3까지의 배열 만들기
array1 = np.arange(4) # 작성한 값(4)에서 -1 만큼의 데이터를 자동으로 채움
print(array1) # [0 1 2 3]

array2 = np.zeros((4, 4), dtype=float)  # 작성한 4 X 4 크기의 배열 생성 후 0으로 초기화
                                        # dtype : 생성한 배열의 자료형을 작성한 데이터(float) 로 설정 
print(array2)

array3 = np.ones((3, 3), dtype=str)
print(array3)

# 0부터 9까지 랜덤하기 / 초기화 된 배열 만들기
array4 = np.random.randint(0, 10, (3, 3))
print(array4)

# 평균이 0이고, 표준편차가 1인 표준 정규를 띄는 배열 (표준정규분포)
array5 = np.random.normal(0, 1, (3, 3))
print(array5)

# Numpy 배열 합치기
array1 = np.array([1, 2, 3])
array2 = np.array([4, 5, 6])
array3 = np.concatenate([array1, array2])

print(array3.shape) # 작성한 데이터의 크기
print(array3) # 작성한 데이터 출력

# Numpy 형태 바꾸기
array1 = np.array([1, 2, 3, 4])
array2 = array1.reshape((2, 2))

print(array2)

array3 = np.arange(4).reshape(1, 4)
array4 = np.arange(8).reshape(2, 4)

print(array3)
print(array4)

array3 = np.concatenate([array3, array4], axis=0)
print(array3)