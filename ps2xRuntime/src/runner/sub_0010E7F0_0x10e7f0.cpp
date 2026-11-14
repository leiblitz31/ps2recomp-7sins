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

// Function: sub_0010E7F0
// Address: 0x10e7f0 - 0x10e8a0
void sub_0010E7F0_0x10e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E7F0_0x10e7f0");
#endif

    switch (ctx->pc) {
        case 0x10e860u: goto label_10e860;
        case 0x10e880u: goto label_10e880;
        default: break;
    }

    ctx->pc = 0x10e7f0u;

    // 0x10e7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e7f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e7fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10e800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e804: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10E804u;
    {
        const bool branch_taken_0x10e804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e804) {
            ctx->pc = 0x10E880u;
            goto label_10e880;
        }
    }
    ctx->pc = 0x10E80Cu;
    // 0x10e80c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e810: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e814: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10E814u;
    {
        const bool branch_taken_0x10e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e814) {
            ctx->pc = 0x10E860u;
            goto label_10e860;
        }
    }
    ctx->pc = 0x10E81Cu;
    // 0x10e81c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e820: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e824: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e828: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10e82c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e834: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10e834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e838: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e83c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x10e83cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x10e840: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E840u;
    {
        const bool branch_taken_0x10e840 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10e840) {
            ctx->pc = 0x10E850u;
            goto label_10e850;
        }
    }
    ctx->pc = 0x10E848u;
    // 0x10e848: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x10e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x10e84c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x10e84cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_10e850:
    // 0x10e850: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10e854: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x10e854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e858: 0xc044874  jal         func_1121D0
    ctx->pc = 0x10E858u;
    SET_GPR_U32(ctx, 31, 0x10E860u);
    ctx->pc = 0x1121D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1121D0u, 0x10E858u, 0x10E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E860u;
label_10e860:
    // 0x10e860: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10e868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10e868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10e86c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E86Cu;
    {
        const bool branch_taken_0x10e86c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10e86c) {
            ctx->pc = 0x10E880u;
            goto label_10e880;
        }
    }
    ctx->pc = 0x10E874u;
    // 0x10e874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e878: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10E878u;
    SET_GPR_U32(ctx, 31, 0x10E880u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10E878u, 0x10E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E880u;
label_10e880:
    // 0x10e880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e888: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e88c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E894u;
    // 0x10e894: 0x0  nop
    ctx->pc = 0x10e894u;
    // NOP
    // 0x10e898: 0x0  nop
    ctx->pc = 0x10e898u;
    // NOP
    // 0x10e89c: 0x0  nop
    ctx->pc = 0x10e89cu;
    // NOP
    ctx->pc = 0x10e8a0u;
}
