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

// Function: sub_001E9DA0
// Address: 0x1e9da0 - 0x1e9e40
void sub_001E9DA0_0x1e9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9DA0_0x1e9da0");
#endif

    switch (ctx->pc) {
        case 0x1e9dbcu: goto label_1e9dbc;
        case 0x1e9ddcu: goto label_1e9ddc;
        case 0x1e9decu: goto label_1e9dec;
        case 0x1e9dfcu: goto label_1e9dfc;
        case 0x1e9e20u: goto label_1e9e20;
        default: break;
    }

    ctx->pc = 0x1e9da0u;

    // 0x1e9da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e9dac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9db0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9db4: 0xc064924  jal         func_192490
    ctx->pc = 0x1E9DB4u;
    SET_GPR_U32(ctx, 31, 0x1E9DBCu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1E9DB4u, 0x1E9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DBCu;
label_1e9dbc:
    // 0x1e9dbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e9dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e9dc0: 0x24634d00  addiu       $v1, $v1, 0x4D00
    ctx->pc = 0x1e9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19712));
    // 0x1e9dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9dc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e9dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e9dcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9dd0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e9dd4: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1E9DD4u;
    SET_GPR_U32(ctx, 31, 0x1E9DDCu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1E9DD4u, 0x1E9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DDCu;
label_1e9ddc:
    // 0x1e9ddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9de0: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e9de4: 0xc07a818  jal         func_1EA060
    ctx->pc = 0x1E9DE4u;
    SET_GPR_U32(ctx, 31, 0x1E9DECu);
    ctx->pc = 0x1EA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA060u, 0x1E9DE4u, 0x1E9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DECu;
label_1e9dec:
    // 0x1e9dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9df0: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1e9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1e9df4: 0xc056254  jal         func_158950
    ctx->pc = 0x1E9DF4u;
    SET_GPR_U32(ctx, 31, 0x1E9DFCu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1E9DF4u, 0x1E9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DFCu;
label_1e9dfc:
    // 0x1e9dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e00: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1e9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1e9e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e08: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1e9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1e9e0c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e9e10: 0x24a58188  addiu       $a1, $a1, -0x7E78
    ctx->pc = 0x1e9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    // 0x1e9e14: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1e9e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1e9e18: 0xc08e514  jal         func_239450
    ctx->pc = 0x1E9E18u;
    SET_GPR_U32(ctx, 31, 0x1E9E20u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1E9E18u, 0x1E9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E20u;
label_1e9e20:
    // 0x1e9e20: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e28: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e9e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e9e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e9e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9E40u;
}
