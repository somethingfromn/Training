## 11772. POT

- ### 문제

  The teacher has sent an e-mail to her students with the following task:

  "Write a programme that will determine and output the value of  if given the statement:

  X = number1^pot1 + number2^pot2 +..+ numberN^potN and it holds that number1, number2, to numberN are integers, and pot1, pot2 to potN to one-digit integers." Unfortunately, when the teacher downloaded the task to her computer, the text formatting was lost so the task transformed into a sum of N integers:

  X = P1 + P2 +..+PN


  For example, without text formatting, the original task in the form of X = 21^2 + 125^3 became a task in the form of X = 212 + 1253. Help the teacher by writing a programme that will, for given N integers from P1 to PN to determine and output the value of X from the original task.

  Please note: We know that it holds a N = a*a ..a (N times).
  
---


- ### 입력
  
  The first line of input contains the integer N (1 ≤ N ≤ 10), the number of the addends from the task. Each of the following  lines contains the integer Pi(10 ≤ Pi ≤ 9999,  = 1 ...N) from the task.


---

- ### 출력

  The first and only line of output must contain the value of X (X ≤ 1 000 000 000) from the original task.

---
 
- ### 예제 입력 1 

  2
  212
  1253

---

- ### 예제 출력 1 

  1953566
  
---

- ### 예제 입력 2

  5
  23
  17
  43
  52
  22

---

- ### 예제 출력 2

  102
  
---

- ### 예제 입력 3

  3
  213
  102
  45

---

- ### 예제 출력 3

  10385
  
---

- ### 사용 언어: C11

---

- ### 메모:

  ## 문제 난이도: 2/10
  ## 걸린 시간: 1day
  ## 컴파일 시도 횟수: 8
  ## why:
  ## 1) Couldn't find counter exmaple, but some people on BOJ helpd me out
  ## 2) Need to initialize Sum as 0