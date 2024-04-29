cmake_minimum_required(VERSION 3.27)
project(tutogit C)

set(CMAKE_C_STANDARD 11)





add_executable(tutogit main.c IHMHugeNumber/ScanHugeNumber.c IHMHugeNumber/ScanHugeNumber.h IHMHugeNumber/ShowHugeNumber.c IHMHugeNumber/ShowHugeNumber.h
 UseHugeNumber/Operator/HugeFloatOperator.c
        UseHugeNumber/Operator/HugeFloatOperator.h
        UseHugeNumber/Operator/HugeIntOperator.c
        UseHugeNumber/Operator/HugeIntOperator.h
        UseHugeNumber/Operator/HugeUnsignedIntOperator.c
        UseHugeNumber/Operator/HugeUnsignedIntOperator.h
        UseHugeNumber/Type/HugeFloat.c
        UseHugeNumber/Type/HugeFloat.h
        UseHugeNumber/Type/HugeInt.c
        UseHugeNumber/Type/HugeInt.h
        UseHugeNumber/Type/HugeUnsignedInt.c
        UseHugeNumber/Type/HugeUnsignedInt.h)


