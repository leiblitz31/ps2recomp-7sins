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

// Function: sub_002E4C90
// Address: 0x2e4c90 - 0x2e4de0
void sub_002E4C90_0x2e4c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C90_0x2e4c90");
#endif

    switch (ctx->pc) {
        case 0x2e4cb4u: goto label_2e4cb4;
        case 0x2e4d14u: goto label_2e4d14;
        case 0x2e4d24u: goto label_2e4d24;
        case 0x2e4d38u: goto label_2e4d38;
        case 0x2e4d58u: goto label_2e4d58;
        case 0x2e4d64u: goto label_2e4d64;
        case 0x2e4d78u: goto label_2e4d78;
        case 0x2e4d84u: goto label_2e4d84;
        case 0x2e4d98u: goto label_2e4d98;
        case 0x2e4dbcu: goto label_2e4dbc;
        default: break;
    }

    ctx->pc = 0x2e4c90u;

    // 0x2e4c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e4c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4c9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e4ca0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e4ca4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4ca8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4cac: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E4CACu;
    SET_GPR_U32(ctx, 31, 0x2E4CB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E4CACu, 0x2E4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CB4u;
label_2e4cb4:
    // 0x2e4cb4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2e4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2e4cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4CB8u;
    {
        const bool branch_taken_0x2e4cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4cb8) {
            ctx->pc = 0x2E4CD0u;
            goto label_2e4cd0;
        }
    }
    ctx->pc = 0x2E4CC0u;
    // 0x2e4cc0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4cc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4cc8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2e4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e4ccc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2e4cd0:
    // 0x2e4cd0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e4cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4cdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e4cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e4ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4CE8u;
    // 0x2e4ce8: 0x0  nop
    ctx->pc = 0x2e4ce8u;
    // NOP
    // 0x2e4cec: 0x0  nop
    ctx->pc = 0x2e4cecu;
    // NOP
    // 0x2e4cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e4cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4d00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e4d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e4d04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4d08: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4d0c: 0xc0b91dc  jal         func_2E4770
    ctx->pc = 0x2E4D0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D14u);
    ctx->pc = 0x2E4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4770u, 0x2E4D0Cu, 0x2E4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D14u;
label_2e4d14:
    // 0x2e4d14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d1c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E4D1Cu;
    {
        const bool branch_taken_0x2e4d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d1c) {
            ctx->pc = 0x2E4DA0u;
            goto label_2e4da0;
        }
    }
    ctx->pc = 0x2E4D24u;
label_2e4d24:
    // 0x2e4d24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4d28: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4d2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d30: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4D30u;
    SET_GPR_U32(ctx, 31, 0x2E4D38u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4D30u, 0x2E4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D38u;
label_2e4d38:
    // 0x2e4d38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4d3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E4D3Cu;
    {
        const bool branch_taken_0x2e4d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d3c) {
            ctx->pc = 0x2E4D9Cu;
            goto label_2e4d9c;
        }
    }
    ctx->pc = 0x2E4D44u;
    // 0x2e4d44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4d48: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d50: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4D50u;
    SET_GPR_U32(ctx, 31, 0x2E4D58u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4D50u, 0x2E4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D58u;
label_2e4d58:
    // 0x2e4d58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e4d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4d5c: 0xc0b93bc  jal         func_2E4EF0
    ctx->pc = 0x2E4D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D64u);
    ctx->pc = 0x2E4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EF0u, 0x2E4D5Cu, 0x2E4D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D64u;
label_2e4d64:
    // 0x2e4d64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4d68: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d70: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4D70u;
    SET_GPR_U32(ctx, 31, 0x2E4D78u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4D70u, 0x2E4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D78u;
label_2e4d78:
    // 0x2e4d78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4d7c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D84u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E4D7Cu, 0x2E4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D84u;
label_2e4d84:
    // 0x2e4d84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4d88: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d90: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4D90u;
    SET_GPR_U32(ctx, 31, 0x2E4D98u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4D90u, 0x2E4D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D98u;
label_2e4d98:
    // 0x2e4d98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2e4d9c:
    // 0x2e4d9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e4da0:
    // 0x2e4da0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e4da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e4da4: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E4DA4u;
    {
        const bool branch_taken_0x2e4da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4da4) {
            ctx->pc = 0x2E4D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4d24;
        }
    }
    ctx->pc = 0x2E4DACu;
    // 0x2e4dac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4db0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4db4: 0xc0b9378  jal         func_2E4DE0
    ctx->pc = 0x2E4DB4u;
    SET_GPR_U32(ctx, 31, 0x2E4DBCu);
    ctx->pc = 0x2E4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4DE0u, 0x2E4DB4u, 0x2E4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DBCu;
label_2e4dbc:
    // 0x2e4dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4dc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4dcc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e4dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e4dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4DD8u;
    // 0x2e4dd8: 0x0  nop
    ctx->pc = 0x2e4dd8u;
    // NOP
    // 0x2e4ddc: 0x0  nop
    ctx->pc = 0x2e4ddcu;
    // NOP
    ctx->pc = 0x2e4de0u;
}
