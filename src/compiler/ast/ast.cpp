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

#include "array_literal_expression.hpp"
#include "assign_statement.hpp"
#include "binary_expression.hpp"
#include "bool_literal_expression.hpp"
#include "break_statement.hpp"
#include "call_expression.hpp"
#include "call_statement.hpp"
#include "continue_statement.hpp"
#include "do_statement.hpp"
#include "for_statement.hpp"
#include "identifier_expression.hpp"
#include "if_statement.hpp"
#include "int_literal_expression.hpp"
#include "object_literal_expression.hpp"
#include "real_literal_expression.hpp"
#include "return_statement.hpp"
#include "str_literal_expression.hpp"
#include "translator.hpp"
#include "unary_expression.hpp"
#include "when_statement.hpp"
#include "while_statement.hpp"

namespace zee::compiler::ast
{

    void ArrayLiteralExpression::translate(Translator &translator) const { translator.translate(*this); }
    void AssignStatement::translate(Translator &translator) const { translator.translate(*this); }
    void BinaryExpression::translate(Translator &translator) const { translator.translate(*this); }
    void BoolLiteralExpression::translate(Translator &translator) const { translator.translate(*this); }
    void BreakStatement::translate(Translator &translator) const { translator.translate(*this); }
    void CallExpression::translate(Translator &translator) const { translator.translate(*this); }
    void CallStatement::translate(Translator &translator) const { translator.translate(*this); }
    void ContinueStatement::translate(Translator &translator) const { translator.translate(*this); }
    void DoStatement::translate(Translator &translator) const { translator.translate(*this); }
    void ForStatement::translate(Translator &translator) const { translator.translate(*this); }
    void IdentifierExpression::translate(Translator &translator) const { translator.translate(*this); }
    void IfStatement::translate(Translator &translator) const { translator.translate(*this); }
    void IntLiteralExpression::translate(Translator &translator) const { translator.translate(*this); }
    void ObjectLiteralExpression::translate(Translator &translator) const { translator.translate(*this); }
    void RealLiteralExpression::translate(Translator &translator) const { translator.translate(*this); }
    void ReturnStatement::translate(Translator &translator) const { translator.translate(*this); }
    void StrLiteralExpression::translate(Translator &translator) const { translator.translate(*this); }
    void UnaryExpression::translate(Translator &translator) const { translator.translate(*this); }
    void WhenStatement::translate(Translator &translator) const { translator.translate(*this); }
    void WhileStatement::translate(Translator &translator) const { translator.translate(*this); }

} // namespace zee::compiler::ast
