# 자료 구조(Computer Structure)


## polynomial
- 개요
  + 차수가 다른 다항식 간의 덧셈 계산 프로그램 

- 구현 사항
  + polynomial 구조체를 이용해 다항식 구조 정의
  + addPoly() : 차수가 같은 계수의 덧셈
  + printPoly() : 덧셈 결과 다항식 출력

- 입력 예시
```
  A(x) = 4x^3 + 3x^2 + 5x^1 + 0x^0
  B(x) = 3x^4 + 1x^3 + 0x^2 + 2x^1 + 1x^0
```

- 출력 예시
```
  C(x) = 3x^4 + 1x^3 + 0x^2 + 2x^1 + 1x^0
```

---

## kmp
- 개요
  + KMP 알고리즘을 이용해 문자열 내 패턴을 찾는 프로그램

- 구현 사항
  + fail() : 패턴이 다음으로 비교할 위치를 정해주는 함수(일치하는 접두사 및 접미사 중 최대 길이 반환)
  + pmatch() : 패턴의 fail() 결과를 이용해 문자열 내 패턴 검색

---

## postfix
- 개요
  + Stack을 이용해 Infix 수식을 Postfix 수식으로 변환하는 프로그램

- 구현 사항
  + postfix() :
  + 1. 피연산자는 그냥 출력
  + 2-1. ')'가 나올 경우 → '('가 나올 때까지 pop → '(' 빼냄
  + 2-2. 나머지 → stack 맨 위에 있는 연산자의 우선순위가 stack에 넣으려는 연산자의 우선순위보다 같거나 높은 경우 계속 pop → 그 다음 stack에 넣음
  + 3. stack에 있는 모든 요소 출력

- 입력 예시
```
  A / B * ( C + D ) + E
```

- 출력예시
```
  AB/CD+*E+
```
  
---

## stackLinkedList
- 개요
  + Stack을 이용해 Linked List의 Top부터 Bottom까지의 Items를 출력하는 프로그램

- 구현 사항
  + push() : Item을 Linked List Stack의 Push
  + pop() : Item을 Linked List Stack에서 Pop
  + printStack() : Linked List Stack의 Items 출력

- 출력 예시

1 이미지

---
  
## queueLinkedList
- 개요
  + Queue를 이용해 Linked List의 Front부터 Rear까지의 Data를 출력하는 프로그램

- 구현 사항
  + createLinkedQueue() : Linked List Queue를 생성
  + isEmpty() : Linked List Queue가 비었는지 확인하고, 비었다면 "Linked Queue is empty" 출력 및 프로그램 종료
  + enQueue() : Data를 Linked List Queue의 삽입
  + deQueue() : Data를 Linked List Queue에서 삭제
  + printLQ() : Linked List Queue의 Data 출력

- 출력 예시

2 이미지 

---

## doubleLinkedList
- 개요
  + Double Linked List의 Head부터 Tail까지지의 Node를 출력하는 프로그램

- 구현 사항
  + createLinkedList_h() : empty Double Linked List 생성
  + insertNode() : Node를 Double Linked List에 삽입
  + (참고 사항 : Node가 첫 번째로 추가된 경우, Head가 NULL을 가리키고 있기 때문에 새로 추가된 Node가 Head가 됨 /
  + Node가 중간에 삽입될 경우, new Node의 rlink(next Node)의 llink를 new Node로 설정)
  + deleteNode() : Node를 Double Linked List에서 삭제
  + (참고 사항 : delete Node의 prev Node의 rlink는 delete Node의 next Node, delete Node의 next Node의 llink는 delete Node의 prev Node)
  + searchNode() : strcmp 함수를 이용해 파라미터 Node를 Double Linked List의 Head로부터 탐색
  + printList() : Double Linked List의 Node 출력

- 출력 예시

3 이미지 

---

## equivalence
- 개요
  + Polygon 내에 동치 집합을 출력해주는 프로그램

- 구현 사항
  + 입력받은 Equivalence pairs를 Linked List를 이용해 연결

- 출력 예시

4 이미지 

---