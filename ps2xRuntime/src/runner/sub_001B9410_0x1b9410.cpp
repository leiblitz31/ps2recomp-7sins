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

// Function: sub_001B9410
// Address: 0x1b9410 - 0x1b9470
void sub_001B9410_0x1b9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9410_0x1b9410");
#endif

    switch (ctx->pc) {
        case 0x1b943cu: goto label_1b943c;
        case 0x1b945cu: goto label_1b945c;
        default: break;
    }

    ctx->pc = 0x1b9410u;

    // 0x1b9410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b941c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b941cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9424: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9424u;
    {
        const bool branch_taken_0x1b9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9424) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B942Cu;
    // 0x1b942c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9434: 0xc06e51c  jal         func_1B9470
    ctx->pc = 0x1B9434u;
    SET_GPR_U32(ctx, 31, 0x1B943Cu);
    ctx->pc = 0x1B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9470u, 0x1B9434u, 0x1B943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B943Cu;
label_1b943c:
    // 0x1b943c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b943cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9440: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b9440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b9444: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b9444u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b9448: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9448u;
    {
        const bool branch_taken_0x1b9448 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9448) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9450u;
    // 0x1b9450: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9454: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B9454u;
    SET_GPR_U32(ctx, 31, 0x1B945Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B9454u, 0x1B945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B945Cu;
label_1b945c:
    // 0x1b945c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9464: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9468: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9470u;
}
