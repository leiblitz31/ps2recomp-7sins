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

// Function: sub_0010E710
// Address: 0x10e710 - 0x10e770
void sub_0010E710_0x10e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E710_0x10e710");
#endif

    switch (ctx->pc) {
        case 0x10e73cu: goto label_10e73c;
        case 0x10e75cu: goto label_10e75c;
        default: break;
    }

    ctx->pc = 0x10e710u;

    // 0x10e710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e71c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10e71cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10e720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e724: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10E724u;
    {
        const bool branch_taken_0x10e724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e724) {
            ctx->pc = 0x10E75Cu;
            goto label_10e75c;
        }
    }
    ctx->pc = 0x10E72Cu;
    // 0x10e72c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e734: 0xc0439dc  jal         func_10E770
    ctx->pc = 0x10E734u;
    SET_GPR_U32(ctx, 31, 0x10E73Cu);
    ctx->pc = 0x10E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E770u, 0x10E734u, 0x10E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E73Cu;
label_10e73c:
    // 0x10e73c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10e73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e740: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10e744: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10e744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10e748: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E748u;
    {
        const bool branch_taken_0x10e748 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10e748) {
            ctx->pc = 0x10E75Cu;
            goto label_10e75c;
        }
    }
    ctx->pc = 0x10E750u;
    // 0x10e750: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e754: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10E754u;
    SET_GPR_U32(ctx, 31, 0x10E75Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10E754u, 0x10E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E75Cu;
label_10e75c:
    // 0x10e75c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e764: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e768: 0x3e00008  jr          $ra
    ctx->pc = 0x10E768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E770u;
}
