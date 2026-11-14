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

// Function: sub_00460D10
// Address: 0x460d10 - 0x460f70
void sub_00460D10_0x460d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460D10_0x460d10");
#endif

    switch (ctx->pc) {
        case 0x460d10u: goto label_460d10;
        case 0x460d14u: goto label_460d14;
        case 0x460d18u: goto label_460d18;
        case 0x460d1cu: goto label_460d1c;
        case 0x460d20u: goto label_460d20;
        case 0x460d24u: goto label_460d24;
        case 0x460d28u: goto label_460d28;
        case 0x460d2cu: goto label_460d2c;
        case 0x460d30u: goto label_460d30;
        case 0x460d34u: goto label_460d34;
        case 0x460d38u: goto label_460d38;
        case 0x460d3cu: goto label_460d3c;
        case 0x460d40u: goto label_460d40;
        case 0x460d44u: goto label_460d44;
        case 0x460d48u: goto label_460d48;
        case 0x460d4cu: goto label_460d4c;
        case 0x460d50u: goto label_460d50;
        case 0x460d54u: goto label_460d54;
        case 0x460d58u: goto label_460d58;
        case 0x460d5cu: goto label_460d5c;
        case 0x460d60u: goto label_460d60;
        case 0x460d64u: goto label_460d64;
        case 0x460d68u: goto label_460d68;
        case 0x460d6cu: goto label_460d6c;
        case 0x460d70u: goto label_460d70;
        case 0x460d74u: goto label_460d74;
        case 0x460d78u: goto label_460d78;
        case 0x460d7cu: goto label_460d7c;
        case 0x460d80u: goto label_460d80;
        case 0x460d84u: goto label_460d84;
        case 0x460d88u: goto label_460d88;
        case 0x460d8cu: goto label_460d8c;
        case 0x460d90u: goto label_460d90;
        case 0x460d94u: goto label_460d94;
        case 0x460d98u: goto label_460d98;
        case 0x460d9cu: goto label_460d9c;
        case 0x460da0u: goto label_460da0;
        case 0x460da4u: goto label_460da4;
        case 0x460da8u: goto label_460da8;
        case 0x460dacu: goto label_460dac;
        case 0x460db0u: goto label_460db0;
        case 0x460db4u: goto label_460db4;
        case 0x460db8u: goto label_460db8;
        case 0x460dbcu: goto label_460dbc;
        case 0x460dc0u: goto label_460dc0;
        case 0x460dc4u: goto label_460dc4;
        case 0x460dc8u: goto label_460dc8;
        case 0x460dccu: goto label_460dcc;
        case 0x460dd0u: goto label_460dd0;
        case 0x460dd4u: goto label_460dd4;
        case 0x460dd8u: goto label_460dd8;
        case 0x460ddcu: goto label_460ddc;
        case 0x460de0u: goto label_460de0;
        case 0x460de4u: goto label_460de4;
        case 0x460de8u: goto label_460de8;
        case 0x460decu: goto label_460dec;
        case 0x460df0u: goto label_460df0;
        case 0x460df4u: goto label_460df4;
        case 0x460df8u: goto label_460df8;
        case 0x460dfcu: goto label_460dfc;
        case 0x460e00u: goto label_460e00;
        case 0x460e04u: goto label_460e04;
        case 0x460e08u: goto label_460e08;
        case 0x460e0cu: goto label_460e0c;
        case 0x460e10u: goto label_460e10;
        case 0x460e14u: goto label_460e14;
        case 0x460e18u: goto label_460e18;
        case 0x460e1cu: goto label_460e1c;
        case 0x460e20u: goto label_460e20;
        case 0x460e24u: goto label_460e24;
        case 0x460e28u: goto label_460e28;
        case 0x460e2cu: goto label_460e2c;
        case 0x460e30u: goto label_460e30;
        case 0x460e34u: goto label_460e34;
        case 0x460e38u: goto label_460e38;
        case 0x460e3cu: goto label_460e3c;
        case 0x460e40u: goto label_460e40;
        case 0x460e44u: goto label_460e44;
        case 0x460e48u: goto label_460e48;
        case 0x460e4cu: goto label_460e4c;
        case 0x460e50u: goto label_460e50;
        case 0x460e54u: goto label_460e54;
        case 0x460e58u: goto label_460e58;
        case 0x460e5cu: goto label_460e5c;
        case 0x460e60u: goto label_460e60;
        case 0x460e64u: goto label_460e64;
        case 0x460e68u: goto label_460e68;
        case 0x460e6cu: goto label_460e6c;
        case 0x460e70u: goto label_460e70;
        case 0x460e74u: goto label_460e74;
        case 0x460e78u: goto label_460e78;
        case 0x460e7cu: goto label_460e7c;
        case 0x460e80u: goto label_460e80;
        case 0x460e84u: goto label_460e84;
        case 0x460e88u: goto label_460e88;
        case 0x460e8cu: goto label_460e8c;
        case 0x460e90u: goto label_460e90;
        case 0x460e94u: goto label_460e94;
        case 0x460e98u: goto label_460e98;
        case 0x460e9cu: goto label_460e9c;
        case 0x460ea0u: goto label_460ea0;
        case 0x460ea4u: goto label_460ea4;
        case 0x460ea8u: goto label_460ea8;
        case 0x460eacu: goto label_460eac;
        case 0x460eb0u: goto label_460eb0;
        case 0x460eb4u: goto label_460eb4;
        case 0x460eb8u: goto label_460eb8;
        case 0x460ebcu: goto label_460ebc;
        case 0x460ec0u: goto label_460ec0;
        case 0x460ec4u: goto label_460ec4;
        case 0x460ec8u: goto label_460ec8;
        case 0x460eccu: goto label_460ecc;
        case 0x460ed0u: goto label_460ed0;
        case 0x460ed4u: goto label_460ed4;
        case 0x460ed8u: goto label_460ed8;
        case 0x460edcu: goto label_460edc;
        case 0x460ee0u: goto label_460ee0;
        case 0x460ee4u: goto label_460ee4;
        case 0x460ee8u: goto label_460ee8;
        case 0x460eecu: goto label_460eec;
        case 0x460ef0u: goto label_460ef0;
        case 0x460ef4u: goto label_460ef4;
        case 0x460ef8u: goto label_460ef8;
        case 0x460efcu: goto label_460efc;
        case 0x460f00u: goto label_460f00;
        case 0x460f04u: goto label_460f04;
        case 0x460f08u: goto label_460f08;
        case 0x460f0cu: goto label_460f0c;
        case 0x460f10u: goto label_460f10;
        case 0x460f14u: goto label_460f14;
        case 0x460f18u: goto label_460f18;
        case 0x460f1cu: goto label_460f1c;
        case 0x460f20u: goto label_460f20;
        case 0x460f24u: goto label_460f24;
        case 0x460f28u: goto label_460f28;
        case 0x460f2cu: goto label_460f2c;
        case 0x460f30u: goto label_460f30;
        case 0x460f34u: goto label_460f34;
        case 0x460f38u: goto label_460f38;
        case 0x460f3cu: goto label_460f3c;
        case 0x460f40u: goto label_460f40;
        case 0x460f44u: goto label_460f44;
        case 0x460f48u: goto label_460f48;
        case 0x460f4cu: goto label_460f4c;
        case 0x460f50u: goto label_460f50;
        case 0x460f54u: goto label_460f54;
        case 0x460f58u: goto label_460f58;
        case 0x460f5cu: goto label_460f5c;
        case 0x460f60u: goto label_460f60;
        case 0x460f64u: goto label_460f64;
        case 0x460f68u: goto label_460f68;
        case 0x460f6cu: goto label_460f6c;
        default: break;
    }

    ctx->pc = 0x460d10u;

label_460d10:
    // 0x460d10: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x460d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_460d14:
    // 0x460d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x460d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_460d18:
    // 0x460d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_460d1c:
    // 0x460d1c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x460d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_460d20:
    // 0x460d20: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x460d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_460d24:
    // 0x460d24: 0xafa602a0  sw          $a2, 0x2A0($sp)
    ctx->pc = 0x460d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 6));
label_460d28:
    // 0x460d28: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x460d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_460d2c:
    // 0x460d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460d30:
    // 0x460d30: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_460d34:
    if (ctx->pc == 0x460D34u) {
        ctx->pc = 0x460D38u;
        goto label_460d38;
    }
    ctx->pc = 0x460D30u;
    {
        const bool branch_taken_0x460d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x460d30) {
            ctx->pc = 0x460D9Cu;
            goto label_460d9c;
        }
    }
    ctx->pc = 0x460D38u;
label_460d38:
    // 0x460d38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_460d3c:
    if (ctx->pc == 0x460D3Cu) {
        ctx->pc = 0x460D40u;
        goto label_460d40;
    }
    ctx->pc = 0x460D38u;
    {
        const bool branch_taken_0x460d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d38) {
            ctx->pc = 0x460D48u;
            goto label_460d48;
        }
    }
    ctx->pc = 0x460D40u;
label_460d40:
    // 0x460d40: 0x1000005b  b           . + 4 + (0x5B << 2)
label_460d44:
    if (ctx->pc == 0x460D44u) {
        ctx->pc = 0x460D48u;
        goto label_460d48;
    }
    ctx->pc = 0x460D40u;
    {
        const bool branch_taken_0x460d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d40) {
            ctx->pc = 0x460EB0u;
            goto label_460eb0;
        }
    }
    ctx->pc = 0x460D48u;
label_460d48:
    // 0x460d48: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460d4c:
    // 0x460d4c: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x460d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_460d50:
    // 0x460d50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460d54:
    // 0x460d54: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x460d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_460d58:
    // 0x460d58: 0xc0c3f92  jal         func_30FE48
label_460d5c:
    if (ctx->pc == 0x460D5Cu) {
        ctx->pc = 0x460D60u;
        goto label_460d60;
    }
    ctx->pc = 0x460D58u;
    SET_GPR_U32(ctx, 31, 0x460D60u);
    ctx->pc = 0x30FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FE48u, 0x460D58u, 0x460D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460D60u;
label_460d60:
    // 0x460d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x460d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_460d64:
    // 0x460d64: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_460d68:
    if (ctx->pc == 0x460D68u) {
        ctx->pc = 0x460D6Cu;
        goto label_460d6c;
    }
    ctx->pc = 0x460D64u;
    {
        const bool branch_taken_0x460d64 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x460d64) {
            ctx->pc = 0x460D88u;
            goto label_460d88;
        }
    }
    ctx->pc = 0x460D6Cu;
label_460d6c:
    // 0x460d6c: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x460d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_460d70:
    // 0x460d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x460d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460d74:
    // 0x460d74: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x460d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_460d78:
    // 0x460d78: 0xc1181ac  jal         func_4606B0
label_460d7c:
    if (ctx->pc == 0x460D7Cu) {
        ctx->pc = 0x460D80u;
        goto label_460d80;
    }
    ctx->pc = 0x460D78u;
    SET_GPR_U32(ctx, 31, 0x460D80u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x460D78u, 0x460D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460D80u;
label_460d80:
    // 0x460d80: 0x10000074  b           . + 4 + (0x74 << 2)
label_460d84:
    if (ctx->pc == 0x460D84u) {
        ctx->pc = 0x460D88u;
        goto label_460d88;
    }
    ctx->pc = 0x460D80u;
    {
        const bool branch_taken_0x460d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d80) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460D88u;
label_460d88:
    // 0x460d88: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x460d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_460d8c:
    // 0x460d8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x460d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_460d90:
    // 0x460d90: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x460d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_460d94:
    // 0x460d94: 0x1000006f  b           . + 4 + (0x6F << 2)
label_460d98:
    if (ctx->pc == 0x460D98u) {
        ctx->pc = 0x460D9Cu;
        goto label_460d9c;
    }
    ctx->pc = 0x460D94u;
    {
        const bool branch_taken_0x460d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d94) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460D9Cu;
label_460d9c:
    // 0x460d9c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x460d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_460da0:
    // 0x460da0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460da4:
    // 0x460da4: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_460da8:
    if (ctx->pc == 0x460DA8u) {
        ctx->pc = 0x460DACu;
        goto label_460dac;
    }
    ctx->pc = 0x460DA4u;
    {
        const bool branch_taken_0x460da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x460da4) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460DACu;
label_460dac:
    // 0x460dac: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x460dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_460db0:
    // 0x460db0: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x460db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
label_460db4:
    // 0x460db4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x460db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_460db8:
    // 0x460db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x460db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460dbc:
    // 0x460dbc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_460dc0:
    if (ctx->pc == 0x460DC0u) {
        ctx->pc = 0x460DC4u;
        goto label_460dc4;
    }
    ctx->pc = 0x460DBCu;
    {
        const bool branch_taken_0x460dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x460dbc) {
            ctx->pc = 0x460E6Cu;
            goto label_460e6c;
        }
    }
    ctx->pc = 0x460DC4u;
label_460dc4:
    // 0x460dc4: 0x8f82b1fc  lw          $v0, -0x4E04($gp)
    ctx->pc = 0x460dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947324)));
label_460dc8:
    // 0x460dc8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_460dcc:
    if (ctx->pc == 0x460DCCu) {
        ctx->pc = 0x460DD0u;
        goto label_460dd0;
    }
    ctx->pc = 0x460DC8u;
    {
        const bool branch_taken_0x460dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460dc8) {
            ctx->pc = 0x460E6Cu;
            goto label_460e6c;
        }
    }
    ctx->pc = 0x460DD0u;
label_460dd0:
    // 0x460dd0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460dd4:
    // 0x460dd4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460dd8:
    // 0x460dd8: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x460dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_460ddc:
    // 0x460ddc: 0xc115ee8  jal         func_457BA0
label_460de0:
    if (ctx->pc == 0x460DE0u) {
        ctx->pc = 0x460DE4u;
        goto label_460de4;
    }
    ctx->pc = 0x460DDCu;
    SET_GPR_U32(ctx, 31, 0x460DE4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460DDCu, 0x460DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460DE4u;
label_460de4:
    // 0x460de4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_460de8:
    if (ctx->pc == 0x460DE8u) {
        ctx->pc = 0x460DECu;
        goto label_460dec;
    }
    ctx->pc = 0x460DE4u;
    {
        const bool branch_taken_0x460de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460de4) {
            ctx->pc = 0x460E6Cu;
            goto label_460e6c;
        }
    }
    ctx->pc = 0x460DECu;
label_460dec:
    // 0x460dec: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x460decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_460df0:
    // 0x460df0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_460df4:
    if (ctx->pc == 0x460DF4u) {
        ctx->pc = 0x460DF8u;
        goto label_460df8;
    }
    ctx->pc = 0x460DF0u;
    {
        const bool branch_taken_0x460df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460df0) {
            ctx->pc = 0x460E6Cu;
            goto label_460e6c;
        }
    }
    ctx->pc = 0x460DF8u;
label_460df8:
    // 0x460df8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460dfc:
    // 0x460dfc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460e00:
    // 0x460e00: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x460e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_460e04:
    // 0x460e04: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460e08:
    // 0x460e08: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460e0c:
    // 0x460e0c: 0x240805e7  addiu       $t0, $zero, 0x5E7
    ctx->pc = 0x460e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1511));
label_460e10:
    // 0x460e10: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x460e10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_460e14:
    // 0x460e14: 0x2529f010  addiu       $t1, $t1, -0xFF0
    ctx->pc = 0x460e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963216));
label_460e18:
    // 0x460e18: 0xc113940  jal         func_44E500
label_460e1c:
    if (ctx->pc == 0x460E1Cu) {
        ctx->pc = 0x460E20u;
        goto label_460e20;
    }
    ctx->pc = 0x460E18u;
    SET_GPR_U32(ctx, 31, 0x460E20u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460E18u, 0x460E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460E20u;
label_460e20:
    // 0x460e20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460e24:
    // 0x460e24: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460e28:
    // 0x460e28: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x460e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_460e2c:
    // 0x460e2c: 0xc115c24  jal         func_457090
label_460e30:
    if (ctx->pc == 0x460E30u) {
        ctx->pc = 0x460E34u;
        goto label_460e34;
    }
    ctx->pc = 0x460E2Cu;
    SET_GPR_U32(ctx, 31, 0x460E34u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460E2Cu, 0x460E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460E34u;
label_460e34:
    // 0x460e34: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460e38:
    // 0x460e38: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x460e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_460e3c:
    // 0x460e3c: 0x40f809  jalr        $v0
label_460e40:
    if (ctx->pc == 0x460E40u) {
        ctx->pc = 0x460E44u;
        goto label_460e44;
    }
    ctx->pc = 0x460E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460E44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460E3Cu, 0x460E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460E44u;
label_460e44:
    // 0x460e44: 0xaf82b1fc  sw          $v0, -0x4E04($gp)
    ctx->pc = 0x460e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947324), GPR_U32(ctx, 2));
label_460e48:
    // 0x460e48: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x460e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_460e4c:
    // 0x460e4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460e50:
    if (ctx->pc == 0x460E50u) {
        ctx->pc = 0x460E54u;
        goto label_460e54;
    }
    ctx->pc = 0x460E4Cu;
    {
        const bool branch_taken_0x460e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460e4c) {
            ctx->pc = 0x460E5Cu;
            goto label_460e5c;
        }
    }
    ctx->pc = 0x460E54u;
label_460e54:
    // 0x460e54: 0xd  break       0
    ctx->pc = 0x460e54u;
    runtime->handleBreak(rdram, ctx);
label_460e58:
    // 0x460e58: 0x0  nop
    ctx->pc = 0x460e58u;
    // NOP
label_460e5c:
    // 0x460e5c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460e60:
    // 0x460e60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460e64:
    // 0x460e64: 0xc11392c  jal         func_44E4B0
label_460e68:
    if (ctx->pc == 0x460E68u) {
        ctx->pc = 0x460E6Cu;
        goto label_460e6c;
    }
    ctx->pc = 0x460E64u;
    SET_GPR_U32(ctx, 31, 0x460E6Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x460E64u, 0x460E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460E6Cu;
label_460e6c:
    // 0x460e6c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x460e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_460e70:
    // 0x460e70: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_460e74:
    if (ctx->pc == 0x460E74u) {
        ctx->pc = 0x460E78u;
        goto label_460e78;
    }
    ctx->pc = 0x460E70u;
    {
        const bool branch_taken_0x460e70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x460e70) {
            ctx->pc = 0x460E98u;
            goto label_460e98;
        }
    }
    ctx->pc = 0x460E78u;
label_460e78:
    // 0x460e78: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x460e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_460e7c:
    // 0x460e7c: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x460e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_460e80:
    // 0x460e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x460e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460e84:
    // 0x460e84: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x460e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_460e88:
    // 0x460e88: 0xc1181ac  jal         func_4606B0
label_460e8c:
    if (ctx->pc == 0x460E8Cu) {
        ctx->pc = 0x460E90u;
        goto label_460e90;
    }
    ctx->pc = 0x460E88u;
    SET_GPR_U32(ctx, 31, 0x460E90u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x460E88u, 0x460E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460E90u;
label_460e90:
    // 0x460e90: 0x10000030  b           . + 4 + (0x30 << 2)
label_460e94:
    if (ctx->pc == 0x460E94u) {
        ctx->pc = 0x460E98u;
        goto label_460e98;
    }
    ctx->pc = 0x460E90u;
    {
        const bool branch_taken_0x460e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460e90) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460E98u;
label_460e98:
    // 0x460e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x460e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460e9c:
    // 0x460e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x460e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460ea0:
    // 0x460ea0: 0xc1181ac  jal         func_4606B0
label_460ea4:
    if (ctx->pc == 0x460EA4u) {
        ctx->pc = 0x460EA8u;
        goto label_460ea8;
    }
    ctx->pc = 0x460EA0u;
    SET_GPR_U32(ctx, 31, 0x460EA8u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x460EA0u, 0x460EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460EA8u;
label_460ea8:
    // 0x460ea8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_460eac:
    if (ctx->pc == 0x460EACu) {
        ctx->pc = 0x460EB0u;
        goto label_460eb0;
    }
    ctx->pc = 0x460EA8u;
    {
        const bool branch_taken_0x460ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460ea8) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460EB0u;
label_460eb0:
    // 0x460eb0: 0x8f83b200  lw          $v1, -0x4E00($gp)
    ctx->pc = 0x460eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947328)));
label_460eb4:
    // 0x460eb4: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_460eb8:
    if (ctx->pc == 0x460EB8u) {
        ctx->pc = 0x460EBCu;
        goto label_460ebc;
    }
    ctx->pc = 0x460EB4u;
    {
        const bool branch_taken_0x460eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x460eb4) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460EBCu;
label_460ebc:
    // 0x460ebc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460ec0:
    // 0x460ec0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460ec4:
    // 0x460ec4: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x460ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_460ec8:
    // 0x460ec8: 0xc115ee8  jal         func_457BA0
label_460ecc:
    if (ctx->pc == 0x460ECCu) {
        ctx->pc = 0x460ED0u;
        goto label_460ed0;
    }
    ctx->pc = 0x460EC8u;
    SET_GPR_U32(ctx, 31, 0x460ED0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460EC8u, 0x460ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460ED0u;
label_460ed0:
    // 0x460ed0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_460ed4:
    if (ctx->pc == 0x460ED4u) {
        ctx->pc = 0x460ED8u;
        goto label_460ed8;
    }
    ctx->pc = 0x460ED0u;
    {
        const bool branch_taken_0x460ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460ed0) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460ED8u;
label_460ed8:
    // 0x460ed8: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x460ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_460edc:
    // 0x460edc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_460ee0:
    if (ctx->pc == 0x460EE0u) {
        ctx->pc = 0x460EE4u;
        goto label_460ee4;
    }
    ctx->pc = 0x460EDCu;
    {
        const bool branch_taken_0x460edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x460edc) {
            ctx->pc = 0x460F54u;
            goto label_460f54;
        }
    }
    ctx->pc = 0x460EE4u;
label_460ee4:
    // 0x460ee4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460ee8:
    // 0x460ee8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460eec:
    // 0x460eec: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x460eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_460ef0:
    // 0x460ef0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460ef4:
    // 0x460ef4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460ef8:
    // 0x460ef8: 0x240805f5  addiu       $t0, $zero, 0x5F5
    ctx->pc = 0x460ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1525));
label_460efc:
    // 0x460efc: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x460efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_460f00:
    // 0x460f00: 0xc113940  jal         func_44E500
label_460f04:
    if (ctx->pc == 0x460F04u) {
        ctx->pc = 0x460F08u;
        goto label_460f08;
    }
    ctx->pc = 0x460F00u;
    SET_GPR_U32(ctx, 31, 0x460F08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460F00u, 0x460F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460F08u;
label_460f08:
    // 0x460f08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460f0c:
    // 0x460f0c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460f10:
    // 0x460f10: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x460f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_460f14:
    // 0x460f14: 0xc115c24  jal         func_457090
label_460f18:
    if (ctx->pc == 0x460F18u) {
        ctx->pc = 0x460F1Cu;
        goto label_460f1c;
    }
    ctx->pc = 0x460F14u;
    SET_GPR_U32(ctx, 31, 0x460F1Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460F14u, 0x460F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460F1Cu;
label_460f1c:
    // 0x460f1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460f20:
    // 0x460f20: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x460f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_460f24:
    // 0x460f24: 0x40f809  jalr        $v0
label_460f28:
    if (ctx->pc == 0x460F28u) {
        ctx->pc = 0x460F2Cu;
        goto label_460f2c;
    }
    ctx->pc = 0x460F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460F2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460F24u, 0x460F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460F2Cu;
label_460f2c:
    // 0x460f2c: 0xaf82b200  sw          $v0, -0x4E00($gp)
    ctx->pc = 0x460f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947328), GPR_U32(ctx, 2));
label_460f30:
    // 0x460f30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x460f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_460f34:
    // 0x460f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460f38:
    if (ctx->pc == 0x460F38u) {
        ctx->pc = 0x460F3Cu;
        goto label_460f3c;
    }
    ctx->pc = 0x460F34u;
    {
        const bool branch_taken_0x460f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460f34) {
            ctx->pc = 0x460F44u;
            goto label_460f44;
        }
    }
    ctx->pc = 0x460F3Cu;
label_460f3c:
    // 0x460f3c: 0xd  break       0
    ctx->pc = 0x460f3cu;
    runtime->handleBreak(rdram, ctx);
label_460f40:
    // 0x460f40: 0x0  nop
    ctx->pc = 0x460f40u;
    // NOP
label_460f44:
    // 0x460f44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460f48:
    // 0x460f48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460f4c:
    // 0x460f4c: 0xc11392c  jal         func_44E4B0
label_460f50:
    if (ctx->pc == 0x460F50u) {
        ctx->pc = 0x460F54u;
        goto label_460f54;
    }
    ctx->pc = 0x460F4Cu;
    SET_GPR_U32(ctx, 31, 0x460F54u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x460F4Cu, 0x460F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460F54u;
label_460f54:
    // 0x460f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x460f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_460f58:
    // 0x460f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460f5c:
    // 0x460f5c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x460f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_460f60:
    // 0x460f60: 0x3e00008  jr          $ra
label_460f64:
    if (ctx->pc == 0x460F64u) {
        ctx->pc = 0x460F68u;
        goto label_460f68;
    }
    ctx->pc = 0x460F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460F68u;
label_460f68:
    // 0x460f68: 0x0  nop
    ctx->pc = 0x460f68u;
    // NOP
label_460f6c:
    // 0x460f6c: 0x0  nop
    ctx->pc = 0x460f6cu;
    // NOP
    ctx->pc = 0x460f70u;
}
