// min.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>

int main()
{

    std::string first("first");
    std::string second("second");
    std::cout << "min(first, second) :" << std::min(first, second) << std::endl;
    auto numbers = { 3,1,2011,2014,-5 };
    auto minlnt = std::min(numbers);
    std::cout << "min(numbers) :" << minlnt << std::endl;
    std::cout << "min(-10,-5,comp) =" << std::min(-10, -5, [](int a, int b) {return std::abs(a) < std::abs(b); }) << std::endl;

    std::cout << std::endl;

    std::cout << "std::max(2011,2014):" << std::max(2011, 2014) << std::endl;
    std::cout << "std::max(first, second):" << std::max(first, second) << std::endl;
    std::cout << "std::max({3,1,2011,2014,-5}):" << std::max({ 3,1,2011,2014,-5 }) << std::endl;
    std::cout << "std::max(-10,-5, [](int a, int b) {return std::abs(a) < std::abs(b);}): "
        << std::max(-10, -5, [](int a, int b) {return std::abs(a) < std::abs(b); }) <<
        std::endl;

    std::cout << std::endl;

    auto pairInt = std::minmax(2011, 2014);
    auto pairStr = std::minmax(first, second);
    auto pairSeq = std::minmax({ 3, 1, 2011, 2014, -5 });
    auto pairAbs = std::minmax({ 3, 1, 2011, 2014, -5 }, [](int a, int b) {return std::abs(a)
        < std::abs(b); });

    std::cout << "(paitInt.first,pairInt.second): (" << pairInt.first << ", " << pairInt.second << ")" << std::endl;
    std::cout << "(paitStr.first,pairStr.second): (" << pairStr.first << ", " << pairStr.second << ")" << std::endl;
    std::cout << "(paitSeq.first,pairSeq.second): (" << pairSeq.first << ", " << pairSeq.second << ")" << std::endl;
    std::cout << "(paitAbs.first,pairAbs.second): (" << pairAbs.first << ", " << pairAbs.second << ")" << std::endl;
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
