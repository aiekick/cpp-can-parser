#pragma once

#include <models/CANDatabase.h>
#include <parsing/Tokenizer.h>
#include <set>
#include <memory>

namespace CppCAN
{
	namespace parser
	{
		namespace dbc
		{
			CANDatabase fromTokenizer(
				const std::string& name, details::Tokenizer& tokenizer,
				std::vector<CANDatabase::parsing_warning>* warnings = nullptr);

			CANDatabase fromTokenizer(
				details::Tokenizer& tokenizer,
				std::vector<CANDatabase::parsing_warning>* warnings = nullptr);
		}
	}
}

