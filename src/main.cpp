#include "sys.h"
#include <vector>
#include <string>

int main() {
    sys();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    sys_print_vector(vec);
}
