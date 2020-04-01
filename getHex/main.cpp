/*
 * @Author WangYubo
 * @Date 09/17/2018
 * @Description
 */

#include <sys/stat.h>
#include <string>
#include <string.h>
#include <fstream>
#include <sstream>
#include "log.hpp"

inline bool is_file_exist(const std::string& name) {
    struct stat buffer;
    return (stat(name.c_str(), &buffer) == 0);
}

int main(int argC, char* arg[]) {
    // 传入一个或者两个参数
    if (argC != 2 && argC != 3) {
        printf("Param error, num %d", argC);
        return -1;
    }

    // 如果两个校验第二个是否为数字，第二个参数为打印大小
    unsigned int num = 64;
    if (argC == 3 && sscanf(arg[2], "%u", &num) != 1) {
        printf("Param 2 error, need num, but %s", arg[2]);
        return -1;
    }

    std::string outStr = arg[1];
    // 判断是否为文件，文件则读取文件内容
    if (is_file_exist(arg[1])) {
        std::fstream fs(arg[1]);     // 创建个文件流对象,并打开
        std::stringstream ss ;       // 创建字符串流对象
        ss << fs.rdbuf() ;      // 把文件流中的字符输入到字符串流中
        outStr = ss.str() ; // 获取流中的字符串
    }

    num = num > outStr.length() ? outStr.length() : num;
    LOG_HEX(outStr.c_str(), num);
    return 0;
}
