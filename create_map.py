import cv2


with open("source/map.h", "w+") as file:
    map = cv2.imread("source/map.png")
    file.write(
        "#pragma once\n\n"
        "#include <ccomplex>\n"
        "#include <vector>\n"
        "#include <string>\n\n\n"
        "std::vector<std::vector<std::vector<char>>> prepared_map = {\n"
    )
    for i in range(map.shape[0]):
        file.write("{\n")
        for j in range(map.shape[1]):
            file.write("{")
            for k in range(map.shape[2]):
                if k == map.shape[2] - 1:
                    file.write(str(map[i, j, k]))
                else:
                    file.write(str(map[i, j, k]) + ", ")

            file.write("},\n")

        file.write("},\n")

    file.write("};\n")

    file.close()
