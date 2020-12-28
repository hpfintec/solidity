/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
// SPDX-License-Identifier: GPL-3.0

#pragma once

<<<<<<< HEAD:test/libyul/YulInterpreterTest.h
#include <test/TestCase.h>

namespace solidity::langutil
{
class Scanner;
class Error;
using ErrorList = std::vector<std::shared_ptr<Error const>>;
=======
#include <libyul/optimiser/OptimiserStep.h>
#include <libyul/optimiser/NameDispenser.h>

#include <libyul/YulString.h>

#include <set>
#include <memory>

namespace solidity::langutil
{
	class Scanner;
	class Error;
	using ErrorList = std::vector<std::shared_ptr<Error const>>;
>>>>>>> Refactor yul optimizer test framework:test/libyul/YulOptimizerTestCommon.h
}

namespace solidity::yul
{
<<<<<<< HEAD:test/libyul/YulInterpreterTest.h
struct AsmAnalysisInfo;
struct Block;
=======
	struct AsmAnalysisInfo;
	struct Object;
	struct Dialect;
>>>>>>> Refactor yul optimizer test framework:test/libyul/YulOptimizerTestCommon.h
}

namespace solidity::yul::test
{
<<<<<<< HEAD:test/libyul/YulInterpreterTest.h

class YulInterpreterTest: public solidity::frontend::test::EVMVersionRestrictedTestCase
{
public:
	static std::unique_ptr<TestCase> create(Config const& _config)
	{
		return std::make_unique<YulInterpreterTest>(_config.filename);
	}

	explicit YulInterpreterTest(std::string const& _filename);
=======
class YulOptimizerTester
{
public:
	explicit YulOptimizerTester(
		std::shared_ptr<Object> _obj,
		Dialect const& _dialect,
		std::string const& _optimizerStep,
		bool _fuzzerMode
	);
	/// Runs chosen optimiser step returning pointer
	/// to yul AST Block post optimisation.
	std::shared_ptr<Block> run();
	/// Runs chosen optimiser step returning true if
	/// successful, false otherwise.
	bool runStep();
private:
	void disambiguate();
	void updateContext();
>>>>>>> Refactor yul optimizer test framework:test/libyul/YulOptimizerTestCommon.h

	TestResult run(std::ostream& _stream, std::string const& _linePrefix = "", bool const _formatted = false) override;

private:
	bool parse(std::ostream& _stream, std::string const& _linePrefix, bool const _formatted);
	std::string interpret();

	static void printErrors(std::ostream& _stream, langutil::ErrorList const& _errors);

	std::shared_ptr<Object> m_object;
	std::shared_ptr<Block> m_ast;
	std::shared_ptr<AsmAnalysisInfo> m_analysisInfo;
<<<<<<< HEAD:test/libyul/YulInterpreterTest.h
=======
	bool m_fuzzerMode;
>>>>>>> Refactor yul optimizer test framework:test/libyul/YulOptimizerTestCommon.h
};

}
