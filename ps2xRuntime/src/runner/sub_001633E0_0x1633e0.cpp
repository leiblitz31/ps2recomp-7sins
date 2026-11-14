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

// Function: sub_001633E0
// Address: 0x1633e0 - 0x163430
void sub_001633E0_0x1633e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001633E0_0x1633e0");
#endif

    switch (ctx->pc) {
        case 0x163418u: goto label_163418;
        default: break;
    }

    ctx->pc = 0x1633e0u;

    // 0x1633e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1633e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1633e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1633e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1633e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1633ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1633ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1633f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1633f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1633f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1633f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1633fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1633fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x163400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163404: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x163404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x163408: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16340c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163410: 0xc058d0c  jal         func_163430
    ctx->pc = 0x163410u;
    SET_GPR_U32(ctx, 31, 0x163418u);
    ctx->pc = 0x163430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163430u, 0x163410u, 0x163418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163418u;
label_163418:
    // 0x163418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16341c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163420: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163424: 0x3e00008  jr          $ra
    ctx->pc = 0x163424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16342Cu;
    // 0x16342c: 0x0  nop
    ctx->pc = 0x16342cu;
    // NOP
    ctx->pc = 0x163430u;
}
