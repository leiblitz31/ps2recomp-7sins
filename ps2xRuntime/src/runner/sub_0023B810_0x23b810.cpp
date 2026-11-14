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

// Function: sub_0023B810
// Address: 0x23b810 - 0x23b8a0
void sub_0023B810_0x23b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B810_0x23b810");
#endif

    switch (ctx->pc) {
        case 0x23b854u: goto label_23b854;
        case 0x23b864u: goto label_23b864;
        case 0x23b884u: goto label_23b884;
        default: break;
    }

    ctx->pc = 0x23b810u;

    // 0x23b810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b81c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23b81cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b824: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23B824u;
    {
        const bool branch_taken_0x23b824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b824) {
            ctx->pc = 0x23B884u;
            goto label_23b884;
        }
    }
    ctx->pc = 0x23B82Cu;
    // 0x23b82c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23b830: 0x24635630  addiu       $v1, $v1, 0x5630
    ctx->pc = 0x23b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22064));
    // 0x23b834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b838: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23b838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23b83c: 0xaf80bbe8  sw          $zero, -0x4418($gp)
    ctx->pc = 0x23b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949864), GPR_U32(ctx, 0));
    // 0x23b840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b844: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x23b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x23b848: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23b848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b84c: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x23B84Cu;
    SET_GPR_U32(ctx, 31, 0x23B854u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x23B84Cu, 0x23B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B854u;
label_23b854:
    // 0x23b854: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b85c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x23B85Cu;
    SET_GPR_U32(ctx, 31, 0x23B864u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x23B85Cu, 0x23B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B864u;
label_23b864:
    // 0x23b864: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23b864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b868: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23b86c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23b86cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23b870: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B870u;
    {
        const bool branch_taken_0x23b870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b870) {
            ctx->pc = 0x23B884u;
            goto label_23b884;
        }
    }
    ctx->pc = 0x23B878u;
    // 0x23b878: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b87c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23B87Cu;
    SET_GPR_U32(ctx, 31, 0x23B884u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23B87Cu, 0x23B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B884u;
label_23b884:
    // 0x23b884: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b88c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b890: 0x3e00008  jr          $ra
    ctx->pc = 0x23B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B898u;
    // 0x23b898: 0x0  nop
    ctx->pc = 0x23b898u;
    // NOP
    // 0x23b89c: 0x0  nop
    ctx->pc = 0x23b89cu;
    // NOP
    ctx->pc = 0x23b8a0u;
}
