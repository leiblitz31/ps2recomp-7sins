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

// Function: sub_00145CE0
// Address: 0x145ce0 - 0x145e60
void sub_00145CE0_0x145ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145CE0_0x145ce0");
#endif

    switch (ctx->pc) {
        case 0x145ce0u: goto label_145ce0;
        case 0x145ce4u: goto label_145ce4;
        case 0x145ce8u: goto label_145ce8;
        case 0x145cecu: goto label_145cec;
        case 0x145cf0u: goto label_145cf0;
        case 0x145cf4u: goto label_145cf4;
        case 0x145cf8u: goto label_145cf8;
        case 0x145cfcu: goto label_145cfc;
        case 0x145d00u: goto label_145d00;
        case 0x145d04u: goto label_145d04;
        case 0x145d08u: goto label_145d08;
        case 0x145d0cu: goto label_145d0c;
        case 0x145d10u: goto label_145d10;
        case 0x145d14u: goto label_145d14;
        case 0x145d18u: goto label_145d18;
        case 0x145d1cu: goto label_145d1c;
        case 0x145d20u: goto label_145d20;
        case 0x145d24u: goto label_145d24;
        case 0x145d28u: goto label_145d28;
        case 0x145d2cu: goto label_145d2c;
        case 0x145d30u: goto label_145d30;
        case 0x145d34u: goto label_145d34;
        case 0x145d38u: goto label_145d38;
        case 0x145d3cu: goto label_145d3c;
        case 0x145d40u: goto label_145d40;
        case 0x145d44u: goto label_145d44;
        case 0x145d48u: goto label_145d48;
        case 0x145d4cu: goto label_145d4c;
        case 0x145d50u: goto label_145d50;
        case 0x145d54u: goto label_145d54;
        case 0x145d58u: goto label_145d58;
        case 0x145d5cu: goto label_145d5c;
        case 0x145d60u: goto label_145d60;
        case 0x145d64u: goto label_145d64;
        case 0x145d68u: goto label_145d68;
        case 0x145d6cu: goto label_145d6c;
        case 0x145d70u: goto label_145d70;
        case 0x145d74u: goto label_145d74;
        case 0x145d78u: goto label_145d78;
        case 0x145d7cu: goto label_145d7c;
        case 0x145d80u: goto label_145d80;
        case 0x145d84u: goto label_145d84;
        case 0x145d88u: goto label_145d88;
        case 0x145d8cu: goto label_145d8c;
        case 0x145d90u: goto label_145d90;
        case 0x145d94u: goto label_145d94;
        case 0x145d98u: goto label_145d98;
        case 0x145d9cu: goto label_145d9c;
        case 0x145da0u: goto label_145da0;
        case 0x145da4u: goto label_145da4;
        case 0x145da8u: goto label_145da8;
        case 0x145dacu: goto label_145dac;
        case 0x145db0u: goto label_145db0;
        case 0x145db4u: goto label_145db4;
        case 0x145db8u: goto label_145db8;
        case 0x145dbcu: goto label_145dbc;
        case 0x145dc0u: goto label_145dc0;
        case 0x145dc4u: goto label_145dc4;
        case 0x145dc8u: goto label_145dc8;
        case 0x145dccu: goto label_145dcc;
        case 0x145dd0u: goto label_145dd0;
        case 0x145dd4u: goto label_145dd4;
        case 0x145dd8u: goto label_145dd8;
        case 0x145ddcu: goto label_145ddc;
        case 0x145de0u: goto label_145de0;
        case 0x145de4u: goto label_145de4;
        case 0x145de8u: goto label_145de8;
        case 0x145decu: goto label_145dec;
        case 0x145df0u: goto label_145df0;
        case 0x145df4u: goto label_145df4;
        case 0x145df8u: goto label_145df8;
        case 0x145dfcu: goto label_145dfc;
        case 0x145e00u: goto label_145e00;
        case 0x145e04u: goto label_145e04;
        case 0x145e08u: goto label_145e08;
        case 0x145e0cu: goto label_145e0c;
        case 0x145e10u: goto label_145e10;
        case 0x145e14u: goto label_145e14;
        case 0x145e18u: goto label_145e18;
        case 0x145e1cu: goto label_145e1c;
        case 0x145e20u: goto label_145e20;
        case 0x145e24u: goto label_145e24;
        case 0x145e28u: goto label_145e28;
        case 0x145e2cu: goto label_145e2c;
        case 0x145e30u: goto label_145e30;
        case 0x145e34u: goto label_145e34;
        case 0x145e38u: goto label_145e38;
        case 0x145e3cu: goto label_145e3c;
        case 0x145e40u: goto label_145e40;
        case 0x145e44u: goto label_145e44;
        case 0x145e48u: goto label_145e48;
        case 0x145e4cu: goto label_145e4c;
        case 0x145e50u: goto label_145e50;
        case 0x145e54u: goto label_145e54;
        case 0x145e58u: goto label_145e58;
        case 0x145e5cu: goto label_145e5c;
        default: break;
    }

    ctx->pc = 0x145ce0u;

label_145ce0:
    // 0x145ce0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_145ce4:
    // 0x145ce4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x145ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_145ce8:
    // 0x145ce8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x145ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_145cec:
    // 0x145cec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_145cf0:
    // 0x145cf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_145cf4:
    // 0x145cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_145cf8:
    // 0x145cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_145cfc:
    // 0x145cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_145d00:
    // 0x145d00: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x145d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_145d04:
    // 0x145d04: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x145d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_145d08:
    // 0x145d08: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x145d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_145d0c:
    // 0x145d0c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x145d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_145d10:
    // 0x145d10: 0xc047eb8  jal         func_11FAE0
label_145d14:
    if (ctx->pc == 0x145D14u) {
        ctx->pc = 0x145D18u;
        goto label_145d18;
    }
    ctx->pc = 0x145D10u;
    SET_GPR_U32(ctx, 31, 0x145D18u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x145D10u, 0x145D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D18u;
label_145d18:
    // 0x145d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145d1c:
    // 0x145d1c: 0xc047eb0  jal         func_11FAC0
label_145d20:
    if (ctx->pc == 0x145D20u) {
        ctx->pc = 0x145D24u;
        goto label_145d24;
    }
    ctx->pc = 0x145D1Cu;
    SET_GPR_U32(ctx, 31, 0x145D24u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x145D1Cu, 0x145D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D24u;
label_145d24:
    // 0x145d24: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x145d24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_145d28:
    // 0x145d28: 0x1a400040  blez        $s2, . + 4 + (0x40 << 2)
label_145d2c:
    if (ctx->pc == 0x145D2Cu) {
        ctx->pc = 0x145D30u;
        goto label_145d30;
    }
    ctx->pc = 0x145D28u;
    {
        const bool branch_taken_0x145d28 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x145d28) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145D30u;
label_145d30:
    // 0x145d30: 0x2a410007  slti        $at, $s2, 0x7
    ctx->pc = 0x145d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
label_145d34:
    // 0x145d34: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_145d38:
    if (ctx->pc == 0x145D38u) {
        ctx->pc = 0x145D3Cu;
        goto label_145d3c;
    }
    ctx->pc = 0x145D34u;
    {
        const bool branch_taken_0x145d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d34) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145D3Cu;
label_145d3c:
    // 0x145d3c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x145d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_145d40:
    // 0x145d40: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_145d44:
    if (ctx->pc == 0x145D44u) {
        ctx->pc = 0x145D48u;
        goto label_145d48;
    }
    ctx->pc = 0x145D40u;
    {
        const bool branch_taken_0x145d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d40) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145D48u;
label_145d48:
    // 0x145d48: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x145d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_145d4c:
    // 0x145d4c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x145d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145d50:
    // 0x145d50: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
label_145d54:
    if (ctx->pc == 0x145D54u) {
        ctx->pc = 0x145D58u;
        goto label_145d58;
    }
    ctx->pc = 0x145D50u;
    {
        const bool branch_taken_0x145d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145d50) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145D58u;
label_145d58:
    // 0x145d58: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x145d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_145d5c:
    // 0x145d5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x145d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_145d60:
    // 0x145d60: 0xc085538  jal         func_2154E0
label_145d64:
    if (ctx->pc == 0x145D64u) {
        ctx->pc = 0x145D68u;
        goto label_145d68;
    }
    ctx->pc = 0x145D60u;
    SET_GPR_U32(ctx, 31, 0x145D68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x145D60u, 0x145D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D68u;
label_145d68:
    // 0x145d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145d6c:
    // 0x145d6c: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_145d70:
    if (ctx->pc == 0x145D70u) {
        ctx->pc = 0x145D74u;
        goto label_145d74;
    }
    ctx->pc = 0x145D6Cu;
    {
        const bool branch_taken_0x145d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d6c) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145D74u;
label_145d74:
    // 0x145d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145d78:
    // 0x145d78: 0xc0a85e0  jal         func_2A1780
label_145d7c:
    if (ctx->pc == 0x145D7Cu) {
        ctx->pc = 0x145D80u;
        goto label_145d80;
    }
    ctx->pc = 0x145D78u;
    SET_GPR_U32(ctx, 31, 0x145D80u);
    ctx->pc = 0x2A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1780u, 0x145D78u, 0x145D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D80u;
label_145d80:
    // 0x145d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145d84:
    // 0x145d84: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_145d88:
    if (ctx->pc == 0x145D88u) {
        ctx->pc = 0x145D8Cu;
        goto label_145d8c;
    }
    ctx->pc = 0x145D84u;
    {
        const bool branch_taken_0x145d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d84) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145D8Cu;
label_145d8c:
    // 0x145d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145d90:
    // 0x145d90: 0xc041874  jal         func_1061D0
label_145d94:
    if (ctx->pc == 0x145D94u) {
        ctx->pc = 0x145D98u;
        goto label_145d98;
    }
    ctx->pc = 0x145D90u;
    SET_GPR_U32(ctx, 31, 0x145D98u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x145D90u, 0x145D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D98u;
label_145d98:
    // 0x145d98: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_145d9c:
    if (ctx->pc == 0x145D9Cu) {
        ctx->pc = 0x145DA0u;
        goto label_145da0;
    }
    ctx->pc = 0x145D98u;
    {
        const bool branch_taken_0x145d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d98) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145DA0u;
label_145da0:
    // 0x145da0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x145da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_145da4:
    // 0x145da4: 0xc041b40  jal         func_106D00
label_145da8:
    if (ctx->pc == 0x145DA8u) {
        ctx->pc = 0x145DACu;
        goto label_145dac;
    }
    ctx->pc = 0x145DA4u;
    SET_GPR_U32(ctx, 31, 0x145DACu);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x145DA4u, 0x145DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DACu;
label_145dac:
    // 0x145dac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x145dacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145db0:
    // 0x145db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145db4:
    // 0x145db4: 0xc041b38  jal         func_106CE0
label_145db8:
    if (ctx->pc == 0x145DB8u) {
        ctx->pc = 0x145DBCu;
        goto label_145dbc;
    }
    ctx->pc = 0x145DB4u;
    SET_GPR_U32(ctx, 31, 0x145DBCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x145DB4u, 0x145DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DBCu;
label_145dbc:
    // 0x145dbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145dc0:
    // 0x145dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145dc4:
    // 0x145dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145dc8:
    // 0x145dc8: 0xc047970  jal         func_11E5C0
label_145dcc:
    if (ctx->pc == 0x145DCCu) {
        ctx->pc = 0x145DD0u;
        goto label_145dd0;
    }
    ctx->pc = 0x145DC8u;
    SET_GPR_U32(ctx, 31, 0x145DD0u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x145DC8u, 0x145DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DD0u;
label_145dd0:
    // 0x145dd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x145dd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145dd4:
    // 0x145dd4: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
label_145dd8:
    if (ctx->pc == 0x145DD8u) {
        ctx->pc = 0x145DDCu;
        goto label_145ddc;
    }
    ctx->pc = 0x145DD4u;
    {
        const bool branch_taken_0x145dd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x145dd4) {
            ctx->pc = 0x145E2Cu;
            goto label_145e2c;
        }
    }
    ctx->pc = 0x145DDCu;
label_145ddc:
    // 0x145ddc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x145ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_145de0:
    // 0x145de0: 0xc041b40  jal         func_106D00
label_145de4:
    if (ctx->pc == 0x145DE4u) {
        ctx->pc = 0x145DE8u;
        goto label_145de8;
    }
    ctx->pc = 0x145DE0u;
    SET_GPR_U32(ctx, 31, 0x145DE8u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x145DE0u, 0x145DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DE8u;
label_145de8:
    // 0x145de8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x145de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145dec:
    // 0x145dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145df0:
    // 0x145df0: 0xc041b38  jal         func_106CE0
label_145df4:
    if (ctx->pc == 0x145DF4u) {
        ctx->pc = 0x145DF8u;
        goto label_145df8;
    }
    ctx->pc = 0x145DF0u;
    SET_GPR_U32(ctx, 31, 0x145DF8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x145DF0u, 0x145DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DF8u;
label_145df8:
    // 0x145df8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145dfc:
    // 0x145dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145e00:
    // 0x145e00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x145e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145e04:
    // 0x145e04: 0xc041b24  jal         func_106C90
label_145e08:
    if (ctx->pc == 0x145E08u) {
        ctx->pc = 0x145E0Cu;
        goto label_145e0c;
    }
    ctx->pc = 0x145E04u;
    SET_GPR_U32(ctx, 31, 0x145E0Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x145E04u, 0x145E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E0Cu;
label_145e0c:
    // 0x145e0c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x145e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_145e10:
    // 0x145e10: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x145e10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
label_145e14:
    // 0x145e14: 0x267330a0  addiu       $s3, $s3, 0x30A0
    ctx->pc = 0x145e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12448));
label_145e18:
    // 0x145e18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x145e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_145e1c:
    // 0x145e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145e20:
    // 0x145e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145e24:
    // 0x145e24: 0x260f809  jalr        $s3
label_145e28:
    if (ctx->pc == 0x145E28u) {
        ctx->pc = 0x145E2Cu;
        goto label_145e2c;
    }
    ctx->pc = 0x145E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x145E2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E24u, 0x145E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145E2Cu;
label_145e2c:
    // 0x145e2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x145e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_145e30:
    // 0x145e30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x145e30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_145e34:
    // 0x145e34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x145e34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_145e38:
    // 0x145e38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_145e3c:
    // 0x145e3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145e3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_145e40:
    // 0x145e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145e44:
    // 0x145e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_145e48:
    // 0x145e48: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x145e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_145e4c:
    // 0x145e4c: 0x3e00008  jr          $ra
label_145e50:
    if (ctx->pc == 0x145E50u) {
        ctx->pc = 0x145E54u;
        goto label_145e54;
    }
    ctx->pc = 0x145E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145E54u;
label_145e54:
    // 0x145e54: 0x0  nop
    ctx->pc = 0x145e54u;
    // NOP
label_145e58:
    // 0x145e58: 0x0  nop
    ctx->pc = 0x145e58u;
    // NOP
label_145e5c:
    // 0x145e5c: 0x0  nop
    ctx->pc = 0x145e5cu;
    // NOP
    ctx->pc = 0x145e60u;
}
