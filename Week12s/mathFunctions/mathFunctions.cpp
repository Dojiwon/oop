// mathFunctions.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ctime>

int main() {
	std::cout << "cmath" << std::endl;
	std::cout << "std::pow(2,10): " << std::pow(2, 10) << std::endl;
	std::cout << "std::pow(2,0.5):" << std::pow(2, 0.5) << std::endl;
	std::cout << "std::exp(1): " << std::exp(1) << std::endl;
	std::cout << "std::ceil(5.5):" << std::ceil(5.5) << std::endl;
	std::cout << "std::floor(5.5):" << std::floor(5.5) << std::endl;
	std::cout << "std::fmod(5.5,2):" << std::fmod(5.5, 2) << std::endl;
	double intPart;
	auto fracPart = std::modf(5.7, &intPart);
	std::cout << "fmod(5.7,&intPart):" << intPart << " + " << fracPart << std::endl;

	std::cout << "\ncstdlib:" << "\n\n";
	std::div_t divresult = std::div(14, 5);
	std::cout << "std::div(14,5):" << divresult.quot << "reminder:" << divresult.rem << std::endl;

	std::srand(time(nullptr));
	for (int i = 0; i <= 10; ++i) {
		std::cout << "Dice: " << (rand() % 6 + 1) << std::endl;
	}
	return 0;
}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
