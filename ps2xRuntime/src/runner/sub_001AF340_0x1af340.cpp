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

// Function: sub_001AF340
// Address: 0x1af340 - 0x1af390
void sub_001AF340_0x1af340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF340_0x1af340");
#endif

    switch (ctx->pc) {
        case 0x1af364u: goto label_1af364;
        default: break;
    }

    ctx->pc = 0x1af340u;

    // 0x1af340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af34c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1af34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1af350: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1af350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1af354: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af358: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af35c: 0xc06bce4  jal         func_1AF390
    ctx->pc = 0x1AF35Cu;
    SET_GPR_U32(ctx, 31, 0x1AF364u);
    ctx->pc = 0x1AF390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF390u, 0x1AF35Cu, 0x1AF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF364u;
label_1af364:
    // 0x1af364: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1af364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af368: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af36c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1af36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1af370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af378: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1af378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1af37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF384u;
    // 0x1af384: 0x0  nop
    ctx->pc = 0x1af384u;
    // NOP
    // 0x1af388: 0x0  nop
    ctx->pc = 0x1af388u;
    // NOP
    // 0x1af38c: 0x0  nop
    ctx->pc = 0x1af38cu;
    // NOP
    ctx->pc = 0x1af390u;
}
