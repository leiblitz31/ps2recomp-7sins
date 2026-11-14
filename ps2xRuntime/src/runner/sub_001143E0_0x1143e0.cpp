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

// Function: sub_001143E0
// Address: 0x1143e0 - 0x114430
void sub_001143E0_0x1143e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001143E0_0x1143e0");
#endif

    switch (ctx->pc) {
        case 0x114404u: goto label_114404;
        case 0x114414u: goto label_114414;
        default: break;
    }

    ctx->pc = 0x1143e0u;

    // 0x1143e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1143e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1143e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1143e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1143e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1143e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1143ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1143ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1143f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1143f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1143f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1143f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1143f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1143f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1143fc: 0xc04510c  jal         func_114430
    ctx->pc = 0x1143FCu;
    SET_GPR_U32(ctx, 31, 0x114404u);
    ctx->pc = 0x114430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114430u, 0x1143FCu, 0x114404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114404u;
label_114404:
    // 0x114404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11440c: 0xc044e14  jal         func_113850
    ctx->pc = 0x11440Cu;
    SET_GPR_U32(ctx, 31, 0x114414u);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x11440Cu, 0x114414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114414u;
label_114414:
    // 0x114414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114418: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x114418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11441c: 0x3e00008  jr          $ra
    ctx->pc = 0x11441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11441Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114424u;
    // 0x114424: 0x0  nop
    ctx->pc = 0x114424u;
    // NOP
    // 0x114428: 0x0  nop
    ctx->pc = 0x114428u;
    // NOP
    // 0x11442c: 0x0  nop
    ctx->pc = 0x11442cu;
    // NOP
    ctx->pc = 0x114430u;
}
