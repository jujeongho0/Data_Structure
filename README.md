# 자료 구조(Computer Structure)


## polynomial
- 개요
  + 차수가 다른 다항식 간의 덧셈 계산 프로그램 

- 구현 사항
  + polynomial 구조체를 이용해 다항식 구조 정의
  + 
  + addPoly() : 차수가 같은 계수의 덧셈
  + 
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
  + 
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
  A/B*(C+D)+E
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
  + 
  + pop() : Item을 Linked List Stack에서 Pop
  + 
  + printStack() : Linked List Stack의 Items 출력

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121133595-826b6980-c86d-11eb-8a42-7f32fa6f7a89.png)

---
  
## queueLinkedList
- 개요
  + Queue를 이용해 Linked List의 Front부터 Rear까지의 Data를 출력하는 프로그램

- 구현 사항
  + createLinkedQueue() : Linked List Queue를 생성
  + 
  + isEmpty() : Linked List Queue가 비었는지 확인하고, 비었다면 "Linked Queue is empty" 출력 및 프로그램 종료
  + 
  + enQueue() : Data를 Linked List Queue의 삽입
  + 
  + deQueue() : Data를 Linked List Queue에서 삭제
  + 
  + printLQ() : Linked List Queue의 Data 출력

- 출력 예시

![2](https://user-images.githubusercontent.com/62659407/121133610-85fef080-c86d-11eb-8533-8dea2acf9a36.png)
 
---

## doubleLinkedList
- 개요
  + Double Linked List의 Head부터 Tail까지지의 Node를 출력하는 프로그램

- 구현 사항
  + createLinkedList_h() : empty Double Linked List 생성
  + 
  + insertNode() : Node를 Double Linked List에 삽입
  + (참고 사항 : Node가 첫 번째로 추가된 경우, Head가 NULL을 가리키고 있기 때문에 새로 추가된 Node가 Head가 됨 /
  + Node가 중간에 삽입될 경우, new Node의 rlink(next Node)의 llink를 new Node로 설정)
  + 
  + deleteNode() : Node를 Double Linked List에서 삭제
  + (참고 사항 : delete Node의 prev Node의 rlink는 delete Node의 next Node, delete Node의 next Node의 llink는 delete Node의 prev Node)
  + 
  + searchNode() : strcmp 함수를 이용해 파라미터 Node를 Double Linked List의 Head로부터 탐색
  + 
  + printList() : Double Linked List의 Node 출력

- 출력 예시

![3](https://user-images.githubusercontent.com/62659407/121133624-88f9e100-c86d-11eb-91ea-df75d6286ff5.png)

---

## equivalence
- 개요
  + Polygon 내에 동치 집합을 출력해주는 프로그램

- 구현 사항
  + 입력받은 Equivalence pairs를 Linked List를 이용해 연결

- 출력 예시

![4](https://user-images.githubusercontent.com/62659407/121133635-8bf4d180-c86d-11eb-8a9b-2b95d790516a.png)

---

## treeTraversal
- 개요
  + tree를 각각 전위 순회(Preorder), 중위 순회(Inorder), 후위 순회(Postorder)로 탐색하여 노드 출력해주는 프로그램

- 구현 사항
  + makeNode() : Linked List를 이용해 Node와 Node 간의 관계를 입력받아 tree 생성
  + 
  + preorder() : recursive하게 실행됨으로써 (root, left, right) 순으로 Node 출력
  + 
  + inorder() : recursive하게 실행됨으로써 (left, root, right) 순으로 Node 출력
  + 
  + postorder() : recursive하게 실행됨으로써 (left, right, root) 순으로 Node 출력 

- 입력 예시

![1](https://user-images.githubusercontent.com/62659407/121134650-9c597c00-c86e-11eb-85a9-6cb7a00a913c.png)

- 출력 예시
```
  Preorder : [F] [B] [A] [D] [C] [E] [G] [I] [H]
  Inorder : [A] [B] [C] [D] [E] [F] [G] [H] [I]
  Postorder : [A] [C] [E] [D] [B] [H] [I] [G] [F]
```

---

## threadedBinaryTree
- 개요
  + Threaded Binary Tree(이진 트리 순환을 효율적으로 하기 위해 NULL인 링크를 활용하는 방식의 TREE 구조) 구조를 이용해 Tree의 Node를 출력해주는 프로그램
  + 
  + (참고 사항 : 왼쪽의 NULL 포인터 → 바로 앞 순서의 Node, 오른쪽의 NULL 포인터 → 바로 다음 순서의 Node)

![1](https://user-images.githubusercontent.com/62659407/121149375-91f2ae80-c87d-11eb-97e3-d122fe43cd34.png)

- 구현 사항
  + makeNode() : new Node 생성(leftNode, rightNode는 NULL을 가리킴)
  + 
  + insertLeft() : new Node r을 p Node의 왼쪽 자식으로 추가
  + 
  + insertRight() : new Node r을 p Node의 오른쪽 자식으로 추가
  + 
  + findThreadSuccessor() : p Node의 뒷 Node 탐색
  + 
  + threadInorder() : Tree를 Inorder 방식으로 Node 출력
  + 
  + findThreadPredecessor() : p Node의 앞 Node 탐색
  
- 입력 예시
```
  Inorder of a threaded binary tree : D B E A F C G
  insertLeft(B, H)
  insertRight(C, I)
```


- 출력 예시
```
  Inorder of a threaded binary tree : D H B E A F C I G
```

---

## heap
- 개요
  + Heap(큰 키(우선 순위)에 자주 액세스하거나 키(우선 순위) 중심으로 정렬된 시퀀스를 활용해야 할 때 유용한 자료구조) 구조를 이용해 Node를 관리 및 출력해주는 프로그램
  + 
  + (Heap 속성 2가지 :
  + 1.heap order property : 각 Node의 값은 자신의 자식 Node가 가진 값보다 크거나 같다(Max heap). 각 노드의 값은 자신의 자식 Node가 가진 값보다 작거나 같다(Min heap).
  + 2.heap shape property : 모양은 완전 이진 트리이다. 즉, 마지막 레벨의 모든 Node는 왼쪽에 쏠려 있다.)

![1](https://user-images.githubusercontent.com/62659407/121151688-8e602700-c87f-11eb-95f0-ece2eab3e827.png)

- 구현 사항
  + insertHeap() : 
  + 1.CBT(complete binary tree)의 가장 마지막 원소에 원하는 값을 삽입
  + 2.부모가 나보다 작다면 부모와 자식의 값을 교환
  + 3.2번에서 부모가 없거나, 부모가 자식보다 클 경우에 끝(Max Heap)
  + 
  + deleteHeap() :
  + 1.Root(Max Heap에서 최대값은 항상 Root) Node를 Heap의 가장 마지막 Node와 교환
  + 2.교환된 가장 마지막 Node 삭제
  + 3.새로운 Root Node의 알맞은 위치를 찾아서 내려간다.(Max Heap)
  + 
  + heapType : Heap을 구현하기 위한 구조체(Heap은 보통 배열로 표현)
  + 
  + creatHeap() : Heap 생성
  + 
  + printHeap() : Heap Binary Tree의 Node 출력

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121153551-201c6400-c881-11eb-8a43-ed10ba2556b4.png)

---

## binarySearchTree
- 개요
  + Binary Search Tree(Binary Search + Linked List) 구조를 이용해 Node를 관리 및 출력해주는 프로그램
  + 
  + (BST 특징 2가지 :
  + 1.Left subtree의 Node들은 상위 Node보다 작거나 같은 값
  + 2.Right subtree의 Node들은 상위 Node보다 큰 값)
  + 
  + (BST 탐색 순서 :
  + Tree의 Root Node의 값과 찾고자하는 값 비교 
  + 1.Node.key > target → Root 기준 왼쪽 subtree로 이동
  + 2.Node.key < target → Root 기준 오른쪽 subtree로 이동
  + → target과 일치하는 Node가 있을 때까지 반복)

- 구현 사항
  + searchBST() : BST의 Root Node의 값과 찾고자 하는 target 비교 
  + 
  + insertNode() : 삽입하고자 하는 요소 x가 BST에 없다면, x가 있어야 할 위치에 삽입
  + 
  + deleteNode() : 삭제하고자 하는 요소 x 삭제. 이때, x의 자식 Node에 따라 처리 방법이 달라짐
  + → case 1(x가 자식 Node가 없는 경우) : 해당 Node가 부모 Node의 left인지, right인지 파악 후 부모 Node의 left or right를 NULL로 변경
  + → case 2(x가 하나의 자식 Node를 가지는 경우) : 해당 Node를 지운 후, 해당 Node가 부모 Node의 left인지, right인지 파악 후 해당 Node의 자식 Node와 부모 Node를 연결(BST 특성상, 해당 Node의 자식 Node는 모두 부모 Node보다 작거나 같기 때문에 가능)
  + → case 3(x가 두개의 자식 Node를 가지는 경우) : 
  + 1.삭제할 Node의 왼쪽 subtree의 최댓값(predecessor)을 구함
  + 2.최댓값을 삭제 대상 Node에 복사
  + 3.predecessor Node 삭제
  + 
  + displayInorder() : BST의 Node를 Inorder 방식으로 출력
  + 
  + menu(): BST 관리 메뉴 출력

- 출력 예시

  + Search a Node
  
![1](https://user-images.githubusercontent.com/62659407/121157009-29f39680-c884-11eb-9021-6773ee00fbb0.png)

  + Insert a Node
  
![2](https://user-images.githubusercontent.com/62659407/121157020-2bbd5a00-c884-11eb-8474-e050b734ddce.png)

  + Delete a Node(case 1) 
  
![3](https://user-images.githubusercontent.com/62659407/121157029-2d871d80-c884-11eb-9145-f51f97ab5614.png)

  + Delete a Node(case 2)
  
![4](https://user-images.githubusercontent.com/62659407/121157034-2eb84a80-c884-11eb-94c4-536981b0a7a3.png)

  + Delete a Node(case 3)

![5](https://user-images.githubusercontent.com/62659407/121157044-30820e00-c884-11eb-9459-58eb337f5b46.png)

---
