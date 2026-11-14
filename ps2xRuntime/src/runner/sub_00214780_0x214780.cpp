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

// Function: sub_00214780
// Address: 0x214780 - 0x2147d0
void sub_00214780_0x214780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214780_0x214780");
#endif

    switch (ctx->pc) {
        case 0x2147a4u: goto label_2147a4;
        default: break;
    }

    ctx->pc = 0x214780u;

    // 0x214780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21478c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21478cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x214790: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x214790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x214794: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214798: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21479c: 0xc0851f4  jal         func_2147D0
    ctx->pc = 0x21479Cu;
    SET_GPR_U32(ctx, 31, 0x2147A4u);
    ctx->pc = 0x2147D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147D0u, 0x21479Cu, 0x2147A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147A4u;
label_2147a4:
    // 0x2147a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2147a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2147a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2147a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2147ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2147acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2147b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2147b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2147b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2147b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2147b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2147b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2147bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2147BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2147BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2147C4u;
    // 0x2147c4: 0x0  nop
    ctx->pc = 0x2147c4u;
    // NOP
    // 0x2147c8: 0x0  nop
    ctx->pc = 0x2147c8u;
    // NOP
    // 0x2147cc: 0x0  nop
    ctx->pc = 0x2147ccu;
    // NOP
    ctx->pc = 0x2147d0u;
}
