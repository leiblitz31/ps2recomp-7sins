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

// Function: sub_00120360
// Address: 0x120360 - 0x1203b0
void sub_00120360_0x120360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120360_0x120360");
#endif

    switch (ctx->pc) {
        case 0x120384u: goto label_120384;
        default: break;
    }

    ctx->pc = 0x120360u;

    // 0x120360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12036c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12036cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x120370: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x120370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x120374: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120378: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x120378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12037c: 0xc0480ec  jal         func_1203B0
    ctx->pc = 0x12037Cu;
    SET_GPR_U32(ctx, 31, 0x120384u);
    ctx->pc = 0x1203B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203B0u, 0x12037Cu, 0x120384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120384u;
label_120384:
    // 0x120384: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x120384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120388: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12038c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12038cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x120390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120398: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x120398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12039c: 0x3e00008  jr          $ra
    ctx->pc = 0x12039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1203A4u;
    // 0x1203a4: 0x0  nop
    ctx->pc = 0x1203a4u;
    // NOP
    // 0x1203a8: 0x0  nop
    ctx->pc = 0x1203a8u;
    // NOP
    // 0x1203ac: 0x0  nop
    ctx->pc = 0x1203acu;
    // NOP
    ctx->pc = 0x1203b0u;
}
