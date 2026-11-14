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

// Function: sub_0041A380
// Address: 0x41a380 - 0x41a3d8
void sub_0041A380_0x41a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A380_0x41a380");
#endif

    switch (ctx->pc) {
        case 0x41a3b0u: goto label_41a3b0;
        case 0x41a3b8u: goto label_41a3b8;
        default: break;
    }

    ctx->pc = 0x41a380u;

label_41a380:
    // 0x41a380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41a384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41a388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41a38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41a394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a398: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x41a398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x41a39c: 0x8e100098  lw          $s0, 0x98($s0)
    ctx->pc = 0x41a39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x41a3a0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x41A3A0u;
    {
        const bool branch_taken_0x41a3a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a3a0) {
            ctx->pc = 0x41A3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A3A0u;
            // 0x41a3a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A3C8u;
            goto label_41a3c8;
        }
    }
    ctx->pc = 0x41A3A8u;
    // 0x41a3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a3ac: 0x0  nop
    ctx->pc = 0x41a3acu;
    // NOP
label_41a3b0:
    // 0x41a3b0: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x41A3B0u;
    SET_GPR_U32(ctx, 31, 0x41A3B8u);
    ctx->pc = 0x41A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A3B0u;
    // 0x41a3b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    goto label_41a380;
    ctx->pc = 0x41A3B8u;
label_41a3b8:
    // 0x41a3b8: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x41a3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x41a3bc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41A3BCu;
    {
        const bool branch_taken_0x41a3bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3BCu;
        // 0x41a3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a3bc) {
            ctx->pc = 0x41A3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a3b0;
        }
    }
    ctx->pc = 0x41A3C4u;
    // 0x41a3c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41a3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a3c8:
    // 0x41a3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x41A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3D0u;
        // 0x41a3d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A3D8u;
}
