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

// Function: sub_00222130
// Address: 0x222130 - 0x2221a0
void sub_00222130_0x222130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222130_0x222130");
#endif

    switch (ctx->pc) {
        case 0x222160u: goto label_222160;
        case 0x222180u: goto label_222180;
        default: break;
    }

    ctx->pc = 0x222130u;

    // 0x222130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22213c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22213cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x222140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222144: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x222144u;
    {
        const bool branch_taken_0x222144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222144) {
            ctx->pc = 0x222180u;
            goto label_222180;
        }
    }
    ctx->pc = 0x22214Cu;
    // 0x22214c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222150: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x222154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222158: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x222158u;
    SET_GPR_U32(ctx, 31, 0x222160u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x222158u, 0x222160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222160u;
label_222160:
    // 0x222160: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x222160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222164: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x222164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22216c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22216Cu;
    {
        const bool branch_taken_0x22216c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22216c) {
            ctx->pc = 0x222180u;
            goto label_222180;
        }
    }
    ctx->pc = 0x222174u;
    // 0x222174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222178: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x222178u;
    SET_GPR_U32(ctx, 31, 0x222180u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x222178u, 0x222180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222180u;
label_222180:
    // 0x222180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22218c: 0x3e00008  jr          $ra
    ctx->pc = 0x22218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22218Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222194u;
    // 0x222194: 0x0  nop
    ctx->pc = 0x222194u;
    // NOP
    // 0x222198: 0x0  nop
    ctx->pc = 0x222198u;
    // NOP
    // 0x22219c: 0x0  nop
    ctx->pc = 0x22219cu;
    // NOP
    ctx->pc = 0x2221a0u;
}
