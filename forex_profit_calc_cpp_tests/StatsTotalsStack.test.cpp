#include "pch.h"
#include "../forex_profit_calc_cpp/StatsTotalsStack.h"
#include "../forex_profit_calc_cpp/StatsTotalsStack.cpp"

using namespace std;

namespace statsTotalsStack {
	TEST(StatsTotalsStackMethods, Peek) {
		StatsTotalsStack sts;
		SimulationStatObj sampleObjects[3];
		for (int i = 0; i < 3; i++) {
			int tMin = rand() % 60000 + 30000;
			double tempMin = (double)tMin;
			sampleObjects[i].minPortfolioAmount = tempMin;
			int tMax = rand() % 100000 + 60001;
			double tempMax = (double)tMax;
			sampleObjects[i].maxPortfolioAmount = tempMax;
			sts.push(sampleObjects[i]);
		}
		EXPECT_EQ(sts.peek().maxPortfolioAmount, sampleObjects[2].maxPortfolioAmount);
		EXPECT_EQ(sts.peek().minPortfolioAmount, sampleObjects[2].minPortfolioAmount);
	}

	TEST(StatsTotalsStackMethods, PopOnEmpty) {
		StatsTotalsStack sts;
		try
		{
			sts.pop();
		}
		catch (const std::exception& e)
		{
			ASSERT_STREQ(e.what(), "ERROR: Stack is empty");
		}
	}

	TEST(StatsTotalsStackMethods, Pop) {
		StatsTotalsStack sts;
		SimulationStatObj sampleObjects[3];
		for (int i = 0; i < 3; i++) {
			int tMin = rand() % 60000 + 30000;
			double tempMin = (double)tMin;
			sampleObjects[i].minPortfolioAmount = tempMin;
			int tMax = rand() % 100000 + 60001;
			double tempMax = (double)tMax;
			sampleObjects[i].maxPortfolioAmount = tempMax;
			sts.push(sampleObjects[i]);
		}

		sts.pop();
		EXPECT_EQ(sts.peek().maxPortfolioAmount, sampleObjects[1].maxPortfolioAmount);
		EXPECT_EQ(sts.peek().minPortfolioAmount, sampleObjects[1].minPortfolioAmount);
	}

	TEST(StatsTotalsStackMethods, Push) {
		StatsTotalsStack sts;

		SimulationStatObj sampleObject;
		sampleObject.maxPortfolioAmount = 90000;
		sampleObject.minPortfolioAmount = 30000;

		sts.push(sampleObject);

		EXPECT_EQ(sts.peek().maxPortfolioAmount, sampleObject.maxPortfolioAmount);
		EXPECT_EQ(sts.peek().minPortfolioAmount, sampleObject.minPortfolioAmount);
	}
}