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

// Function: sub_005E0BA0
// Address: 0x5e0ba0 - 0x5e0be0
void sub_005E0BA0_0x5e0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0BA0_0x5e0ba0");
#endif

    ctx->pc = 0x5e0ba0u;

    // 0x5e0ba0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0BA0u;
    {
        const bool branch_taken_0x5e0ba0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0ba0) {
            ctx->pc = 0x5E0BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0BA0u;
            // 0x5e0ba4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDD34u;
            return;
        }
    }
    ctx->pc = 0x5E0BA8u;
    // 0x5e0ba8: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0ba8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0bac: 0x3a3a7463  xori        $k0, $s1, 0x7463
    ctx->pc = 0x5e0bacu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29795);
    // 0x5e0bb0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0BB0u;
    {
        const bool branch_taken_0x5e0bb0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0bb0) {
            ctx->pc = 0x5E0BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0BB0u;
            // 0x5e0bb4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDD44u;
            return;
        }
    }
    ctx->pc = 0x5E0BB8u;
    // 0x5e0bb8: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0bb8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0bbc: 0x2d207463  sltiu       $zero, $t1, 0x7463
    ctx->pc = 0x5e0bbcu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29795) ? 1 : 0);
    // 0x5e0bc0: 0x52203e2d  beql        $s1, $zero, . + 4 + (0x3E2D << 2)
    ctx->pc = 0x5E0BC0u;
    {
        const bool branch_taken_0x5e0bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5e0bc0) {
            ctx->pc = 0x5E0BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0BC0u;
            // 0x5e0bc4: 0x50643274  beql        $v1, $a0, . + 4 + (0x3274 << 2) (Delay Slot)
            // Likely branch instruction at 0x5E0BC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0478u;
            return;
        }
    }
    ctx->pc = 0x5E0BC8u;
    // 0x5e0bc8: 0x43687461  .word       0x43687461                   # INVALID     $k1, $t0, 0x7461 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5e0bc8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5E0BC8 raw=0x43687461");
    // 0x5e0bcc: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0bccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0BCC raw=0x74616572");
    // 0x5e0bd0: 0x61662065  daddi       $a2, $t3, 0x2065
    ctx->pc = 0x5e0bd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x5e0bd4: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x5e0bd4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
    // 0x5e0bd8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e0bd8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5e0bdc: 0x0  nop
    ctx->pc = 0x5e0bdcu;
    // NOP
    ctx->pc = 0x5e0be0u;
}
