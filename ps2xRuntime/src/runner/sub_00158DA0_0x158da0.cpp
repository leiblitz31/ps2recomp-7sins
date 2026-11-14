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

// Function: sub_00158DA0
// Address: 0x158da0 - 0x158ee0
void sub_00158DA0_0x158da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158DA0_0x158da0");
#endif

    switch (ctx->pc) {
        case 0x158dccu: goto label_158dcc;
        case 0x158df8u: goto label_158df8;
        case 0x158e08u: goto label_158e08;
        case 0x158e34u: goto label_158e34;
        case 0x158e74u: goto label_158e74;
        default: break;
    }

    ctx->pc = 0x158da0u;

    // 0x158da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158db0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x158db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x158db4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x158db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x158db8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158dbc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x158dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158dc0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x158dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158dc4: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x158DC4u;
    SET_GPR_U32(ctx, 31, 0x158DCCu);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x158DC4u, 0x158DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DCCu;
label_158dcc:
    // 0x158dcc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x158dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x158dd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158DD0u;
    {
        const bool branch_taken_0x158dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158dd0) {
            ctx->pc = 0x158DE4u;
            goto label_158de4;
        }
    }
    ctx->pc = 0x158DD8u;
    // 0x158dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ddc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x158DDCu;
    {
        const bool branch_taken_0x158ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ddc) {
            ctx->pc = 0x158EC0u;
            goto label_158ec0;
        }
    }
    ctx->pc = 0x158DE4u;
label_158de4:
    // 0x158de4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158de8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x158de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158dec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x158decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158df0: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x158DF0u;
    SET_GPR_U32(ctx, 31, 0x158DF8u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x158DF0u, 0x158DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DF8u;
label_158df8:
    // 0x158df8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x158df8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158dfc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x158dfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158e00: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x158E00u;
    {
        const bool branch_taken_0x158e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e00) {
            ctx->pc = 0x158E7Cu;
            goto label_158e7c;
        }
    }
    ctx->pc = 0x158E08u;
label_158e08:
    // 0x158e08: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x158e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x158e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158E0Cu;
    {
        const bool branch_taken_0x158e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e0c) {
            ctx->pc = 0x158E20u;
            goto label_158e20;
        }
    }
    ctx->pc = 0x158E14u;
    // 0x158e14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x158E18u;
    {
        const bool branch_taken_0x158e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e18) {
            ctx->pc = 0x158EC0u;
            goto label_158ec0;
        }
    }
    ctx->pc = 0x158E20u;
label_158e20:
    // 0x158e20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158e24: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x158e24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158e28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x158e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158e2c: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x158E2Cu;
    SET_GPR_U32(ctx, 31, 0x158E34u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x158E2Cu, 0x158E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E34u;
label_158e34:
    // 0x158e34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x158e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x158e38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158E38u;
    {
        const bool branch_taken_0x158e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e38) {
            ctx->pc = 0x158E4Cu;
            goto label_158e4c;
        }
    }
    ctx->pc = 0x158E40u;
    // 0x158e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x158e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x158E44u;
    {
        const bool branch_taken_0x158e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e44) {
            ctx->pc = 0x158EC0u;
            goto label_158ec0;
        }
    }
    ctx->pc = 0x158E4Cu;
label_158e4c:
    // 0x158e4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158e54: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x158e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158e58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158e5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x158e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x158e60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158e64: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x158e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158e68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x158e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158e6c: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x158E6Cu;
    SET_GPR_U32(ctx, 31, 0x158E74u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x158E6Cu, 0x158E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E74u;
label_158e74:
    // 0x158e74: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x158e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158e78: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x158e78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_158e7c:
    // 0x158e7c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x158e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x158e80: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x158e84: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158E84u;
    {
        const bool branch_taken_0x158e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158e84) {
            ctx->pc = 0x158EBCu;
            goto label_158ebc;
        }
    }
    ctx->pc = 0x158E8Cu;
    // 0x158e8c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x158e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x158e90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158e94: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158E94u;
    {
        const bool branch_taken_0x158e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158e94) {
            ctx->pc = 0x158EBCu;
            goto label_158ebc;
        }
    }
    ctx->pc = 0x158E9Cu;
    // 0x158e9c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x158e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x158ea0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x158ea4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158EA4u;
    {
        const bool branch_taken_0x158ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158ea4) {
            ctx->pc = 0x158EBCu;
            goto label_158ebc;
        }
    }
    ctx->pc = 0x158EACu;
    // 0x158eac: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x158eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x158eb0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158eb4: 0x1462ffd4  bne         $v1, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x158EB4u;
    {
        const bool branch_taken_0x158eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x158eb4) {
            ctx->pc = 0x158E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158e08;
        }
    }
    ctx->pc = 0x158EBCu;
label_158ebc:
    // 0x158ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158ec0:
    // 0x158ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ecc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x158ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x158ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158ED8u;
    // 0x158ed8: 0x0  nop
    ctx->pc = 0x158ed8u;
    // NOP
    // 0x158edc: 0x0  nop
    ctx->pc = 0x158edcu;
    // NOP
    ctx->pc = 0x158ee0u;
}
