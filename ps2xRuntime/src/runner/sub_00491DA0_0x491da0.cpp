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

// Function: sub_00491DA0
// Address: 0x491da0 - 0x491eb0
void sub_00491DA0_0x491da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491DA0_0x491da0");
#endif

    switch (ctx->pc) {
        case 0x491da0u: goto label_491da0;
        case 0x491da4u: goto label_491da4;
        case 0x491da8u: goto label_491da8;
        case 0x491dacu: goto label_491dac;
        case 0x491db0u: goto label_491db0;
        case 0x491db4u: goto label_491db4;
        case 0x491db8u: goto label_491db8;
        case 0x491dbcu: goto label_491dbc;
        case 0x491dc0u: goto label_491dc0;
        case 0x491dc4u: goto label_491dc4;
        case 0x491dc8u: goto label_491dc8;
        case 0x491dccu: goto label_491dcc;
        case 0x491dd0u: goto label_491dd0;
        case 0x491dd4u: goto label_491dd4;
        case 0x491dd8u: goto label_491dd8;
        case 0x491ddcu: goto label_491ddc;
        case 0x491de0u: goto label_491de0;
        case 0x491de4u: goto label_491de4;
        case 0x491de8u: goto label_491de8;
        case 0x491decu: goto label_491dec;
        case 0x491df0u: goto label_491df0;
        case 0x491df4u: goto label_491df4;
        case 0x491df8u: goto label_491df8;
        case 0x491dfcu: goto label_491dfc;
        case 0x491e00u: goto label_491e00;
        case 0x491e04u: goto label_491e04;
        case 0x491e08u: goto label_491e08;
        case 0x491e0cu: goto label_491e0c;
        case 0x491e10u: goto label_491e10;
        case 0x491e14u: goto label_491e14;
        case 0x491e18u: goto label_491e18;
        case 0x491e1cu: goto label_491e1c;
        case 0x491e20u: goto label_491e20;
        case 0x491e24u: goto label_491e24;
        case 0x491e28u: goto label_491e28;
        case 0x491e2cu: goto label_491e2c;
        case 0x491e30u: goto label_491e30;
        case 0x491e34u: goto label_491e34;
        case 0x491e38u: goto label_491e38;
        case 0x491e3cu: goto label_491e3c;
        case 0x491e40u: goto label_491e40;
        case 0x491e44u: goto label_491e44;
        case 0x491e48u: goto label_491e48;
        case 0x491e4cu: goto label_491e4c;
        case 0x491e50u: goto label_491e50;
        case 0x491e54u: goto label_491e54;
        case 0x491e58u: goto label_491e58;
        case 0x491e5cu: goto label_491e5c;
        case 0x491e60u: goto label_491e60;
        case 0x491e64u: goto label_491e64;
        case 0x491e68u: goto label_491e68;
        case 0x491e6cu: goto label_491e6c;
        case 0x491e70u: goto label_491e70;
        case 0x491e74u: goto label_491e74;
        case 0x491e78u: goto label_491e78;
        case 0x491e7cu: goto label_491e7c;
        case 0x491e80u: goto label_491e80;
        case 0x491e84u: goto label_491e84;
        case 0x491e88u: goto label_491e88;
        case 0x491e8cu: goto label_491e8c;
        case 0x491e90u: goto label_491e90;
        case 0x491e94u: goto label_491e94;
        case 0x491e98u: goto label_491e98;
        case 0x491e9cu: goto label_491e9c;
        case 0x491ea0u: goto label_491ea0;
        case 0x491ea4u: goto label_491ea4;
        case 0x491ea8u: goto label_491ea8;
        case 0x491eacu: goto label_491eac;
        default: break;
    }

    ctx->pc = 0x491da0u;

label_491da0:
    // 0x491da0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x491da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_491da4:
    // 0x491da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x491da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_491da8:
    // 0x491da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_491dac:
    // 0x491dac: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x491dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_491db0:
    // 0x491db0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_491db4:
    if (ctx->pc == 0x491DB4u) {
        ctx->pc = 0x491DB8u;
        goto label_491db8;
    }
    ctx->pc = 0x491DB0u;
    {
        const bool branch_taken_0x491db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491db0) {
            ctx->pc = 0x491E5Cu;
            goto label_491e5c;
        }
    }
    ctx->pc = 0x491DB8u;
label_491db8:
    // 0x491db8: 0x8f82b6f0  lw          $v0, -0x4910($gp)
    ctx->pc = 0x491db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948592)));
label_491dbc:
    // 0x491dbc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_491dc0:
    if (ctx->pc == 0x491DC0u) {
        ctx->pc = 0x491DC4u;
        goto label_491dc4;
    }
    ctx->pc = 0x491DBCu;
    {
        const bool branch_taken_0x491dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491dbc) {
            ctx->pc = 0x491E5Cu;
            goto label_491e5c;
        }
    }
    ctx->pc = 0x491DC4u;
label_491dc4:
    // 0x491dc4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x491dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_491dc8:
    // 0x491dc8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491dcc:
    // 0x491dcc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x491dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_491dd0:
    // 0x491dd0: 0xc115ee8  jal         func_457BA0
label_491dd4:
    if (ctx->pc == 0x491DD4u) {
        ctx->pc = 0x491DD8u;
        goto label_491dd8;
    }
    ctx->pc = 0x491DD0u;
    SET_GPR_U32(ctx, 31, 0x491DD8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x491DD0u, 0x491DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491DD8u;
label_491dd8:
    // 0x491dd8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_491ddc:
    if (ctx->pc == 0x491DDCu) {
        ctx->pc = 0x491DE0u;
        goto label_491de0;
    }
    ctx->pc = 0x491DD8u;
    {
        const bool branch_taken_0x491dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491dd8) {
            ctx->pc = 0x491E5Cu;
            goto label_491e5c;
        }
    }
    ctx->pc = 0x491DE0u;
label_491de0:
    // 0x491de0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491de4:
    // 0x491de4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_491de8:
    if (ctx->pc == 0x491DE8u) {
        ctx->pc = 0x491DECu;
        goto label_491dec;
    }
    ctx->pc = 0x491DE4u;
    {
        const bool branch_taken_0x491de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491de4) {
            ctx->pc = 0x491E5Cu;
            goto label_491e5c;
        }
    }
    ctx->pc = 0x491DECu;
label_491dec:
    // 0x491dec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491df0:
    // 0x491df0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491df4:
    // 0x491df4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x491df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_491df8:
    // 0x491df8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x491df8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_491dfc:
    // 0x491dfc: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x491dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_491e00:
    // 0x491e00: 0x240800fc  addiu       $t0, $zero, 0xFC
    ctx->pc = 0x491e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_491e04:
    // 0x491e04: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x491e04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_491e08:
    // 0x491e08: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x491e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_491e0c:
    // 0x491e0c: 0xc113940  jal         func_44E500
label_491e10:
    if (ctx->pc == 0x491E10u) {
        ctx->pc = 0x491E14u;
        goto label_491e14;
    }
    ctx->pc = 0x491E0Cu;
    SET_GPR_U32(ctx, 31, 0x491E14u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x491E0Cu, 0x491E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E14u;
label_491e14:
    // 0x491e14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491e18:
    // 0x491e18: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x491e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_491e1c:
    // 0x491e1c: 0xc115c24  jal         func_457090
label_491e20:
    if (ctx->pc == 0x491E20u) {
        ctx->pc = 0x491E24u;
        goto label_491e24;
    }
    ctx->pc = 0x491E1Cu;
    SET_GPR_U32(ctx, 31, 0x491E24u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x491E1Cu, 0x491E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E24u;
label_491e24:
    // 0x491e24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491e28:
    // 0x491e28: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491e2c:
    // 0x491e2c: 0x40f809  jalr        $v0
label_491e30:
    if (ctx->pc == 0x491E30u) {
        ctx->pc = 0x491E34u;
        goto label_491e34;
    }
    ctx->pc = 0x491E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x491E34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491E2Cu, 0x491E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x491E34u;
label_491e34:
    // 0x491e34: 0xaf82b6f0  sw          $v0, -0x4910($gp)
    ctx->pc = 0x491e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948592), GPR_U32(ctx, 2));
label_491e38:
    // 0x491e38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_491e3c:
    // 0x491e3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_491e40:
    if (ctx->pc == 0x491E40u) {
        ctx->pc = 0x491E44u;
        goto label_491e44;
    }
    ctx->pc = 0x491E3Cu;
    {
        const bool branch_taken_0x491e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e3c) {
            ctx->pc = 0x491E4Cu;
            goto label_491e4c;
        }
    }
    ctx->pc = 0x491E44u;
label_491e44:
    // 0x491e44: 0xd  break       0
    ctx->pc = 0x491e44u;
    runtime->handleBreak(rdram, ctx);
label_491e48:
    // 0x491e48: 0x0  nop
    ctx->pc = 0x491e48u;
    // NOP
label_491e4c:
    // 0x491e4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491e50:
    // 0x491e50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x491e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_491e54:
    // 0x491e54: 0xc11392c  jal         func_44E4B0
label_491e58:
    if (ctx->pc == 0x491E58u) {
        ctx->pc = 0x491E5Cu;
        goto label_491e5c;
    }
    ctx->pc = 0x491E54u;
    SET_GPR_U32(ctx, 31, 0x491E5Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x491E54u, 0x491E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E5Cu;
label_491e5c:
    // 0x491e5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x491e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491e60:
    // 0x491e60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x491e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_491e64:
    // 0x491e64: 0xc124710  jal         func_491C40
label_491e68:
    if (ctx->pc == 0x491E68u) {
        ctx->pc = 0x491E6Cu;
        goto label_491e6c;
    }
    ctx->pc = 0x491E64u;
    SET_GPR_U32(ctx, 31, 0x491E6Cu);
    ctx->pc = 0x491C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C40u, 0x491E64u, 0x491E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E6Cu;
label_491e6c:
    // 0x491e6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_491e70:
    if (ctx->pc == 0x491E70u) {
        ctx->pc = 0x491E74u;
        goto label_491e74;
    }
    ctx->pc = 0x491E6Cu;
    {
        const bool branch_taken_0x491e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e6c) {
            ctx->pc = 0x491E94u;
            goto label_491e94;
        }
    }
    ctx->pc = 0x491E74u;
label_491e74:
    // 0x491e74: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x491e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491e78:
    // 0x491e78: 0xc124710  jal         func_491C40
label_491e7c:
    if (ctx->pc == 0x491E7Cu) {
        ctx->pc = 0x491E80u;
        goto label_491e80;
    }
    ctx->pc = 0x491E78u;
    SET_GPR_U32(ctx, 31, 0x491E80u);
    ctx->pc = 0x491C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C40u, 0x491E78u, 0x491E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E80u;
label_491e80:
    // 0x491e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_491e84:
    if (ctx->pc == 0x491E84u) {
        ctx->pc = 0x491E88u;
        goto label_491e88;
    }
    ctx->pc = 0x491E80u;
    {
        const bool branch_taken_0x491e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e80) {
            ctx->pc = 0x491E94u;
            goto label_491e94;
        }
    }
    ctx->pc = 0x491E88u;
label_491e88:
    // 0x491e88: 0xc0f02ec  jal         func_3C0BB0
label_491e8c:
    if (ctx->pc == 0x491E8Cu) {
        ctx->pc = 0x491E90u;
        goto label_491e90;
    }
    ctx->pc = 0x491E88u;
    SET_GPR_U32(ctx, 31, 0x491E90u);
    ctx->pc = 0x3C0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0BB0u, 0x491E88u, 0x491E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491E90u;
label_491e90:
    // 0x491e90: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x491e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_491e94:
    // 0x491e94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x491e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_491e98:
    // 0x491e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_491e9c:
    // 0x491e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_491ea0:
    // 0x491ea0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x491ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_491ea4:
    // 0x491ea4: 0x3e00008  jr          $ra
label_491ea8:
    if (ctx->pc == 0x491EA8u) {
        ctx->pc = 0x491EACu;
        goto label_491eac;
    }
    ctx->pc = 0x491EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491EACu;
label_491eac:
    // 0x491eac: 0x0  nop
    ctx->pc = 0x491eacu;
    // NOP
    ctx->pc = 0x491eb0u;
}
