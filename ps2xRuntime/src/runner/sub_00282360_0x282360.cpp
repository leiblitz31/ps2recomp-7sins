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

// Function: sub_00282360
// Address: 0x282360 - 0x2823b0
void sub_00282360_0x282360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282360_0x282360");
#endif

    switch (ctx->pc) {
        case 0x282394u: goto label_282394;
        default: break;
    }

    ctx->pc = 0x282360u;

    // 0x282360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x282360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x282364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282368: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x282368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28236c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28236cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x282370: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x282370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x282374: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x282374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x282378: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28237c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28237cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282380: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282384: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x282384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282388: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28238c: 0xc0a08ec  jal         func_2823B0
    ctx->pc = 0x28238Cu;
    SET_GPR_U32(ctx, 31, 0x282394u);
    ctx->pc = 0x2823B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2823B0u, 0x28238Cu, 0x282394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282394u;
label_282394:
    // 0x282394: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x282394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28239c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2823a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2823A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2823A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2823A8u;
    // 0x2823a8: 0x0  nop
    ctx->pc = 0x2823a8u;
    // NOP
    // 0x2823ac: 0x0  nop
    ctx->pc = 0x2823acu;
    // NOP
    ctx->pc = 0x2823b0u;
}
