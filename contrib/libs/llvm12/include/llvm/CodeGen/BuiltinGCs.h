#pragma once 
 
#ifdef __GNUC__ 
#pragma GCC diagnostic push 
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#endif 
 
//===-- BuiltinGCs.h - Garbage collector linkage hacks --------------------===// 
// 
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions. 
// See https://llvm.org/LICENSE.txt for license information. 
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception 
// 
//===----------------------------------------------------------------------===// 
// 
// This file contains hack functions to force linking in the builtin GC 
// components. 
// 
//===----------------------------------------------------------------------===// 
 
#ifndef LLVM_CODEGEN_GCS_H 
#define LLVM_CODEGEN_GCS_H 
 
namespace llvm { 
 
/// FIXME: Collector instances are not useful on their own. These no longer 
///        serve any purpose except to link in the plugins. 
 
/// Ensure the definition of the builtin GCs gets linked in 
void linkAllBuiltinGCs(); 
 
/// Creates an ocaml-compatible metadata printer. 
void linkOcamlGCPrinter(); 
 
/// Creates an erlang-compatible metadata printer. 
void linkErlangGCPrinter(); 
} 
 
#endif 
 
#ifdef __GNUC__ 
#pragma GCC diagnostic pop 
#endif 
