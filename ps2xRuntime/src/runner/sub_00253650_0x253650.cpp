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

// Function: sub_00253650
// Address: 0x253650 - 0x2536a0
void sub_00253650_0x253650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253650_0x253650");
#endif

    switch (ctx->pc) {
        case 0x25368cu: goto label_25368c;
        default: break;
    }

    ctx->pc = 0x253650u;

    // 0x253650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25365c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25365cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x253660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253664: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253664u;
    {
        const bool branch_taken_0x253664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253664) {
            ctx->pc = 0x25368Cu;
            goto label_25368c;
        }
    }
    ctx->pc = 0x25366Cu;
    // 0x25366c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25366cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253670: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x253670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x253674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x253674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x253678: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253678u;
    {
        const bool branch_taken_0x253678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x253678) {
            ctx->pc = 0x25368Cu;
            goto label_25368c;
        }
    }
    ctx->pc = 0x253680u;
    // 0x253680: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x253680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253684: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x253684u;
    SET_GPR_U32(ctx, 31, 0x25368Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x253684u, 0x25368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25368Cu;
label_25368c:
    // 0x25368c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253694: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253698: 0x3e00008  jr          $ra
    ctx->pc = 0x253698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2536A0u;
}
