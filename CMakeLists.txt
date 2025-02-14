cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(lsh VERSION 1.0)

# 设置C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 添加包含目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 查找所有源文件
file(GLOB SOURCES "src/*.c")

# 添加可执行文件
add_executable(lsh ${SOURCES})

# 链接标准库
target_link_libraries(lsh PRIVATE m) # 如果需要数学库等其他库，可以在这里添加

# 设置输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 使用 set_target_properties 确保目标的输出目录被正确设置
set_target_properties(lsh PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin
)
