cc_library(
    name = "vehicles",
    srcs = [
        "vehicles/Plane.cpp",
        "vehicles/Plane.h",
        "vehicles/PlaneCommands.h",
        "vehicles/Vehicle.cpp",
        "vehicles/Vehicle.h",
        "dispatcher/Dispatcher.h",
    ],
    visibility = ["//visibility:public"],
)

filegroup(
    name = 'vehicles_lib',
    srcs = [':vehicles'],
    output_group = 'dynamic_library'
)


cc_library(
    name = "dispatcher",
    srcs = [
        "dispatcher/Dispatcher.cpp",
        "dispatcher/Dispatcher.h",
        "dispatcher/PlaneDispatcher.cpp",
        "dispatcher/PlaneDispatcher.h",
    ],
    deps = [":vehicles"],
    copts = ["-IMediator/cpp-source/vehicles"],
    visibility = ["//visibility:public"],
)

filegroup(
    name = 'dispatcher_lib',
    srcs = [':dispatcher'],
    output_group = 'dynamic_library'
)

cc_binary(
    name = "Mediator",
    srcs = [
        "main.cpp",
    ],
    deps = [":vehicles", ":dispatcher",],
)
