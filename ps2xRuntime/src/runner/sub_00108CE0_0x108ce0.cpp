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

// Function: sub_00108CE0
// Address: 0x108ce0 - 0x108ee0
void sub_00108CE0_0x108ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108CE0_0x108ce0");
#endif

    switch (ctx->pc) {
        case 0x108ce0u: goto label_108ce0;
        case 0x108ce4u: goto label_108ce4;
        case 0x108ce8u: goto label_108ce8;
        case 0x108cecu: goto label_108cec;
        case 0x108cf0u: goto label_108cf0;
        case 0x108cf4u: goto label_108cf4;
        case 0x108cf8u: goto label_108cf8;
        case 0x108cfcu: goto label_108cfc;
        case 0x108d00u: goto label_108d00;
        case 0x108d04u: goto label_108d04;
        case 0x108d08u: goto label_108d08;
        case 0x108d0cu: goto label_108d0c;
        case 0x108d10u: goto label_108d10;
        case 0x108d14u: goto label_108d14;
        case 0x108d18u: goto label_108d18;
        case 0x108d1cu: goto label_108d1c;
        case 0x108d20u: goto label_108d20;
        case 0x108d24u: goto label_108d24;
        case 0x108d28u: goto label_108d28;
        case 0x108d2cu: goto label_108d2c;
        case 0x108d30u: goto label_108d30;
        case 0x108d34u: goto label_108d34;
        case 0x108d38u: goto label_108d38;
        case 0x108d3cu: goto label_108d3c;
        case 0x108d40u: goto label_108d40;
        case 0x108d44u: goto label_108d44;
        case 0x108d48u: goto label_108d48;
        case 0x108d4cu: goto label_108d4c;
        case 0x108d50u: goto label_108d50;
        case 0x108d54u: goto label_108d54;
        case 0x108d58u: goto label_108d58;
        case 0x108d5cu: goto label_108d5c;
        case 0x108d60u: goto label_108d60;
        case 0x108d64u: goto label_108d64;
        case 0x108d68u: goto label_108d68;
        case 0x108d6cu: goto label_108d6c;
        case 0x108d70u: goto label_108d70;
        case 0x108d74u: goto label_108d74;
        case 0x108d78u: goto label_108d78;
        case 0x108d7cu: goto label_108d7c;
        case 0x108d80u: goto label_108d80;
        case 0x108d84u: goto label_108d84;
        case 0x108d88u: goto label_108d88;
        case 0x108d8cu: goto label_108d8c;
        case 0x108d90u: goto label_108d90;
        case 0x108d94u: goto label_108d94;
        case 0x108d98u: goto label_108d98;
        case 0x108d9cu: goto label_108d9c;
        case 0x108da0u: goto label_108da0;
        case 0x108da4u: goto label_108da4;
        case 0x108da8u: goto label_108da8;
        case 0x108dacu: goto label_108dac;
        case 0x108db0u: goto label_108db0;
        case 0x108db4u: goto label_108db4;
        case 0x108db8u: goto label_108db8;
        case 0x108dbcu: goto label_108dbc;
        case 0x108dc0u: goto label_108dc0;
        case 0x108dc4u: goto label_108dc4;
        case 0x108dc8u: goto label_108dc8;
        case 0x108dccu: goto label_108dcc;
        case 0x108dd0u: goto label_108dd0;
        case 0x108dd4u: goto label_108dd4;
        case 0x108dd8u: goto label_108dd8;
        case 0x108ddcu: goto label_108ddc;
        case 0x108de0u: goto label_108de0;
        case 0x108de4u: goto label_108de4;
        case 0x108de8u: goto label_108de8;
        case 0x108decu: goto label_108dec;
        case 0x108df0u: goto label_108df0;
        case 0x108df4u: goto label_108df4;
        case 0x108df8u: goto label_108df8;
        case 0x108dfcu: goto label_108dfc;
        case 0x108e00u: goto label_108e00;
        case 0x108e04u: goto label_108e04;
        case 0x108e08u: goto label_108e08;
        case 0x108e0cu: goto label_108e0c;
        case 0x108e10u: goto label_108e10;
        case 0x108e14u: goto label_108e14;
        case 0x108e18u: goto label_108e18;
        case 0x108e1cu: goto label_108e1c;
        case 0x108e20u: goto label_108e20;
        case 0x108e24u: goto label_108e24;
        case 0x108e28u: goto label_108e28;
        case 0x108e2cu: goto label_108e2c;
        case 0x108e30u: goto label_108e30;
        case 0x108e34u: goto label_108e34;
        case 0x108e38u: goto label_108e38;
        case 0x108e3cu: goto label_108e3c;
        case 0x108e40u: goto label_108e40;
        case 0x108e44u: goto label_108e44;
        case 0x108e48u: goto label_108e48;
        case 0x108e4cu: goto label_108e4c;
        case 0x108e50u: goto label_108e50;
        case 0x108e54u: goto label_108e54;
        case 0x108e58u: goto label_108e58;
        case 0x108e5cu: goto label_108e5c;
        case 0x108e60u: goto label_108e60;
        case 0x108e64u: goto label_108e64;
        case 0x108e68u: goto label_108e68;
        case 0x108e6cu: goto label_108e6c;
        case 0x108e70u: goto label_108e70;
        case 0x108e74u: goto label_108e74;
        case 0x108e78u: goto label_108e78;
        case 0x108e7cu: goto label_108e7c;
        case 0x108e80u: goto label_108e80;
        case 0x108e84u: goto label_108e84;
        case 0x108e88u: goto label_108e88;
        case 0x108e8cu: goto label_108e8c;
        case 0x108e90u: goto label_108e90;
        case 0x108e94u: goto label_108e94;
        case 0x108e98u: goto label_108e98;
        case 0x108e9cu: goto label_108e9c;
        case 0x108ea0u: goto label_108ea0;
        case 0x108ea4u: goto label_108ea4;
        case 0x108ea8u: goto label_108ea8;
        case 0x108eacu: goto label_108eac;
        case 0x108eb0u: goto label_108eb0;
        case 0x108eb4u: goto label_108eb4;
        case 0x108eb8u: goto label_108eb8;
        case 0x108ebcu: goto label_108ebc;
        case 0x108ec0u: goto label_108ec0;
        case 0x108ec4u: goto label_108ec4;
        case 0x108ec8u: goto label_108ec8;
        case 0x108eccu: goto label_108ecc;
        case 0x108ed0u: goto label_108ed0;
        case 0x108ed4u: goto label_108ed4;
        case 0x108ed8u: goto label_108ed8;
        case 0x108edcu: goto label_108edc;
        default: break;
    }

    ctx->pc = 0x108ce0u;

label_108ce0:
    // 0x108ce0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x108ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_108ce4:
    // 0x108ce4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x108ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_108ce8:
    // 0x108ce8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x108ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_108cec:
    // 0x108cec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x108cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_108cf0:
    // 0x108cf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_108cf4:
    // 0x108cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_108cf8:
    // 0x108cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_108cfc:
    // 0x108cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_108d00:
    // 0x108d00: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x108d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_108d04:
    // 0x108d04: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x108d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_108d08:
    // 0x108d08: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x108d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_108d0c:
    // 0x108d0c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x108d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_108d10:
    // 0x108d10: 0xc085538  jal         func_2154E0
label_108d14:
    if (ctx->pc == 0x108D14u) {
        ctx->pc = 0x108D18u;
        goto label_108d18;
    }
    ctx->pc = 0x108D10u;
    SET_GPR_U32(ctx, 31, 0x108D18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x108D10u, 0x108D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D18u;
label_108d18:
    // 0x108d18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x108d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108d1c:
    // 0x108d1c: 0x10120037  beq         $zero, $s2, . + 4 + (0x37 << 2)
label_108d20:
    if (ctx->pc == 0x108D20u) {
        ctx->pc = 0x108D24u;
        goto label_108d24;
    }
    ctx->pc = 0x108D1Cu;
    {
        const bool branch_taken_0x108d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x108d1c) {
            ctx->pc = 0x108DFCu;
            goto label_108dfc;
        }
    }
    ctx->pc = 0x108D24u;
label_108d24:
    // 0x108d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108d28:
    // 0x108d28: 0xc091aa0  jal         func_246A80
label_108d2c:
    if (ctx->pc == 0x108D2Cu) {
        ctx->pc = 0x108D30u;
        goto label_108d30;
    }
    ctx->pc = 0x108D28u;
    SET_GPR_U32(ctx, 31, 0x108D30u);
    ctx->pc = 0x246A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A80u, 0x108D28u, 0x108D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D30u;
label_108d30:
    // 0x108d30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x108d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108d34:
    // 0x108d34: 0x10000010  b           . + 4 + (0x10 << 2)
label_108d38:
    if (ctx->pc == 0x108D38u) {
        ctx->pc = 0x108D3Cu;
        goto label_108d3c;
    }
    ctx->pc = 0x108D34u;
    {
        const bool branch_taken_0x108d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108d34) {
            ctx->pc = 0x108D78u;
            goto label_108d78;
        }
    }
    ctx->pc = 0x108D3Cu;
label_108d3c:
    // 0x108d3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_108d40:
    // 0x108d40: 0xc040e7c  jal         func_1039F0
label_108d44:
    if (ctx->pc == 0x108D44u) {
        ctx->pc = 0x108D48u;
        goto label_108d48;
    }
    ctx->pc = 0x108D40u;
    SET_GPR_U32(ctx, 31, 0x108D48u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x108D40u, 0x108D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D48u;
label_108d48:
    // 0x108d48: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x108d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_108d4c:
    // 0x108d4c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x108d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108d50:
    // 0x108d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108d54:
    // 0x108d54: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x108d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_108d58:
    // 0x108d58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108d5c:
    // 0x108d5c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x108d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_108d60:
    // 0x108d60: 0x320f809  jalr        $t9
label_108d64:
    if (ctx->pc == 0x108D64u) {
        ctx->pc = 0x108D68u;
        goto label_108d68;
    }
    ctx->pc = 0x108D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108D68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D60u, 0x108D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108D68u;
label_108d68:
    // 0x108d68: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x108d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108d6c:
    // 0x108d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108d70:
    // 0x108d70: 0xc041018  jal         func_104060
label_108d74:
    if (ctx->pc == 0x108D74u) {
        ctx->pc = 0x108D78u;
        goto label_108d78;
    }
    ctx->pc = 0x108D70u;
    SET_GPR_U32(ctx, 31, 0x108D78u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x108D70u, 0x108D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D78u;
label_108d78:
    // 0x108d78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_108d7c:
    // 0x108d7c: 0xc040e70  jal         func_1039C0
label_108d80:
    if (ctx->pc == 0x108D80u) {
        ctx->pc = 0x108D84u;
        goto label_108d84;
    }
    ctx->pc = 0x108D7Cu;
    SET_GPR_U32(ctx, 31, 0x108D84u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x108D7Cu, 0x108D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D84u;
label_108d84:
    // 0x108d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x108d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_108d88:
    // 0x108d88: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_108d8c:
    if (ctx->pc == 0x108D8Cu) {
        ctx->pc = 0x108D90u;
        goto label_108d90;
    }
    ctx->pc = 0x108D88u;
    {
        const bool branch_taken_0x108d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108d88) {
            ctx->pc = 0x108D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d3c;
        }
    }
    ctx->pc = 0x108D90u;
label_108d90:
    // 0x108d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108d94:
    // 0x108d94: 0xc091aa8  jal         func_246AA0
label_108d98:
    if (ctx->pc == 0x108D98u) {
        ctx->pc = 0x108D9Cu;
        goto label_108d9c;
    }
    ctx->pc = 0x108D94u;
    SET_GPR_U32(ctx, 31, 0x108D9Cu);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x108D94u, 0x108D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D9Cu;
label_108d9c:
    // 0x108d9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x108d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108da0:
    // 0x108da0: 0x10000010  b           . + 4 + (0x10 << 2)
label_108da4:
    if (ctx->pc == 0x108DA4u) {
        ctx->pc = 0x108DA8u;
        goto label_108da8;
    }
    ctx->pc = 0x108DA0u;
    {
        const bool branch_taken_0x108da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108da0) {
            ctx->pc = 0x108DE4u;
            goto label_108de4;
        }
    }
    ctx->pc = 0x108DA8u;
label_108da8:
    // 0x108da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_108dac:
    // 0x108dac: 0xc040e7c  jal         func_1039F0
label_108db0:
    if (ctx->pc == 0x108DB0u) {
        ctx->pc = 0x108DB4u;
        goto label_108db4;
    }
    ctx->pc = 0x108DACu;
    SET_GPR_U32(ctx, 31, 0x108DB4u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x108DACu, 0x108DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DB4u;
label_108db4:
    // 0x108db4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x108db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_108db8:
    // 0x108db8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x108db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108dbc:
    // 0x108dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108dc0:
    // 0x108dc0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x108dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_108dc4:
    // 0x108dc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108dc8:
    // 0x108dc8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x108dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_108dcc:
    // 0x108dcc: 0x320f809  jalr        $t9
label_108dd0:
    if (ctx->pc == 0x108DD0u) {
        ctx->pc = 0x108DD4u;
        goto label_108dd4;
    }
    ctx->pc = 0x108DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108DD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DCCu, 0x108DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108DD4u;
label_108dd4:
    // 0x108dd4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x108dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108dd8:
    // 0x108dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108ddc:
    // 0x108ddc: 0xc041018  jal         func_104060
label_108de0:
    if (ctx->pc == 0x108DE0u) {
        ctx->pc = 0x108DE4u;
        goto label_108de4;
    }
    ctx->pc = 0x108DDCu;
    SET_GPR_U32(ctx, 31, 0x108DE4u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x108DDCu, 0x108DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DE4u;
label_108de4:
    // 0x108de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_108de8:
    // 0x108de8: 0xc040e70  jal         func_1039C0
label_108dec:
    if (ctx->pc == 0x108DECu) {
        ctx->pc = 0x108DF0u;
        goto label_108df0;
    }
    ctx->pc = 0x108DE8u;
    SET_GPR_U32(ctx, 31, 0x108DF0u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x108DE8u, 0x108DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF0u;
label_108df0:
    // 0x108df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x108df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_108df4:
    // 0x108df4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_108df8:
    if (ctx->pc == 0x108DF8u) {
        ctx->pc = 0x108DFCu;
        goto label_108dfc;
    }
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108df4) {
            ctx->pc = 0x108DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108da8;
        }
    }
    ctx->pc = 0x108DFCu;
label_108dfc:
    // 0x108dfc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x108dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108e00:
    // 0x108e00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108e04:
    // 0x108e04: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x108e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_108e08:
    // 0x108e08: 0x320f809  jalr        $t9
label_108e0c:
    if (ctx->pc == 0x108E0Cu) {
        ctx->pc = 0x108E10u;
        goto label_108e10;
    }
    ctx->pc = 0x108E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108E10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E08u, 0x108E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108E10u;
label_108e10:
    // 0x108e10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x108e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e14:
    // 0x108e14: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x108e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_108e18:
    // 0x108e18: 0xc08551c  jal         func_215470
label_108e1c:
    if (ctx->pc == 0x108E1Cu) {
        ctx->pc = 0x108E20u;
        goto label_108e20;
    }
    ctx->pc = 0x108E18u;
    SET_GPR_U32(ctx, 31, 0x108E20u);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x108E18u, 0x108E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E20u;
label_108e20:
    // 0x108e20: 0x16a20013  bne         $s5, $v0, . + 4 + (0x13 << 2)
label_108e24:
    if (ctx->pc == 0x108E24u) {
        ctx->pc = 0x108E28u;
        goto label_108e28;
    }
    ctx->pc = 0x108E20u;
    {
        const bool branch_taken_0x108e20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x108e20) {
            ctx->pc = 0x108E70u;
            goto label_108e70;
        }
    }
    ctx->pc = 0x108E28u;
label_108e28:
    // 0x108e28: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x108e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_108e2c:
    // 0x108e2c: 0xc041008  jal         func_104020
label_108e30:
    if (ctx->pc == 0x108E30u) {
        ctx->pc = 0x108E34u;
        goto label_108e34;
    }
    ctx->pc = 0x108E2Cu;
    SET_GPR_U32(ctx, 31, 0x108E34u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x108E2Cu, 0x108E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E34u;
label_108e34:
    // 0x108e34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e38:
    // 0x108e38: 0x10000008  b           . + 4 + (0x8 << 2)
label_108e3c:
    if (ctx->pc == 0x108E3Cu) {
        ctx->pc = 0x108E40u;
        goto label_108e40;
    }
    ctx->pc = 0x108E38u;
    {
        const bool branch_taken_0x108e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108e38) {
            ctx->pc = 0x108E5Cu;
            goto label_108e5c;
        }
    }
    ctx->pc = 0x108E40u;
label_108e40:
    // 0x108e40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x108e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_108e44:
    // 0x108e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108e48:
    // 0x108e48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108e4c:
    // 0x108e4c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_108e50:
    // 0x108e50: 0x320f809  jalr        $t9
label_108e54:
    if (ctx->pc == 0x108E54u) {
        ctx->pc = 0x108E58u;
        goto label_108e58;
    }
    ctx->pc = 0x108E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108E58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E50u, 0x108E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108E58u;
label_108e58:
    // 0x108e58: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_108e5c:
    // 0x108e5c: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_108e60:
    // 0x108e60: 0xc041000  jal         func_104000
label_108e64:
    if (ctx->pc == 0x108E64u) {
        ctx->pc = 0x108E68u;
        goto label_108e68;
    }
    ctx->pc = 0x108E60u;
    SET_GPR_U32(ctx, 31, 0x108E68u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x108E60u, 0x108E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E68u;
label_108e68:
    // 0x108e68: 0x1622fff5  bne         $s1, $v0, . + 4 + (-0xB << 2)
label_108e6c:
    if (ctx->pc == 0x108E6Cu) {
        ctx->pc = 0x108E70u;
        goto label_108e70;
    }
    ctx->pc = 0x108E68u;
    {
        const bool branch_taken_0x108e68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x108e68) {
            ctx->pc = 0x108E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e40;
        }
    }
    ctx->pc = 0x108E70u;
label_108e70:
    // 0x108e70: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x108e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108e74:
    // 0x108e74: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x108e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_108e78:
    // 0x108e78: 0xc041018  jal         func_104060
label_108e7c:
    if (ctx->pc == 0x108E7Cu) {
        ctx->pc = 0x108E80u;
        goto label_108e80;
    }
    ctx->pc = 0x108E78u;
    SET_GPR_U32(ctx, 31, 0x108E80u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x108E78u, 0x108E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E80u;
label_108e80:
    // 0x108e80: 0xc122470  jal         func_4891C0
label_108e84:
    if (ctx->pc == 0x108E84u) {
        ctx->pc = 0x108E88u;
        goto label_108e88;
    }
    ctx->pc = 0x108E80u;
    SET_GPR_U32(ctx, 31, 0x108E88u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x108E80u, 0x108E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E88u;
label_108e88:
    // 0x108e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e8c:
    // 0x108e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108e90:
    // 0x108e90: 0xc123c84  jal         func_48F210
label_108e94:
    if (ctx->pc == 0x108E94u) {
        ctx->pc = 0x108E98u;
        goto label_108e98;
    }
    ctx->pc = 0x108E90u;
    SET_GPR_U32(ctx, 31, 0x108E98u);
    ctx->pc = 0x48F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F210u, 0x108E90u, 0x108E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E98u;
label_108e98:
    // 0x108e98: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x108e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_108e9c:
    // 0x108e9c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_108ea0:
    // 0x108ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108ea4:
    // 0x108ea4: 0xc0a0694  jal         func_281A50
label_108ea8:
    if (ctx->pc == 0x108EA8u) {
        ctx->pc = 0x108EACu;
        goto label_108eac;
    }
    ctx->pc = 0x108EA4u;
    SET_GPR_U32(ctx, 31, 0x108EACu);
    ctx->pc = 0x281A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A50u, 0x108EA4u, 0x108EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EACu;
label_108eac:
    // 0x108eac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x108eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_108eb0:
    // 0x108eb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x108eb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_108eb4:
    // 0x108eb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x108eb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_108eb8:
    // 0x108eb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_108ebc:
    // 0x108ebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108ec0:
    // 0x108ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_108ec4:
    // 0x108ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_108ec8:
    // 0x108ec8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x108ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_108ecc:
    // 0x108ecc: 0x3e00008  jr          $ra
label_108ed0:
    if (ctx->pc == 0x108ED0u) {
        ctx->pc = 0x108ED4u;
        goto label_108ed4;
    }
    ctx->pc = 0x108ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108ED4u;
label_108ed4:
    // 0x108ed4: 0x0  nop
    ctx->pc = 0x108ed4u;
    // NOP
label_108ed8:
    // 0x108ed8: 0x0  nop
    ctx->pc = 0x108ed8u;
    // NOP
label_108edc:
    // 0x108edc: 0x0  nop
    ctx->pc = 0x108edcu;
    // NOP
    ctx->pc = 0x108ee0u;
}
