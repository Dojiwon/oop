// equalLexicographicalMismatch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string str1{ "Only For Testing Purpose." };
    std::string str2{ "only for testing purpose." };
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    std::cout << "std::equal(str1.begin(), str1.end(), str2.begin()): " << std::equal(str1.begin(), str1.end(), str2.begin()) << std::endl;
    std::cout << "std::equal(str1.begin(), str1.end(), str2.begin(), [](char c1, char c2){ return std::toupper(c1) == std::toupper(c2);}): "
        << std::equal(str1.begin(), str1.end(), str2.begin(), [](char c1, char c2) { return std::toupper(c1) == std::toupper(c2); }) << std::endl;

    str1 = { "Only for testing Purpose." };
    str2 = { "Only for testing purpose." };
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    auto pair = std::mismatch(str1.begin(), str1.end(), str2.begin());
    if (pair.first == str1.end()) {
        std::cout << "str1 and str2 are equal" << std::endl;
    }
    else {
        std::cout << "str1 and str2 are different at position " << std::distance(str1.begin(), pair.first)
            << " with (" << *pair.first << ", " << *pair.second << ")" << std::endl;
    }
    auto pair2 = std::mismatch(str1.begin(), str1.end(), str2.begin(), [](char c1, char c2) { return std::toupper(c1) == std::toupper(c2); });
    if (pair2.first == str1.end()) {
        std::cout << "str1 and str2 are equal" << std::endl;
    }
    else {
        std::cout << "str1 and str2 are different at position " << std::distance(str1.begin(), pair2.first)
            << " with(" << *pair2.first << ", " << *pair2.second << ")" << std::endl;
    }
    return 0;
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
