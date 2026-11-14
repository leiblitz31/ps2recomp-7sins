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

// Function: sub_004E2830
// Address: 0x4e2830 - 0x4e2850
void sub_004E2830_0x4e2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2830_0x4e2830");
#endif

    ctx->pc = 0x4e2830u;

    // 0x4e2830: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2830u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e2834: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2834u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e2838: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2838u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2838 raw=0x76656C5C");
    // 0x4e283c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E283Cu;
    {
        const bool branch_taken_0x4e283c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e283c) {
            ctx->pc = 0x4E2840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E283Cu;
            // 0x4e2840: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD9D4u;
            return;
        }
    }
    ctx->pc = 0x4E2844u;
    // 0x4e2844: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x4e2844u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2848: 0x0  nop
    ctx->pc = 0x4e2848u;
    // NOP
    // 0x4e284c: 0x0  nop
    ctx->pc = 0x4e284cu;
    // NOP
    ctx->pc = 0x4e2850u;
}
