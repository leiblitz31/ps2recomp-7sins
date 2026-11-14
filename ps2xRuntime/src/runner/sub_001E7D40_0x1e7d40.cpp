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

// Function: sub_001E7D40
// Address: 0x1e7d40 - 0x1e7df0
void sub_001E7D40_0x1e7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D40_0x1e7d40");
#endif

    switch (ctx->pc) {
        case 0x1e7d60u: goto label_1e7d60;
        case 0x1e7d70u: goto label_1e7d70;
        case 0x1e7d7cu: goto label_1e7d7c;
        case 0x1e7d8cu: goto label_1e7d8c;
        case 0x1e7d9cu: goto label_1e7d9c;
        case 0x1e7dacu: goto label_1e7dac;
        case 0x1e7dbcu: goto label_1e7dbc;
        case 0x1e7dd4u: goto label_1e7dd4;
        default: break;
    }

    ctx->pc = 0x1e7d40u;

    // 0x1e7d40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e7d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d48: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e7d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e7d4c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1e7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1e7d50: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1e7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1e7d54: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7d58: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1E7D58u;
    SET_GPR_U32(ctx, 31, 0x1E7D60u);
    ctx->pc = 0x1E7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7DF0u, 0x1E7D58u, 0x1E7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D60u;
label_1e7d60:
    // 0x1e7d60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7d64: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1e7d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1e7d68: 0xc078e08  jal         func_1E3820
    ctx->pc = 0x1E7D68u;
    SET_GPR_U32(ctx, 31, 0x1E7D70u);
    ctx->pc = 0x1E3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3820u, 0x1E7D68u, 0x1E7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D70u;
label_1e7d70:
    // 0x1e7d70: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7d74: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E7D74u;
    SET_GPR_U32(ctx, 31, 0x1E7D7Cu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E7D74u, 0x1E7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D7Cu;
label_1e7d7c:
    // 0x1e7d7c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d84: 0xc078db4  jal         func_1E36D0
    ctx->pc = 0x1E7D84u;
    SET_GPR_U32(ctx, 31, 0x1E7D8Cu);
    ctx->pc = 0x1E36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E36D0u, 0x1E7D84u, 0x1E7D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D8Cu;
label_1e7d8c:
    // 0x1e7d8c: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e7d90: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e7d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7d94: 0xc077f64  jal         func_1DFD90
    ctx->pc = 0x1E7D94u;
    SET_GPR_U32(ctx, 31, 0x1E7D9Cu);
    ctx->pc = 0x1DFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD90u, 0x1E7D94u, 0x1E7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D9Cu;
label_1e7d9c:
    // 0x1e7d9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e7d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e7da0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7da4: 0xc077f90  jal         func_1DFE40
    ctx->pc = 0x1E7DA4u;
    SET_GPR_U32(ctx, 31, 0x1E7DACu);
    ctx->pc = 0x1DFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE40u, 0x1E7DA4u, 0x1E7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DACu;
label_1e7dac:
    // 0x1e7dac: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e7db0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e7db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7db4: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E7DB4u;
    SET_GPR_U32(ctx, 31, 0x1E7DBCu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E7DB4u, 0x1E7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DBCu;
label_1e7dbc:
    // 0x1e7dbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7dc0: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x1e7dc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7dc4: 0xdfa60020  ld          $a2, 0x20($sp)
    ctx->pc = 0x1e7dc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7dc8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e7dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dcc: 0xc078d24  jal         func_1E3490
    ctx->pc = 0x1E7DCCu;
    SET_GPR_U32(ctx, 31, 0x1E7DD4u);
    ctx->pc = 0x1E3490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3490u, 0x1E7DCCu, 0x1E7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DD4u;
label_1e7dd4:
    // 0x1e7dd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ddc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e7ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e7de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7DE8u;
    // 0x1e7de8: 0x0  nop
    ctx->pc = 0x1e7de8u;
    // NOP
    // 0x1e7dec: 0x0  nop
    ctx->pc = 0x1e7decu;
    // NOP
    ctx->pc = 0x1e7df0u;
}
