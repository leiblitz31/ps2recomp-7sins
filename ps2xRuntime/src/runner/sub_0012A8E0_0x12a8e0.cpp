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

// Function: sub_0012A8E0
// Address: 0x12a8e0 - 0x12a940
void sub_0012A8E0_0x12a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A8E0_0x12a8e0");
#endif

    switch (ctx->pc) {
        case 0x12a900u: goto label_12a900;
        default: break;
    }

    ctx->pc = 0x12a8e0u;

    // 0x12a8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a8e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12a8ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12a8f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a8f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a8f8: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x12A8F8u;
    SET_GPR_U32(ctx, 31, 0x12A900u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x12A8F8u, 0x12A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A900u;
label_12a900:
    // 0x12a900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a904: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x12a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12a908: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a90c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x12a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x12a910: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a914: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x12a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12a918: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a91c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x12a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x12a920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12a928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a92c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A934u;
    // 0x12a934: 0x0  nop
    ctx->pc = 0x12a934u;
    // NOP
    // 0x12a938: 0x0  nop
    ctx->pc = 0x12a938u;
    // NOP
    // 0x12a93c: 0x0  nop
    ctx->pc = 0x12a93cu;
    // NOP
    ctx->pc = 0x12a940u;
}
