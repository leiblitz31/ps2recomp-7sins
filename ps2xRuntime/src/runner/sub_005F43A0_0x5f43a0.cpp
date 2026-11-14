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

// Function: sub_005F43A0
// Address: 0x5f43a0 - 0x5f43c0
void sub_005F43A0_0x5f43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F43A0_0x5f43a0");
#endif

    ctx->pc = 0x5f43a0u;

    // 0x5f43a0: 0x5453203e  bnel        $v0, $s3, . + 4 + (0x203E << 2)
    ctx->pc = 0x5F43A0u;
    {
        const bool branch_taken_0x5f43a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x5f43a0) {
            ctx->pc = 0x5F43A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F43A0u;
            // 0x5f43a4: 0x3a545241  xori        $s4, $s2, 0x5241 (Delay Slot)
            SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21057);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC49Cu;
            return;
        }
    }
    ctx->pc = 0x5F43A8u;
    // 0x5f43a8: 0xa732520  j           func_9CC9480
    ctx->pc = 0x5F43A8u;
    ctx->pc = 0x9CC9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CC9480u, 0x5F43A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F43B0u;
    // 0x5f43b0: 0x4e45203c  .word       0x4E45203C                   # INVALID     $s2, $a1, 0x203C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f43b0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F43B0 raw=0x4E45203C");
    // 0x5f43b4: 0x3a202044  xori        $zero, $s1, 0x2044
    ctx->pc = 0x5f43b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8260);
    // 0x5f43b8: 0x732520  .word       0x00732520                   # add         $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f43b8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x5f43bc: 0x0  nop
    ctx->pc = 0x5f43bcu;
    // NOP
    ctx->pc = 0x5f43c0u;
}
