load("@rules_foreign_cc//tools/build_defs:boost_build.bzl", "boost_build")

cc_binary(
    name = "Adapter",
    srcs = ["main.cpp", 
            "TextStorage.cpp",
            "JsonStorage.cpp", 
            "TextJsonAdapter.cpp", 
            "JsonStorage.h",
            "TextJsonAdapter.h",
            "TextStorage.h",],
    data = [":data",],
)
