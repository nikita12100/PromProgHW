file = open('index.h', 'w')
file.write('#include <iostream>\nvoid print(){\n    std::cout << "Hello world";\n }' + '\n')
file.close()
