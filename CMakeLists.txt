cmake_minimum_required(VERSION 3.20)
project(StatePattern)

add_executable(app main.c
        digital_watch/DigitalStopWatch.c
        digital_watch/StartedState.c
        digital_watch/StoppedState.c
        digital_watch/WatchState.c
)

target_include_directories(app PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/digital_watch
)