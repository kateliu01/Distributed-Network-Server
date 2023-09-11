#include <ctime>
#include <string>
#include <cstring>
#include <openssl/sha.h>
#include <vector>
#include <iostream>
using namespace std;
std::string getSHA256abstract(const std::string& input) {
    unsigned char digest[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256Context;
    SHA256_Init(&sha256Context);
    SHA256_Update(&sha256Context, input.c_str(), input.length());
    SHA256_Final(digest, &sha256Context);

    // 将摘要转换为十六进制字符串
    char hexDigest[2 * SHA256_DIGEST_LENGTH + 1];
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        sprintf(&hexDigest[i * 2], "%02x", digest[i]);
    }

    return std::string(hexDigest);
}
// int main() {
//     vector<int> nums = {1,2,3,4,5,6};
//     int n = nums.size();
//     // 获取当前时间戳  因为 std::time_t 可能是有符号整数或无符号整数，这取决于平台和编译器。
//     time_t timestamp = std::time(nullptr);
//     // 将time_t 类型转换成 unsinged_int
//     unsigned int timeInt = static_cast<unsigned int>(timestamp);
//     std::cout << "timestamp:" << timestamp << endl;
//     srand(timeInt);
//     for(int i=0; i<n; i++) {
//         int new_index = rand()%n;
//         swap(nums[i], nums[new_index]);
//     }
//     for(int i=0; i<n; i++) {
//         cout << nums[i] << " ";
//     }

    // std::string input = "Hello, World!";
    // std::string sha256Digest = sha256(input);
    // std::cout << "SHA-256摘要: " << sha256Digest << std::endl;
    // return 0;
// }

