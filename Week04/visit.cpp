// visit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <typeinfo>
#include <type_traits>
#include <variant>


int main() {
    std::cout << std::endl;
    std::vector<std::variant<char, long, float, int, double, long long>>
        vecVariant = { 5,'2',5.4,100ll,2011l,3.5f,2017 };

    for (auto& v : vecVariant) {
        std::visit([](auto&& arg) {std::cout << arg << " "; }, v);                
    }
    std::cout << std::endl;

    for (auto& v : vecVariant) {
        std::visit([](auto&& arg) {std::cout << typeid(arg).name() << " "; }, v); 
    }
    std::cout << std::endl;
    std::common_type<char, long, float, int, double, long long>::type res{};  

    std::cout << "typeid(res).name(): " << typeid(res).name() << std::endl;

    for (auto& v : vecVariant) {
        std::visit([&res](auto&& arg) {res += arg; }, v);                          
    }
    std::cout << "res: " << res << std::endl;

    // double each value
    for (auto& v : vecVariant) {
        std::visit([&res](auto&& arg) {arg *= 2; }, v);                           
        std::visit([](auto&& arg) {std::cout << arg << " "; }, v);
    }
    std::cout << std::endl;
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
