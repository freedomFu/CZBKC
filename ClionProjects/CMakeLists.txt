cmake_minimum_required(VERSION 3.15)
project(ClionProjects)

set(CMAKE_CXX_STANDARD 11)
set(INC_DIR /usr/local/openssl/include)
set(LINK_DIR /usr/local/openssl/lib)

include_directories(${INC_DIR})
link_directories(${LINK_DIR})
link_libraries(ssl crypto)

add_executable(ClionProjects main.cpp ArrayTest/ArraySort.c C_Pointer_Chapter2/Testtrigrph.c C_Pointer_Chapter2/problem281/increment.c C_Pointer_Chapter2/problem281/negate.c C_Pointer_Chapter2/problem281/increment.h C_Pointer_Chapter2/problem281/negate.h C_Pointer_Chapter2/problem281/main.c C_Pointer_Chapter2/problem282/braces.c OpenSSL/Test.c OpenSSL/x509decodeCer.c ArrayTest/testHeader.h)