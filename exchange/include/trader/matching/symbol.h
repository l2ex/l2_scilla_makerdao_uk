/*!
    \file symbol.h
    \brief Symbol definition
    \author Ivan Shynkarenka
    \date 31.07.2017
    \copyright MIT License
*/

#ifndef TRADING_PLATFORM_MATCHING_SYMBOL_H
#define TRADING_PLATFORM_MATCHING_SYMBOL_H

#include "utility/iostream.h"

#include <cstdint>
#include <cstring>

namespace TradingPlatform {
namespace Matching {

//! Symbol
struct Symbol
{
    //! Symbol Id
    uint32_t Id;
    //! Symbol name
    char Name[8];

    Symbol() noexcept = default;
    Symbol(uint32_t id, const char name[8]) noexcept;
    Symbol(const Symbol&) noexcept = default;
    Symbol(Symbol&&) noexcept = default;
    ~Symbol() noexcept = default;

    Symbol& operator=(const Symbol&) noexcept = default;
    Symbol& operator=(Symbol&&) noexcept = default;

    template <class TOutputStream>
    friend TOutputStream& operator<<(TOutputStream& stream, const Symbol& symbol);
};

} // namespace Matching
} // namespace TradingPlatform

#include "symbol.inl"

#endif // TRADING_PLATFORM_MATCHING_SYMBOL_H
