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

// Function: sub_00463D20
// Address: 0x463d20 - 0x463fb0
void sub_00463D20_0x463d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463D20_0x463d20");
#endif

    switch (ctx->pc) {
        case 0x463d20u: goto label_463d20;
        case 0x463d24u: goto label_463d24;
        case 0x463d28u: goto label_463d28;
        case 0x463d2cu: goto label_463d2c;
        case 0x463d30u: goto label_463d30;
        case 0x463d34u: goto label_463d34;
        case 0x463d38u: goto label_463d38;
        case 0x463d3cu: goto label_463d3c;
        case 0x463d40u: goto label_463d40;
        case 0x463d44u: goto label_463d44;
        case 0x463d48u: goto label_463d48;
        case 0x463d4cu: goto label_463d4c;
        case 0x463d50u: goto label_463d50;
        case 0x463d54u: goto label_463d54;
        case 0x463d58u: goto label_463d58;
        case 0x463d5cu: goto label_463d5c;
        case 0x463d60u: goto label_463d60;
        case 0x463d64u: goto label_463d64;
        case 0x463d68u: goto label_463d68;
        case 0x463d6cu: goto label_463d6c;
        case 0x463d70u: goto label_463d70;
        case 0x463d74u: goto label_463d74;
        case 0x463d78u: goto label_463d78;
        case 0x463d7cu: goto label_463d7c;
        case 0x463d80u: goto label_463d80;
        case 0x463d84u: goto label_463d84;
        case 0x463d88u: goto label_463d88;
        case 0x463d8cu: goto label_463d8c;
        case 0x463d90u: goto label_463d90;
        case 0x463d94u: goto label_463d94;
        case 0x463d98u: goto label_463d98;
        case 0x463d9cu: goto label_463d9c;
        case 0x463da0u: goto label_463da0;
        case 0x463da4u: goto label_463da4;
        case 0x463da8u: goto label_463da8;
        case 0x463dacu: goto label_463dac;
        case 0x463db0u: goto label_463db0;
        case 0x463db4u: goto label_463db4;
        case 0x463db8u: goto label_463db8;
        case 0x463dbcu: goto label_463dbc;
        case 0x463dc0u: goto label_463dc0;
        case 0x463dc4u: goto label_463dc4;
        case 0x463dc8u: goto label_463dc8;
        case 0x463dccu: goto label_463dcc;
        case 0x463dd0u: goto label_463dd0;
        case 0x463dd4u: goto label_463dd4;
        case 0x463dd8u: goto label_463dd8;
        case 0x463ddcu: goto label_463ddc;
        case 0x463de0u: goto label_463de0;
        case 0x463de4u: goto label_463de4;
        case 0x463de8u: goto label_463de8;
        case 0x463decu: goto label_463dec;
        case 0x463df0u: goto label_463df0;
        case 0x463df4u: goto label_463df4;
        case 0x463df8u: goto label_463df8;
        case 0x463dfcu: goto label_463dfc;
        case 0x463e00u: goto label_463e00;
        case 0x463e04u: goto label_463e04;
        case 0x463e08u: goto label_463e08;
        case 0x463e0cu: goto label_463e0c;
        case 0x463e10u: goto label_463e10;
        case 0x463e14u: goto label_463e14;
        case 0x463e18u: goto label_463e18;
        case 0x463e1cu: goto label_463e1c;
        case 0x463e20u: goto label_463e20;
        case 0x463e24u: goto label_463e24;
        case 0x463e28u: goto label_463e28;
        case 0x463e2cu: goto label_463e2c;
        case 0x463e30u: goto label_463e30;
        case 0x463e34u: goto label_463e34;
        case 0x463e38u: goto label_463e38;
        case 0x463e3cu: goto label_463e3c;
        case 0x463e40u: goto label_463e40;
        case 0x463e44u: goto label_463e44;
        case 0x463e48u: goto label_463e48;
        case 0x463e4cu: goto label_463e4c;
        case 0x463e50u: goto label_463e50;
        case 0x463e54u: goto label_463e54;
        case 0x463e58u: goto label_463e58;
        case 0x463e5cu: goto label_463e5c;
        case 0x463e60u: goto label_463e60;
        case 0x463e64u: goto label_463e64;
        case 0x463e68u: goto label_463e68;
        case 0x463e6cu: goto label_463e6c;
        case 0x463e70u: goto label_463e70;
        case 0x463e74u: goto label_463e74;
        case 0x463e78u: goto label_463e78;
        case 0x463e7cu: goto label_463e7c;
        case 0x463e80u: goto label_463e80;
        case 0x463e84u: goto label_463e84;
        case 0x463e88u: goto label_463e88;
        case 0x463e8cu: goto label_463e8c;
        case 0x463e90u: goto label_463e90;
        case 0x463e94u: goto label_463e94;
        case 0x463e98u: goto label_463e98;
        case 0x463e9cu: goto label_463e9c;
        case 0x463ea0u: goto label_463ea0;
        case 0x463ea4u: goto label_463ea4;
        case 0x463ea8u: goto label_463ea8;
        case 0x463eacu: goto label_463eac;
        case 0x463eb0u: goto label_463eb0;
        case 0x463eb4u: goto label_463eb4;
        case 0x463eb8u: goto label_463eb8;
        case 0x463ebcu: goto label_463ebc;
        case 0x463ec0u: goto label_463ec0;
        case 0x463ec4u: goto label_463ec4;
        case 0x463ec8u: goto label_463ec8;
        case 0x463eccu: goto label_463ecc;
        case 0x463ed0u: goto label_463ed0;
        case 0x463ed4u: goto label_463ed4;
        case 0x463ed8u: goto label_463ed8;
        case 0x463edcu: goto label_463edc;
        case 0x463ee0u: goto label_463ee0;
        case 0x463ee4u: goto label_463ee4;
        case 0x463ee8u: goto label_463ee8;
        case 0x463eecu: goto label_463eec;
        case 0x463ef0u: goto label_463ef0;
        case 0x463ef4u: goto label_463ef4;
        case 0x463ef8u: goto label_463ef8;
        case 0x463efcu: goto label_463efc;
        case 0x463f00u: goto label_463f00;
        case 0x463f04u: goto label_463f04;
        case 0x463f08u: goto label_463f08;
        case 0x463f0cu: goto label_463f0c;
        case 0x463f10u: goto label_463f10;
        case 0x463f14u: goto label_463f14;
        case 0x463f18u: goto label_463f18;
        case 0x463f1cu: goto label_463f1c;
        case 0x463f20u: goto label_463f20;
        case 0x463f24u: goto label_463f24;
        case 0x463f28u: goto label_463f28;
        case 0x463f2cu: goto label_463f2c;
        case 0x463f30u: goto label_463f30;
        case 0x463f34u: goto label_463f34;
        case 0x463f38u: goto label_463f38;
        case 0x463f3cu: goto label_463f3c;
        case 0x463f40u: goto label_463f40;
        case 0x463f44u: goto label_463f44;
        case 0x463f48u: goto label_463f48;
        case 0x463f4cu: goto label_463f4c;
        case 0x463f50u: goto label_463f50;
        case 0x463f54u: goto label_463f54;
        case 0x463f58u: goto label_463f58;
        case 0x463f5cu: goto label_463f5c;
        case 0x463f60u: goto label_463f60;
        case 0x463f64u: goto label_463f64;
        case 0x463f68u: goto label_463f68;
        case 0x463f6cu: goto label_463f6c;
        case 0x463f70u: goto label_463f70;
        case 0x463f74u: goto label_463f74;
        case 0x463f78u: goto label_463f78;
        case 0x463f7cu: goto label_463f7c;
        case 0x463f80u: goto label_463f80;
        case 0x463f84u: goto label_463f84;
        case 0x463f88u: goto label_463f88;
        case 0x463f8cu: goto label_463f8c;
        case 0x463f90u: goto label_463f90;
        case 0x463f94u: goto label_463f94;
        case 0x463f98u: goto label_463f98;
        case 0x463f9cu: goto label_463f9c;
        case 0x463fa0u: goto label_463fa0;
        case 0x463fa4u: goto label_463fa4;
        case 0x463fa8u: goto label_463fa8;
        case 0x463facu: goto label_463fac;
        default: break;
    }

    ctx->pc = 0x463d20u;

label_463d20:
    // 0x463d20: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x463d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_463d24:
    // 0x463d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_463d28:
    // 0x463d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_463d2c:
    // 0x463d2c: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x463d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_463d30:
    // 0x463d30: 0xafa502d0  sw          $a1, 0x2D0($sp)
    ctx->pc = 0x463d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 5));
label_463d34:
    // 0x463d34: 0xafa602e0  sw          $a2, 0x2E0($sp)
    ctx->pc = 0x463d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 6));
label_463d38:
    // 0x463d38: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x463d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_463d3c:
    // 0x463d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463d40:
    // 0x463d40: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_463d44:
    if (ctx->pc == 0x463D44u) {
        ctx->pc = 0x463D48u;
        goto label_463d48;
    }
    ctx->pc = 0x463D40u;
    {
        const bool branch_taken_0x463d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x463d40) {
            ctx->pc = 0x463DE0u;
            goto label_463de0;
        }
    }
    ctx->pc = 0x463D48u;
label_463d48:
    // 0x463d48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_463d4c:
    if (ctx->pc == 0x463D4Cu) {
        ctx->pc = 0x463D50u;
        goto label_463d50;
    }
    ctx->pc = 0x463D48u;
    {
        const bool branch_taken_0x463d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x463d48) {
            ctx->pc = 0x463D58u;
            goto label_463d58;
        }
    }
    ctx->pc = 0x463D50u;
label_463d50:
    // 0x463d50: 0x10000068  b           . + 4 + (0x68 << 2)
label_463d54:
    if (ctx->pc == 0x463D54u) {
        ctx->pc = 0x463D58u;
        goto label_463d58;
    }
    ctx->pc = 0x463D50u;
    {
        const bool branch_taken_0x463d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463d50) {
            ctx->pc = 0x463EF4u;
            goto label_463ef4;
        }
    }
    ctx->pc = 0x463D58u;
label_463d58:
    // 0x463d58: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x463d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_463d5c:
    // 0x463d5c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463d60:
    // 0x463d60: 0x24a5f420  addiu       $a1, $a1, -0xBE0
    ctx->pc = 0x463d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964256));
label_463d64:
    // 0x463d64: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x463d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_463d68:
    // 0x463d68: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x463d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_463d6c:
    // 0x463d6c: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x463d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_463d70:
    // 0x463d70: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x463d70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_463d74:
    // 0x463d74: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x463d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_463d78:
    // 0x463d78: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x463d78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_463d7c:
    // 0x463d7c: 0x25294e5c  addiu       $t1, $t1, 0x4E5C
    ctx->pc = 0x463d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20060));
label_463d80:
    // 0x463d80: 0xc0bc3e2  jal         func_2F0F88
label_463d84:
    if (ctx->pc == 0x463D84u) {
        ctx->pc = 0x463D88u;
        goto label_463d88;
    }
    ctx->pc = 0x463D80u;
    SET_GPR_U32(ctx, 31, 0x463D88u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x463D80u, 0x463D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463D88u;
label_463d88:
    // 0x463d88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463d8c:
    // 0x463d8c: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x463d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_463d90:
    // 0x463d90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463d94:
    // 0x463d94: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x463d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_463d98:
    // 0x463d98: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x463d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_463d9c:
    // 0x463d9c: 0xc0c3e4e  jal         func_30F938
label_463da0:
    if (ctx->pc == 0x463DA0u) {
        ctx->pc = 0x463DA4u;
        goto label_463da4;
    }
    ctx->pc = 0x463D9Cu;
    SET_GPR_U32(ctx, 31, 0x463DA4u);
    ctx->pc = 0x30F938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F938u, 0x463D9Cu, 0x463DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463DA4u;
label_463da4:
    // 0x463da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463da8:
    // 0x463da8: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_463dac:
    if (ctx->pc == 0x463DACu) {
        ctx->pc = 0x463DB0u;
        goto label_463db0;
    }
    ctx->pc = 0x463DA8u;
    {
        const bool branch_taken_0x463da8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x463da8) {
            ctx->pc = 0x463DCCu;
            goto label_463dcc;
        }
    }
    ctx->pc = 0x463DB0u;
label_463db0:
    // 0x463db0: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x463db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_463db4:
    // 0x463db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463db8:
    // 0x463db8: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463dbc:
    // 0x463dbc: 0xc1181ac  jal         func_4606B0
label_463dc0:
    if (ctx->pc == 0x463DC0u) {
        ctx->pc = 0x463DC4u;
        goto label_463dc4;
    }
    ctx->pc = 0x463DBCu;
    SET_GPR_U32(ctx, 31, 0x463DC4u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463DBCu, 0x463DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463DC4u;
label_463dc4:
    // 0x463dc4: 0x10000074  b           . + 4 + (0x74 << 2)
label_463dc8:
    if (ctx->pc == 0x463DC8u) {
        ctx->pc = 0x463DCCu;
        goto label_463dcc;
    }
    ctx->pc = 0x463DC4u;
    {
        const bool branch_taken_0x463dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463dc4) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463DCCu;
label_463dcc:
    // 0x463dcc: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x463dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_463dd0:
    // 0x463dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x463dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_463dd4:
    // 0x463dd4: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x463dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_463dd8:
    // 0x463dd8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_463ddc:
    if (ctx->pc == 0x463DDCu) {
        ctx->pc = 0x463DE0u;
        goto label_463de0;
    }
    ctx->pc = 0x463DD8u;
    {
        const bool branch_taken_0x463dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463dd8) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463DE0u;
label_463de0:
    // 0x463de0: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x463de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_463de4:
    // 0x463de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463de8:
    // 0x463de8: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_463dec:
    if (ctx->pc == 0x463DECu) {
        ctx->pc = 0x463DF0u;
        goto label_463df0;
    }
    ctx->pc = 0x463DE8u;
    {
        const bool branch_taken_0x463de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x463de8) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463DF0u;
label_463df0:
    // 0x463df0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x463df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_463df4:
    // 0x463df4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x463df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_463df8:
    // 0x463df8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x463df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_463dfc:
    // 0x463dfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x463dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_463e00:
    // 0x463e00: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_463e04:
    if (ctx->pc == 0x463E04u) {
        ctx->pc = 0x463E08u;
        goto label_463e08;
    }
    ctx->pc = 0x463E00u;
    {
        const bool branch_taken_0x463e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x463e00) {
            ctx->pc = 0x463EB0u;
            goto label_463eb0;
        }
    }
    ctx->pc = 0x463E08u;
label_463e08:
    // 0x463e08: 0x8f82b288  lw          $v0, -0x4D78($gp)
    ctx->pc = 0x463e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947464)));
label_463e0c:
    // 0x463e0c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_463e10:
    if (ctx->pc == 0x463E10u) {
        ctx->pc = 0x463E14u;
        goto label_463e14;
    }
    ctx->pc = 0x463E0Cu;
    {
        const bool branch_taken_0x463e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463e0c) {
            ctx->pc = 0x463EB0u;
            goto label_463eb0;
        }
    }
    ctx->pc = 0x463E14u;
label_463e14:
    // 0x463e14: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x463e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463e18:
    // 0x463e18: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463e1c:
    // 0x463e1c: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x463e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_463e20:
    // 0x463e20: 0xc115ee8  jal         func_457BA0
label_463e24:
    if (ctx->pc == 0x463E24u) {
        ctx->pc = 0x463E28u;
        goto label_463e28;
    }
    ctx->pc = 0x463E20u;
    SET_GPR_U32(ctx, 31, 0x463E28u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x463E20u, 0x463E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463E28u;
label_463e28:
    // 0x463e28: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_463e2c:
    if (ctx->pc == 0x463E2Cu) {
        ctx->pc = 0x463E30u;
        goto label_463e30;
    }
    ctx->pc = 0x463E28u;
    {
        const bool branch_taken_0x463e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463e28) {
            ctx->pc = 0x463EB0u;
            goto label_463eb0;
        }
    }
    ctx->pc = 0x463E30u;
label_463e30:
    // 0x463e30: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x463e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_463e34:
    // 0x463e34: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_463e38:
    if (ctx->pc == 0x463E38u) {
        ctx->pc = 0x463E3Cu;
        goto label_463e3c;
    }
    ctx->pc = 0x463E34u;
    {
        const bool branch_taken_0x463e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463e34) {
            ctx->pc = 0x463EB0u;
            goto label_463eb0;
        }
    }
    ctx->pc = 0x463E3Cu;
label_463e3c:
    // 0x463e3c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x463e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_463e40:
    // 0x463e40: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463e44:
    // 0x463e44: 0x8fa602b4  lw          $a2, 0x2B4($sp)
    ctx->pc = 0x463e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_463e48:
    // 0x463e48: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463e48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_463e4c:
    // 0x463e4c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x463e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_463e50:
    // 0x463e50: 0x240809dd  addiu       $t0, $zero, 0x9DD
    ctx->pc = 0x463e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2525));
label_463e54:
    // 0x463e54: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x463e54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_463e58:
    // 0x463e58: 0x2529f430  addiu       $t1, $t1, -0xBD0
    ctx->pc = 0x463e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964272));
label_463e5c:
    // 0x463e5c: 0xc113940  jal         func_44E500
label_463e60:
    if (ctx->pc == 0x463E60u) {
        ctx->pc = 0x463E64u;
        goto label_463e64;
    }
    ctx->pc = 0x463E5Cu;
    SET_GPR_U32(ctx, 31, 0x463E64u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x463E5Cu, 0x463E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463E64u;
label_463e64:
    // 0x463e64: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x463e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_463e68:
    // 0x463e68: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463e6c:
    // 0x463e6c: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x463e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_463e70:
    // 0x463e70: 0xc115c24  jal         func_457090
label_463e74:
    if (ctx->pc == 0x463E74u) {
        ctx->pc = 0x463E78u;
        goto label_463e78;
    }
    ctx->pc = 0x463E70u;
    SET_GPR_U32(ctx, 31, 0x463E78u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x463E70u, 0x463E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463E78u;
label_463e78:
    // 0x463e78: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x463e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_463e7c:
    // 0x463e7c: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x463e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_463e80:
    // 0x463e80: 0x40f809  jalr        $v0
label_463e84:
    if (ctx->pc == 0x463E84u) {
        ctx->pc = 0x463E88u;
        goto label_463e88;
    }
    ctx->pc = 0x463E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463E88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463E80u, 0x463E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463E88u;
label_463e88:
    // 0x463e88: 0xaf82b288  sw          $v0, -0x4D78($gp)
    ctx->pc = 0x463e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947464), GPR_U32(ctx, 2));
label_463e8c:
    // 0x463e8c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x463e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_463e90:
    // 0x463e90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_463e94:
    if (ctx->pc == 0x463E94u) {
        ctx->pc = 0x463E98u;
        goto label_463e98;
    }
    ctx->pc = 0x463E90u;
    {
        const bool branch_taken_0x463e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463e90) {
            ctx->pc = 0x463EA0u;
            goto label_463ea0;
        }
    }
    ctx->pc = 0x463E98u;
label_463e98:
    // 0x463e98: 0xd  break       0
    ctx->pc = 0x463e98u;
    runtime->handleBreak(rdram, ctx);
label_463e9c:
    // 0x463e9c: 0x0  nop
    ctx->pc = 0x463e9cu;
    // NOP
label_463ea0:
    // 0x463ea0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x463ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_463ea4:
    // 0x463ea4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x463ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463ea8:
    // 0x463ea8: 0xc11392c  jal         func_44E4B0
label_463eac:
    if (ctx->pc == 0x463EACu) {
        ctx->pc = 0x463EB0u;
        goto label_463eb0;
    }
    ctx->pc = 0x463EA8u;
    SET_GPR_U32(ctx, 31, 0x463EB0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x463EA8u, 0x463EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463EB0u;
label_463eb0:
    // 0x463eb0: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x463eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_463eb4:
    // 0x463eb4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_463eb8:
    if (ctx->pc == 0x463EB8u) {
        ctx->pc = 0x463EBCu;
        goto label_463ebc;
    }
    ctx->pc = 0x463EB4u;
    {
        const bool branch_taken_0x463eb4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x463eb4) {
            ctx->pc = 0x463EDCu;
            goto label_463edc;
        }
    }
    ctx->pc = 0x463EBCu;
label_463ebc:
    // 0x463ebc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x463ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_463ec0:
    // 0x463ec0: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x463ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_463ec4:
    // 0x463ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463ec8:
    // 0x463ec8: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463ecc:
    // 0x463ecc: 0xc1181ac  jal         func_4606B0
label_463ed0:
    if (ctx->pc == 0x463ED0u) {
        ctx->pc = 0x463ED4u;
        goto label_463ed4;
    }
    ctx->pc = 0x463ECCu;
    SET_GPR_U32(ctx, 31, 0x463ED4u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463ECCu, 0x463ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463ED4u;
label_463ed4:
    // 0x463ed4: 0x10000030  b           . + 4 + (0x30 << 2)
label_463ed8:
    if (ctx->pc == 0x463ED8u) {
        ctx->pc = 0x463EDCu;
        goto label_463edc;
    }
    ctx->pc = 0x463ED4u;
    {
        const bool branch_taken_0x463ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463ed4) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463EDCu;
label_463edc:
    // 0x463edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x463edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463ee0:
    // 0x463ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463ee4:
    // 0x463ee4: 0xc1181ac  jal         func_4606B0
label_463ee8:
    if (ctx->pc == 0x463EE8u) {
        ctx->pc = 0x463EECu;
        goto label_463eec;
    }
    ctx->pc = 0x463EE4u;
    SET_GPR_U32(ctx, 31, 0x463EECu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463EE4u, 0x463EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463EECu;
label_463eec:
    // 0x463eec: 0x1000002a  b           . + 4 + (0x2A << 2)
label_463ef0:
    if (ctx->pc == 0x463EF0u) {
        ctx->pc = 0x463EF4u;
        goto label_463ef4;
    }
    ctx->pc = 0x463EECu;
    {
        const bool branch_taken_0x463eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463eec) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463EF4u;
label_463ef4:
    // 0x463ef4: 0x8f83b28c  lw          $v1, -0x4D74($gp)
    ctx->pc = 0x463ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947468)));
label_463ef8:
    // 0x463ef8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_463efc:
    if (ctx->pc == 0x463EFCu) {
        ctx->pc = 0x463F00u;
        goto label_463f00;
    }
    ctx->pc = 0x463EF8u;
    {
        const bool branch_taken_0x463ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463ef8) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463F00u;
label_463f00:
    // 0x463f00: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x463f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463f04:
    // 0x463f04: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463f08:
    // 0x463f08: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x463f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_463f0c:
    // 0x463f0c: 0xc115ee8  jal         func_457BA0
label_463f10:
    if (ctx->pc == 0x463F10u) {
        ctx->pc = 0x463F14u;
        goto label_463f14;
    }
    ctx->pc = 0x463F0Cu;
    SET_GPR_U32(ctx, 31, 0x463F14u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x463F0Cu, 0x463F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463F14u;
label_463f14:
    // 0x463f14: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_463f18:
    if (ctx->pc == 0x463F18u) {
        ctx->pc = 0x463F1Cu;
        goto label_463f1c;
    }
    ctx->pc = 0x463F14u;
    {
        const bool branch_taken_0x463f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463f14) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463F1Cu;
label_463f1c:
    // 0x463f1c: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x463f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_463f20:
    // 0x463f20: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_463f24:
    if (ctx->pc == 0x463F24u) {
        ctx->pc = 0x463F28u;
        goto label_463f28;
    }
    ctx->pc = 0x463F20u;
    {
        const bool branch_taken_0x463f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463f20) {
            ctx->pc = 0x463F98u;
            goto label_463f98;
        }
    }
    ctx->pc = 0x463F28u;
label_463f28:
    // 0x463f28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463f2c:
    // 0x463f2c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463f30:
    // 0x463f30: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x463f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_463f34:
    // 0x463f34: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_463f38:
    // 0x463f38: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x463f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_463f3c:
    // 0x463f3c: 0x240809ec  addiu       $t0, $zero, 0x9EC
    ctx->pc = 0x463f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2540));
label_463f40:
    // 0x463f40: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x463f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_463f44:
    // 0x463f44: 0xc113940  jal         func_44E500
label_463f48:
    if (ctx->pc == 0x463F48u) {
        ctx->pc = 0x463F4Cu;
        goto label_463f4c;
    }
    ctx->pc = 0x463F44u;
    SET_GPR_U32(ctx, 31, 0x463F4Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x463F44u, 0x463F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463F4Cu;
label_463f4c:
    // 0x463f4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463f50:
    // 0x463f50: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463f54:
    // 0x463f54: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x463f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_463f58:
    // 0x463f58: 0xc115c24  jal         func_457090
label_463f5c:
    if (ctx->pc == 0x463F5Cu) {
        ctx->pc = 0x463F60u;
        goto label_463f60;
    }
    ctx->pc = 0x463F58u;
    SET_GPR_U32(ctx, 31, 0x463F60u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x463F58u, 0x463F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463F60u;
label_463f60:
    // 0x463f60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463f64:
    // 0x463f64: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x463f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_463f68:
    // 0x463f68: 0x40f809  jalr        $v0
label_463f6c:
    if (ctx->pc == 0x463F6Cu) {
        ctx->pc = 0x463F70u;
        goto label_463f70;
    }
    ctx->pc = 0x463F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463F70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463F68u, 0x463F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463F70u;
label_463f70:
    // 0x463f70: 0xaf82b28c  sw          $v0, -0x4D74($gp)
    ctx->pc = 0x463f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947468), GPR_U32(ctx, 2));
label_463f74:
    // 0x463f74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x463f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_463f78:
    // 0x463f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_463f7c:
    if (ctx->pc == 0x463F7Cu) {
        ctx->pc = 0x463F80u;
        goto label_463f80;
    }
    ctx->pc = 0x463F78u;
    {
        const bool branch_taken_0x463f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463f78) {
            ctx->pc = 0x463F88u;
            goto label_463f88;
        }
    }
    ctx->pc = 0x463F80u;
label_463f80:
    // 0x463f80: 0xd  break       0
    ctx->pc = 0x463f80u;
    runtime->handleBreak(rdram, ctx);
label_463f84:
    // 0x463f84: 0x0  nop
    ctx->pc = 0x463f84u;
    // NOP
label_463f88:
    // 0x463f88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463f8c:
    // 0x463f8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x463f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463f90:
    // 0x463f90: 0xc11392c  jal         func_44E4B0
label_463f94:
    if (ctx->pc == 0x463F94u) {
        ctx->pc = 0x463F98u;
        goto label_463f98;
    }
    ctx->pc = 0x463F90u;
    SET_GPR_U32(ctx, 31, 0x463F98u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x463F90u, 0x463F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463F98u;
label_463f98:
    // 0x463f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_463f9c:
    // 0x463f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463fa0:
    // 0x463fa0: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x463fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_463fa4:
    // 0x463fa4: 0x3e00008  jr          $ra
label_463fa8:
    if (ctx->pc == 0x463FA8u) {
        ctx->pc = 0x463FACu;
        goto label_463fac;
    }
    ctx->pc = 0x463FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463FACu;
label_463fac:
    // 0x463fac: 0x0  nop
    ctx->pc = 0x463facu;
    // NOP
    ctx->pc = 0x463fb0u;
}
