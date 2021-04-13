// BSD 3-Clause License
//
// Copyright (c) 2021, Jason Hoyt
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once

#include "location.hpp"
#include "statement.hpp"
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace zee::compiler
{

    enum class BaseType
    {
        Bool,
        Int,
        Real,
        Str,
        Object
    };

    struct Typename
    {
        BaseType base;
        bool isArray;

        // for user-defined-types (objects)
        std::string typeName;
    };

    enum class SymbolClass
    {
        Local,
        Parameter,
        Type,
        Subroutine
    };

    struct Symbol
    {
        Location locDefined;
        std::string name;
        SymbolClass cls;
    };

    struct TypeField
    {
        Location locDefined;
        std::string name;
        Typename type;
    };

    class SymbolTable
    {
    public:
        Symbol *findSymbol(const std::string &name) const;

    private:
        std::vector<std::unique_ptr<Symbol>> m_symbols;
        std::unordered_map<std::string, Symbol *> m_mapNames;
    };

    struct TypeSymbol : public Symbol
    {
        std::vector<TypeField> fields;
    };

    struct SubroutineSymbol : public Symbol
    {
        Typename returnType;
        std::vector<std::unique_ptr<ast::Statement>> statements;
        SymbolTable symbols;
    };

} // namespace zee::compiler