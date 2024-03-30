// duration.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <chrono>

int main()
{
    typedef std::chrono::duration <long long, std::ratio<1>> MySecondTick;
    MySecondTick aSecond(1);

    std::chrono::nanoseconds nano(aSecond);
    std::cout << nano.count() << "nanoseconds" << std::endl;

    std::chrono::microseconds micro(aSecond);
    std::cout << nano.count() << "microseconds" << std::endl;

    std::chrono::milliseconds milli(aSecond);
    std::cout << nano.count() << "milliseconds" << std::endl;

    std::chrono::seconds seconds(aSecond);
    std::cout << nano.count() << "seconds" << std::endl;

    std::chrono::minutes minutes(std::chrono::duration_cast<std::chrono::minutes>(aSecond));
    std::cout << minutes.count() << "minutes(truncated value)" << std::endl;

    std::chrono::hours hours(std::chrono::duration_cast<std::chrono::hours>(aSecond));
    std::cout << hours.count() << "hours(truncated value)" << std::endl;

    typedef std::chrono::duration<double, std::ratio<60>> MyMinuteTick;
    MyMinuteTick myMinute(aSecond);
    std::cout << myMinute.count() << "minutes" << std::endl;

    typedef std::chrono::duration<double, std::ratio<3600>> MyHourTick;
    MyHourTick myHour(aSecond);
    std::cout << myHour.count() << "hours" << std::endl;

    typedef std::chrono::duration<double, std::ratio<2700>> MyLessonTick;
    MyLessonTick myLesson(aSecond);
    std::cout << myLesson.count() << "lessons" << std::endl;

    typedef std::chrono::duration<long long, std::ratio<1, 2>> MyHalfSecondTick;
    MyHalfSecondTick myHalfASocond(aSecond);
    std::cout << myHalfASocond.count() << "HalfASeconds" << std::endl;

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
