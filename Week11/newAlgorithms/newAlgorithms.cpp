// newAlgorithms.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <execution>
#include <ppl.h>

int main()
{
    std::vector<int> intVec{ 1,2,3,4,5,6,7,8,9,10 };
    std::for_each_n(std::execution::par,
        intVec.begin(), 5, [](int& arg) {arg *= arg; });

    std::cout << "for_each_n: ";
    for (auto v : intVec)std::cout << v << " ";

    std::vector<int> resVec{ 1,2,3,4,5,6,7,8,9 };
    std::vector<int> resVec0(resVec.size());
    std::exclusive_scan(std::execution::par,
        resVec.begin(), resVec.end(), resVec0.begin(), 1,
        [](int fir, int sec) {return fir * sec; });

    std::cout << "exclusive_scan:";
    for (auto v : resVec0)std::cout << v << " ";

    std::vector<int> resVec2{ 1,2,3,4,5,6,7,8,9 };
    std::inclusive_scan(std::execution::par,
        resVec2.begin(), resVec2.end(), resVec2.begin(),
        [](int fir, int sec) { return fir * sec; }, 1);

    std::cout << "inclusive_scan:";
    for (auto v : resVec2)std::cout << v << " ";

    std::vector<int> resVec3{ 1,2,3,4,5,6,7,8,9 };
    std::vector<int> resVec4(resVec3.size());
    std::transform_exclusive_scan(std::execution::par,
        resVec3.begin(), resVec3.end(),
        resVec4.begin(), 0,
        [](int fir, int sec) {return fir + sec; },
        [](int arg) {return arg *= arg; });

    std::cout << "transform_exclusive_scan: ";
    for (auto v : resVec4) std::cout << v << " ";

    std::vector<std::string> strVec{ "Only","for","testing","purpose" };
    std::vector<int> resVec5(strVec.size());
    std::transform_inclusive_scan(std::execution::par,
        strVec.begin(), strVec.end(),
        resVec5.begin(),
        [](auto fir, auto sec) { return fir + sec; },
        [](auto s) { return s.length(); }, 0);

    std::cout << "transform_exclusive_scan: ";
    for (auto v : resVec5) std::cout << v << " ";


    std::vector<std::string> strVec2{ "Only","for","testing","purpose" };
    std::string res = std::reduce(std::execution::par,
        strVec2.begin() + 1, strVec2.end(), strVec2[0],
        [](auto fir, auto sec) { return fir + ":" + sec; });
    std::cout << "reduce:" << res << std::endl;

    std::size_t res7 = std::parallel::transform_reduce(std::execution::par,
        strVec2.begin(), strVec2.end(), 0,
        [](std::size_t a, std::size_t b) { return a + b; },
        [](std::string s) { return s.length(); });

    std::cout << "transform_reduce:" << res7 << std::endl;
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
