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

// Function: sub_004ED080
// Address: 0x4ed080 - 0x4ed0a0
void sub_004ED080_0x4ed080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED080_0x4ed080");
#endif

    ctx->pc = 0x4ed080u;

    // 0x4ed080: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4ed080u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x4ed084: 0x61622e6c  daddi       $v0, $t3, 0x2E6C
    ctx->pc = 0x4ed084u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x4ed088: 0x70756b63  .word       0x70756B63                   # INVALID     $v1, $s5, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed088u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ED088 raw=0x70756B63");
    // 0x4ed08c: 0x6c75662e  ldr         $s5, 0x662E($v1)
    ctx->pc = 0x4ed08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4ed090: 0x7461706c  .word       0x7461706C                   # INVALID     $v1, $at, 0x706C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed090u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED090 raw=0x7461706C");
    // 0x4ed094: 0x6d616e68  ldr         $at, 0x6E68($t3)
    ctx->pc = 0x4ed094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4ed098: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed098u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed09c: 0x0  nop
    ctx->pc = 0x4ed09cu;
    // NOP
    ctx->pc = 0x4ed0a0u;
}
