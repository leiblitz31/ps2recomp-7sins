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

// Function: sub_00280800
// Address: 0x280800 - 0x280870
void sub_00280800_0x280800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280800_0x280800");
#endif

    switch (ctx->pc) {
        case 0x280828u: goto label_280828;
        case 0x280838u: goto label_280838;
        case 0x280858u: goto label_280858;
        default: break;
    }

    ctx->pc = 0x280800u;

    // 0x280800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28080c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28080cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x280810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280814: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x280814u;
    {
        const bool branch_taken_0x280814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280814) {
            ctx->pc = 0x280858u;
            goto label_280858;
        }
    }
    ctx->pc = 0x28081Cu;
    // 0x28081c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28081cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280820: 0xc0a0238  jal         func_2808E0
    ctx->pc = 0x280820u;
    SET_GPR_U32(ctx, 31, 0x280828u);
    ctx->pc = 0x2808E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2808E0u, 0x280820u, 0x280828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280828u;
label_280828:
    // 0x280828: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28082c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280830: 0xc0a021c  jal         func_280870
    ctx->pc = 0x280830u;
    SET_GPR_U32(ctx, 31, 0x280838u);
    ctx->pc = 0x280870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280870u, 0x280830u, 0x280838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280838u;
label_280838:
    // 0x280838: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x280838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28083c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x280840: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x280840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x280844: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280844u;
    {
        const bool branch_taken_0x280844 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x280844) {
            ctx->pc = 0x280858u;
            goto label_280858;
        }
    }
    ctx->pc = 0x28084Cu;
    // 0x28084c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280850: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x280850u;
    SET_GPR_U32(ctx, 31, 0x280858u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x280850u, 0x280858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280858u;
label_280858:
    // 0x280858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28085c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28085cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280860: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280864: 0x3e00008  jr          $ra
    ctx->pc = 0x280864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28086Cu;
    // 0x28086c: 0x0  nop
    ctx->pc = 0x28086cu;
    // NOP
    ctx->pc = 0x280870u;
}
