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

// Function: sub_00464D50
// Address: 0x464d50 - 0x464e70
void sub_00464D50_0x464d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464D50_0x464d50");
#endif

    switch (ctx->pc) {
        case 0x464dacu: goto label_464dac;
        case 0x464e1cu: goto label_464e1c;
        default: break;
    }

    ctx->pc = 0x464d50u;

    // 0x464d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x464d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x464d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x464d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x464d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464d60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x464d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x464d64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x464d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x464d68: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x464d68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464d6c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x464D6Cu;
    {
        const bool branch_taken_0x464d6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x464d6c) {
            ctx->pc = 0x464D78u;
            goto label_464d78;
        }
    }
    ctx->pc = 0x464D74u;
    // 0x464d74: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x464d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464d78:
    // 0x464d78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464d80: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x464D80u;
    {
        const bool branch_taken_0x464d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464d80) {
            ctx->pc = 0x464DD8u;
            goto label_464dd8;
        }
    }
    ctx->pc = 0x464D88u;
    // 0x464d88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464d8c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x464d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x464d90: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464d94: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x464d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x464d98: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464d9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464da0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x464da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x464da4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x464DA4u;
    SET_GPR_U32(ctx, 31, 0x464DACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x464DA4u, 0x464DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464DACu;
label_464dac:
    // 0x464dac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x464dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464db0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x464db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x464db4: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x464db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464db8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x464db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x464dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x464dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x464dc0: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464dc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464dc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464dcc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x464dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x464dd0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x464DD0u;
    {
        const bool branch_taken_0x464dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464dd0) {
            ctx->pc = 0x464E48u;
            goto label_464e48;
        }
    }
    ctx->pc = 0x464DD8u;
label_464dd8:
    // 0x464dd8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x464dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464ddc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464de0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x464de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x464de4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x464de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x464de8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x464DE8u;
    {
        const bool branch_taken_0x464de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x464de8) {
            ctx->pc = 0x464E48u;
            goto label_464e48;
        }
    }
    ctx->pc = 0x464DF0u;
    // 0x464df0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464df4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x464df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x464df8: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464dfc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x464dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x464e00: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464e04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x464e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464e08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464e0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x464e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x464e10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x464e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x464e14: 0xc119d08  jal         func_467420
    ctx->pc = 0x464E14u;
    SET_GPR_U32(ctx, 31, 0x464E1Cu);
    ctx->pc = 0x467420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467420u, 0x464E14u, 0x464E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464E1Cu;
label_464e1c:
    // 0x464e1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x464e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464e20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x464e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x464e24: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x464e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464e28: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x464e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x464e2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x464e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x464e30: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464e34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464e38: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x464e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x464e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x464e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x464e44: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x464e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_464e48:
    // 0x464e48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464e4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464e50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x464e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x464e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x464e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x464e58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x464e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464e64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x464e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x464e68: 0x3e00008  jr          $ra
    ctx->pc = 0x464E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464E70u;
}
