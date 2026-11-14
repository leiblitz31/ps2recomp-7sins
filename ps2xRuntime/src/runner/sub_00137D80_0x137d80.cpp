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

// Function: sub_00137D80
// Address: 0x137d80 - 0x137e20
void sub_00137D80_0x137d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137D80_0x137d80");
#endif

    switch (ctx->pc) {
        case 0x137d98u: goto label_137d98;
        case 0x137db8u: goto label_137db8;
        case 0x137dd8u: goto label_137dd8;
        case 0x137de8u: goto label_137de8;
        case 0x137df8u: goto label_137df8;
        default: break;
    }

    ctx->pc = 0x137d80u;

    // 0x137d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x137d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x137d8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137d90: 0xc0ad664  jal         func_2B5990
    ctx->pc = 0x137D90u;
    SET_GPR_U32(ctx, 31, 0x137D98u);
    ctx->pc = 0x2B5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5990u, 0x137D90u, 0x137D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D98u;
label_137d98:
    // 0x137d98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x137d9c: 0x24633760  addiu       $v1, $v1, 0x3760
    ctx->pc = 0x137d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14176));
    // 0x137da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137da4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x137da8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dac: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x137dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x137db0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x137DB0u;
    SET_GPR_U32(ctx, 31, 0x137DB8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x137DB0u, 0x137DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DB8u;
label_137db8:
    // 0x137db8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dbc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x137dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x137dc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dc4: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x137dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x137dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dcc: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x137dd0: 0xc04e044  jal         func_138110
    ctx->pc = 0x137DD0u;
    SET_GPR_U32(ctx, 31, 0x137DD8u);
    ctx->pc = 0x138110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138110u, 0x137DD0u, 0x137DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DD8u;
label_137dd8:
    // 0x137dd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ddc: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x137ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x137de0: 0xc04e044  jal         func_138110
    ctx->pc = 0x137DE0u;
    SET_GPR_U32(ctx, 31, 0x137DE8u);
    ctx->pc = 0x138110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138110u, 0x137DE0u, 0x137DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DE8u;
label_137de8:
    // 0x137de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dec: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x137decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x137df0: 0xc04e044  jal         func_138110
    ctx->pc = 0x137DF0u;
    SET_GPR_U32(ctx, 31, 0x137DF8u);
    ctx->pc = 0x138110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138110u, 0x137DF0u, 0x137DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DF8u;
label_137df8:
    // 0x137df8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dfc: 0xaf82ba74  sw          $v0, -0x458C($gp)
    ctx->pc = 0x137dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949492), GPR_U32(ctx, 2));
    // 0x137e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e04: 0xa04000a9  sb          $zero, 0xA9($v0)
    ctx->pc = 0x137e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x137e08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137e10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x137e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137e14: 0x3e00008  jr          $ra
    ctx->pc = 0x137E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E1Cu;
    // 0x137e1c: 0x0  nop
    ctx->pc = 0x137e1cu;
    // NOP
    ctx->pc = 0x137e20u;
}
