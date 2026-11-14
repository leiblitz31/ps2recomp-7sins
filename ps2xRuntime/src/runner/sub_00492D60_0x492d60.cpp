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

// Function: sub_00492D60
// Address: 0x492d60 - 0x492eb0
void sub_00492D60_0x492d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492D60_0x492d60");
#endif

    switch (ctx->pc) {
        case 0x492d60u: goto label_492d60;
        case 0x492d64u: goto label_492d64;
        case 0x492d68u: goto label_492d68;
        case 0x492d6cu: goto label_492d6c;
        case 0x492d70u: goto label_492d70;
        case 0x492d74u: goto label_492d74;
        case 0x492d78u: goto label_492d78;
        case 0x492d7cu: goto label_492d7c;
        case 0x492d80u: goto label_492d80;
        case 0x492d84u: goto label_492d84;
        case 0x492d88u: goto label_492d88;
        case 0x492d8cu: goto label_492d8c;
        case 0x492d90u: goto label_492d90;
        case 0x492d94u: goto label_492d94;
        case 0x492d98u: goto label_492d98;
        case 0x492d9cu: goto label_492d9c;
        case 0x492da0u: goto label_492da0;
        case 0x492da4u: goto label_492da4;
        case 0x492da8u: goto label_492da8;
        case 0x492dacu: goto label_492dac;
        case 0x492db0u: goto label_492db0;
        case 0x492db4u: goto label_492db4;
        case 0x492db8u: goto label_492db8;
        case 0x492dbcu: goto label_492dbc;
        case 0x492dc0u: goto label_492dc0;
        case 0x492dc4u: goto label_492dc4;
        case 0x492dc8u: goto label_492dc8;
        case 0x492dccu: goto label_492dcc;
        case 0x492dd0u: goto label_492dd0;
        case 0x492dd4u: goto label_492dd4;
        case 0x492dd8u: goto label_492dd8;
        case 0x492ddcu: goto label_492ddc;
        case 0x492de0u: goto label_492de0;
        case 0x492de4u: goto label_492de4;
        case 0x492de8u: goto label_492de8;
        case 0x492decu: goto label_492dec;
        case 0x492df0u: goto label_492df0;
        case 0x492df4u: goto label_492df4;
        case 0x492df8u: goto label_492df8;
        case 0x492dfcu: goto label_492dfc;
        case 0x492e00u: goto label_492e00;
        case 0x492e04u: goto label_492e04;
        case 0x492e08u: goto label_492e08;
        case 0x492e0cu: goto label_492e0c;
        case 0x492e10u: goto label_492e10;
        case 0x492e14u: goto label_492e14;
        case 0x492e18u: goto label_492e18;
        case 0x492e1cu: goto label_492e1c;
        case 0x492e20u: goto label_492e20;
        case 0x492e24u: goto label_492e24;
        case 0x492e28u: goto label_492e28;
        case 0x492e2cu: goto label_492e2c;
        case 0x492e30u: goto label_492e30;
        case 0x492e34u: goto label_492e34;
        case 0x492e38u: goto label_492e38;
        case 0x492e3cu: goto label_492e3c;
        case 0x492e40u: goto label_492e40;
        case 0x492e44u: goto label_492e44;
        case 0x492e48u: goto label_492e48;
        case 0x492e4cu: goto label_492e4c;
        case 0x492e50u: goto label_492e50;
        case 0x492e54u: goto label_492e54;
        case 0x492e58u: goto label_492e58;
        case 0x492e5cu: goto label_492e5c;
        case 0x492e60u: goto label_492e60;
        case 0x492e64u: goto label_492e64;
        case 0x492e68u: goto label_492e68;
        case 0x492e6cu: goto label_492e6c;
        case 0x492e70u: goto label_492e70;
        case 0x492e74u: goto label_492e74;
        case 0x492e78u: goto label_492e78;
        case 0x492e7cu: goto label_492e7c;
        case 0x492e80u: goto label_492e80;
        case 0x492e84u: goto label_492e84;
        case 0x492e88u: goto label_492e88;
        case 0x492e8cu: goto label_492e8c;
        case 0x492e90u: goto label_492e90;
        case 0x492e94u: goto label_492e94;
        case 0x492e98u: goto label_492e98;
        case 0x492e9cu: goto label_492e9c;
        case 0x492ea0u: goto label_492ea0;
        case 0x492ea4u: goto label_492ea4;
        case 0x492ea8u: goto label_492ea8;
        case 0x492eacu: goto label_492eac;
        default: break;
    }

    ctx->pc = 0x492d60u;

label_492d60:
    // 0x492d60: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x492d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_492d64:
    // 0x492d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x492d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_492d68:
    // 0x492d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x492d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_492d6c:
    // 0x492d6c: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x492d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_492d70:
    // 0x492d70: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_492d74:
    if (ctx->pc == 0x492D74u) {
        ctx->pc = 0x492D78u;
        goto label_492d78;
    }
    ctx->pc = 0x492D70u;
    {
        const bool branch_taken_0x492d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492d70) {
            ctx->pc = 0x492E1Cu;
            goto label_492e1c;
        }
    }
    ctx->pc = 0x492D78u;
label_492d78:
    // 0x492d78: 0x8f82b700  lw          $v0, -0x4900($gp)
    ctx->pc = 0x492d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948608)));
label_492d7c:
    // 0x492d7c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_492d80:
    if (ctx->pc == 0x492D80u) {
        ctx->pc = 0x492D84u;
        goto label_492d84;
    }
    ctx->pc = 0x492D7Cu;
    {
        const bool branch_taken_0x492d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492d7c) {
            ctx->pc = 0x492E1Cu;
            goto label_492e1c;
        }
    }
    ctx->pc = 0x492D84u;
label_492d84:
    // 0x492d84: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x492d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_492d88:
    // 0x492d88: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x492d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_492d8c:
    // 0x492d8c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x492d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492d90:
    // 0x492d90: 0xc115ee8  jal         func_457BA0
label_492d94:
    if (ctx->pc == 0x492D94u) {
        ctx->pc = 0x492D98u;
        goto label_492d98;
    }
    ctx->pc = 0x492D90u;
    SET_GPR_U32(ctx, 31, 0x492D98u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x492D90u, 0x492D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D98u;
label_492d98:
    // 0x492d98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_492d9c:
    if (ctx->pc == 0x492D9Cu) {
        ctx->pc = 0x492DA0u;
        goto label_492da0;
    }
    ctx->pc = 0x492D98u;
    {
        const bool branch_taken_0x492d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492d98) {
            ctx->pc = 0x492E1Cu;
            goto label_492e1c;
        }
    }
    ctx->pc = 0x492DA0u;
label_492da0:
    // 0x492da0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x492da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_492da4:
    // 0x492da4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_492da8:
    if (ctx->pc == 0x492DA8u) {
        ctx->pc = 0x492DACu;
        goto label_492dac;
    }
    ctx->pc = 0x492DA4u;
    {
        const bool branch_taken_0x492da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492da4) {
            ctx->pc = 0x492E1Cu;
            goto label_492e1c;
        }
    }
    ctx->pc = 0x492DACu;
label_492dac:
    // 0x492dac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492db0:
    // 0x492db0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x492db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_492db4:
    // 0x492db4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x492db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_492db8:
    // 0x492db8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x492db8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_492dbc:
    // 0x492dbc: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x492dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_492dc0:
    // 0x492dc0: 0x2408025b  addiu       $t0, $zero, 0x25B
    ctx->pc = 0x492dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
label_492dc4:
    // 0x492dc4: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x492dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_492dc8:
    // 0x492dc8: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x492dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_492dcc:
    // 0x492dcc: 0xc113940  jal         func_44E500
label_492dd0:
    if (ctx->pc == 0x492DD0u) {
        ctx->pc = 0x492DD4u;
        goto label_492dd4;
    }
    ctx->pc = 0x492DCCu;
    SET_GPR_U32(ctx, 31, 0x492DD4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x492DCCu, 0x492DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492DD4u;
label_492dd4:
    // 0x492dd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492dd8:
    // 0x492dd8: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x492dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_492ddc:
    // 0x492ddc: 0xc115c24  jal         func_457090
label_492de0:
    if (ctx->pc == 0x492DE0u) {
        ctx->pc = 0x492DE4u;
        goto label_492de4;
    }
    ctx->pc = 0x492DDCu;
    SET_GPR_U32(ctx, 31, 0x492DE4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x492DDCu, 0x492DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492DE4u;
label_492de4:
    // 0x492de4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492de8:
    // 0x492de8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x492de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_492dec:
    // 0x492dec: 0x40f809  jalr        $v0
label_492df0:
    if (ctx->pc == 0x492DF0u) {
        ctx->pc = 0x492DF4u;
        goto label_492df4;
    }
    ctx->pc = 0x492DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492DF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492DECu, 0x492DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492DF4u;
label_492df4:
    // 0x492df4: 0xaf82b700  sw          $v0, -0x4900($gp)
    ctx->pc = 0x492df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948608), GPR_U32(ctx, 2));
label_492df8:
    // 0x492df8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x492df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_492dfc:
    // 0x492dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_492e00:
    if (ctx->pc == 0x492E00u) {
        ctx->pc = 0x492E04u;
        goto label_492e04;
    }
    ctx->pc = 0x492DFCu;
    {
        const bool branch_taken_0x492dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492dfc) {
            ctx->pc = 0x492E0Cu;
            goto label_492e0c;
        }
    }
    ctx->pc = 0x492E04u;
label_492e04:
    // 0x492e04: 0xd  break       0
    ctx->pc = 0x492e04u;
    runtime->handleBreak(rdram, ctx);
label_492e08:
    // 0x492e08: 0x0  nop
    ctx->pc = 0x492e08u;
    // NOP
label_492e0c:
    // 0x492e0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492e10:
    // 0x492e10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x492e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_492e14:
    // 0x492e14: 0xc11392c  jal         func_44E4B0
label_492e18:
    if (ctx->pc == 0x492E18u) {
        ctx->pc = 0x492E1Cu;
        goto label_492e1c;
    }
    ctx->pc = 0x492E14u;
    SET_GPR_U32(ctx, 31, 0x492E1Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x492E14u, 0x492E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E1Cu;
label_492e1c:
    // 0x492e1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x492e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492e20:
    // 0x492e20: 0x10000017  b           . + 4 + (0x17 << 2)
label_492e24:
    if (ctx->pc == 0x492E24u) {
        ctx->pc = 0x492E28u;
        goto label_492e28;
    }
    ctx->pc = 0x492E20u;
    {
        const bool branch_taken_0x492e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492e20) {
            ctx->pc = 0x492E80u;
            goto label_492e80;
        }
    }
    ctx->pc = 0x492E28u;
label_492e28:
    // 0x492e28: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x492e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_492e2c:
    // 0x492e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x492e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_492e30:
    // 0x492e30: 0xc124b48  jal         func_492D20
label_492e34:
    if (ctx->pc == 0x492E34u) {
        ctx->pc = 0x492E38u;
        goto label_492e38;
    }
    ctx->pc = 0x492E30u;
    SET_GPR_U32(ctx, 31, 0x492E38u);
    ctx->pc = 0x492D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492D20u, 0x492E30u, 0x492E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E38u;
label_492e38:
    // 0x492e38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x492e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492e3c:
    // 0x492e3c: 0x2c410024  sltiu       $at, $v0, 0x24
    ctx->pc = 0x492e3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_492e40:
    // 0x492e40: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_492e44:
    if (ctx->pc == 0x492E44u) {
        ctx->pc = 0x492E48u;
        goto label_492e48;
    }
    ctx->pc = 0x492E40u;
    {
        const bool branch_taken_0x492e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x492e40) {
            ctx->pc = 0x492E7Cu;
            goto label_492e7c;
        }
    }
    ctx->pc = 0x492E48u;
label_492e48:
    // 0x492e48: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x492e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_492e4c:
    // 0x492e4c: 0x24631cc0  addiu       $v1, $v1, 0x1CC0
    ctx->pc = 0x492e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7360));
label_492e50:
    // 0x492e50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x492e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_492e54:
    // 0x492e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_492e58:
    // 0x492e58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x492e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492e5c:
    // 0x492e5c: 0x400008  jr          $v0
label_492e60:
    if (ctx->pc == 0x492E60u) {
        ctx->pc = 0x492E64u;
        goto label_492e64;
    }
    ctx->pc = 0x492E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x492E64u: goto label_492e64;
            case 0x492E74u: goto label_492e74;
            case 0x492E7Cu: goto label_492e7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492E5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x492E64u;
label_492e64:
    // 0x492e64: 0xc0efc20  jal         func_3BF080
label_492e68:
    if (ctx->pc == 0x492E68u) {
        ctx->pc = 0x492E6Cu;
        goto label_492e6c;
    }
    ctx->pc = 0x492E64u;
    SET_GPR_U32(ctx, 31, 0x492E6Cu);
    ctx->pc = 0x3BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF080u, 0x492E64u, 0x492E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E6Cu;
label_492e6c:
    // 0x492e6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_492e70:
    if (ctx->pc == 0x492E70u) {
        ctx->pc = 0x492E74u;
        goto label_492e74;
    }
    ctx->pc = 0x492E6Cu;
    {
        const bool branch_taken_0x492e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492e6c) {
            ctx->pc = 0x492E7Cu;
            goto label_492e7c;
        }
    }
    ctx->pc = 0x492E74u;
label_492e74:
    // 0x492e74: 0xc0f0bce  jal         func_3C2F38
label_492e78:
    if (ctx->pc == 0x492E78u) {
        ctx->pc = 0x492E7Cu;
        goto label_492e7c;
    }
    ctx->pc = 0x492E74u;
    SET_GPR_U32(ctx, 31, 0x492E7Cu);
    ctx->pc = 0x3C2F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2F38u, 0x492E74u, 0x492E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E7Cu;
label_492e7c:
    // 0x492e7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x492e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_492e80:
    // 0x492e80: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x492e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_492e84:
    // 0x492e84: 0xc124690  jal         func_491A40
label_492e88:
    if (ctx->pc == 0x492E88u) {
        ctx->pc = 0x492E8Cu;
        goto label_492e8c;
    }
    ctx->pc = 0x492E84u;
    SET_GPR_U32(ctx, 31, 0x492E8Cu);
    ctx->pc = 0x491A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A40u, 0x492E84u, 0x492E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E8Cu;
label_492e8c:
    // 0x492e8c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x492e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_492e90:
    // 0x492e90: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_492e94:
    if (ctx->pc == 0x492E94u) {
        ctx->pc = 0x492E98u;
        goto label_492e98;
    }
    ctx->pc = 0x492E90u;
    {
        const bool branch_taken_0x492e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492e90) {
            ctx->pc = 0x492E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_492e28;
        }
    }
    ctx->pc = 0x492E98u;
label_492e98:
    // 0x492e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492e9c:
    // 0x492e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x492e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_492ea0:
    // 0x492ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x492ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_492ea4:
    // 0x492ea4: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x492ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_492ea8:
    // 0x492ea8: 0x3e00008  jr          $ra
label_492eac:
    if (ctx->pc == 0x492EACu) {
        ctx->pc = 0x492EB0u;
        goto label_fallthrough_0x492ea8;
    }
    ctx->pc = 0x492EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x492ea8:
    ctx->pc = 0x492EB0u;
}
