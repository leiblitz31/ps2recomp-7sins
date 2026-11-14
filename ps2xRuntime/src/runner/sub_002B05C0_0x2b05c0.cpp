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

// Function: sub_002B05C0
// Address: 0x2b05c0 - 0x2b0690
void sub_002B05C0_0x2b05c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B05C0_0x2b05c0");
#endif

    switch (ctx->pc) {
        case 0x2b05e0u: goto label_2b05e0;
        case 0x2b05ecu: goto label_2b05ec;
        case 0x2b0634u: goto label_2b0634;
        case 0x2b066cu: goto label_2b066c;
        default: break;
    }

    ctx->pc = 0x2b05c0u;

    // 0x2b05c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b05c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b05c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b05c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b05c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b05c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b05cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b05d0: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b05d4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2b05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2b05d8: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2B05D8u;
    SET_GPR_U32(ctx, 31, 0x2B05E0u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2B05D8u, 0x2B05E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B05E0u;
label_2b05e0:
    // 0x2b05e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b05e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05e4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B05E4u;
    {
        const bool branch_taken_0x2b05e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b05e4) {
            ctx->pc = 0x2B065Cu;
            goto label_2b065c;
        }
    }
    ctx->pc = 0x2B05ECu;
label_2b05ec:
    // 0x2b05ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b05f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b05f4: 0x10020018  beq         $zero, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B05F4u;
    {
        const bool branch_taken_0x2b05f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b05f4) {
            ctx->pc = 0x2B0658u;
            goto label_2b0658;
        }
    }
    ctx->pc = 0x2B05FCu;
    // 0x2b05fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0600: 0x90420058  lbu         $v0, 0x58($v0)
    ctx->pc = 0x2b0600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2b0604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0608: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B0608u;
    {
        const bool branch_taken_0x2b0608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0608) {
            ctx->pc = 0x2B0658u;
            goto label_2b0658;
        }
    }
    ctx->pc = 0x2B0610u;
    // 0x2b0610: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b0610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0614: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b061c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B061Cu;
    {
        const bool branch_taken_0x2b061c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b061c) {
            ctx->pc = 0x2B0658u;
            goto label_2b0658;
        }
    }
    ctx->pc = 0x2B0624u;
    // 0x2b0624: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0628: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b062c: 0xc12bf12  jal         func_4AFC48
    ctx->pc = 0x2B062Cu;
    SET_GPR_U32(ctx, 31, 0x2B0634u);
    ctx->pc = 0x4AFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC48u, 0x2B062Cu, 0x2B0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0634u;
label_2b0634:
    // 0x2b0634: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b0634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0638: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0638u;
    {
        const bool branch_taken_0x2b0638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b0638) {
            ctx->pc = 0x2B064Cu;
            goto label_2b064c;
        }
    }
    ctx->pc = 0x2B0640u;
    // 0x2b0640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0644: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B0644u;
    {
        const bool branch_taken_0x2b0644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0644) {
            ctx->pc = 0x2B0678u;
            goto label_2b0678;
        }
    }
    ctx->pc = 0x2B064Cu;
label_2b064c:
    // 0x2b064c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b064cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0650: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0650u;
    {
        const bool branch_taken_0x2b0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0650) {
            ctx->pc = 0x2B0678u;
            goto label_2b0678;
        }
    }
    ctx->pc = 0x2B0658u;
label_2b0658:
    // 0x2b0658: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b0658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b065c:
    // 0x2b065c: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b0660: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2b0660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2b0664: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2B0664u;
    SET_GPR_U32(ctx, 31, 0x2B066Cu);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2B0664u, 0x2B066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B066Cu;
label_2b066c:
    // 0x2b066c: 0x1602ffdf  bne         $s0, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2B066Cu;
    {
        const bool branch_taken_0x2b066c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b066c) {
            ctx->pc = 0x2B05ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b05ec;
        }
    }
    ctx->pc = 0x2B0674u;
    // 0x2b0674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0678:
    // 0x2b0678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b067c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0680: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b0680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b0684: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B068Cu;
    // 0x2b068c: 0x0  nop
    ctx->pc = 0x2b068cu;
    // NOP
    ctx->pc = 0x2b0690u;
}
