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

// Function: sub_00466690
// Address: 0x466690 - 0x4666e0
void sub_00466690_0x466690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466690_0x466690");
#endif

    switch (ctx->pc) {
        case 0x4666c8u: goto label_4666c8;
        default: break;
    }

    ctx->pc = 0x466690u;

    // 0x466690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x466694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46669c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4666a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4666a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4666a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4666a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4666a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4666a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4666ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4666acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4666b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4666b4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4666b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4666b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4666b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4666bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4666bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666c0: 0xc1199b8  jal         func_4666E0
    ctx->pc = 0x4666C0u;
    SET_GPR_U32(ctx, 31, 0x4666C8u);
    ctx->pc = 0x4666E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4666E0u, 0x4666C0u, 0x4666C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4666C8u;
label_4666c8:
    // 0x4666c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4666c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4666cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4666ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4666d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4666d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4666d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4666D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4666D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4666DCu;
    // 0x4666dc: 0x0  nop
    ctx->pc = 0x4666dcu;
    // NOP
    ctx->pc = 0x4666e0u;
}
