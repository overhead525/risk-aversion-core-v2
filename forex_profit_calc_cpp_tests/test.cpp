/*
#include "pch.h"
#include "../forex_profit_calc_cpp/PortfolioTotalsStack.h";
#include "../forex_profit_calc_cpp/PortfolioTotalsStack.cpp";
#include "../forex_profit_calc_cpp/Simulator.h";
#include "../forex_profit_calc_cpp/Simulator.cpp";
#include "../forex_profit_calc_cpp/SimulatorConfiguration.h";
#include "../forex_profit_calc_cpp/TradeOutcome.h";
#include "../forex_profit_calc_cpp/SimulationStatObj.h";
#include "../forex_profit_calc_cpp/StatsTotalsStack.h";
#include "../forex_profit_calc_cpp/StatsTotalsStack.cpp";
#include "../forex_profit_calc_cpp/JSONFileCreator.h";
#include "../forex_profit_calc_cpp/JSONFileCreator.cpp";
#include <stack>

using namespace std;

/*
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

namespace statsTotalsStack {
	TEST(StatsTotalsStackMethods, Peek) {
		StatsTotalsStack sts;
		SimulationStatObj sampleObjects[3];
		for (int i = 0; i < sizeof(sampleObjects); i++) {
			double tempMin = rand() % 60000 + 30000;
			sampleObjects[i].minPortfolioAmount = tempMin;
			double tempMax = rand() % 100000 + 60001;
			sampleObjects[i].maxPortfolioAmount = tempMax;
			sampleObjects[i].finalPortfolioAmount = tempMax;
			sampleObjects[i].numOfTrades = rand() % 100 + 10;
			sts.push(sampleObjects[i]);
		}
		EXPECT_EQ(sts.peek(), sampleObjects[2]);
	}
}
*/

/*
namespace simulator {
	TEST(SimulatorMethods, GetSimulationCount) {
		EXPECT_FALSE(5 < 1);
	}

	TEST(SimulatorMethods, GetTradeCount) {
		EXPECT_FALSE(6 < 1);
	}

	TEST(SimulatorMethods, RunSingleTrade) {
		SimulatorConfiguration config;
		config.principal = 100000;  // $100,000.00
		config.winDecimal = 0.55;
		config.rewardDecimal = 0.3;
		config.riskDecimal = 0.1;
		Simulator s(config);
		TradeOutcome result = s.runSingleTrade();
		cout << "Result.outcome: " << result.outcome << "\n" << "Result.newPortfolioAmount: $" << result.newPortfolioAmount << endl;
		if (result.outcome == true)
			EXPECT_EQ(result.newPortfolioAmount, 130000.00);
		else
			EXPECT_EQ(result.newPortfolioAmount, 90000.00);
	} 

	TEST(SimulatorMethods, PopLastPortfolio) {
		SimulatorConfiguration config;
		config.principal = 100000;
		config.riskDecimal = 0.01;
		config.rewardDecimal = 0.05;
		config.winDecimal = 0.45;
		config.lossDecimal = 1 - config.winDecimal;
		config.breakEvenDecimal = 0.25;
		config.numOfTrades = 50;
		config.numOfSimulations = 100;

		Simulator s(config);
		s.runSingleSimulation();

		s.popLastPortfolio();
		// Expect the cumulative number of portfolios added to be 49 (1 less than 50)
		EXPECT_EQ(s.getTradeCount(), 49);
	}

	TEST(SimulatorMethods, AddPortfolio) {
		SimulatorConfiguration config;
		config.principal = 100000;
		config.riskDecimal = 0.01;
		config.rewardDecimal = 0.05;
		config.winDecimal = 0.45;
		config.lossDecimal = 1 - config.winDecimal;
		config.breakEvenDecimal = 0.25;
		config.numOfTrades = 50;
		config.numOfSimulations = 100;

		Simulator s(config);
		TradeOutcome result;
		result.outcome = true;
		result.newPortfolioAmount = 52000;
		s.addPortfolio(result);

		// Expect the last added portfolio to be our specified $52000.00
		EXPECT_EQ(s.popLastPortfolio(), (double)52000);
	}

	TEST(SimulatorMethods, RunSingleSimulation) {
		SimulatorConfiguration config;
		config.principal = 100000;
		config.riskDecimal = 0.01;
		config.rewardDecimal = 0.05;
		config.winDecimal = 0.45;
		config.lossDecimal = 1 - config.winDecimal;
		config.breakEvenDecimal = 0.25;
		config.numOfTrades = 50;
		config.numOfSimulations = 100;

		Simulator s(config);
		s.runSingleSimulation();

		// Expect the number of cumulative portfolios to equal the numOfTrades property in the configuration object
		EXPECT_EQ(s.getTradeCount(), config.numOfTrades);
	}

	
	TEST(SimulatorMethods, RunSimulations) {
		SimulatorConfiguration config;
		config.principal = 100000;
		config.riskDecimal = 0.01;
		config.rewardDecimal = 0.05;
		config.winDecimal = 0.45;
		config.lossDecimal = 1 - config.winDecimal;
		config.breakEvenDecimal = 0.25;
		config.numOfTrades = 50;
		config.numOfSimulations = 1000;

		Simulator s(config);
		s.runSimulations();

		EXPECT_EQ(s.getSimulationCount(), 1000);
	}

	TEST(JSONFileCreatorMethods, createJSONObject) {
		map<string, double> sampleSimulationOutput;
		sampleSimulationOutput.insert(pair<string, double>("minPortfolioAmount", 40000));
		sampleSimulationOutput.insert(pair<string, double>("maxPortfolioAmount", 90000));

		JSONFileCreator jfc(sampleSimulationOutput);
		
		json j_expect;
		j_expect["minPortfolioAmount"] = 40000;
		j_expect["maxPortfolioAmount"] = 90000;

		EXPECT_EQ(jfc.createJSONObject(), j_expect);
		
	}
}
*/
