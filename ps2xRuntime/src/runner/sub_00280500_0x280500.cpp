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

// Function: sub_00280500
// Address: 0x280500 - 0x280560
void sub_00280500_0x280500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280500_0x280500");
#endif

    switch (ctx->pc) {
        case 0x28052cu: goto label_28052c;
        case 0x28054cu: goto label_28054c;
        default: break;
    }

    ctx->pc = 0x280500u;

    // 0x280500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28050c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28050cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x280510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280514: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280514u;
    {
        const bool branch_taken_0x280514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280514) {
            ctx->pc = 0x28054Cu;
            goto label_28054c;
        }
    }
    ctx->pc = 0x28051Cu;
    // 0x28051c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280520: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x280520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280524: 0xc0a0158  jal         func_280560
    ctx->pc = 0x280524u;
    SET_GPR_U32(ctx, 31, 0x28052Cu);
    ctx->pc = 0x280560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280560u, 0x280524u, 0x28052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28052Cu;
label_28052c:
    // 0x28052c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x28052cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280530: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x280530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x280534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x280534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x280538: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280538u;
    {
        const bool branch_taken_0x280538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x280538) {
            ctx->pc = 0x28054Cu;
            goto label_28054c;
        }
    }
    ctx->pc = 0x280540u;
    // 0x280540: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280544: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x280544u;
    SET_GPR_U32(ctx, 31, 0x28054Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x280544u, 0x28054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28054Cu;
label_28054c:
    // 0x28054c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280554: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280558: 0x3e00008  jr          $ra
    ctx->pc = 0x280558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280560u;
}
