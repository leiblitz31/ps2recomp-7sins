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

// Function: sub_00115440
// Address: 0x115440 - 0x1154b0
void sub_00115440_0x115440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115440_0x115440");
#endif

    switch (ctx->pc) {
        case 0x115468u: goto label_115468;
        case 0x115478u: goto label_115478;
        case 0x115498u: goto label_115498;
        default: break;
    }

    ctx->pc = 0x115440u;

    // 0x115440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11544c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11544cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x115450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115454: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x115454u;
    {
        const bool branch_taken_0x115454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115454) {
            ctx->pc = 0x115498u;
            goto label_115498;
        }
    }
    ctx->pc = 0x11545Cu;
    // 0x11545c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115460: 0xc045548  jal         func_115520
    ctx->pc = 0x115460u;
    SET_GPR_U32(ctx, 31, 0x115468u);
    ctx->pc = 0x115520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115520u, 0x115460u, 0x115468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115468u;
label_115468:
    // 0x115468: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11546c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115470: 0xc04552c  jal         func_1154B0
    ctx->pc = 0x115470u;
    SET_GPR_U32(ctx, 31, 0x115478u);
    ctx->pc = 0x1154B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154B0u, 0x115470u, 0x115478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115478u;
label_115478:
    // 0x115478: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x115478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11547c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x115480: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x115480u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x115484: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115484u;
    {
        const bool branch_taken_0x115484 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x115484) {
            ctx->pc = 0x115498u;
            goto label_115498;
        }
    }
    ctx->pc = 0x11548Cu;
    // 0x11548c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115490: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x115490u;
    SET_GPR_U32(ctx, 31, 0x115498u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x115490u, 0x115498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115498u;
label_115498:
    // 0x115498: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11549c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1154a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1154a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1154a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1154A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1154A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1154ACu;
    // 0x1154ac: 0x0  nop
    ctx->pc = 0x1154acu;
    // NOP
    ctx->pc = 0x1154b0u;
}
