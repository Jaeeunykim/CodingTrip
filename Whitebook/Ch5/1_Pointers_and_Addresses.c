5.1 Pointer and Addresses

포인터는 주소를 저장해주는 변수이다
메모리공간의 주소를 저장한다

주소를 확인하려면 변수이름앞에 &을 붙여준다
메모리주소에 있는 값을 확인하려면 *을 붙여 확인한다

#include <stdio.h>

int main ()
{
	int x = 1, y = 2, z[10];
	int *ip;
//int형 주소를 저장할수있는 포인턴 변수 ip
//변수x의 주소를 ip에 할당하라 
//ip  주소에 있는 값을 y에 할당시켜라
//ip주소의 값에 0을 할당하라 
//z배열의 첫번째의 주소를 ip에 할당하라

	ip = &x;
	y = *ip;
	*ip = 0;
	ip = $z[0]; 
}
