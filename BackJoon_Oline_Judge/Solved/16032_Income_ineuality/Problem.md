## 16032. Income Inequality

- ### 문제

  We often compute the average as the first step in processing statistical data. Yes, the average is a good tendency measure of data, but it is not always the best. In some cases, the average may hinder the understanding of the data.

  For example, consider the national income of a country. As the term income inequality suggests, a small number of people earn a good portion of the gross national income in many countries. In such cases, the average income computes much higher than the income of the vast majority. It is not appropriate to regard the average as the income of typical people.

  Let us observe the above-mentioned phenomenon in some concrete data. Incomes of n people, a1, … , an, are given. You are asked to write a program that reports the number of people whose incomes are less than or equal to the average (a1 + … + an) / n.
  
---


- ### 입력
  
  The input consists of multiple datasets, each in the following format.

  n
  a1 a2 … an
  A dataset consists of two lines. In the first line, the number of people n is given. n is an integer satisfying 2 ≤ n ≤ 10 000. In the second line, incomes of n people are given. ai (1 ≤ i ≤ n) is the income of the i-th person. This value is an integer greater than or equal to 1 and less than or equal to 100 000.

  The end of the input is indicated by a line containing a zero. The sum of n's of all the datasets does not exceed 50 000.  


---

- ### 출력

  For each dataset, output the number of people whose incomes are less than or equal to the average.

---
 
- ### 예제 입력 1 

  7
  15 15 15 15 15 15 15
  4
  10 20 30 60
  10
  1 1 1 1 1 1 1 1 1 100
  7
  90 90 90 90 90 90 10
  7
  2 7 1 8 2 8 4
  0

---

- ### 예제 출력 1 

  7
  3
  9
  1
  4
  
---


- ### 사용 언어: C11

---

- ### 메모:

  ## 문제 난이도: 3/10
  ## 걸린 시간: 3 hrs
  ## 컴파일 시도 횟수: 5
  ## why: 
  ## 1) Memory Allocation
  ## 2) Have to use a lot of loops statements