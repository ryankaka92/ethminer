#pragma once

#include "Utils.h"


namespace dev
{
namespace eth
{
namespace jit
{
	
struct RuntimeData
{
	enum Index
	{
		Gas,
		Address,
		Caller,
		Origin,
		CallValue,
		CallDataSize,
		GasPrice,
		CoinBase,
		TimeStamp,
		Number,
		Difficulty,
		GasLimit,

		_size,

		ReturnDataOffset = CallValue,	// Reuse 2 fields for return data reference
		ReturnDataSize = CallDataSize,
		SuicideDestAddress = Address,	///< Suicide balance destination address
	};

	i256 elems[_size] = {};
	byte const* callData = nullptr;
	byte const* code = nullptr;
	uint64_t codeSize = 0;
};

/// VM Environment (ExtVM) opaque type
struct Env;

}
}
}
