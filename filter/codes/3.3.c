#include <stdio.h>

#define N 20

double x(int i) {
	if (i < 0 || i > 5) return 0;
	else if (i < 4) return i + 1;
	else return 6 - i;
}

double y(int i) {
	if (i < 0) return 0;
	else return x(i) + x(i-2) - 0.5 * y(i-1);
}

int main() {
	FILE *fp = fopen("filter_output.dat", "w");
	for (int a = 0; a< N; a++) {
		fprintf(fp, "%lf\n", y(a));
	}
	fclose(fp);
	return 0;
}
