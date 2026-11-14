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

// Function: sub_001E2DD0
// Address: 0x1e2dd0 - 0x1e2e80
void sub_001E2DD0_0x1e2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2DD0_0x1e2dd0");
#endif

    switch (ctx->pc) {
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e24u: goto label_1e2e24;
        case 0x1e2e30u: goto label_1e2e30;
        case 0x1e2e40u: goto label_1e2e40;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2e6cu: goto label_1e2e6c;
        default: break;
    }

    ctx->pc = 0x1e2dd0u;

    // 0x1e2dd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e2dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2ddc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e2de0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e2de4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e2de8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e2dec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e2decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2df0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2df4: 0xc078af0  jal         func_1E2BC0
    ctx->pc = 0x1E2DF4u;
    SET_GPR_U32(ctx, 31, 0x1E2DFCu);
    ctx->pc = 0x1E2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2BC0u, 0x1E2DF4u, 0x1E2DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DFCu;
label_1e2dfc:
    // 0x1e2dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E2E00u;
    {
        const bool branch_taken_0x1e2e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e00) {
            ctx->pc = 0x1E2E54u;
            goto label_1e2e54;
        }
    }
    ctx->pc = 0x1E2E08u;
label_1e2e08:
    // 0x1e2e08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2e0c: 0xc078ba0  jal         func_1E2E80
    ctx->pc = 0x1E2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E14u);
    ctx->pc = 0x1E2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E80u, 0x1E2E0Cu, 0x1E2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E14u;
label_1e2e14:
    // 0x1e2e14: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e1c: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E24u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E2E1Cu, 0x1E2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E24u;
label_1e2e24:
    // 0x1e2e24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2e28: 0xc078ba0  jal         func_1E2E80
    ctx->pc = 0x1E2E28u;
    SET_GPR_U32(ctx, 31, 0x1E2E30u);
    ctx->pc = 0x1E2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E80u, 0x1E2E28u, 0x1E2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E30u;
label_1e2e30:
    // 0x1e2e30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2e34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e38: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E2E38u;
    SET_GPR_U32(ctx, 31, 0x1E2E40u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E2E38u, 0x1E2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E40u;
label_1e2e40:
    // 0x1e2e40: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2e44: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e2e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2e48: 0xc078ad0  jal         func_1E2B40
    ctx->pc = 0x1E2E48u;
    SET_GPR_U32(ctx, 31, 0x1E2E50u);
    ctx->pc = 0x1E2B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B40u, 0x1E2E48u, 0x1E2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E50u;
label_1e2e50:
    // 0x1e2e50: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e2e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e2e54:
    // 0x1e2e54: 0x1e00ffec  bgtz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E2E54u;
    {
        const bool branch_taken_0x1e2e54 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e2e54) {
            ctx->pc = 0x1E2E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2e08;
        }
    }
    ctx->pc = 0x1E2E5Cu;
    // 0x1e2e5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2e60: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2e64: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2E64u;
    SET_GPR_U32(ctx, 31, 0x1E2E6Cu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2E64u, 0x1E2E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E6Cu;
label_1e2e6c:
    // 0x1e2e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2e74: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e2e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E80u;
}
