#include "pch.h"
#include "../forex_profit_calc_cpp/PortfolioTotalsStack.h"
#include "../forex_profit_calc_cpp/PortfolioTotalsStack.cpp"

using namespace std;

namespace portfolioStack {
	TEST(PortfolioTotalsStackMethods, MethodsOnEmpty) {
		PortfolioTotalsStack pts;
		EXPECT_EQ(pts.getMax(), -1.00);
		EXPECT_EQ(pts.getMin(), -1.00);
		EXPECT_EQ(pts.peek(), -1.00);
		EXPECT_EQ(pts.pop(), -1.00);
		pts.push(65.3);
		EXPECT_EQ(pts.peek(), 65.3);
	}

	TEST(PortfolioTotalsStackMethods, MethodsOnNonEmptyStack) {
		PortfolioTotalsStack pts;
		double tempMax = 57893.87;
		double tempMin = 46734.25;
		pts.push(tempMax);
		pts.push(tempMin);
		EXPECT_EQ(pts.getMax(), tempMax);
		EXPECT_EQ(pts.getMin(), tempMin);
		EXPECT_EQ(pts.pop(), tempMin);
		EXPECT_EQ(pts.peek(), tempMax);
	}
}
