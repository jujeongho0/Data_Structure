# 자료 구조(Computer Structure)


## polynomial
- 개요
  + 차수가 다른 다항식 간의 덧셈 계산 프로그램 

- 구현 사항
  + polynomial 구조체를 이용해 다항식 구조 정의<br><br>
  + addPoly() : 차수가 같은 계수의 덧셈<br><br>
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
  + fail() : 패턴이 다음으로 비교할 위치를 정해주는 함수(일치하는 접두사 및 접미사 중 최대 길이 반환)<br><br>
  + pmatch() : 패턴의 fail() 결과를 이용해 문자열 내 패턴 검색

---

## postfix
- 개요
  + Stack을 이용해 Infix 수식을 Postfix 수식으로 변환하는 프로그램

- 구현 사항
  + postfix() :
  + &nbsp;&nbsp;&nbsp;&nbsp;1. 피연산자는 그냥 출력
  + &nbsp;&nbsp;&nbsp;&nbsp;2-1. ')'가 나올 경우 → '('가 나올 때까지 pop → '(' 빼냄
  + &nbsp;&nbsp;&nbsp;&nbsp;2-2. 나머지 → stack 맨 위에 있는 연산자의 우선순위가 stack에 넣으려는 연산자의 우선순위보다 같거나 높은 경우 계속 pop → 그 다음 stack에 넣음
  + &nbsp;&nbsp;&nbsp;&nbsp;3. stack에 있는 모든 요소 출력

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
  + push() : Item을 Linked List Stack의 Push<br><br>
  + pop() : Item을 Linked List Stack에서 Pop<br><br>
  + printStack() : Linked List Stack의 Items 출력

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121133595-826b6980-c86d-11eb-8a42-7f32fa6f7a89.png)

---
  
## queueLinkedList
- 개요
  + Queue를 이용해 Linked List의 Front부터 Rear까지의 Data를 출력하는 프로그램

- 구현 사항
  + createLinkedQueue() : Linked List Queue를 생성<br><br>
  + isEmpty() : Linked List Queue가 비었는지 확인하고, 비었다면 "Linked Queue is empty" 출력 및 프로그램 종료<br><br>
  + enQueue() : Data를 Linked List Queue의 삽입<br><br>
  + deQueue() : Data를 Linked List Queue에서 삭제<br><br>
  + printLQ() : Linked List Queue의 Data 출력

- 출력 예시

![2](https://user-images.githubusercontent.com/62659407/121133610-85fef080-c86d-11eb-8533-8dea2acf9a36.png)
 
---

## doubleLinkedList
- 개요
  + Double Linked List의 Head부터 Tail까지지의 Node를 출력하는 프로그램

- 구현 사항
  + createLinkedList_h() : empty Double Linked List 생성<br><br>
  + insertNode() : Node를 Double Linked List에 삽입
  + (참고 사항 : Node가 첫 번째로 추가된 경우, Head가 NULL을 가리키고 있기 때문에 새로 추가된 Node가 Head가 됨 /
  + Node가 중간에 삽입될 경우, new Node의 rlink(next Node)의 llink를 new Node로 설정)<br><br>
  + deleteNode() : Node를 Double Linked List에서 삭제
  + (참고 사항 : delete Node의 prev Node의 rlink는 delete Node의 next Node, delete Node의 next Node의 llink는 delete Node의 prev Node)<br><br>
  + searchNode() : strcmp 함수를 이용해 파라미터 Node를 Double Linked List의 Head로부터 탐색<br><br>
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
  + makeNode() : Linked List를 이용해 Node와 Node 간의 관계를 입력받아 tree 생성<br><br>
  + preorder() : recursive하게 실행됨으로써 (root, left, right) 순으로 Node 출력<br><br>
  + inorder() : recursive하게 실행됨으로써 (left, root, right) 순으로 Node 출력<br><br>
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
  + (참고 사항 : 왼쪽의 NULL 포인터 → 바로 앞 순서의 Node, 오른쪽의 NULL 포인터 → 바로 다음 순서의 Node)

![1](https://user-images.githubusercontent.com/62659407/121149375-91f2ae80-c87d-11eb-97e3-d122fe43cd34.png)

- 구현 사항
  + makeNode() : new Node 생성(leftNode, rightNode는 NULL을 가리킴)<br><br>
  + insertLeft() : new Node r을 p Node의 왼쪽 자식으로 추가<br><br>
  + insertRight() : new Node r을 p Node의 오른쪽 자식으로 추가<br><br>
  + findThreadSuccessor() : p Node의 뒷 Node 탐색<br><br>
  + threadInorder() : Tree를 Inorder 방식으로 Node 출력<br><br>
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
  + (Heap 속성 2가지 :
  + &nbsp;&nbsp;&nbsp;&nbsp;1.heap order property : 각 Node의 값은 자신의 자식 Node가 가진 값보다 크거나 같다(Max heap). 각 노드의 값은 자신의 자식 Node가 가진 값보다 작거나 같다(Min heap).
  + &nbsp;&nbsp;&nbsp;&nbsp;2.heap shape property : 모양은 완전 이진 트리이다. 즉, 마지막 레벨의 모든 Node는 왼쪽에 쏠려 있다.)

![1](https://user-images.githubusercontent.com/62659407/121151688-8e602700-c87f-11eb-95f0-ece2eab3e827.png)

- 구현 사항
  + insertHeap() : 
  + &nbsp;&nbsp;&nbsp;&nbsp;1.CBT(complete binary tree)의 가장 마지막 원소에 원하는 값을 삽입
  + &nbsp;&nbsp;&nbsp;&nbsp;2.부모가 나보다 작다면 부모와 자식의 값을 교환
  + &nbsp;&nbsp;&nbsp;&nbsp;3.2번에서 부모가 없거나, 부모가 자식보다 클 경우에 끝(Max Heap)<br><br>
  + deleteHeap() :
  + &nbsp;&nbsp;&nbsp;&nbsp;1.Root(Max Heap에서 최대값은 항상 Root) Node를 Heap의 가장 마지막 Node와 교환
  + &nbsp;&nbsp;&nbsp;&nbsp;2.교환된 가장 마지막 Node 삭제
  + &nbsp;&nbsp;&nbsp;&nbsp;3.새로운 Root Node의 알맞은 위치를 찾아서 내려간다.(Max Heap)<br><br>
  + heapType : Heap을 구현하기 위한 구조체(Heap은 보통 배열로 표현)<br><br>
  + creatHeap() : Heap 생성<br><br>
  + printHeap() : Heap Binary Tree의 Node 출력

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121153551-201c6400-c881-11eb-8a43-ed10ba2556b4.png)

---

## binarySearchTree
- 개요
  + Binary Search Tree(Binary Search + Linked List) 구조를 이용해 Node를 관리 및 출력해주는 프로그램
  + (BST 특징 2가지 :
  + &nbsp;&nbsp;&nbsp;&nbsp;1.Left subtree의 Node들은 상위 Node보다 작거나 같은 값
  + &nbsp;&nbsp;&nbsp;&nbsp;2.Right subtree의 Node들은 상위 Node보다 큰 값)<br><br>
  + (BST 탐색 순서 :
  + Tree의 Root Node의 값과 찾고자하는 값 비교 
  + &nbsp;&nbsp;&nbsp;&nbsp;1.Node.key > target → Root 기준 왼쪽 subtree로 이동
  + &nbsp;&nbsp;&nbsp;&nbsp;2.Node.key < target → Root 기준 오른쪽 subtree로 이동
  + → target과 일치하는 Node가 있을 때까지 반복)

- 구현 사항
  + searchBST() : BST의 Root Node의 값과 찾고자 하는 target 비교 <br><br>
  + insertNode() : 삽입하고자 하는 요소 x가 BST에 없다면, x가 있어야 할 위치에 삽입<br><br>
  + deleteNode() : 삭제하고자 하는 요소 x 삭제. 이때, x의 자식 Node에 따라 처리 방법이 달라짐
  + → case 1(x가 자식 Node가 없는 경우) : 해당 Node가 부모 Node의 left인지, right인지 파악 후 부모 Node의 left or right를 NULL로 변경
  + → case 2(x가 하나의 자식 Node를 가지는 경우) : 해당 Node를 지운 후, 해당 Node가 부모 Node의 left인지, right인지 파악 후 해당 Node의 자식 Node와 부모 Node를 연결(BST 특성상, 해당 Node의 자식 Node는 모두 부모 Node보다 작거나 같기 때문에 가능)
  + → case 3(x가 두개의 자식 Node를 가지는 경우) : 
  + &nbsp;&nbsp;&nbsp;&nbsp;1.삭제할 Node의 왼쪽 subtree의 최댓값(predecessor)을 구함
  + &nbsp;&nbsp;&nbsp;&nbsp;2.최댓값을 삭제 대상 Node에 복사
  + &nbsp;&nbsp;&nbsp;&nbsp;3.predecessor Node 삭제<br><br>
  + displayInorder() : BST의 Node를 Inorder 방식으로 출력<br><br>
  + menu(): BST 관리 메뉴 출력<br><br>

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

## dijkstra
- 개요
  + Dijkstra 알고리즘을 이용해 하나의 시작점에서 도착점으로 가는 최단 경로를 출력해주는 프로그램<br><br>
  + Dijkstra 알고리즘은 Greedy 접근법의 알고리즘이기 때문에 edge의 가중치가 음의 값을 가져서는 안됨
  + → 각 단계의 이웃한 Node 사이의 weight만 고려하여 최단 경로를 계산하기 때문에, 이후에 음의 값을 갖는 edge가 있을 때 최단 경로 update 할 수 없음<br><br>
  + 시작 Vertex에서 집합 S에 있는 Vertex만을 거쳐서 다른 Vertex로 가는 최단거리를 기록하는 배열이 반드시 있어야 한다.
  + → 집합 S에는 최단 거리에 해당하는 정점이 하나씩 추가된다.

- 구현 사항
  + choose() : 현재 distance 배열에서 가장 작은 가중치 값이 위치하고 있는 배열의 인덱스를 찾아 반환 <br><br>
  + Dijkstra() : 현재 정점까지의 거리 + 정점 w 까지의 거리가 기존의 정점 w 까지의 거리보다 가깝다면 그 정보를 갱신<br><br>
  + printStep() : 시작점에서 도착점으로 가는 최단 경로 출력

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121228299-8c21bb00-c8c7-11eb-8d77-9ecef6e284ca.png)

---

## bellman-ford
- 개요
  + Bellman-Ford 알고리즘을 이용해 하나의 시작점에서 도착점으로 가는 최단 경로를 출력해주는 프로그램<br><br>
  + Bellman-Ford 알고리즘은 vertex 사이의 최단 경로를 구할 때, 그래프 내의 모든 edge를 기준으로 update
  + → 음수의 가중치를 갖는 edge가 있어도 사용 가능<br><br>

- 구현 사항
  + BellmanFord() : 
  + 1.시작점 초기화(cycle을 갖지 않는 경우에 대해)
  + 2.각 vertex의 모든 edge에 대해 relax() → if d[v] > d[u] + w(u,v) : 새로운 경로를 추가했을 때, 기존 경로보다 작아지면 update
  + 3.음수 cycle이 있는지 확인 → step 2를 통해 각 vertex마다 연결된 모든 edge에 대해 계산한 결과, 이미 최단경로가 나온 상태에서 또다시 더 적은 경로가 나온다면 그건 음수 cycle!

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121229147-955f5780-c8c8-11eb-8068-ff64d328f66e.png)

---

## insertSort
- 개요
  + Insertion Sort(삽입 정렬) 알고리즘을 이용해  크기 순으로 정렬하고 출력해주는 프로그램
  + → 현재 위치에서 그 이하의 배열들을 비교하면서 자신이 들어갈 위치를 찾아 그 위치에 삽입하는 정렬 알고리즘

- 구현 사항
  + insertionSort() : 
  + 1.두 번째 인덱스부터 시작
  + 2.하나의 값을 선정하고 해당 값을 자신보다 작은 요소를 찾을 때까지 이동하면서 자리를 교환
  + 3.자리를 바꾸는 것이 아니라 위치에 삽입하는것. 삽입을 하기 위해 빈 공간을 만들어주고, 맞는 자리를 찾을 때까지 앞의 원소들을 뒤로 밀어줌

- 입력 예시
```
  list[8] = {69, 10, 30, 2, 16, 8, 31, 22}
```

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121229799-672e4780-c8c9-11eb-8ca4-e47fb048003d.png)

---

## mergeSort
- 개요
  + Merge Sort 알고리즘을 이용해 리스트를 크기 순으로 정렬하고 출력해주는 프로그램
  + → Divide and conquer 알고리즘(문제를 작은 2개의 문제로 분리하여 각각을 해결한 후, 결과를 모아 원래의 문제를 해결하는 알고리즘) 이용

- 구현 사항
  + mergeSort() : 
  + 1.2개의 리스트의 값들을 처음부터 하나씩 비교하여 두 개의 리스트의 값 중 더 작은 값을 새로운 리스트 sorted로 옮김
  + 2.둘 중 하나가 끝날 때까지 해당 과정을 반복
  + 3.만약 둘 중 하나의 리스트가 먼저 끝나면 나머지 리스트의 값을 sorted 리스트로 복사
  + 4.sorted 리스트를 원래의 리스트로 옮김

- 입력 예시
```
  list[8] = {69, 10, 30, 2, 16, 8, 31, 22}
```

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121230276-02272180-c8ca-11eb-8a11-352b647ac14f.png)

---

## quickSort
- 개요
  + Quick Sort 알고리즘을 이용해 리스트를 크기 순으로 정렬하고 출력해주는 프로그램
  + → Divide and conquer 알고리즘 이용
  + → Merge Sort와 달리, 리스트를 비균등하게 분할<br><br>
  + 1.리스트 안에 있는 한 요소를 선택, 이때 선택된 요소를 pivot이라 함
  + 2.pivot을 기준으로 pivot보다 작은 요소들을 모두 pivot의 왼쪽으로, pivot보다 큰 요소들은 모두 pivot의 오른쪽으로 나눔(Divide)
  + 3.pivot을 제외한 왼쪽 리스트와 오른쪽 리스트를 다시 정렬(Conquer)
  + 4.정렬된 부분 리스트들을 하나의 리스트로 합침(Combine)

- 구현 사항
  + partition() : 임의의 pivot 값 선정 → 2개의 index(Left, Right)를 이용해 입력 리스트를 두 개의 부분 리스트로 나눔 → Left와 Right가 교차할 때까지 반복
  + quickSort() : partition()을 이용해 recursive하게 실행해 리스트의 요소를 크기 순으로 정렬

- 입력 예시
```
  list[8] = {69, 10, 30, 2, 16, 8, 31, 22}
```

- 출력 예시

![1](https://user-images.githubusercontent.com/62659407/121231261-28998c80-c8cb-11eb-953a-8eb18e16a52f.png)

---
