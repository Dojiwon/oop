﻿// stringConstructor.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

int main()
{
    std::string defaultString;
    std::cout << "From C-String" << std::endl;
    
    std::string other{ "123456789" };
    std::cout << "other: " << other << std::endl;

    std::cout << "From C++String" << std::endl;
    std::string str1(other);
    std::string tmp(other);
    std::string str2(std::move(tmp));
//    std::string str3(other.begin(), other.end());
//    std::string str4(other, 2);
//   std::string str5(other, 2, 5);
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2:" << str2 << std::endl;
//    std::cout << "str3:" << str3 << std::endl;
//    std::cout << "str4:" << str4 << std::endl;
 //   std::cout << "str5:" << str5 << std::endl;

    std::cout << "From C-String" << std::endl;

    std::string str6("123456789", 5);
    std::string str7(5, '1');
    std::string str8({ '1','2','3','4','5','6','7','8','9' });
    std::cout << "str6:" << str6 << std::endl;
    std::cout << "str7:" << str7 << std::endl;
    std::cout << "str8:" << str8 << std::endl;

    std::cout << "As Part of a C++ String" << std::endl;
    std::cout << "str6.substr():" << str6.substr() << std::endl;
    std::cout << "str6.substr(1):" << str6.substr(1) << std::endl;
    std::cout << "str6.substr(1,2): " << str6.substr(1, 2) << std::endl;


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
