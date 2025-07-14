cmake_minimum_required(VERSION 3.20)
project(StatePattern)

add_executable(app main.c DigitalStopWatch.c StartedState.c StoppedState.c WatchState.c)
target_include_directories(app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})