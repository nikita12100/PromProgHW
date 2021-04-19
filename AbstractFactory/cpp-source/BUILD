cc_library(
    name = "serializers",
    srcs = [
        "serializers/GameSerializer.cpp",
        "serializers/RoomSerializer.cpp",
    ],
    hdrs = [
        "serializers/GameSerializer.h",
        "serializers/RoomSerializer.h",
    ],
    deps = [":rooms"],
    copts = ["-IAbstractFactory/cpp-source/rooms"],
    visibility = ["//visibility:public"],
)

filegroup(
    name = 'serializers_lib',
    srcs = [':serializers'],
    output_group = 'dynamic_library'
)

cc_library(
    name = "factories",
    srcs = [
        "factories/BasementFactory.cpp",
        "factories/BasementFactory.h",
        "factories/CavesFactory.cpp",
        "factories/CavesFactory.h",
        "factories/RoomFactory.cpp",
        "factories/RoomFactory.h",
    ],
    deps = [":rooms"],
    copts = ["-IAbstractFactory/cpp-source/rooms"],
    visibility = ["//visibility:public"],
)

filegroup(
    name = 'factories_lib',
    srcs = [':factories'],
    output_group = 'dynamic_library'
)

cc_library(
    name = "rooms",
    srcs = [
        "rooms/BasementHardRoom.cpp",
        "rooms/BasementHardRoom.h",
        "rooms/BasementNormalRoom.cpp",
        "rooms/BasementNormalRoom.h",
        "rooms/CavesHardRoom.cpp",
        "rooms/CavesHardRoom.h",
        "rooms/CavesNormalRoom.cpp",
        "rooms/CavesNormalRoom.h",
        "rooms/HardRoom.cpp",
        "rooms/HardRoom.h",
        "rooms/NormalRoom.cpp",
        "rooms/NormalRoom.h",
        "rooms/Room.cpp",
        "rooms/Room.h",
    ],
    visibility = ["//visibility:public"],
)

filegroup(
    name = 'rooms_lib',
    srcs = [':rooms'],
    output_group = 'dynamic_library'
)

cc_binary(
    name = "AbstractFactorySerializer",
    srcs = [
         "main_serializer.cpp",
    ],
    deps = [":serializers", ":factories", ":rooms"],
    copts = [
    "-IAbstractFactory/cpp-source/serializers",
    "-IAbstractFactory/cpp-source/factories",
    "-IAbstractFactory/cpp-source/rooms"],
)

cc_binary(
    name = "AbstractFactory",
    srcs = [
         "main.cpp",
    ],
    deps = [":serializers", ":factories", ":rooms"],
    copts = [
    "-IAbstractFactory/cpp-source/serializers",
    "-IAbstractFactory/cpp-source/factories",
    "-IAbstractFactory/cpp-source/rooms"],
)