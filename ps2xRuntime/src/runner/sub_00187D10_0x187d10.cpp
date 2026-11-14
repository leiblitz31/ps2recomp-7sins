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

// Function: sub_00187D10
// Address: 0x187d10 - 0x187e40
void sub_00187D10_0x187d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187D10_0x187d10");
#endif

    switch (ctx->pc) {
        case 0x187d3cu: goto label_187d3c;
        case 0x187d68u: goto label_187d68;
        case 0x187d7cu: goto label_187d7c;
        case 0x187da4u: goto label_187da4;
        default: break;
    }

    ctx->pc = 0x187d10u;

    // 0x187d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187d20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x187d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x187d24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x187d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x187d28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187d2c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x187d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187d30: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187d34: 0xc042514  jal         func_109450
    ctx->pc = 0x187D34u;
    SET_GPR_U32(ctx, 31, 0x187D3Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x187D34u, 0x187D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D3Cu;
label_187d3c:
    // 0x187d3c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x187d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187d40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187D40u;
    {
        const bool branch_taken_0x187d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d40) {
            ctx->pc = 0x187D54u;
            goto label_187d54;
        }
    }
    ctx->pc = 0x187D48u;
    // 0x187d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d4c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x187D4Cu;
    {
        const bool branch_taken_0x187d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d4c) {
            ctx->pc = 0x187E20u;
            goto label_187e20;
        }
    }
    ctx->pc = 0x187D54u;
label_187d54:
    // 0x187d54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187d58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187d5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x187d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187d60: 0xc043544  jal         func_10D510
    ctx->pc = 0x187D60u;
    SET_GPR_U32(ctx, 31, 0x187D68u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x187D60u, 0x187D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D68u;
label_187d68:
    // 0x187d68: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187d6c: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x187d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x187d70: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x187d70u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x187d74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x187D74u;
    {
        const bool branch_taken_0x187d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d74) {
            ctx->pc = 0x187DB0u;
            goto label_187db0;
        }
    }
    ctx->pc = 0x187D7Cu;
label_187d7c:
    // 0x187d7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187d80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187d84: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x187d88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187d8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x187d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x187d90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187d94: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187d98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x187d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187d9c: 0xc043544  jal         func_10D510
    ctx->pc = 0x187D9Cu;
    SET_GPR_U32(ctx, 31, 0x187DA4u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x187D9Cu, 0x187DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DA4u;
label_187da4:
    // 0x187da4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x187da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187da8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x187da8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x187dac: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x187dacu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_187db0:
    // 0x187db0: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x187db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187db4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x187db4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x187db8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187dbc: 0x1062ffef  beq         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x187DBCu;
    {
        const bool branch_taken_0x187dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187dbc) {
            ctx->pc = 0x187D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d7c;
        }
    }
    ctx->pc = 0x187DC4u;
    // 0x187dc4: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x187dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187dc8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x187dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x187dcc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187dd0: 0x1062ffea  beq         $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x187DD0u;
    {
        const bool branch_taken_0x187dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187dd0) {
            ctx->pc = 0x187D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d7c;
        }
    }
    ctx->pc = 0x187DD8u;
    // 0x187dd8: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x187dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187ddc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x187ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x187de0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x187de4: 0x1062ffe5  beq         $v1, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x187DE4u;
    {
        const bool branch_taken_0x187de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187de4) {
            ctx->pc = 0x187D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d7c;
        }
    }
    ctx->pc = 0x187DECu;
    // 0x187dec: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x187decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187df0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x187df0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x187df4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x187df8: 0x1062ffe0  beq         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x187DF8u;
    {
        const bool branch_taken_0x187df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187df8) {
            ctx->pc = 0x187D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d7c;
        }
    }
    ctx->pc = 0x187E00u;
    // 0x187e00: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x187e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x187e04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x187e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x187e08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187E08u;
    {
        const bool branch_taken_0x187e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187e08) {
            ctx->pc = 0x187E1Cu;
            goto label_187e1c;
        }
    }
    ctx->pc = 0x187E10u;
    // 0x187e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187E14u;
    {
        const bool branch_taken_0x187e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e14) {
            ctx->pc = 0x187E20u;
            goto label_187e20;
        }
    }
    ctx->pc = 0x187E1Cu;
label_187e1c:
    // 0x187e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187e20:
    // 0x187e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x187e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x187e30: 0x3e00008  jr          $ra
    ctx->pc = 0x187E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187E38u;
    // 0x187e38: 0x0  nop
    ctx->pc = 0x187e38u;
    // NOP
    // 0x187e3c: 0x0  nop
    ctx->pc = 0x187e3cu;
    // NOP
    ctx->pc = 0x187e40u;
}
