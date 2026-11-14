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

// Function: sub_001536E0
// Address: 0x1536e0 - 0x153730
void sub_001536E0_0x1536e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001536E0_0x1536e0");
#endif

    switch (ctx->pc) {
        case 0x1536f8u: goto label_1536f8;
        case 0x153718u: goto label_153718;
        default: break;
    }

    ctx->pc = 0x1536e0u;

    // 0x1536e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1536e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1536e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1536e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1536e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1536e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1536ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1536ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1536f0: 0xc08d668  jal         func_2359A0
    ctx->pc = 0x1536F0u;
    SET_GPR_U32(ctx, 31, 0x1536F8u);
    ctx->pc = 0x2359A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2359A0u, 0x1536F0u, 0x1536F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536F8u;
label_1536f8:
    // 0x1536f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1536fc: 0x246339c0  addiu       $v1, $v1, 0x39C0
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14784));
    // 0x153700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153704: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x153704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x153708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15370c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x15370cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x153710: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x153710u;
    SET_GPR_U32(ctx, 31, 0x153718u);
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x153710u, 0x153718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153718u;
label_153718:
    // 0x153718: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15371c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15371cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153720: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153724: 0x3e00008  jr          $ra
    ctx->pc = 0x153724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15372Cu;
    // 0x15372c: 0x0  nop
    ctx->pc = 0x15372cu;
    // NOP
    ctx->pc = 0x153730u;
}
