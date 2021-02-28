#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int d, c;
		cin >> d >> c;
		int first_day_order = 0;
		for (int i = 0; i < 3; i++) {
			int a;
			cin >> a;
			// calculate the sum of the food items on the 1st-day
			first_day_order += a;
		}
		int second_day_order = 0;
		for (int i = 0; i < 3; i++) {
			int b;
			cin >> b;
			// calculate the sum of the food items on the 2nd-day
			second_day_order += b;
		}
		// create a 2 duplicate variables to hold the sum of food items on the 1st and 2nd day
		// this will be used to calculate the possible order if Chef avails a coupon
		int duplicate1 = first_day_order;
		if (duplicate1 < 150) {
			// if the sum of the food items on the 1st day is less than 150,
			// then, the coupon will not be applied and Chef needs to pay 'd' rupees (delivery charge)
			duplicate1 += d;
		}
		int duplicate2 = second_day_order;
		if (duplicate2 < 150) {
			// if the sum of the food items on the 2nd day is less than 150,
			// then, the coupon will not be applied and Chef needs to pay 'd' rupees (delivery charge)
			duplicate2 += d;
		}
		// calculate the total possible sum WITH the coupon
		int total_with_coupon = duplicate1 + duplicate2 + c;
		// calculate the total possible sum WITHOUT the coupon
		int total_without_coupon = first_day_order + second_day_order + (2 * d);
		cout << (total_with_coupon < total_without_coupon ? "YES" : "NO") << '\n';
	}
	return 0;
}
