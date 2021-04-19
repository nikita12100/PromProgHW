cc_binary(
    name = "Facade",
    srcs = [
        "facades/BurgerFacade.cpp",
        "facades/BurgerFacade.h",
        "facades/IsaacFacade.cpp",
        "facades/IsaacFacade.h",
        "facades/Facade.cpp",
        "facades/Facade.h",
        "main.cpp",
    ],
    deps = [
    "//AbstractFactory/cpp-source:rooms",
    "//AbstractFactory/cpp-source:factories",
    "//AbstractFactory/cpp-source:serializers",
    "//Builder/cpp-source:chef"
    ],
    copts = [
    "-IAbstractFactory/cpp-source/rooms",
    "-IAbstractFactory/cpp-source/factories",
    "-IAbstractFactory/cpp-source/serializers",
    "-IAbstractFactory",
    "-IBuileder/cpp-source",
    "-I.",],
)
