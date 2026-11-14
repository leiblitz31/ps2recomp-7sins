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

// Function: sub_004ED010
// Address: 0x4ed010 - 0x4ed030
void sub_004ED010_0x4ed010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED010_0x4ed010");
#endif

    ctx->pc = 0x4ed010u;

    // 0x4ed010: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4ed010u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x4ed014: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed014u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED014 raw=0x75632E6C");
    // 0x4ed018: 0x6e657272  ldr         $a1, 0x7272($s3)
    ctx->pc = 0x4ed018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29298); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ed01c: 0x75662e74  .word       0x75662E74                   # INVALID     $t3, $a2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed01cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED01C raw=0x75662E74");
    // 0x4ed020: 0x61706c6c  daddi       $s0, $t3, 0x6C6C
    ctx->pc = 0x4ed020u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
    // 0x4ed024: 0x616e6874  daddi       $t6, $t3, 0x6874
    ctx->pc = 0x4ed024u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ed028: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed028u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed02c: 0x0  nop
    ctx->pc = 0x4ed02cu;
    // NOP
    ctx->pc = 0x4ed030u;
}
