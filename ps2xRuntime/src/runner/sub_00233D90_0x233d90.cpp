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

// Function: sub_00233D90
// Address: 0x233d90 - 0x233eb0
void sub_00233D90_0x233d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233D90_0x233d90");
#endif

    switch (ctx->pc) {
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        default: break;
    }

    ctx->pc = 0x233d90u;

label_233d90:
    // 0x233d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233d94:
    // 0x233d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233d98:
    // 0x233d98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x233d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_233d9c:
    // 0x233d9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x233d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_233da0:
    // 0x233da0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233da4:
    // 0x233da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233da8:
    // 0x233da8: 0xc08ec98  jal         func_23B260
label_233dac:
    if (ctx->pc == 0x233DACu) {
        ctx->pc = 0x233DB0u;
        goto label_233db0;
    }
    ctx->pc = 0x233DA8u;
    SET_GPR_U32(ctx, 31, 0x233DB0u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x233DA8u, 0x233DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DB0u;
label_233db0:
    // 0x233db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233db4:
    // 0x233db4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x233db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_233db8:
    // 0x233db8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233dbc:
    // 0x233dbc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x233dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233dc0:
    // 0x233dc0: 0xc0422a8  jal         func_108AA0
label_233dc4:
    if (ctx->pc == 0x233DC4u) {
        ctx->pc = 0x233DC8u;
        goto label_233dc8;
    }
    ctx->pc = 0x233DC0u;
    SET_GPR_U32(ctx, 31, 0x233DC8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x233DC0u, 0x233DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DC8u;
label_233dc8:
    // 0x233dc8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233dcc:
    // 0x233dcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233dd0:
    // 0x233dd0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x233dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_233dd4:
    // 0x233dd4: 0x320f809  jalr        $t9
label_233dd8:
    if (ctx->pc == 0x233DD8u) {
        ctx->pc = 0x233DDCu;
        goto label_233ddc;
    }
    ctx->pc = 0x233DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233DDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DD4u, 0x233DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233DDCu;
label_233ddc:
    // 0x233ddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233de0:
    // 0x233de0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_233de4:
    if (ctx->pc == 0x233DE4u) {
        ctx->pc = 0x233DE8u;
        goto label_233de8;
    }
    ctx->pc = 0x233DE0u;
    {
        const bool branch_taken_0x233de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x233de0) {
            ctx->pc = 0x233E38u;
            goto label_233e38;
        }
    }
    ctx->pc = 0x233DE8u;
label_233de8:
    // 0x233de8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233dec:
    // 0x233dec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233df0:
    // 0x233df0: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x233df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_233df4:
    // 0x233df4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233df8:
    // 0x233df8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x233df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233dfc:
    // 0x233dfc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x233dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_233e00:
    // 0x233e00: 0x320f809  jalr        $t9
label_233e04:
    if (ctx->pc == 0x233E04u) {
        ctx->pc = 0x233E08u;
        goto label_233e08;
    }
    ctx->pc = 0x233E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233E08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E00u, 0x233E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233E08u;
label_233e08:
    // 0x233e08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233e0c:
    // 0x233e0c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233e10:
    // 0x233e10: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x233e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_233e14:
    // 0x233e14: 0xc08cf20  jal         func_233C80
label_233e18:
    if (ctx->pc == 0x233E18u) {
        ctx->pc = 0x233E1Cu;
        goto label_233e1c;
    }
    ctx->pc = 0x233E14u;
    SET_GPR_U32(ctx, 31, 0x233E1Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233E14u, 0x233E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E1Cu;
label_233e1c:
    // 0x233e1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233e20:
    // 0x233e20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233e24:
    // 0x233e24: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x233e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_233e28:
    // 0x233e28: 0xc08cf20  jal         func_233C80
label_233e2c:
    if (ctx->pc == 0x233E2Cu) {
        ctx->pc = 0x233E30u;
        goto label_233e30;
    }
    ctx->pc = 0x233E28u;
    SET_GPR_U32(ctx, 31, 0x233E30u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233E28u, 0x233E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E30u;
label_233e30:
    // 0x233e30: 0x10000013  b           . + 4 + (0x13 << 2)
label_233e34:
    if (ctx->pc == 0x233E34u) {
        ctx->pc = 0x233E38u;
        goto label_233e38;
    }
    ctx->pc = 0x233E30u;
    {
        const bool branch_taken_0x233e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e30) {
            ctx->pc = 0x233E80u;
            goto label_233e80;
        }
    }
    ctx->pc = 0x233E38u;
label_233e38:
    // 0x233e38: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233e3c:
    // 0x233e3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x233e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233e40:
    // 0x233e40: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x233e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_233e44:
    // 0x233e44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233e48:
    // 0x233e48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x233e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233e4c:
    // 0x233e4c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x233e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_233e50:
    // 0x233e50: 0x320f809  jalr        $t9
label_233e54:
    if (ctx->pc == 0x233E54u) {
        ctx->pc = 0x233E58u;
        goto label_233e58;
    }
    ctx->pc = 0x233E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233E58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E50u, 0x233E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233E58u;
label_233e58:
    // 0x233e58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233e5c:
    // 0x233e5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233e60:
    // 0x233e60: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_233e64:
    // 0x233e64: 0xc08cf20  jal         func_233C80
label_233e68:
    if (ctx->pc == 0x233E68u) {
        ctx->pc = 0x233E6Cu;
        goto label_233e6c;
    }
    ctx->pc = 0x233E64u;
    SET_GPR_U32(ctx, 31, 0x233E6Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233E64u, 0x233E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E6Cu;
label_233e6c:
    // 0x233e6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x233e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233e70:
    // 0x233e70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233e74:
    // 0x233e74: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x233e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_233e78:
    // 0x233e78: 0xc08cf20  jal         func_233C80
label_233e7c:
    if (ctx->pc == 0x233E7Cu) {
        ctx->pc = 0x233E80u;
        goto label_233e80;
    }
    ctx->pc = 0x233E78u;
    SET_GPR_U32(ctx, 31, 0x233E80u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x233E78u, 0x233E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E80u;
label_233e80:
    // 0x233e80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_233e84:
    // 0x233e84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233e88:
    // 0x233e88: 0xc08ec98  jal         func_23B260
label_233e8c:
    if (ctx->pc == 0x233E8Cu) {
        ctx->pc = 0x233E90u;
        goto label_233e90;
    }
    ctx->pc = 0x233E88u;
    SET_GPR_U32(ctx, 31, 0x233E90u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x233E88u, 0x233E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E90u;
label_233e90:
    // 0x233e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233e94:
    // 0x233e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233e98:
    // 0x233e98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x233e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_233e9c:
    // 0x233e9c: 0x3e00008  jr          $ra
label_233ea0:
    if (ctx->pc == 0x233EA0u) {
        ctx->pc = 0x233EA4u;
        goto label_233ea4;
    }
    ctx->pc = 0x233E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233EA4u;
label_233ea4:
    // 0x233ea4: 0x0  nop
    ctx->pc = 0x233ea4u;
    // NOP
label_233ea8:
    // 0x233ea8: 0x0  nop
    ctx->pc = 0x233ea8u;
    // NOP
label_233eac:
    // 0x233eac: 0x0  nop
    ctx->pc = 0x233eacu;
    // NOP
    ctx->pc = 0x233eb0u;
}
