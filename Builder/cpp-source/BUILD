cc_library(
    name = "chef",
    srcs = [
        "Chef.h",
        "Chef.cpp"
    ],
    visibility = ["//visibility:public"],
    deps = [":builders"]
)

cc_library(
    name = "builders",
    srcs = [
        "builders/base/Burger.h",
        "builders/base/Burger.cpp",
        "builders/BurgerBuilder.h",
        "builders/BurgerBuilder.cpp",
        "builders/HamburgerBuilder.h",
        "builders/HamburgerBuilder.cpp",
        "builders/VegiburgerBuilder.h",
        "builders/VegiburgerBuilder.cpp"
    ],
    visibility = ["//visibility:public"]
)


filegroup(
    name = 'chef_lib',
    srcs = [':chef'],
    output_group = 'dynamic_library'
)

filegroup(
    name = 'builders_lib',
    srcs = [':builders'],
    output_group = 'dynamic_library'
)


cc_binary(
    name = "Builder",
    srcs = [
        "main.cpp"
    ],
    deps = [":chef", ":builders"]
)
