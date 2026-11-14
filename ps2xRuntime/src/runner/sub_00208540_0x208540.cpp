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

// Function: sub_00208540
// Address: 0x208540 - 0x208590
void sub_00208540_0x208540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208540_0x208540");
#endif

    switch (ctx->pc) {
        case 0x208564u: goto label_208564;
        default: break;
    }

    ctx->pc = 0x208540u;

    // 0x208540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x208544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x208548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20854c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20854cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x208550: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x208550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x208554: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208558: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x208558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20855c: 0xc082164  jal         func_208590
    ctx->pc = 0x20855Cu;
    SET_GPR_U32(ctx, 31, 0x208564u);
    ctx->pc = 0x208590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208590u, 0x20855Cu, 0x208564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208564u;
label_208564:
    // 0x208564: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x208564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208568: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20856c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20856cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x208570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208578: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x208578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20857c: 0x3e00008  jr          $ra
    ctx->pc = 0x20857Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20857Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208584u;
    // 0x208584: 0x0  nop
    ctx->pc = 0x208584u;
    // NOP
    // 0x208588: 0x0  nop
    ctx->pc = 0x208588u;
    // NOP
    // 0x20858c: 0x0  nop
    ctx->pc = 0x20858cu;
    // NOP
    ctx->pc = 0x208590u;
}
