cmake_minimum_required(VERSION 3.27)
project(tutogit C)

set(CMAKE_C_STANDARD 11)

add_executable(tutogit main.c
        UseHugeNumber/Operator/HugeFloatOperator.c
        UseHugeNumber/Operator/HugeFloatOperator.h
        UseHugeNumber/Operator/HugeIntOperator.c
        UseHugeNumber/Operator/HugeIntOperator.h
        UseHugeNumber/Operator/HugeUnsignedIntOperator.c
        UseHugeNumber/Operator/HugeUnsignedIntOperator.h)
