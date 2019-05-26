///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
using namespace std;
map<string, double>sd;
int main(){
	sd["A+"] = 4.00;
	sd["A"] = 3.75;
	sd["A-"] = 3.50;
	sd["B+"] = 3.25;
	sd["B"] = 3.00;
	sd["B-"] = 2.75;
	sd["C+"] = 2.50;
	sd["C"] = 2.25;
	sd["D"] = 2.00;
	sd["F"] = 0.00;
	int n, subject, lab, i, j;
	double credit, total_credit = 0.0, total = 0.0, result;
	string grade; 
	printf("Enter number of semester:\n");
	scanf("%d", &n);
	j = 1;
	while( j <= n ) {
		printf("Semester %d\n", j);
		printf("Enter number of subject in this semester:\n");
		scanf("%d", &subject);
		printf("Enter grade and credit:\n");
		for ( i = 0; i < subject; i++ ) {
			cin >> grade >>  credit;
			total_credit = total_credit + credit;
			total += sd[grade] * credit;
		}
		printf("Enter number of lab in this semester:\n");
		scanf("%d", &lab);
		printf("Enter grade and credit:\n");
		for ( i = 0; i < lab; i++ ) {
			cin >> grade >>  credit;
			total_credit = total_credit + credit;
			total += sd[grade] * credit;
		}
		j++;
	}
	printf("CGPA: %.2lf\n", total / total_credit);
	return 0;
}
