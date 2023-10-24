#include<bits/stdc++.h>

int main(void) {
	int h1, m1, h2, m2, min;
	scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
	while(h1 || h2 || m1 || m2) {
		h1 = h2 - h1;
		m1 = m2 - m1;
		if(m1 < 0) {
			h1--;
			m1 += 60;
		}
		if(h1 < 0)
			h1 += 24;
		min = h1 * 60 + m1;
		printf("%d\n", min);
		scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
	}
	return 0;
}
