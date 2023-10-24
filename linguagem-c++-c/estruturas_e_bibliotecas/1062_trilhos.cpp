#include<bits/stdc++.h>

using namespace std;

int main(void) {
	queue<int> pilhaC;
	stack<int> pilhaA;
	stack<int> pilhaEst;
	int x, var, j=0, var2;
	scanf("%d", &x);
	while(x > 0){
		j = 0;
		scanf("%d", &var);
		if(var != 0){
			j++;
			pilhaC.push(var);
			while(j < x){
				scanf("%d", &var);
				pilhaC.push(var);
				j++;
			}
		}
		
		if(pilhaC.empty()) {
			printf("\n");
			scanf("%d", &x);	
		}
		else {
			for(int i = x; i > 0; i--)
				pilhaA.push(i);
			while(!pilhaA.empty()){
				var = pilhaA.top();
				pilhaA.pop();
				pilhaEst.push(var);
				var2 = pilhaC.front();
				while(!pilhaEst.empty() && var == var2){
					pilhaC.pop();
					pilhaEst.pop();
					if(!pilhaEst.empty()){
						var2 = pilhaC.front();
						var = pilhaEst.top();
					} else
						var2 = -1;
				}
			}
			if(pilhaEst.empty())
				printf("Yes\n");
			else{
				printf("No\n");
				while(!pilhaEst.empty())
					pilhaEst.pop();
				while(!pilhaC.empty())
					pilhaC.pop();
			}
		}		
	}
	
	
	return 0;
}
