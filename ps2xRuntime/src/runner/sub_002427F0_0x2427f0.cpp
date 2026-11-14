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

// Function: sub_002427F0
// Address: 0x2427f0 - 0x2428a0
void sub_002427F0_0x2427f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002427F0_0x2427f0");
#endif

    switch (ctx->pc) {
        case 0x242860u: goto label_242860;
        case 0x242880u: goto label_242880;
        default: break;
    }

    ctx->pc = 0x2427f0u;

    // 0x2427f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2427f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2427f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2427f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2427f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2427f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2427fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2427fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x242800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242804: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x242804u;
    {
        const bool branch_taken_0x242804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242804) {
            ctx->pc = 0x242880u;
            goto label_242880;
        }
    }
    ctx->pc = 0x24280Cu;
    // 0x24280c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242810: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242814: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x242814u;
    {
        const bool branch_taken_0x242814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242814) {
            ctx->pc = 0x242860u;
            goto label_242860;
        }
    }
    ctx->pc = 0x24281Cu;
    // 0x24281c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242820: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242824: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242828: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24282c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242834: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x242834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242838: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x242838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24283c: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x24283cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x242840: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x242840u;
    {
        const bool branch_taken_0x242840 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x242840) {
            ctx->pc = 0x242850u;
            goto label_242850;
        }
    }
    ctx->pc = 0x242848u;
    // 0x242848: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x24284c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_242850:
    // 0x242850: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x242850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x242854: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x242854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242858: 0xc090e3c  jal         func_2438F0
    ctx->pc = 0x242858u;
    SET_GPR_U32(ctx, 31, 0x242860u);
    ctx->pc = 0x2438F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2438F0u, 0x242858u, 0x242860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242860u;
label_242860:
    // 0x242860: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x242864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x242868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x242868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x24286c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24286Cu;
    {
        const bool branch_taken_0x24286c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24286c) {
            ctx->pc = 0x242880u;
            goto label_242880;
        }
    }
    ctx->pc = 0x242874u;
    // 0x242874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242878: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x242878u;
    SET_GPR_U32(ctx, 31, 0x242880u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x242878u, 0x242880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242880u;
label_242880:
    // 0x242880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242888: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x242888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24288c: 0x3e00008  jr          $ra
    ctx->pc = 0x24288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24288Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242894u;
    // 0x242894: 0x0  nop
    ctx->pc = 0x242894u;
    // NOP
    // 0x242898: 0x0  nop
    ctx->pc = 0x242898u;
    // NOP
    // 0x24289c: 0x0  nop
    ctx->pc = 0x24289cu;
    // NOP
    ctx->pc = 0x2428a0u;
}
