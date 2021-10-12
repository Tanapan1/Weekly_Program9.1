#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[50];
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, I = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
	printf("Input string : ");
	scanf("%s", str);

	int i = 0;
	while (str[i] != NULL) {
		if (str[i] == 'A' || str[i] == 'a') { a++; }
		else if (str[i] == 'B' || str[i] == 'b') { b++; }
		else if (str[i] == 'B' || str[i] == 'b') { b++; }
		else if (str[i] == 'C' || str[i] == 'c') { c++; }
		else if (str[i] == 'D' || str[i] == 'd') { d++; }
		else if (str[i] == 'E' || str[i] == 'e') { e++; }
		else if (str[i] == 'F' || str[i] == 'f') { f++; }
		else if (str[i] == 'G' || str[i] == 'g') { g++; }
		else if (str[i] == 'H' || str[i] == 'h') { h++; }
		else if (str[i] == 'I' || str[i] == 'i') { I++; }
		else if (str[i] == 'J' || str[i] == 'j') { j++; }
		else if (str[i] == 'K' || str[i] == 'k') { k++; }
		else if (str[i] == 'L' || str[i] == 'l') { l++; }
		else if (str[i] == 'M' || str[i] == 'm') { m++; }
		else if (str[i] == 'N' || str[i] == 'n') { n++; }
		else if (str[i] == 'O' || str[i] == 'o') { o++; }
		else if (str[i] == 'P' || str[i] == 'p') { p++; }
		else if (str[i] == 'Q' || str[i] == 'q') { q++; }
		else if (str[i] == 'R' || str[i] == 'r') { r++; }
		else if (str[i] == 'S' || str[i] == 's') { s++; }
		else if (str[i] == 'T' || str[i] == 't') { t++; }
		else if (str[i] == 'U' || str[i] == 'u') { u++; }
		else if (str[i] == 'V' || str[i] == 'v') { v++; }
		else if (str[i] == 'W' || str[i] == 'w') { w++; }
		else if (str[i] == 'X' || str[i] == 'x') { x++; }
		else if (str[i] == 'Y' || str[i] == 'y') { y++; }
		else if (str[i] == 'Z' || str[i] == 'z') { z++; }
		i++;
	}

	printf("A = %d\n",a);
	printf("B = %d\n",b );
	printf("C = %d\n",c );
	printf("D = %d\n",d );
	printf("E = %d\n",e );
	printf("F = %d\n",f );
	printf("G = %d\n",g );
	printf("H = %d\n",h );
	printf("I = %d\n",I );
	printf("J = %d\n",j );
	printf("K = %d\n",k );
	printf("L = %d\n",l );
	printf("M = %d\n",m );
	printf("N = %d\n",n );
	printf("O = %d\n",o );
	printf("P = %d\n",p );
	printf("Q = %d\n",q );
	printf("R = %d\n",r );
	printf("S = %d\n",s );
	printf("T = %d\n",t );
	printf("U = %d\n",u );
	printf("V = %d\n",v );
	printf("W = %d\n",w );
	printf("X = %d\n",x );
	printf("Y = %d\n",y );
	printf("Z = %d\n",z );
	return 0;
}