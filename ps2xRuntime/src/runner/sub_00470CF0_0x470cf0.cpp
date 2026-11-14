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

// Function: sub_00470CF0
// Address: 0x470cf0 - 0x470e30
void sub_00470CF0_0x470cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470CF0_0x470cf0");
#endif

    switch (ctx->pc) {
        case 0x470cf0u: goto label_470cf0;
        case 0x470cf4u: goto label_470cf4;
        case 0x470cf8u: goto label_470cf8;
        case 0x470cfcu: goto label_470cfc;
        case 0x470d00u: goto label_470d00;
        case 0x470d04u: goto label_470d04;
        case 0x470d08u: goto label_470d08;
        case 0x470d0cu: goto label_470d0c;
        case 0x470d10u: goto label_470d10;
        case 0x470d14u: goto label_470d14;
        case 0x470d18u: goto label_470d18;
        case 0x470d1cu: goto label_470d1c;
        case 0x470d20u: goto label_470d20;
        case 0x470d24u: goto label_470d24;
        case 0x470d28u: goto label_470d28;
        case 0x470d2cu: goto label_470d2c;
        case 0x470d30u: goto label_470d30;
        case 0x470d34u: goto label_470d34;
        case 0x470d38u: goto label_470d38;
        case 0x470d3cu: goto label_470d3c;
        case 0x470d40u: goto label_470d40;
        case 0x470d44u: goto label_470d44;
        case 0x470d48u: goto label_470d48;
        case 0x470d4cu: goto label_470d4c;
        case 0x470d50u: goto label_470d50;
        case 0x470d54u: goto label_470d54;
        case 0x470d58u: goto label_470d58;
        case 0x470d5cu: goto label_470d5c;
        case 0x470d60u: goto label_470d60;
        case 0x470d64u: goto label_470d64;
        case 0x470d68u: goto label_470d68;
        case 0x470d6cu: goto label_470d6c;
        case 0x470d70u: goto label_470d70;
        case 0x470d74u: goto label_470d74;
        case 0x470d78u: goto label_470d78;
        case 0x470d7cu: goto label_470d7c;
        case 0x470d80u: goto label_470d80;
        case 0x470d84u: goto label_470d84;
        case 0x470d88u: goto label_470d88;
        case 0x470d8cu: goto label_470d8c;
        case 0x470d90u: goto label_470d90;
        case 0x470d94u: goto label_470d94;
        case 0x470d98u: goto label_470d98;
        case 0x470d9cu: goto label_470d9c;
        case 0x470da0u: goto label_470da0;
        case 0x470da4u: goto label_470da4;
        case 0x470da8u: goto label_470da8;
        case 0x470dacu: goto label_470dac;
        case 0x470db0u: goto label_470db0;
        case 0x470db4u: goto label_470db4;
        case 0x470db8u: goto label_470db8;
        case 0x470dbcu: goto label_470dbc;
        case 0x470dc0u: goto label_470dc0;
        case 0x470dc4u: goto label_470dc4;
        case 0x470dc8u: goto label_470dc8;
        case 0x470dccu: goto label_470dcc;
        case 0x470dd0u: goto label_470dd0;
        case 0x470dd4u: goto label_470dd4;
        case 0x470dd8u: goto label_470dd8;
        case 0x470ddcu: goto label_470ddc;
        case 0x470de0u: goto label_470de0;
        case 0x470de4u: goto label_470de4;
        case 0x470de8u: goto label_470de8;
        case 0x470decu: goto label_470dec;
        case 0x470df0u: goto label_470df0;
        case 0x470df4u: goto label_470df4;
        case 0x470df8u: goto label_470df8;
        case 0x470dfcu: goto label_470dfc;
        case 0x470e00u: goto label_470e00;
        case 0x470e04u: goto label_470e04;
        case 0x470e08u: goto label_470e08;
        case 0x470e0cu: goto label_470e0c;
        case 0x470e10u: goto label_470e10;
        case 0x470e14u: goto label_470e14;
        case 0x470e18u: goto label_470e18;
        case 0x470e1cu: goto label_470e1c;
        case 0x470e20u: goto label_470e20;
        case 0x470e24u: goto label_470e24;
        case 0x470e28u: goto label_470e28;
        case 0x470e2cu: goto label_470e2c;
        default: break;
    }

    ctx->pc = 0x470cf0u;

label_470cf0:
    // 0x470cf0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x470cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_470cf4:
    // 0x470cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x470cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_470cf8:
    // 0x470cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x470cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_470cfc:
    // 0x470cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_470d00:
    // 0x470d00: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x470d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_470d04:
    // 0x470d04: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x470d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_470d08:
    // 0x470d08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470d0c:
    // 0x470d0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470d10:
    // 0x470d10: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470d14:
    if (ctx->pc == 0x470D14u) {
        ctx->pc = 0x470D18u;
        goto label_470d18;
    }
    ctx->pc = 0x470D10u;
    {
        const bool branch_taken_0x470d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470d10) {
            ctx->pc = 0x470DC0u;
            goto label_470dc0;
        }
    }
    ctx->pc = 0x470D18u;
label_470d18:
    // 0x470d18: 0x8f82b368  lw          $v0, -0x4C98($gp)
    ctx->pc = 0x470d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947688)));
label_470d1c:
    // 0x470d1c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470d20:
    if (ctx->pc == 0x470D20u) {
        ctx->pc = 0x470D24u;
        goto label_470d24;
    }
    ctx->pc = 0x470D1Cu;
    {
        const bool branch_taken_0x470d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470d1c) {
            ctx->pc = 0x470DC0u;
            goto label_470dc0;
        }
    }
    ctx->pc = 0x470D24u;
label_470d24:
    // 0x470d24: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470d28:
    // 0x470d28: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470d2c:
    // 0x470d2c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x470d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_470d30:
    // 0x470d30: 0xc115ee8  jal         func_457BA0
label_470d34:
    if (ctx->pc == 0x470D34u) {
        ctx->pc = 0x470D38u;
        goto label_470d38;
    }
    ctx->pc = 0x470D30u;
    SET_GPR_U32(ctx, 31, 0x470D38u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470D30u, 0x470D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470D38u;
label_470d38:
    // 0x470d38: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470d3c:
    if (ctx->pc == 0x470D3Cu) {
        ctx->pc = 0x470D40u;
        goto label_470d40;
    }
    ctx->pc = 0x470D38u;
    {
        const bool branch_taken_0x470d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470d38) {
            ctx->pc = 0x470DC0u;
            goto label_470dc0;
        }
    }
    ctx->pc = 0x470D40u;
label_470d40:
    // 0x470d40: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x470d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_470d44:
    // 0x470d44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470d48:
    if (ctx->pc == 0x470D48u) {
        ctx->pc = 0x470D4Cu;
        goto label_470d4c;
    }
    ctx->pc = 0x470D44u;
    {
        const bool branch_taken_0x470d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470d44) {
            ctx->pc = 0x470DC0u;
            goto label_470dc0;
        }
    }
    ctx->pc = 0x470D4Cu;
label_470d4c:
    // 0x470d4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470d50:
    // 0x470d50: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470d54:
    // 0x470d54: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x470d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_470d58:
    // 0x470d58: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470d5c:
    // 0x470d5c: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470d60:
    // 0x470d60: 0x24080116  addiu       $t0, $zero, 0x116
    ctx->pc = 0x470d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_470d64:
    // 0x470d64: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470d64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470d68:
    // 0x470d68: 0x25290140  addiu       $t1, $t1, 0x140
    ctx->pc = 0x470d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 320));
label_470d6c:
    // 0x470d6c: 0xc113940  jal         func_44E500
label_470d70:
    if (ctx->pc == 0x470D70u) {
        ctx->pc = 0x470D74u;
        goto label_470d74;
    }
    ctx->pc = 0x470D6Cu;
    SET_GPR_U32(ctx, 31, 0x470D74u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470D6Cu, 0x470D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470D74u;
label_470d74:
    // 0x470d74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470d78:
    // 0x470d78: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470d7c:
    // 0x470d7c: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x470d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_470d80:
    // 0x470d80: 0xc115c24  jal         func_457090
label_470d84:
    if (ctx->pc == 0x470D84u) {
        ctx->pc = 0x470D88u;
        goto label_470d88;
    }
    ctx->pc = 0x470D80u;
    SET_GPR_U32(ctx, 31, 0x470D88u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470D80u, 0x470D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470D88u;
label_470d88:
    // 0x470d88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470d8c:
    // 0x470d8c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x470d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_470d90:
    // 0x470d90: 0x40f809  jalr        $v0
label_470d94:
    if (ctx->pc == 0x470D94u) {
        ctx->pc = 0x470D98u;
        goto label_470d98;
    }
    ctx->pc = 0x470D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470D98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470D90u, 0x470D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470D98u;
label_470d98:
    // 0x470d98: 0xaf82b368  sw          $v0, -0x4C98($gp)
    ctx->pc = 0x470d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947688), GPR_U32(ctx, 2));
label_470d9c:
    // 0x470d9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x470d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_470da0:
    // 0x470da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470da4:
    if (ctx->pc == 0x470DA4u) {
        ctx->pc = 0x470DA8u;
        goto label_470da8;
    }
    ctx->pc = 0x470DA0u;
    {
        const bool branch_taken_0x470da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470da0) {
            ctx->pc = 0x470DB0u;
            goto label_470db0;
        }
    }
    ctx->pc = 0x470DA8u;
label_470da8:
    // 0x470da8: 0xd  break       0
    ctx->pc = 0x470da8u;
    runtime->handleBreak(rdram, ctx);
label_470dac:
    // 0x470dac: 0x0  nop
    ctx->pc = 0x470dacu;
    // NOP
label_470db0:
    // 0x470db0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470db4:
    // 0x470db4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470db8:
    // 0x470db8: 0xc11392c  jal         func_44E4B0
label_470dbc:
    if (ctx->pc == 0x470DBCu) {
        ctx->pc = 0x470DC0u;
        goto label_470dc0;
    }
    ctx->pc = 0x470DB8u;
    SET_GPR_U32(ctx, 31, 0x470DC0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470DB8u, 0x470DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470DC0u;
label_470dc0:
    // 0x470dc0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x470dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_470dc4:
    // 0x470dc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_470dc8:
    if (ctx->pc == 0x470DC8u) {
        ctx->pc = 0x470DCCu;
        goto label_470dcc;
    }
    ctx->pc = 0x470DC4u;
    {
        const bool branch_taken_0x470dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470dc4) {
            ctx->pc = 0x470DD8u;
            goto label_470dd8;
        }
    }
    ctx->pc = 0x470DCCu;
label_470dcc:
    // 0x470dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x470dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470dd0:
    // 0x470dd0: 0x1000000f  b           . + 4 + (0xF << 2)
label_470dd4:
    if (ctx->pc == 0x470DD4u) {
        ctx->pc = 0x470DD8u;
        goto label_470dd8;
    }
    ctx->pc = 0x470DD0u;
    {
        const bool branch_taken_0x470dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470dd0) {
            ctx->pc = 0x470E10u;
            goto label_470e10;
        }
    }
    ctx->pc = 0x470DD8u;
label_470dd8:
    // 0x470dd8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x470dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_470ddc:
    // 0x470ddc: 0xc0eb34e  jal         func_3ACD38
label_470de0:
    if (ctx->pc == 0x470DE0u) {
        ctx->pc = 0x470DE4u;
        goto label_470de4;
    }
    ctx->pc = 0x470DDCu;
    SET_GPR_U32(ctx, 31, 0x470DE4u);
    ctx->pc = 0x3ACD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD38u, 0x470DDCu, 0x470DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470DE4u;
label_470de4:
    // 0x470de4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x470de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470de8:
    // 0x470de8: 0xc0eb4ac  jal         func_3AD2B0
label_470dec:
    if (ctx->pc == 0x470DECu) {
        ctx->pc = 0x470DF0u;
        goto label_470df0;
    }
    ctx->pc = 0x470DE8u;
    SET_GPR_U32(ctx, 31, 0x470DF0u);
    ctx->pc = 0x3AD2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD2B0u, 0x470DE8u, 0x470DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470DF0u;
label_470df0:
    // 0x470df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x470df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470df4:
    // 0x470df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x470df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470df8:
    // 0x470df8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x470df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_470dfc:
    // 0x470dfc: 0x24a50130  addiu       $a1, $a1, 0x130
    ctx->pc = 0x470dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
label_470e00:
    // 0x470e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x470e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470e04:
    // 0x470e04: 0xc1082d8  jal         func_420B60
label_470e08:
    if (ctx->pc == 0x470E08u) {
        ctx->pc = 0x470E0Cu;
        goto label_470e0c;
    }
    ctx->pc = 0x470E04u;
    SET_GPR_U32(ctx, 31, 0x470E0Cu);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x470E04u, 0x470E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470E0Cu;
label_470e0c:
    // 0x470e0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x470e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470e10:
    // 0x470e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x470e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_470e14:
    // 0x470e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x470e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_470e18:
    // 0x470e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x470e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_470e1c:
    // 0x470e1c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x470e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_470e20:
    // 0x470e20: 0x3e00008  jr          $ra
label_470e24:
    if (ctx->pc == 0x470E24u) {
        ctx->pc = 0x470E28u;
        goto label_470e28;
    }
    ctx->pc = 0x470E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470E28u;
label_470e28:
    // 0x470e28: 0x0  nop
    ctx->pc = 0x470e28u;
    // NOP
label_470e2c:
    // 0x470e2c: 0x0  nop
    ctx->pc = 0x470e2cu;
    // NOP
    ctx->pc = 0x470e30u;
}
