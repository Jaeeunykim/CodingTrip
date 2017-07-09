1.1 Getting Started

Hello, world 출력해보기 

#include <stdio.h> 
입출력과 관련된 파일을 작성할것이기때문에 
컴파일러에게  표준입출력 라이브러리에 대한 정보를 포함하도록 지시한다

int main() { } 
코드의 시작점을 알려주기위한 Entry point인 int main() 을 입력한다

c파일로 저장해주어야 한다  .c

실행파일 생성 a.out

printf("hello, world\n")
'hello, world'를 출력하기위해 printf 함수를 호출한다
\n는 newline의 약어이다

예제1. 위에 만들었던 hello world를 부분 삭제 하고 실행 해보고 에러메시지 확인해봐라
예제2. /를 포함해서 입출력 해봐라( \b, \c, \t)
