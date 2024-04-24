cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本号
project(CarParkingSystem VERSION 1.0)

# 添加可执行文件
add_executable(CarParkingSystem 
    main.cpp  # 主程序源文件，你需要将其替换为你实际的源文件
)

# 如果有其他源文件需要添加，可以使用类似的方式
# add_executable(CarParkingSystem 
#     main.cpp 
#     file1.cpp 
#     file2.cpp
# )

# 如果你的项目需要链接其他库，可以使用以下命令
# target_link_libraries(CarParkingSystem PUBLIC your_library_name)

# 如果需要设置编译器选项，可以使用以下命令
# target_compile_options(CarParkingSystem PRIVATE -Wall -Wextra)

