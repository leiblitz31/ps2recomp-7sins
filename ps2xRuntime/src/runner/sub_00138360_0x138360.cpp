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

// Function: sub_00138360
// Address: 0x138360 - 0x1383b0
void sub_00138360_0x138360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138360_0x138360");
#endif

    switch (ctx->pc) {
        case 0x138384u: goto label_138384;
        default: break;
    }

    ctx->pc = 0x138360u;

    // 0x138360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x138364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13836c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x138370: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x138370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x138374: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138378: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x138378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13837c: 0xc04e0ec  jal         func_1383B0
    ctx->pc = 0x13837Cu;
    SET_GPR_U32(ctx, 31, 0x138384u);
    ctx->pc = 0x1383B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1383B0u, 0x13837Cu, 0x138384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138384u;
label_138384:
    // 0x138384: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x138384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138388: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13838c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13838cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x138390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138398: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13839c: 0x3e00008  jr          $ra
    ctx->pc = 0x13839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1383A4u;
    // 0x1383a4: 0x0  nop
    ctx->pc = 0x1383a4u;
    // NOP
    // 0x1383a8: 0x0  nop
    ctx->pc = 0x1383a8u;
    // NOP
    // 0x1383ac: 0x0  nop
    ctx->pc = 0x1383acu;
    // NOP
    ctx->pc = 0x1383b0u;
}
