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

// Function: sub_002D6790
// Address: 0x2d6790 - 0x2d6820
void sub_002D6790_0x2d6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6790_0x2d6790");
#endif

    switch (ctx->pc) {
        case 0x2d67b4u: goto label_2d67b4;
        case 0x2d67c0u: goto label_2d67c0;
        case 0x2d67f4u: goto label_2d67f4;
        default: break;
    }

    ctx->pc = 0x2d6790u;

    // 0x2d6790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d679c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d679cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d67a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d67a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d67a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d67a8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d67ac: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D67ACu;
    SET_GPR_U32(ctx, 31, 0x2D67B4u);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D67ACu, 0x2D67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67B4u;
label_2d67b4:
    // 0x2d67b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d67b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D67B8u;
    {
        const bool branch_taken_0x2d67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d67b8) {
            ctx->pc = 0x2D67E4u;
            goto label_2d67e4;
        }
    }
    ctx->pc = 0x2D67C0u;
label_2d67c0:
    // 0x2d67c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d67c4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d67c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d67cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D67CCu;
    {
        const bool branch_taken_0x2d67cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d67cc) {
            ctx->pc = 0x2D67E0u;
            goto label_2d67e0;
        }
    }
    ctx->pc = 0x2D67D4u;
    // 0x2d67d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d67d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D67D8u;
    {
        const bool branch_taken_0x2d67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d67d8) {
            ctx->pc = 0x2D6800u;
            goto label_2d6800;
        }
    }
    ctx->pc = 0x2D67E0u;
label_2d67e0:
    // 0x2d67e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d67e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d67e4:
    // 0x2d67e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d67e8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d67e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d67ec: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D67ECu;
    SET_GPR_U32(ctx, 31, 0x2D67F4u);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D67ECu, 0x2D67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67F4u;
label_2d67f4:
    // 0x2d67f4: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D67F4u;
    {
        const bool branch_taken_0x2d67f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d67f4) {
            ctx->pc = 0x2D67C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d67c0;
        }
    }
    ctx->pc = 0x2D67FCu;
    // 0x2d67fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d67fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6800:
    // 0x2d6800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6808: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d6808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d680c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D680Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6814u;
    // 0x2d6814: 0x0  nop
    ctx->pc = 0x2d6814u;
    // NOP
    // 0x2d6818: 0x0  nop
    ctx->pc = 0x2d6818u;
    // NOP
    // 0x2d681c: 0x0  nop
    ctx->pc = 0x2d681cu;
    // NOP
    ctx->pc = 0x2d6820u;
}
