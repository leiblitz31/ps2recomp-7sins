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

// Function: sub_0041E4A0
// Address: 0x41e4a0 - 0x41e508
void sub_0041E4A0_0x41e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E4A0_0x41e4a0");
#endif

    switch (ctx->pc) {
        case 0x41e4c8u: goto label_41e4c8;
        case 0x41e4d0u: goto label_41e4d0;
        default: break;
    }

    ctx->pc = 0x41e4a0u;

    // 0x41e4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41e4a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41e4a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41e4ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41e4b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41e4b4: 0x2451e93c  addiu       $s1, $v0, -0x16C4
    ctx->pc = 0x41e4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961468));
    // 0x41e4b8: 0x8c50e93c  lw          $s0, -0x16C4($v0)
    ctx->pc = 0x41e4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x41e4bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41e4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e4c0: 0x12110006  beq         $s0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41E4C0u;
    {
        const bool branch_taken_0x41e4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x41E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E4C0u;
        // 0x41e4c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e4c0) {
            ctx->pc = 0x41E4DCu;
            goto label_41e4dc;
        }
    }
    ctx->pc = 0x41E4C8u;
label_41e4c8:
    // 0x41e4c8: 0xc1078b0  jal         func_41E2C0
    ctx->pc = 0x41E4C8u;
    SET_GPR_U32(ctx, 31, 0x41E4D0u);
    ctx->pc = 0x41E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E4C8u;
    // 0x41e4cc: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E2C0u, 0x41E4C8u, 0x41E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E4D0u;
label_41e4d0:
    // 0x41e4d0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x41e4d4: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41E4D4u;
    {
        const bool branch_taken_0x41e4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x41e4d4) {
            ctx->pc = 0x41E4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e4c8;
        }
    }
    ctx->pc = 0x41E4DCu;
label_41e4dc:
    // 0x41e4dc: 0x2643e93c  addiu       $v1, $s2, -0x16C4
    ctx->pc = 0x41e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961468));
    // 0x41e4e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41e4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e4e4: 0xae43e93c  sw          $v1, -0x16C4($s2)
    ctx->pc = 0x41e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294961468), GPR_U32(ctx, 3));
    // 0x41e4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41e4ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41e4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e4f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41e4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e4f8: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x41e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x41e4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x41E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E4FCu;
        // 0x41e500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E504u;
    // 0x41e504: 0x0  nop
    ctx->pc = 0x41e504u;
    // NOP
    ctx->pc = 0x41e508u;
}
