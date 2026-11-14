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

// Function: sub_0013E7A0
// Address: 0x13e7a0 - 0x13e870
void sub_0013E7A0_0x13e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E7A0_0x13e7a0");
#endif

    switch (ctx->pc) {
        case 0x13e7bcu: goto label_13e7bc;
        case 0x13e7f0u: goto label_13e7f0;
        case 0x13e800u: goto label_13e800;
        case 0x13e838u: goto label_13e838;
        case 0x13e854u: goto label_13e854;
        default: break;
    }

    ctx->pc = 0x13e7a0u;

    // 0x13e7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e7ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13e7b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e7b4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x13E7B4u;
    SET_GPR_U32(ctx, 31, 0x13E7BCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x13E7B4u, 0x13E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7BCu;
label_13e7bc:
    // 0x13e7bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13e7c0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E7C0u;
    {
        const bool branch_taken_0x13e7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e7c0) {
            ctx->pc = 0x13E808u;
            goto label_13e808;
        }
    }
    ctx->pc = 0x13E7C8u;
    // 0x13e7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e7cc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E7CCu;
    {
        const bool branch_taken_0x13e7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e7cc) {
            ctx->pc = 0x13E7DCu;
            goto label_13e7dc;
        }
    }
    ctx->pc = 0x13E7D4u;
    // 0x13e7d4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13E7D4u;
    {
        const bool branch_taken_0x13e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7d4) {
            ctx->pc = 0x13E854u;
            goto label_13e854;
        }
    }
    ctx->pc = 0x13E7DCu;
label_13e7dc:
    // 0x13e7dc: 0x8f82ba7c  lw          $v0, -0x4584($gp)
    ctx->pc = 0x13e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13e7e0: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13e7e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e7e8: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x13E7E8u;
    SET_GPR_U32(ctx, 31, 0x13E7F0u);
    ctx->pc = 0x13F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F970u, 0x13E7E8u, 0x13E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7F0u;
label_13e7f0:
    // 0x13e7f0: 0x8f82ba7c  lw          $v0, -0x4584($gp)
    ctx->pc = 0x13e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13e7f4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13e7f8: 0xc04d38c  jal         func_134E30
    ctx->pc = 0x13E7F8u;
    SET_GPR_U32(ctx, 31, 0x13E800u);
    ctx->pc = 0x134E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E30u, 0x13E7F8u, 0x13E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E800u;
label_13e800:
    // 0x13e800: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13E800u;
    {
        const bool branch_taken_0x13e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e800) {
            ctx->pc = 0x13E854u;
            goto label_13e854;
        }
    }
    ctx->pc = 0x13E808u;
label_13e808:
    // 0x13e808: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13e808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e80c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x13e810: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e814: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E814u;
    {
        const bool branch_taken_0x13e814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e814) {
            ctx->pc = 0x13E824u;
            goto label_13e824;
        }
    }
    ctx->pc = 0x13E81Cu;
    // 0x13e81c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x13e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x13e820: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13e820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_13e824:
    // 0x13e824: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x13e824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e828: 0x8f82ba7c  lw          $v0, -0x4584($gp)
    ctx->pc = 0x13e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13e82c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13e830: 0xc0acb38  jal         func_2B2CE0
    ctx->pc = 0x13E830u;
    SET_GPR_U32(ctx, 31, 0x13E838u);
    ctx->pc = 0x2B2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2CE0u, 0x13E830u, 0x13E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E838u;
label_13e838:
    // 0x13e838: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E838u;
    {
        const bool branch_taken_0x13e838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e838) {
            ctx->pc = 0x13E854u;
            goto label_13e854;
        }
    }
    ctx->pc = 0x13E840u;
    // 0x13e840: 0x8f82ba7c  lw          $v0, -0x4584($gp)
    ctx->pc = 0x13e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13e844: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13e848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e84c: 0xc0acb18  jal         func_2B2C60
    ctx->pc = 0x13E84Cu;
    SET_GPR_U32(ctx, 31, 0x13E854u);
    ctx->pc = 0x2B2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C60u, 0x13E84Cu, 0x13E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E854u;
label_13e854:
    // 0x13e854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e85c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13e85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13e860: 0x3e00008  jr          $ra
    ctx->pc = 0x13E860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E868u;
    // 0x13e868: 0x0  nop
    ctx->pc = 0x13e868u;
    // NOP
    // 0x13e86c: 0x0  nop
    ctx->pc = 0x13e86cu;
    // NOP
    ctx->pc = 0x13e870u;
}
