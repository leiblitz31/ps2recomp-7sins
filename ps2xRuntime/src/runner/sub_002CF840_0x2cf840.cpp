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

// Function: sub_002CF840
// Address: 0x2cf840 - 0x2cf8a0
void sub_002CF840_0x2cf840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF840_0x2cf840");
#endif

    switch (ctx->pc) {
        case 0x2cf86cu: goto label_2cf86c;
        case 0x2cf88cu: goto label_2cf88c;
        default: break;
    }

    ctx->pc = 0x2cf840u;

    // 0x2cf840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf84c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cf84cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cf850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf854: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CF854u;
    {
        const bool branch_taken_0x2cf854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf854) {
            ctx->pc = 0x2CF88Cu;
            goto label_2cf88c;
        }
    }
    ctx->pc = 0x2CF85Cu;
    // 0x2cf85c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf864: 0xc0b3e28  jal         func_2CF8A0
    ctx->pc = 0x2CF864u;
    SET_GPR_U32(ctx, 31, 0x2CF86Cu);
    ctx->pc = 0x2CF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8A0u, 0x2CF864u, 0x2CF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF86Cu;
label_2cf86c:
    // 0x2cf86c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cf86cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf870: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cf870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cf874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cf878: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF878u;
    {
        const bool branch_taken_0x2cf878 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf878) {
            ctx->pc = 0x2CF88Cu;
            goto label_2cf88c;
        }
    }
    ctx->pc = 0x2CF880u;
    // 0x2cf880: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf884: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CF884u;
    SET_GPR_U32(ctx, 31, 0x2CF88Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CF884u, 0x2CF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF88Cu;
label_2cf88c:
    // 0x2cf88c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf894: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf898: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF8A0u;
}
