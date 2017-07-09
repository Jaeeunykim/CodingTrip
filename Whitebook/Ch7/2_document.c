7.3 가변인자함수
-가변인자함수역할 : 고정된 개수의 인수들을 가지고있지 않고, 인수의 개수와 데이터타입을 정의하면 변경가능하다

-가변인자함수 형태
1)#include<stdarg.h>을 포함해야 사용가능하다

2)생략표시사용(...) :매개변수리스트에 생략표시를 사용하고,생략표시가 나오기이전에 적어도 한개의 고정인수를 필요로 한다

3)매크로 사용 : 가변인수에는 개별적이름을 가지고 있지 않기때문에 가변인수에 엑세스하기위해 매크로를 사용한다

 va_start매크로: va_list형 포인터 변수를 인수로써 초기화한다(초기화된 인수포인터는 첫번째 가변인수를 가리킴)
 
 va_arg매크로: 가변인수들을 억세스한다. 첫번째인수를 반환하고 다음호출은 두번째인수반환하는 순서되로 호출되는 순서에따라 순차적으로 다음인수반환

 va_end: 포인터변수인 인수를 끝냈음을 알린다