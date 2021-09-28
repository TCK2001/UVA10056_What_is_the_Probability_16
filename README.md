## UVA10056_What_is_the_Probability_16
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=997
------
```c++
	x=pow(q,total); //공식 대입; 
	up=pow(q,num-1)*p;
	result=up/(1-x);
```
------
If i set a num 2 (if the m(total) is 3)
+ q p 
+ q q q q p
+ q q q q q q q p
+ q*p * q^4*p * q^7*p
  + q^k-1*p * q^k-1+m*p * q^k-1+2m*p
  + q^k-1*p * (1*p^m*p^2m......)
1*(q^k-1*p) / 1-q^m
