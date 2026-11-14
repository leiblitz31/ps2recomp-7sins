#ifndef PS2_EE_INTERPRETER_H
#define PS2_EE_INTERPRETER_H

#include <cstdint>

struct R5900Context;
class PS2Runtime;

namespace ps2_ee_interpreter
{
// Executes guest instructions at ctx->pc until control is transferred to an
// address that has a recompiled function (or a budget/stop condition hits).
// Signature matches RecompiledFunction so it can be used as a dispatch target.
void runThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

// Statistics for diagnostics/log lines.
uint64_t interpretedInstructions();
uint64_t unsupportedInstructions();
void resetCounters();
} // namespace ps2_ee_interpreter

#endif // PS2_EE_INTERPRETER_H
