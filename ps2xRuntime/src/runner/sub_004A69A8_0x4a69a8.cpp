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

// Function: sub_004A69A8
// Address: 0x4a69a8 - 0x4a69f8
void sub_004A69A8_0x4a69a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A69A8_0x4a69a8");
#endif

    switch (ctx->pc) {
        case 0x4a69d0u: goto label_4a69d0;
        case 0x4a69d8u: goto label_4a69d8;
        default: break;
    }

    ctx->pc = 0x4a69a8u;

    // 0x4a69a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a69a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a69ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a69acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a69b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a69b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a69b4: 0x24b10020  addiu       $s1, $a1, 0x20
    ctx->pc = 0x4a69b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4a69b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a69bc: 0x8cb00020  lw          $s0, 0x20($a1)
    ctx->pc = 0x4a69bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4a69c0: 0x52110008  beql        $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A69C0u;
    {
        const bool branch_taken_0x4a69c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x4a69c0) {
            ctx->pc = 0x4A69C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A69C0u;
            // 0x4a69c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A69E4u;
            goto label_4a69e4;
        }
    }
    ctx->pc = 0x4A69C8u;
    // 0x4a69c8: 0x2604ffc0  addiu       $a0, $s0, -0x40
    ctx->pc = 0x4a69c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x4a69cc: 0x0  nop
    ctx->pc = 0x4a69ccu;
    // NOP
label_4a69d0:
    // 0x4a69d0: 0xc1298cc  jal         func_4A6330
    ctx->pc = 0x4A69D0u;
    SET_GPR_U32(ctx, 31, 0x4A69D8u);
    ctx->pc = 0x4A69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A69D0u;
    // 0x4a69d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6330u, 0x4A69D0u, 0x4A69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A69D8u;
label_4a69d8:
    // 0x4a69d8: 0x1611fffd  bne         $s0, $s1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x4A69D8u;
    {
        const bool branch_taken_0x4a69d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4A69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69D8u;
        // 0x4a69dc: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a69d8) {
            ctx->pc = 0x4A69D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a69d0;
        }
    }
    ctx->pc = 0x4A69E0u;
    // 0x4a69e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a69e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a69e4:
    // 0x4a69e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a69e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a69e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a69e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a69ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a69ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a69f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A69F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69F0u;
        // 0x4a69f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A69F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A69F8u;
}
