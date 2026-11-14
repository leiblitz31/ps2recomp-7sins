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

// Function: sub_002AC610
// Address: 0x2ac610 - 0x2ac690
void sub_002AC610_0x2ac610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC610_0x2ac610");
#endif

    switch (ctx->pc) {
        case 0x2ac644u: goto label_2ac644;
        case 0x2ac654u: goto label_2ac654;
        case 0x2ac674u: goto label_2ac674;
        default: break;
    }

    ctx->pc = 0x2ac610u;

    // 0x2ac610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac61c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ac61cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac624: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AC624u;
    {
        const bool branch_taken_0x2ac624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac624) {
            ctx->pc = 0x2AC674u;
            goto label_2ac674;
        }
    }
    ctx->pc = 0x2AC62Cu;
    // 0x2ac62c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ac62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac634: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ac634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac638: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ac638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac63c: 0xc0ab1d0  jal         func_2AC740
    ctx->pc = 0x2AC63Cu;
    SET_GPR_U32(ctx, 31, 0x2AC644u);
    ctx->pc = 0x2AC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC740u, 0x2AC63Cu, 0x2AC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC644u;
label_2ac644:
    // 0x2ac644: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac64c: 0xc0ab1a4  jal         func_2AC690
    ctx->pc = 0x2AC64Cu;
    SET_GPR_U32(ctx, 31, 0x2AC654u);
    ctx->pc = 0x2AC690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC690u, 0x2AC64Cu, 0x2AC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC654u;
label_2ac654:
    // 0x2ac654: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ac654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac658: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ac658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac65c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac65cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac660: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC660u;
    {
        const bool branch_taken_0x2ac660 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ac660) {
            ctx->pc = 0x2AC674u;
            goto label_2ac674;
        }
    }
    ctx->pc = 0x2AC668u;
    // 0x2ac668: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac66c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AC66Cu;
    SET_GPR_U32(ctx, 31, 0x2AC674u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AC66Cu, 0x2AC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC674u;
label_2ac674:
    // 0x2ac674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac67c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac680: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC688u;
    // 0x2ac688: 0x0  nop
    ctx->pc = 0x2ac688u;
    // NOP
    // 0x2ac68c: 0x0  nop
    ctx->pc = 0x2ac68cu;
    // NOP
    ctx->pc = 0x2ac690u;
}
