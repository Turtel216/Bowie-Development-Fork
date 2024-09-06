cmake_minimum_required(VERSION 3.30)
project(Bowie)

add_executable (bowie src/main.c src/error.c src/interpreter.c src/lexer.c src/chunk.c)
