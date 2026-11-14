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

// Function: sub_00214640
// Address: 0x214640 - 0x2146f0
void sub_00214640_0x214640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214640_0x214640");
#endif

    switch (ctx->pc) {
        case 0x2146b0u: goto label_2146b0;
        case 0x2146d0u: goto label_2146d0;
        default: break;
    }

    ctx->pc = 0x214640u;

    // 0x214640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21464c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21464cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x214650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214654: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x214654u;
    {
        const bool branch_taken_0x214654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214654) {
            ctx->pc = 0x2146D0u;
            goto label_2146d0;
        }
    }
    ctx->pc = 0x21465Cu;
    // 0x21465c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214664: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x214664u;
    {
        const bool branch_taken_0x214664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214664) {
            ctx->pc = 0x2146B0u;
            goto label_2146b0;
        }
    }
    ctx->pc = 0x21466Cu;
    // 0x21466c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214670: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x214670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214678: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x214678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21467c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214684: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x214684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214688: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x214688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21468c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x21468cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x214690: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x214690u;
    {
        const bool branch_taken_0x214690 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x214690) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214698u;
    // 0x214698: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21469c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x21469cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2146a0:
    // 0x2146a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2146a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2146a8: 0xc085328  jal         func_214CA0
    ctx->pc = 0x2146A8u;
    SET_GPR_U32(ctx, 31, 0x2146B0u);
    ctx->pc = 0x214CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214CA0u, 0x2146A8u, 0x2146B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146B0u;
label_2146b0:
    // 0x2146b0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2146b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2146b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2146b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2146b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2146bc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2146BCu;
    {
        const bool branch_taken_0x2146bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2146bc) {
            ctx->pc = 0x2146D0u;
            goto label_2146d0;
        }
    }
    ctx->pc = 0x2146C4u;
    // 0x2146c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2146c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2146c8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2146C8u;
    SET_GPR_U32(ctx, 31, 0x2146D0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2146C8u, 0x2146D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146D0u;
label_2146d0:
    // 0x2146d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2146d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2146d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2146d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2146d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2146d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2146dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2146DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2146DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2146E4u;
    // 0x2146e4: 0x0  nop
    ctx->pc = 0x2146e4u;
    // NOP
    // 0x2146e8: 0x0  nop
    ctx->pc = 0x2146e8u;
    // NOP
    // 0x2146ec: 0x0  nop
    ctx->pc = 0x2146ecu;
    // NOP
    ctx->pc = 0x2146f0u;
}
