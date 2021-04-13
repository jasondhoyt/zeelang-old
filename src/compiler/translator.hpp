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

namespace zee::compiler
{

    namespace ast
    {
        struct ArrayLiteralExpression;
        struct AssignStatement;
        struct BinaryExpression;
        struct BoolLiteralExpression;
        struct BreakStatement;
        struct CallExpression;
        struct CallStatement;
        struct ContinueStatement;
        struct DoStatement;
        struct ForStatement;
        struct IdentifierExpression;
        struct IfStatement;
        struct IntLiteralExpression;
        struct ObjectLiteralExpression;
        struct RealLiteralExpression;
        struct ReturnStatement;
        struct StrLiteralExpression;
        struct UnaryExpression;
        struct WhenStatement;
        struct WhileStatement;
    }; // namespace ast

    class Translator
    {
    public:
        Translator() = default;
        virtual ~Translator() = default;

        virtual void translate(const ast::ArrayLiteralExpression &expr) = 0;
        virtual void translate(const ast::AssignStatement &stm) = 0;
        virtual void translate(const ast::BinaryExpression &expr) = 0;
        virtual void translate(const ast::BoolLiteralExpression &expr) = 0;
        virtual void translate(const ast::BreakStatement &stm) = 0;
        virtual void translate(const ast::CallExpression &expr) = 0;
        virtual void translate(const ast::CallStatement &stm) = 0;
        virtual void translate(const ast::ContinueStatement &stm) = 0;
        virtual void translate(const ast::DoStatement &stm) = 0;
        virtual void translate(const ast::ForStatement &stm) = 0;
        virtual void translate(const ast::IdentifierExpression &expr) = 0;
        virtual void translate(const ast::IfStatement &stm) = 0;
        virtual void translate(const ast::IntLiteralExpression &expr) = 0;
        virtual void translate(const ast::ObjectLiteralExpression &expr) = 0;
        virtual void translate(const ast::RealLiteralExpression &expr) = 0;
        virtual void translate(const ast::ReturnStatement &stm) = 0;
        virtual void translate(const ast::StrLiteralExpression &expr) = 0;
        virtual void translate(const ast::UnaryExpression &expr) = 0;
        virtual void translate(const ast::WhenStatement &stm) = 0;
        virtual void translate(const ast::WhileStatement &stm) = 0;
    };

} // namespace zee::compiler
