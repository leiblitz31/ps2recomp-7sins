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

// Function: sub_004ED0C0
// Address: 0x4ed0c0 - 0x4ed0e0
void sub_004ED0C0_0x4ed0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED0C0_0x4ed0c0");
#endif

    ctx->pc = 0x4ed0c0u;

    // 0x4ed0c0: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4ed0c0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x4ed0c4: 0x61622e6c  daddi       $v0, $t3, 0x2E6C
    ctx->pc = 0x4ed0c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x4ed0c8: 0x70756b63  .word       0x70756B63                   # INVALID     $v1, $s5, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed0c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ED0C8 raw=0x70756B63");
    // 0x4ed0cc: 0x6a6e702e  ldl         $t6, 0x702E($s3)
    ctx->pc = 0x4ed0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4ed0d0: 0x7473696c  .word       0x7473696C                   # INVALID     $v1, $s3, 0x696C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed0d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED0D0 raw=0x7473696C");
    // 0x4ed0d4: 0x0  nop
    ctx->pc = 0x4ed0d4u;
    // NOP
    // 0x4ed0d8: 0x0  nop
    ctx->pc = 0x4ed0d8u;
    // NOP
    // 0x4ed0dc: 0x0  nop
    ctx->pc = 0x4ed0dcu;
    // NOP
    ctx->pc = 0x4ed0e0u;
}
