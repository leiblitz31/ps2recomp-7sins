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

// Function: sub_0028A810
// Address: 0x28a810 - 0x28a870
void sub_0028A810_0x28a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A810_0x28a810");
#endif

    switch (ctx->pc) {
        case 0x28a83cu: goto label_28a83c;
        case 0x28a85cu: goto label_28a85c;
        default: break;
    }

    ctx->pc = 0x28a810u;

    // 0x28a810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28a814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28a818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28a81c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28a81cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x28a820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a824: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A824u;
    {
        const bool branch_taken_0x28a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a824) {
            ctx->pc = 0x28A85Cu;
            goto label_28a85c;
        }
    }
    ctx->pc = 0x28A82Cu;
    // 0x28a82c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a834: 0xc0a2a1c  jal         func_28A870
    ctx->pc = 0x28A834u;
    SET_GPR_U32(ctx, 31, 0x28A83Cu);
    ctx->pc = 0x28A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A870u, 0x28A834u, 0x28A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A83Cu;
label_28a83c:
    // 0x28a83c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a840: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28a844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28a844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28a848: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A848u;
    {
        const bool branch_taken_0x28a848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28a848) {
            ctx->pc = 0x28A85Cu;
            goto label_28a85c;
        }
    }
    ctx->pc = 0x28A850u;
    // 0x28a850: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a854: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x28A854u;
    SET_GPR_U32(ctx, 31, 0x28A85Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x28A854u, 0x28A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A85Cu;
label_28a85c:
    // 0x28a85c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a864: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28a864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28a868: 0x3e00008  jr          $ra
    ctx->pc = 0x28A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A870u;
}
