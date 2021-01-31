cmake_minimum_required(VERSION 3.17)
project(SemesterOneHandsOnCollection C)

set(CMAKE_C_STANDARD 99)

# 1-input-output collection
add_executable(basic-io 1-input-output/basic-io.c)
add_executable(EP32 1-input-output/EP32.c)
add_executable(EP34 1-input-output/EP34.c)
add_executable(EP35 1-input-output/EP35.c)
add_executable(program-harga-pisang-goreng 1-input-output/program-harga-pisang-goreng.c)
add_executable(program-menghitung-luas-persegi-panjang 1-input-output/program-menghitung-luas-persegi-panjang.c)
add_executable(program-resep-nasi-goreng 1-input-output/program-resep-nasi-goreng.c)
add_executable(separate-number-type 1-input-output/separate-number-type.c)
add_executable(travel-cost-estimate 1-input-output/travel-cost-estimate.c)

# 2-condition collection
add_executable(college-student-score-program 2-condition/college-student-score-program.c)
add_executable(huruf-vokal 2-condition/huruf-vokal.c)
add_executable(telecommunication-provider-program 2-condition/telecommunication-provider-program.c)
add_executable(water-provider-program 2-condition/water-provider-program.c)

# 3-looping collection
add_executable(basic-looping 3-looping/basic-looping.c)
add_executable(looping-task 3-looping/looping-task.c)
add_executable(nested-looping 3-looping/nested-looping.c)
add_executable(number-divider 3-looping/number-divider.c)
add_executable(number-multiplication 3-looping/number-multiplication.c)
add_executable(number-pyramid 3-looping/number-pyramid.c)
add_executable(odds-number-row 3-looping/odds-number-row.c)
add_executable(primes-number 3-looping/primes-number.c)
add_executable(student-scores 3-looping/student-scores.c)
add_executable(test-loop 3-looping/test-loop.c)

# 4-function collection
add_executable(global-variable 4-function/global-variable.c)
add_executable(function-program-1 4-function/function-program-1.c)
add_executable(geometric-calculator 4-function/geometric-calculator.c)
add_executable(recursive-divider 4-function/recursive-divider.c)
add_executable(recursive-multiplication 4-function/recursive-multiplication.c)
add_executable(learn 4-function/Try.c)

# 5-array collection
add_executable(SimpleArray 5-array/SimpleArray.c)
add_executable(InputWithArray 5-array/InputWIthArray.c)
add_executable(InitializedArray 5-array/InitializedArray.c)
add_executable(TwoDimensionArray 5-array/TwoDimensionArray.c)
add_executable(StudentScoreArray 5-array/StudentScoreArray.c)

# 6-struct-data-type collection
add_executable(SimpleStruct 6-struct-data-type/simple-struct.c)
add_executable(NestedStruct 6-struct-data-type/NestedStruct.c)

# latihan-uas collection
add_executable(LatihanCetakBilangan latihan-uas/LatihanCetakBilangan.c)
add_executable(TebakAngka latihan-uas/TebakAngka.c)
add_executable(DeretBilangan latihan-uas/DeretBilangan.c)
add_executable(DeretBilanganFibonacci latihan-uas/DeretBilanganFibonacci.c)
