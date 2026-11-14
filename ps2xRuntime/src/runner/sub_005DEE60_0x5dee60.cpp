#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005DEE60
// Address: 0x5dee60 - 0x5dee78
void sub_005DEE60_0x5dee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEE60_0x5dee60");
#endif

    ctx->pc = 0x5dee60u;

    // 0x5dee60: 0x6d754e70  ldr         $s5, 0x4E70($t3)
    ctx->pc = 0x5dee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20080); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5dee64: 0x73726944  .word       0x73726944                   # plzcw       $t5, $k1 # 00120140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dee64u;
    { uint64_t v = GPR_U64(ctx, 27); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
    // 0x5dee68: 0x6174624f  daddi       $s4, $t3, 0x624F
    ctx->pc = 0x5dee68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25167; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x5dee6c: 0x64656e69  daddiu      $a1, $v1, 0x6E69
    ctx->pc = 0x5dee6cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28265);
    // 0x5dee70: 0x0  nop
    ctx->pc = 0x5dee70u;
    // NOP
    // 0x5dee74: 0x0  nop
    ctx->pc = 0x5dee74u;
    // NOP
    ctx->pc = 0x5dee78u;
}
