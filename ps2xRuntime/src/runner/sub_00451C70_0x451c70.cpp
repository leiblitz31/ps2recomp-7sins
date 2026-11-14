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

// Function: sub_00451C70
// Address: 0x451c70 - 0x451f20
void sub_00451C70_0x451c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451C70_0x451c70");
#endif

    switch (ctx->pc) {
        case 0x451c70u: goto label_451c70;
        case 0x451c74u: goto label_451c74;
        case 0x451c78u: goto label_451c78;
        case 0x451c7cu: goto label_451c7c;
        case 0x451c80u: goto label_451c80;
        case 0x451c84u: goto label_451c84;
        case 0x451c88u: goto label_451c88;
        case 0x451c8cu: goto label_451c8c;
        case 0x451c90u: goto label_451c90;
        case 0x451c94u: goto label_451c94;
        case 0x451c98u: goto label_451c98;
        case 0x451c9cu: goto label_451c9c;
        case 0x451ca0u: goto label_451ca0;
        case 0x451ca4u: goto label_451ca4;
        case 0x451ca8u: goto label_451ca8;
        case 0x451cacu: goto label_451cac;
        case 0x451cb0u: goto label_451cb0;
        case 0x451cb4u: goto label_451cb4;
        case 0x451cb8u: goto label_451cb8;
        case 0x451cbcu: goto label_451cbc;
        case 0x451cc0u: goto label_451cc0;
        case 0x451cc4u: goto label_451cc4;
        case 0x451cc8u: goto label_451cc8;
        case 0x451cccu: goto label_451ccc;
        case 0x451cd0u: goto label_451cd0;
        case 0x451cd4u: goto label_451cd4;
        case 0x451cd8u: goto label_451cd8;
        case 0x451cdcu: goto label_451cdc;
        case 0x451ce0u: goto label_451ce0;
        case 0x451ce4u: goto label_451ce4;
        case 0x451ce8u: goto label_451ce8;
        case 0x451cecu: goto label_451cec;
        case 0x451cf0u: goto label_451cf0;
        case 0x451cf4u: goto label_451cf4;
        case 0x451cf8u: goto label_451cf8;
        case 0x451cfcu: goto label_451cfc;
        case 0x451d00u: goto label_451d00;
        case 0x451d04u: goto label_451d04;
        case 0x451d08u: goto label_451d08;
        case 0x451d0cu: goto label_451d0c;
        case 0x451d10u: goto label_451d10;
        case 0x451d14u: goto label_451d14;
        case 0x451d18u: goto label_451d18;
        case 0x451d1cu: goto label_451d1c;
        case 0x451d20u: goto label_451d20;
        case 0x451d24u: goto label_451d24;
        case 0x451d28u: goto label_451d28;
        case 0x451d2cu: goto label_451d2c;
        case 0x451d30u: goto label_451d30;
        case 0x451d34u: goto label_451d34;
        case 0x451d38u: goto label_451d38;
        case 0x451d3cu: goto label_451d3c;
        case 0x451d40u: goto label_451d40;
        case 0x451d44u: goto label_451d44;
        case 0x451d48u: goto label_451d48;
        case 0x451d4cu: goto label_451d4c;
        case 0x451d50u: goto label_451d50;
        case 0x451d54u: goto label_451d54;
        case 0x451d58u: goto label_451d58;
        case 0x451d5cu: goto label_451d5c;
        case 0x451d60u: goto label_451d60;
        case 0x451d64u: goto label_451d64;
        case 0x451d68u: goto label_451d68;
        case 0x451d6cu: goto label_451d6c;
        case 0x451d70u: goto label_451d70;
        case 0x451d74u: goto label_451d74;
        case 0x451d78u: goto label_451d78;
        case 0x451d7cu: goto label_451d7c;
        case 0x451d80u: goto label_451d80;
        case 0x451d84u: goto label_451d84;
        case 0x451d88u: goto label_451d88;
        case 0x451d8cu: goto label_451d8c;
        case 0x451d90u: goto label_451d90;
        case 0x451d94u: goto label_451d94;
        case 0x451d98u: goto label_451d98;
        case 0x451d9cu: goto label_451d9c;
        case 0x451da0u: goto label_451da0;
        case 0x451da4u: goto label_451da4;
        case 0x451da8u: goto label_451da8;
        case 0x451dacu: goto label_451dac;
        case 0x451db0u: goto label_451db0;
        case 0x451db4u: goto label_451db4;
        case 0x451db8u: goto label_451db8;
        case 0x451dbcu: goto label_451dbc;
        case 0x451dc0u: goto label_451dc0;
        case 0x451dc4u: goto label_451dc4;
        case 0x451dc8u: goto label_451dc8;
        case 0x451dccu: goto label_451dcc;
        case 0x451dd0u: goto label_451dd0;
        case 0x451dd4u: goto label_451dd4;
        case 0x451dd8u: goto label_451dd8;
        case 0x451ddcu: goto label_451ddc;
        case 0x451de0u: goto label_451de0;
        case 0x451de4u: goto label_451de4;
        case 0x451de8u: goto label_451de8;
        case 0x451decu: goto label_451dec;
        case 0x451df0u: goto label_451df0;
        case 0x451df4u: goto label_451df4;
        case 0x451df8u: goto label_451df8;
        case 0x451dfcu: goto label_451dfc;
        case 0x451e00u: goto label_451e00;
        case 0x451e04u: goto label_451e04;
        case 0x451e08u: goto label_451e08;
        case 0x451e0cu: goto label_451e0c;
        case 0x451e10u: goto label_451e10;
        case 0x451e14u: goto label_451e14;
        case 0x451e18u: goto label_451e18;
        case 0x451e1cu: goto label_451e1c;
        case 0x451e20u: goto label_451e20;
        case 0x451e24u: goto label_451e24;
        case 0x451e28u: goto label_451e28;
        case 0x451e2cu: goto label_451e2c;
        case 0x451e30u: goto label_451e30;
        case 0x451e34u: goto label_451e34;
        case 0x451e38u: goto label_451e38;
        case 0x451e3cu: goto label_451e3c;
        case 0x451e40u: goto label_451e40;
        case 0x451e44u: goto label_451e44;
        case 0x451e48u: goto label_451e48;
        case 0x451e4cu: goto label_451e4c;
        case 0x451e50u: goto label_451e50;
        case 0x451e54u: goto label_451e54;
        case 0x451e58u: goto label_451e58;
        case 0x451e5cu: goto label_451e5c;
        case 0x451e60u: goto label_451e60;
        case 0x451e64u: goto label_451e64;
        case 0x451e68u: goto label_451e68;
        case 0x451e6cu: goto label_451e6c;
        case 0x451e70u: goto label_451e70;
        case 0x451e74u: goto label_451e74;
        case 0x451e78u: goto label_451e78;
        case 0x451e7cu: goto label_451e7c;
        case 0x451e80u: goto label_451e80;
        case 0x451e84u: goto label_451e84;
        case 0x451e88u: goto label_451e88;
        case 0x451e8cu: goto label_451e8c;
        case 0x451e90u: goto label_451e90;
        case 0x451e94u: goto label_451e94;
        case 0x451e98u: goto label_451e98;
        case 0x451e9cu: goto label_451e9c;
        case 0x451ea0u: goto label_451ea0;
        case 0x451ea4u: goto label_451ea4;
        case 0x451ea8u: goto label_451ea8;
        case 0x451eacu: goto label_451eac;
        case 0x451eb0u: goto label_451eb0;
        case 0x451eb4u: goto label_451eb4;
        case 0x451eb8u: goto label_451eb8;
        case 0x451ebcu: goto label_451ebc;
        case 0x451ec0u: goto label_451ec0;
        case 0x451ec4u: goto label_451ec4;
        case 0x451ec8u: goto label_451ec8;
        case 0x451eccu: goto label_451ecc;
        case 0x451ed0u: goto label_451ed0;
        case 0x451ed4u: goto label_451ed4;
        case 0x451ed8u: goto label_451ed8;
        case 0x451edcu: goto label_451edc;
        case 0x451ee0u: goto label_451ee0;
        case 0x451ee4u: goto label_451ee4;
        case 0x451ee8u: goto label_451ee8;
        case 0x451eecu: goto label_451eec;
        case 0x451ef0u: goto label_451ef0;
        case 0x451ef4u: goto label_451ef4;
        case 0x451ef8u: goto label_451ef8;
        case 0x451efcu: goto label_451efc;
        case 0x451f00u: goto label_451f00;
        case 0x451f04u: goto label_451f04;
        case 0x451f08u: goto label_451f08;
        case 0x451f0cu: goto label_451f0c;
        case 0x451f10u: goto label_451f10;
        case 0x451f14u: goto label_451f14;
        case 0x451f18u: goto label_451f18;
        case 0x451f1cu: goto label_451f1c;
        default: break;
    }

    ctx->pc = 0x451c70u;

label_451c70:
    // 0x451c70: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x451c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
label_451c74:
    // 0x451c74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x451c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_451c78:
    // 0x451c78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x451c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_451c7c:
    // 0x451c7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x451c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_451c80:
    // 0x451c80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x451c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_451c84:
    // 0x451c84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x451c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_451c88:
    // 0x451c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x451c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_451c8c:
    // 0x451c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x451c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_451c90:
    // 0x451c90: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x451c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
label_451c94:
    // 0x451c94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x451c94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451c98:
    // 0x451c98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x451c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451c9c:
    // 0x451c9c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_451ca0:
    if (ctx->pc == 0x451CA0u) {
        ctx->pc = 0x451CA4u;
        goto label_451ca4;
    }
    ctx->pc = 0x451C9Cu;
    {
        const bool branch_taken_0x451c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451c9c) {
            ctx->pc = 0x451ED8u;
            goto label_451ed8;
        }
    }
    ctx->pc = 0x451CA4u;
label_451ca4:
    // 0x451ca4: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x451ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_451ca8:
    // 0x451ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x451ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_451cac:
    // 0x451cac: 0xc113f54  jal         func_44FD50
label_451cb0:
    if (ctx->pc == 0x451CB0u) {
        ctx->pc = 0x451CB4u;
        goto label_451cb4;
    }
    ctx->pc = 0x451CACu;
    SET_GPR_U32(ctx, 31, 0x451CB4u);
    ctx->pc = 0x44FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD50u, 0x451CACu, 0x451CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451CB4u;
label_451cb4:
    // 0x451cb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x451cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_451cb8:
    // 0x451cb8: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x451cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_451cbc:
    // 0x451cbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_451cc0:
    // 0x451cc0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_451cc4:
    if (ctx->pc == 0x451CC4u) {
        ctx->pc = 0x451CC8u;
        goto label_451cc8;
    }
    ctx->pc = 0x451CC0u;
    {
        const bool branch_taken_0x451cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451cc0) {
            ctx->pc = 0x451D6Cu;
            goto label_451d6c;
        }
    }
    ctx->pc = 0x451CC8u;
label_451cc8:
    // 0x451cc8: 0x8f82b004  lw          $v0, -0x4FFC($gp)
    ctx->pc = 0x451cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946820)));
label_451ccc:
    // 0x451ccc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_451cd0:
    if (ctx->pc == 0x451CD0u) {
        ctx->pc = 0x451CD4u;
        goto label_451cd4;
    }
    ctx->pc = 0x451CCCu;
    {
        const bool branch_taken_0x451ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451ccc) {
            ctx->pc = 0x451D6Cu;
            goto label_451d6c;
        }
    }
    ctx->pc = 0x451CD4u;
label_451cd4:
    // 0x451cd4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x451cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451cd8:
    // 0x451cd8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451cdc:
    // 0x451cdc: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x451cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_451ce0:
    // 0x451ce0: 0xc115ee8  jal         func_457BA0
label_451ce4:
    if (ctx->pc == 0x451CE4u) {
        ctx->pc = 0x451CE8u;
        goto label_451ce8;
    }
    ctx->pc = 0x451CE0u;
    SET_GPR_U32(ctx, 31, 0x451CE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451CE0u, 0x451CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451CE8u;
label_451ce8:
    // 0x451ce8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_451cec:
    if (ctx->pc == 0x451CECu) {
        ctx->pc = 0x451CF0u;
        goto label_451cf0;
    }
    ctx->pc = 0x451CE8u;
    {
        const bool branch_taken_0x451ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451ce8) {
            ctx->pc = 0x451D6Cu;
            goto label_451d6c;
        }
    }
    ctx->pc = 0x451CF0u;
label_451cf0:
    // 0x451cf0: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x451cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_451cf4:
    // 0x451cf4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_451cf8:
    if (ctx->pc == 0x451CF8u) {
        ctx->pc = 0x451CFCu;
        goto label_451cfc;
    }
    ctx->pc = 0x451CF4u;
    {
        const bool branch_taken_0x451cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451cf4) {
            ctx->pc = 0x451D6Cu;
            goto label_451d6c;
        }
    }
    ctx->pc = 0x451CFCu;
label_451cfc:
    // 0x451cfc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x451cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_451d00:
    // 0x451d00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451d04:
    // 0x451d04: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x451d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_451d08:
    // 0x451d08: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x451d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_451d0c:
    // 0x451d0c: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x451d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451d10:
    // 0x451d10: 0x24080260  addiu       $t0, $zero, 0x260
    ctx->pc = 0x451d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_451d14:
    // 0x451d14: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x451d14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_451d18:
    // 0x451d18: 0x2529da50  addiu       $t1, $t1, -0x25B0
    ctx->pc = 0x451d18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957648));
label_451d1c:
    // 0x451d1c: 0xc113940  jal         func_44E500
label_451d20:
    if (ctx->pc == 0x451D20u) {
        ctx->pc = 0x451D24u;
        goto label_451d24;
    }
    ctx->pc = 0x451D1Cu;
    SET_GPR_U32(ctx, 31, 0x451D24u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x451D1Cu, 0x451D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D24u;
label_451d24:
    // 0x451d24: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x451d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_451d28:
    // 0x451d28: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x451d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_451d2c:
    // 0x451d2c: 0xc115c24  jal         func_457090
label_451d30:
    if (ctx->pc == 0x451D30u) {
        ctx->pc = 0x451D34u;
        goto label_451d34;
    }
    ctx->pc = 0x451D2Cu;
    SET_GPR_U32(ctx, 31, 0x451D34u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x451D2Cu, 0x451D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D34u;
label_451d34:
    // 0x451d34: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x451d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_451d38:
    // 0x451d38: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x451d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_451d3c:
    // 0x451d3c: 0x40f809  jalr        $v0
label_451d40:
    if (ctx->pc == 0x451D40u) {
        ctx->pc = 0x451D44u;
        goto label_451d44;
    }
    ctx->pc = 0x451D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451D3Cu, 0x451D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451D44u;
label_451d44:
    // 0x451d44: 0xaf82b004  sw          $v0, -0x4FFC($gp)
    ctx->pc = 0x451d44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946820), GPR_U32(ctx, 2));
label_451d48:
    // 0x451d48: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x451d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_451d4c:
    // 0x451d4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_451d50:
    if (ctx->pc == 0x451D50u) {
        ctx->pc = 0x451D54u;
        goto label_451d54;
    }
    ctx->pc = 0x451D4Cu;
    {
        const bool branch_taken_0x451d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451d4c) {
            ctx->pc = 0x451D5Cu;
            goto label_451d5c;
        }
    }
    ctx->pc = 0x451D54u;
label_451d54:
    // 0x451d54: 0xd  break       0
    ctx->pc = 0x451d54u;
    runtime->handleBreak(rdram, ctx);
label_451d58:
    // 0x451d58: 0x0  nop
    ctx->pc = 0x451d58u;
    // NOP
label_451d5c:
    // 0x451d5c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x451d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_451d60:
    // 0x451d60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451d64:
    // 0x451d64: 0xc11392c  jal         func_44E4B0
label_451d68:
    if (ctx->pc == 0x451D68u) {
        ctx->pc = 0x451D6Cu;
        goto label_451d6c;
    }
    ctx->pc = 0x451D64u;
    SET_GPR_U32(ctx, 31, 0x451D6Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451D64u, 0x451D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D6Cu;
label_451d6c:
    // 0x451d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_451d70:
    // 0x451d70: 0xc1159c4  jal         func_456710
label_451d74:
    if (ctx->pc == 0x451D74u) {
        ctx->pc = 0x451D78u;
        goto label_451d78;
    }
    ctx->pc = 0x451D70u;
    SET_GPR_U32(ctx, 31, 0x451D78u);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x451D70u, 0x451D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D78u;
label_451d78:
    // 0x451d78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x451d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_451d7c:
    // 0x451d7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x451d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451d80:
    // 0x451d80: 0x10000051  b           . + 4 + (0x51 << 2)
label_451d84:
    if (ctx->pc == 0x451D84u) {
        ctx->pc = 0x451D88u;
        goto label_451d88;
    }
    ctx->pc = 0x451D80u;
    {
        const bool branch_taken_0x451d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451d80) {
            ctx->pc = 0x451EC8u;
            goto label_451ec8;
        }
    }
    ctx->pc = 0x451D88u;
label_451d88:
    // 0x451d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_451d8c:
    // 0x451d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x451d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451d90:
    // 0x451d90: 0xc1159d0  jal         func_456740
label_451d94:
    if (ctx->pc == 0x451D94u) {
        ctx->pc = 0x451D98u;
        goto label_451d98;
    }
    ctx->pc = 0x451D90u;
    SET_GPR_U32(ctx, 31, 0x451D98u);
    ctx->pc = 0x456740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456740u, 0x451D90u, 0x451D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D98u;
label_451d98:
    // 0x451d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x451d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_451d9c:
    // 0x451d9c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x451d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_451da0:
    // 0x451da0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_451da4:
    // 0x451da4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_451da8:
    if (ctx->pc == 0x451DA8u) {
        ctx->pc = 0x451DACu;
        goto label_451dac;
    }
    ctx->pc = 0x451DA4u;
    {
        const bool branch_taken_0x451da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451da4) {
            ctx->pc = 0x451E50u;
            goto label_451e50;
        }
    }
    ctx->pc = 0x451DACu;
label_451dac:
    // 0x451dac: 0x8f82b008  lw          $v0, -0x4FF8($gp)
    ctx->pc = 0x451dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946824)));
label_451db0:
    // 0x451db0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_451db4:
    if (ctx->pc == 0x451DB4u) {
        ctx->pc = 0x451DB8u;
        goto label_451db8;
    }
    ctx->pc = 0x451DB0u;
    {
        const bool branch_taken_0x451db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451db0) {
            ctx->pc = 0x451E50u;
            goto label_451e50;
        }
    }
    ctx->pc = 0x451DB8u;
label_451db8:
    // 0x451db8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x451db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_451dbc:
    // 0x451dbc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451dc0:
    // 0x451dc0: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x451dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_451dc4:
    // 0x451dc4: 0xc115ee8  jal         func_457BA0
label_451dc8:
    if (ctx->pc == 0x451DC8u) {
        ctx->pc = 0x451DCCu;
        goto label_451dcc;
    }
    ctx->pc = 0x451DC4u;
    SET_GPR_U32(ctx, 31, 0x451DCCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x451DC4u, 0x451DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DCCu;
label_451dcc:
    // 0x451dcc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_451dd0:
    if (ctx->pc == 0x451DD0u) {
        ctx->pc = 0x451DD4u;
        goto label_451dd4;
    }
    ctx->pc = 0x451DCCu;
    {
        const bool branch_taken_0x451dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451dcc) {
            ctx->pc = 0x451E50u;
            goto label_451e50;
        }
    }
    ctx->pc = 0x451DD4u;
label_451dd4:
    // 0x451dd4: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x451dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_451dd8:
    // 0x451dd8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_451ddc:
    if (ctx->pc == 0x451DDCu) {
        ctx->pc = 0x451DE0u;
        goto label_451de0;
    }
    ctx->pc = 0x451DD8u;
    {
        const bool branch_taken_0x451dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451dd8) {
            ctx->pc = 0x451E50u;
            goto label_451e50;
        }
    }
    ctx->pc = 0x451DE0u;
label_451de0:
    // 0x451de0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x451de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_451de4:
    // 0x451de4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x451de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_451de8:
    // 0x451de8: 0x8fa602e4  lw          $a2, 0x2E4($sp)
    ctx->pc = 0x451de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_451dec:
    // 0x451dec: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x451decu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_451df0:
    // 0x451df0: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x451df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_451df4:
    // 0x451df4: 0x24080267  addiu       $t0, $zero, 0x267
    ctx->pc = 0x451df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 615));
label_451df8:
    // 0x451df8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x451df8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_451dfc:
    // 0x451dfc: 0x2529dab0  addiu       $t1, $t1, -0x2550
    ctx->pc = 0x451dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957744));
label_451e00:
    // 0x451e00: 0xc113940  jal         func_44E500
label_451e04:
    if (ctx->pc == 0x451E04u) {
        ctx->pc = 0x451E08u;
        goto label_451e08;
    }
    ctx->pc = 0x451E00u;
    SET_GPR_U32(ctx, 31, 0x451E08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x451E00u, 0x451E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E08u;
label_451e08:
    // 0x451e08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x451e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_451e0c:
    // 0x451e0c: 0x2785afcc  addiu       $a1, $gp, -0x5034
    ctx->pc = 0x451e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946764));
label_451e10:
    // 0x451e10: 0xc115c24  jal         func_457090
label_451e14:
    if (ctx->pc == 0x451E14u) {
        ctx->pc = 0x451E18u;
        goto label_451e18;
    }
    ctx->pc = 0x451E10u;
    SET_GPR_U32(ctx, 31, 0x451E18u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x451E10u, 0x451E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E18u;
label_451e18:
    // 0x451e18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x451e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_451e1c:
    // 0x451e1c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x451e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_451e20:
    // 0x451e20: 0x40f809  jalr        $v0
label_451e24:
    if (ctx->pc == 0x451E24u) {
        ctx->pc = 0x451E28u;
        goto label_451e28;
    }
    ctx->pc = 0x451E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451E28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451E20u, 0x451E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451E28u;
label_451e28:
    // 0x451e28: 0xaf82b008  sw          $v0, -0x4FF8($gp)
    ctx->pc = 0x451e28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946824), GPR_U32(ctx, 2));
label_451e2c:
    // 0x451e2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x451e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_451e30:
    // 0x451e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_451e34:
    if (ctx->pc == 0x451E34u) {
        ctx->pc = 0x451E38u;
        goto label_451e38;
    }
    ctx->pc = 0x451E30u;
    {
        const bool branch_taken_0x451e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451e30) {
            ctx->pc = 0x451E40u;
            goto label_451e40;
        }
    }
    ctx->pc = 0x451E38u;
label_451e38:
    // 0x451e38: 0xd  break       0
    ctx->pc = 0x451e38u;
    runtime->handleBreak(rdram, ctx);
label_451e3c:
    // 0x451e3c: 0x0  nop
    ctx->pc = 0x451e3cu;
    // NOP
label_451e40:
    // 0x451e40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x451e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_451e44:
    // 0x451e44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451e48:
    // 0x451e48: 0xc11392c  jal         func_44E4B0
label_451e4c:
    if (ctx->pc == 0x451E4Cu) {
        ctx->pc = 0x451E50u;
        goto label_451e50;
    }
    ctx->pc = 0x451E48u;
    SET_GPR_U32(ctx, 31, 0x451E50u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x451E48u, 0x451E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E50u;
label_451e50:
    // 0x451e50: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x451e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_451e54:
    // 0x451e54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x451e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_451e58:
    // 0x451e58: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_451e5c:
    if (ctx->pc == 0x451E5Cu) {
        ctx->pc = 0x451E60u;
        goto label_451e60;
    }
    ctx->pc = 0x451E58u;
    {
        const bool branch_taken_0x451e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x451e58) {
            ctx->pc = 0x451EC4u;
            goto label_451ec4;
        }
    }
    ctx->pc = 0x451E60u;
label_451e60:
    // 0x451e60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x451e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_451e64:
    // 0x451e64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x451e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_451e68:
    // 0x451e68: 0xc1135f0  jal         func_44D7C0
label_451e6c:
    if (ctx->pc == 0x451E6Cu) {
        ctx->pc = 0x451E70u;
        goto label_451e70;
    }
    ctx->pc = 0x451E68u;
    SET_GPR_U32(ctx, 31, 0x451E70u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x451E68u, 0x451E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E70u;
label_451e70:
    // 0x451e70: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x451e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_451e74:
    // 0x451e74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x451e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_451e78:
    // 0x451e78: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x451e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_451e7c:
    // 0x451e7c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x451e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_451e80:
    // 0x451e80: 0xc0bc5c6  jal         func_2F1718
label_451e84:
    if (ctx->pc == 0x451E84u) {
        ctx->pc = 0x451E88u;
        goto label_451e88;
    }
    ctx->pc = 0x451E80u;
    SET_GPR_U32(ctx, 31, 0x451E88u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x451E80u, 0x451E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E88u;
label_451e88:
    // 0x451e88: 0x27a402d8  addiu       $a0, $sp, 0x2D8
    ctx->pc = 0x451e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_451e8c:
    // 0x451e8c: 0xc114360  jal         func_450D80
label_451e90:
    if (ctx->pc == 0x451E90u) {
        ctx->pc = 0x451E94u;
        goto label_451e94;
    }
    ctx->pc = 0x451E8Cu;
    SET_GPR_U32(ctx, 31, 0x451E94u);
    ctx->pc = 0x450D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450D80u, 0x451E8Cu, 0x451E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E94u;
label_451e94:
    // 0x451e94: 0xafa002d8  sw          $zero, 0x2D8($sp)
    ctx->pc = 0x451e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 0));
label_451e98:
    // 0x451e98: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x451e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_451e9c:
    // 0x451e9c: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x451e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
label_451ea0:
    // 0x451ea0: 0x27a402d8  addiu       $a0, $sp, 0x2D8
    ctx->pc = 0x451ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_451ea4:
    // 0x451ea4: 0x8f82bf24  lw          $v0, -0x40DC($gp)
    ctx->pc = 0x451ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950692)));
label_451ea8:
    // 0x451ea8: 0x40f809  jalr        $v0
label_451eac:
    if (ctx->pc == 0x451EACu) {
        ctx->pc = 0x451EB0u;
        goto label_451eb0;
    }
    ctx->pc = 0x451EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x451EB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451EA8u, 0x451EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x451EB0u;
label_451eb0:
    // 0x451eb0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x451eb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_451eb4:
    // 0x451eb4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x451eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_451eb8:
    // 0x451eb8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x451eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_451ebc:
    // 0x451ebc: 0xc113610  jal         func_44D840
label_451ec0:
    if (ctx->pc == 0x451EC0u) {
        ctx->pc = 0x451EC4u;
        goto label_451ec4;
    }
    ctx->pc = 0x451EBCu;
    SET_GPR_U32(ctx, 31, 0x451EC4u);
    ctx->pc = 0x44D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D840u, 0x451EBCu, 0x451EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451EC4u;
label_451ec4:
    // 0x451ec4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x451ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_451ec8:
    // 0x451ec8: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x451ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_451ecc:
    // 0x451ecc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_451ed0:
    if (ctx->pc == 0x451ED0u) {
        ctx->pc = 0x451ED4u;
        goto label_451ed4;
    }
    ctx->pc = 0x451ECCu;
    {
        const bool branch_taken_0x451ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451ecc) {
            ctx->pc = 0x451D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451d88;
        }
    }
    ctx->pc = 0x451ED4u;
label_451ed4:
    // 0x451ed4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x451ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_451ed8:
    // 0x451ed8: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x451ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_451edc:
    // 0x451edc: 0xc113f40  jal         func_44FD00
label_451ee0:
    if (ctx->pc == 0x451EE0u) {
        ctx->pc = 0x451EE4u;
        goto label_451ee4;
    }
    ctx->pc = 0x451EDCu;
    SET_GPR_U32(ctx, 31, 0x451EE4u);
    ctx->pc = 0x44FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD00u, 0x451EDCu, 0x451EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451EE4u;
label_451ee4:
    // 0x451ee4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x451ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_451ee8:
    // 0x451ee8: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
label_451eec:
    if (ctx->pc == 0x451EECu) {
        ctx->pc = 0x451EF0u;
        goto label_451ef0;
    }
    ctx->pc = 0x451EE8u;
    {
        const bool branch_taken_0x451ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451ee8) {
            ctx->pc = 0x451CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451ca4;
        }
    }
    ctx->pc = 0x451EF0u;
label_451ef0:
    // 0x451ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451ef4:
    // 0x451ef4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x451ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_451ef8:
    // 0x451ef8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x451ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_451efc:
    // 0x451efc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x451efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_451f00:
    // 0x451f00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x451f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_451f04:
    // 0x451f04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x451f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_451f08:
    // 0x451f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x451f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_451f0c:
    // 0x451f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x451f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_451f10:
    // 0x451f10: 0x27bd0310  addiu       $sp, $sp, 0x310
    ctx->pc = 0x451f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_451f14:
    // 0x451f14: 0x3e00008  jr          $ra
label_451f18:
    if (ctx->pc == 0x451F18u) {
        ctx->pc = 0x451F1Cu;
        goto label_451f1c;
    }
    ctx->pc = 0x451F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451F1Cu;
label_451f1c:
    // 0x451f1c: 0x0  nop
    ctx->pc = 0x451f1cu;
    // NOP
    ctx->pc = 0x451f20u;
}
