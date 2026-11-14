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

// Function: sub_00474C00
// Address: 0x474c00 - 0x474f90
void sub_00474C00_0x474c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474C00_0x474c00");
#endif

    switch (ctx->pc) {
        case 0x474c00u: goto label_474c00;
        case 0x474c04u: goto label_474c04;
        case 0x474c08u: goto label_474c08;
        case 0x474c0cu: goto label_474c0c;
        case 0x474c10u: goto label_474c10;
        case 0x474c14u: goto label_474c14;
        case 0x474c18u: goto label_474c18;
        case 0x474c1cu: goto label_474c1c;
        case 0x474c20u: goto label_474c20;
        case 0x474c24u: goto label_474c24;
        case 0x474c28u: goto label_474c28;
        case 0x474c2cu: goto label_474c2c;
        case 0x474c30u: goto label_474c30;
        case 0x474c34u: goto label_474c34;
        case 0x474c38u: goto label_474c38;
        case 0x474c3cu: goto label_474c3c;
        case 0x474c40u: goto label_474c40;
        case 0x474c44u: goto label_474c44;
        case 0x474c48u: goto label_474c48;
        case 0x474c4cu: goto label_474c4c;
        case 0x474c50u: goto label_474c50;
        case 0x474c54u: goto label_474c54;
        case 0x474c58u: goto label_474c58;
        case 0x474c5cu: goto label_474c5c;
        case 0x474c60u: goto label_474c60;
        case 0x474c64u: goto label_474c64;
        case 0x474c68u: goto label_474c68;
        case 0x474c6cu: goto label_474c6c;
        case 0x474c70u: goto label_474c70;
        case 0x474c74u: goto label_474c74;
        case 0x474c78u: goto label_474c78;
        case 0x474c7cu: goto label_474c7c;
        case 0x474c80u: goto label_474c80;
        case 0x474c84u: goto label_474c84;
        case 0x474c88u: goto label_474c88;
        case 0x474c8cu: goto label_474c8c;
        case 0x474c90u: goto label_474c90;
        case 0x474c94u: goto label_474c94;
        case 0x474c98u: goto label_474c98;
        case 0x474c9cu: goto label_474c9c;
        case 0x474ca0u: goto label_474ca0;
        case 0x474ca4u: goto label_474ca4;
        case 0x474ca8u: goto label_474ca8;
        case 0x474cacu: goto label_474cac;
        case 0x474cb0u: goto label_474cb0;
        case 0x474cb4u: goto label_474cb4;
        case 0x474cb8u: goto label_474cb8;
        case 0x474cbcu: goto label_474cbc;
        case 0x474cc0u: goto label_474cc0;
        case 0x474cc4u: goto label_474cc4;
        case 0x474cc8u: goto label_474cc8;
        case 0x474cccu: goto label_474ccc;
        case 0x474cd0u: goto label_474cd0;
        case 0x474cd4u: goto label_474cd4;
        case 0x474cd8u: goto label_474cd8;
        case 0x474cdcu: goto label_474cdc;
        case 0x474ce0u: goto label_474ce0;
        case 0x474ce4u: goto label_474ce4;
        case 0x474ce8u: goto label_474ce8;
        case 0x474cecu: goto label_474cec;
        case 0x474cf0u: goto label_474cf0;
        case 0x474cf4u: goto label_474cf4;
        case 0x474cf8u: goto label_474cf8;
        case 0x474cfcu: goto label_474cfc;
        case 0x474d00u: goto label_474d00;
        case 0x474d04u: goto label_474d04;
        case 0x474d08u: goto label_474d08;
        case 0x474d0cu: goto label_474d0c;
        case 0x474d10u: goto label_474d10;
        case 0x474d14u: goto label_474d14;
        case 0x474d18u: goto label_474d18;
        case 0x474d1cu: goto label_474d1c;
        case 0x474d20u: goto label_474d20;
        case 0x474d24u: goto label_474d24;
        case 0x474d28u: goto label_474d28;
        case 0x474d2cu: goto label_474d2c;
        case 0x474d30u: goto label_474d30;
        case 0x474d34u: goto label_474d34;
        case 0x474d38u: goto label_474d38;
        case 0x474d3cu: goto label_474d3c;
        case 0x474d40u: goto label_474d40;
        case 0x474d44u: goto label_474d44;
        case 0x474d48u: goto label_474d48;
        case 0x474d4cu: goto label_474d4c;
        case 0x474d50u: goto label_474d50;
        case 0x474d54u: goto label_474d54;
        case 0x474d58u: goto label_474d58;
        case 0x474d5cu: goto label_474d5c;
        case 0x474d60u: goto label_474d60;
        case 0x474d64u: goto label_474d64;
        case 0x474d68u: goto label_474d68;
        case 0x474d6cu: goto label_474d6c;
        case 0x474d70u: goto label_474d70;
        case 0x474d74u: goto label_474d74;
        case 0x474d78u: goto label_474d78;
        case 0x474d7cu: goto label_474d7c;
        case 0x474d80u: goto label_474d80;
        case 0x474d84u: goto label_474d84;
        case 0x474d88u: goto label_474d88;
        case 0x474d8cu: goto label_474d8c;
        case 0x474d90u: goto label_474d90;
        case 0x474d94u: goto label_474d94;
        case 0x474d98u: goto label_474d98;
        case 0x474d9cu: goto label_474d9c;
        case 0x474da0u: goto label_474da0;
        case 0x474da4u: goto label_474da4;
        case 0x474da8u: goto label_474da8;
        case 0x474dacu: goto label_474dac;
        case 0x474db0u: goto label_474db0;
        case 0x474db4u: goto label_474db4;
        case 0x474db8u: goto label_474db8;
        case 0x474dbcu: goto label_474dbc;
        case 0x474dc0u: goto label_474dc0;
        case 0x474dc4u: goto label_474dc4;
        case 0x474dc8u: goto label_474dc8;
        case 0x474dccu: goto label_474dcc;
        case 0x474dd0u: goto label_474dd0;
        case 0x474dd4u: goto label_474dd4;
        case 0x474dd8u: goto label_474dd8;
        case 0x474ddcu: goto label_474ddc;
        case 0x474de0u: goto label_474de0;
        case 0x474de4u: goto label_474de4;
        case 0x474de8u: goto label_474de8;
        case 0x474decu: goto label_474dec;
        case 0x474df0u: goto label_474df0;
        case 0x474df4u: goto label_474df4;
        case 0x474df8u: goto label_474df8;
        case 0x474dfcu: goto label_474dfc;
        case 0x474e00u: goto label_474e00;
        case 0x474e04u: goto label_474e04;
        case 0x474e08u: goto label_474e08;
        case 0x474e0cu: goto label_474e0c;
        case 0x474e10u: goto label_474e10;
        case 0x474e14u: goto label_474e14;
        case 0x474e18u: goto label_474e18;
        case 0x474e1cu: goto label_474e1c;
        case 0x474e20u: goto label_474e20;
        case 0x474e24u: goto label_474e24;
        case 0x474e28u: goto label_474e28;
        case 0x474e2cu: goto label_474e2c;
        case 0x474e30u: goto label_474e30;
        case 0x474e34u: goto label_474e34;
        case 0x474e38u: goto label_474e38;
        case 0x474e3cu: goto label_474e3c;
        case 0x474e40u: goto label_474e40;
        case 0x474e44u: goto label_474e44;
        case 0x474e48u: goto label_474e48;
        case 0x474e4cu: goto label_474e4c;
        case 0x474e50u: goto label_474e50;
        case 0x474e54u: goto label_474e54;
        case 0x474e58u: goto label_474e58;
        case 0x474e5cu: goto label_474e5c;
        case 0x474e60u: goto label_474e60;
        case 0x474e64u: goto label_474e64;
        case 0x474e68u: goto label_474e68;
        case 0x474e6cu: goto label_474e6c;
        case 0x474e70u: goto label_474e70;
        case 0x474e74u: goto label_474e74;
        case 0x474e78u: goto label_474e78;
        case 0x474e7cu: goto label_474e7c;
        case 0x474e80u: goto label_474e80;
        case 0x474e84u: goto label_474e84;
        case 0x474e88u: goto label_474e88;
        case 0x474e8cu: goto label_474e8c;
        case 0x474e90u: goto label_474e90;
        case 0x474e94u: goto label_474e94;
        case 0x474e98u: goto label_474e98;
        case 0x474e9cu: goto label_474e9c;
        case 0x474ea0u: goto label_474ea0;
        case 0x474ea4u: goto label_474ea4;
        case 0x474ea8u: goto label_474ea8;
        case 0x474eacu: goto label_474eac;
        case 0x474eb0u: goto label_474eb0;
        case 0x474eb4u: goto label_474eb4;
        case 0x474eb8u: goto label_474eb8;
        case 0x474ebcu: goto label_474ebc;
        case 0x474ec0u: goto label_474ec0;
        case 0x474ec4u: goto label_474ec4;
        case 0x474ec8u: goto label_474ec8;
        case 0x474eccu: goto label_474ecc;
        case 0x474ed0u: goto label_474ed0;
        case 0x474ed4u: goto label_474ed4;
        case 0x474ed8u: goto label_474ed8;
        case 0x474edcu: goto label_474edc;
        case 0x474ee0u: goto label_474ee0;
        case 0x474ee4u: goto label_474ee4;
        case 0x474ee8u: goto label_474ee8;
        case 0x474eecu: goto label_474eec;
        case 0x474ef0u: goto label_474ef0;
        case 0x474ef4u: goto label_474ef4;
        case 0x474ef8u: goto label_474ef8;
        case 0x474efcu: goto label_474efc;
        case 0x474f00u: goto label_474f00;
        case 0x474f04u: goto label_474f04;
        case 0x474f08u: goto label_474f08;
        case 0x474f0cu: goto label_474f0c;
        case 0x474f10u: goto label_474f10;
        case 0x474f14u: goto label_474f14;
        case 0x474f18u: goto label_474f18;
        case 0x474f1cu: goto label_474f1c;
        case 0x474f20u: goto label_474f20;
        case 0x474f24u: goto label_474f24;
        case 0x474f28u: goto label_474f28;
        case 0x474f2cu: goto label_474f2c;
        case 0x474f30u: goto label_474f30;
        case 0x474f34u: goto label_474f34;
        case 0x474f38u: goto label_474f38;
        case 0x474f3cu: goto label_474f3c;
        case 0x474f40u: goto label_474f40;
        case 0x474f44u: goto label_474f44;
        case 0x474f48u: goto label_474f48;
        case 0x474f4cu: goto label_474f4c;
        case 0x474f50u: goto label_474f50;
        case 0x474f54u: goto label_474f54;
        case 0x474f58u: goto label_474f58;
        case 0x474f5cu: goto label_474f5c;
        case 0x474f60u: goto label_474f60;
        case 0x474f64u: goto label_474f64;
        case 0x474f68u: goto label_474f68;
        case 0x474f6cu: goto label_474f6c;
        case 0x474f70u: goto label_474f70;
        case 0x474f74u: goto label_474f74;
        case 0x474f78u: goto label_474f78;
        case 0x474f7cu: goto label_474f7c;
        case 0x474f80u: goto label_474f80;
        case 0x474f84u: goto label_474f84;
        case 0x474f88u: goto label_474f88;
        case 0x474f8cu: goto label_474f8c;
        default: break;
    }

    ctx->pc = 0x474c00u;

label_474c00:
    // 0x474c00: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x474c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
label_474c04:
    // 0x474c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x474c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_474c08:
    // 0x474c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474c0c:
    // 0x474c0c: 0xafa403b0  sw          $a0, 0x3B0($sp)
    ctx->pc = 0x474c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 4));
label_474c10:
    // 0x474c10: 0xafa503c0  sw          $a1, 0x3C0($sp)
    ctx->pc = 0x474c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 5));
label_474c14:
    // 0x474c14: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474c18:
    // 0x474c18: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474c1c:
    // 0x474c1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474c20:
    // 0x474c20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474c24:
    // 0x474c24: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474c28:
    if (ctx->pc == 0x474C28u) {
        ctx->pc = 0x474C2Cu;
        goto label_474c2c;
    }
    ctx->pc = 0x474C24u;
    {
        const bool branch_taken_0x474c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474c24) {
            ctx->pc = 0x474CD4u;
            goto label_474cd4;
        }
    }
    ctx->pc = 0x474C2Cu;
label_474c2c:
    // 0x474c2c: 0x8f82b434  lw          $v0, -0x4BCC($gp)
    ctx->pc = 0x474c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947892)));
label_474c30:
    // 0x474c30: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474c34:
    if (ctx->pc == 0x474C34u) {
        ctx->pc = 0x474C38u;
        goto label_474c38;
    }
    ctx->pc = 0x474C30u;
    {
        const bool branch_taken_0x474c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474c30) {
            ctx->pc = 0x474CD4u;
            goto label_474cd4;
        }
    }
    ctx->pc = 0x474C38u;
label_474c38:
    // 0x474c38: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474c3c:
    // 0x474c3c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474c40:
    // 0x474c40: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x474c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_474c44:
    // 0x474c44: 0xc115ee8  jal         func_457BA0
label_474c48:
    if (ctx->pc == 0x474C48u) {
        ctx->pc = 0x474C4Cu;
        goto label_474c4c;
    }
    ctx->pc = 0x474C44u;
    SET_GPR_U32(ctx, 31, 0x474C4Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474C44u, 0x474C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474C4Cu;
label_474c4c:
    // 0x474c4c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474c50:
    if (ctx->pc == 0x474C50u) {
        ctx->pc = 0x474C54u;
        goto label_474c54;
    }
    ctx->pc = 0x474C4Cu;
    {
        const bool branch_taken_0x474c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474c4c) {
            ctx->pc = 0x474CD4u;
            goto label_474cd4;
        }
    }
    ctx->pc = 0x474C54u;
label_474c54:
    // 0x474c54: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x474c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_474c58:
    // 0x474c58: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474c5c:
    if (ctx->pc == 0x474C5Cu) {
        ctx->pc = 0x474C60u;
        goto label_474c60;
    }
    ctx->pc = 0x474C58u;
    {
        const bool branch_taken_0x474c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474c58) {
            ctx->pc = 0x474CD4u;
            goto label_474cd4;
        }
    }
    ctx->pc = 0x474C60u;
label_474c60:
    // 0x474c60: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x474c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_474c64:
    // 0x474c64: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474c68:
    // 0x474c68: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x474c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_474c6c:
    // 0x474c6c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474c70:
    // 0x474c70: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474c74:
    // 0x474c74: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x474c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_474c78:
    // 0x474c78: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474c78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474c7c:
    // 0x474c7c: 0x25290be0  addiu       $t1, $t1, 0xBE0
    ctx->pc = 0x474c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3040));
label_474c80:
    // 0x474c80: 0xc113940  jal         func_44E500
label_474c84:
    if (ctx->pc == 0x474C84u) {
        ctx->pc = 0x474C88u;
        goto label_474c88;
    }
    ctx->pc = 0x474C80u;
    SET_GPR_U32(ctx, 31, 0x474C88u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474C80u, 0x474C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474C88u;
label_474c88:
    // 0x474c88: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x474c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_474c8c:
    // 0x474c8c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474c90:
    // 0x474c90: 0x24a50c80  addiu       $a1, $a1, 0xC80
    ctx->pc = 0x474c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3200));
label_474c94:
    // 0x474c94: 0xc115c24  jal         func_457090
label_474c98:
    if (ctx->pc == 0x474C98u) {
        ctx->pc = 0x474C9Cu;
        goto label_474c9c;
    }
    ctx->pc = 0x474C94u;
    SET_GPR_U32(ctx, 31, 0x474C9Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474C94u, 0x474C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474C9Cu;
label_474c9c:
    // 0x474c9c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x474c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_474ca0:
    // 0x474ca0: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x474ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_474ca4:
    // 0x474ca4: 0x40f809  jalr        $v0
label_474ca8:
    if (ctx->pc == 0x474CA8u) {
        ctx->pc = 0x474CACu;
        goto label_474cac;
    }
    ctx->pc = 0x474CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474CACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474CA4u, 0x474CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474CACu;
label_474cac:
    // 0x474cac: 0xaf82b434  sw          $v0, -0x4BCC($gp)
    ctx->pc = 0x474cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947892), GPR_U32(ctx, 2));
label_474cb0:
    // 0x474cb0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x474cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_474cb4:
    // 0x474cb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474cb8:
    if (ctx->pc == 0x474CB8u) {
        ctx->pc = 0x474CBCu;
        goto label_474cbc;
    }
    ctx->pc = 0x474CB4u;
    {
        const bool branch_taken_0x474cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474cb4) {
            ctx->pc = 0x474CC4u;
            goto label_474cc4;
        }
    }
    ctx->pc = 0x474CBCu;
label_474cbc:
    // 0x474cbc: 0xd  break       0
    ctx->pc = 0x474cbcu;
    runtime->handleBreak(rdram, ctx);
label_474cc0:
    // 0x474cc0: 0x0  nop
    ctx->pc = 0x474cc0u;
    // NOP
label_474cc4:
    // 0x474cc4: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x474cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_474cc8:
    // 0x474cc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474ccc:
    // 0x474ccc: 0xc11392c  jal         func_44E4B0
label_474cd0:
    if (ctx->pc == 0x474CD0u) {
        ctx->pc = 0x474CD4u;
        goto label_474cd4;
    }
    ctx->pc = 0x474CCCu;
    SET_GPR_U32(ctx, 31, 0x474CD4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474CCCu, 0x474CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474CD4u;
label_474cd4:
    // 0x474cd4: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474cd8:
    // 0x474cd8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474cdc:
    // 0x474cdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_474ce0:
    if (ctx->pc == 0x474CE0u) {
        ctx->pc = 0x474CE4u;
        goto label_474ce4;
    }
    ctx->pc = 0x474CDCu;
    {
        const bool branch_taken_0x474cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474cdc) {
            ctx->pc = 0x474CF0u;
            goto label_474cf0;
        }
    }
    ctx->pc = 0x474CE4u;
label_474ce4:
    // 0x474ce4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x474ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474ce8:
    // 0x474ce8: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_474cec:
    if (ctx->pc == 0x474CECu) {
        ctx->pc = 0x474CF0u;
        goto label_474cf0;
    }
    ctx->pc = 0x474CE8u;
    {
        const bool branch_taken_0x474ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474ce8) {
            ctx->pc = 0x474F74u;
            goto label_474f74;
        }
    }
    ctx->pc = 0x474CF0u;
label_474cf0:
    // 0x474cf0: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474cf4:
    // 0x474cf4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474cf8:
    // 0x474cf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_474cfc:
    if (ctx->pc == 0x474CFCu) {
        ctx->pc = 0x474D00u;
        goto label_474d00;
    }
    ctx->pc = 0x474CF8u;
    {
        const bool branch_taken_0x474cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474cf8) {
            ctx->pc = 0x474D20u;
            goto label_474d20;
        }
    }
    ctx->pc = 0x474D00u;
label_474d00:
    // 0x474d00: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474d04:
    // 0x474d04: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x474d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474d08:
    // 0x474d08: 0xc0ee5a4  jal         func_3B9690
label_474d0c:
    if (ctx->pc == 0x474D0Cu) {
        ctx->pc = 0x474D10u;
        goto label_474d10;
    }
    ctx->pc = 0x474D08u;
    SET_GPR_U32(ctx, 31, 0x474D10u);
    ctx->pc = 0x3B9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9690u, 0x474D08u, 0x474D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474D10u;
label_474d10:
    // 0x474d10: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474d14:
    // 0x474d14: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x474d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_474d18:
    // 0x474d18: 0xc11be34  jal         func_46F8D0
label_474d1c:
    if (ctx->pc == 0x474D1Cu) {
        ctx->pc = 0x474D20u;
        goto label_474d20;
    }
    ctx->pc = 0x474D18u;
    SET_GPR_U32(ctx, 31, 0x474D20u);
    ctx->pc = 0x46F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F8D0u, 0x474D18u, 0x474D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474D20u;
label_474d20:
    // 0x474d20: 0xc0ec604  jal         func_3B1810
label_474d24:
    if (ctx->pc == 0x474D24u) {
        ctx->pc = 0x474D28u;
        goto label_474d28;
    }
    ctx->pc = 0x474D20u;
    SET_GPR_U32(ctx, 31, 0x474D28u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x474D20u, 0x474D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474D28u;
label_474d28:
    // 0x474d28: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x474d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474d2c:
    // 0x474d2c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x474d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_474d30:
    // 0x474d30: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474d34:
    // 0x474d34: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x474d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_474d38:
    // 0x474d38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474d3c:
    // 0x474d3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474d40:
    // 0x474d40: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474d44:
    if (ctx->pc == 0x474D44u) {
        ctx->pc = 0x474D48u;
        goto label_474d48;
    }
    ctx->pc = 0x474D40u;
    {
        const bool branch_taken_0x474d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474d40) {
            ctx->pc = 0x474DF0u;
            goto label_474df0;
        }
    }
    ctx->pc = 0x474D48u;
label_474d48:
    // 0x474d48: 0x8f82b438  lw          $v0, -0x4BC8($gp)
    ctx->pc = 0x474d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947896)));
label_474d4c:
    // 0x474d4c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474d50:
    if (ctx->pc == 0x474D50u) {
        ctx->pc = 0x474D54u;
        goto label_474d54;
    }
    ctx->pc = 0x474D4Cu;
    {
        const bool branch_taken_0x474d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474d4c) {
            ctx->pc = 0x474DF0u;
            goto label_474df0;
        }
    }
    ctx->pc = 0x474D54u;
label_474d54:
    // 0x474d54: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474d58:
    // 0x474d58: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474d5c:
    // 0x474d5c: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x474d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_474d60:
    // 0x474d60: 0xc115ee8  jal         func_457BA0
label_474d64:
    if (ctx->pc == 0x474D64u) {
        ctx->pc = 0x474D68u;
        goto label_474d68;
    }
    ctx->pc = 0x474D60u;
    SET_GPR_U32(ctx, 31, 0x474D68u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474D60u, 0x474D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474D68u;
label_474d68:
    // 0x474d68: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474d6c:
    if (ctx->pc == 0x474D6Cu) {
        ctx->pc = 0x474D70u;
        goto label_474d70;
    }
    ctx->pc = 0x474D68u;
    {
        const bool branch_taken_0x474d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474d68) {
            ctx->pc = 0x474DF0u;
            goto label_474df0;
        }
    }
    ctx->pc = 0x474D70u;
label_474d70:
    // 0x474d70: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x474d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_474d74:
    // 0x474d74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474d78:
    if (ctx->pc == 0x474D78u) {
        ctx->pc = 0x474D7Cu;
        goto label_474d7c;
    }
    ctx->pc = 0x474D74u;
    {
        const bool branch_taken_0x474d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474d74) {
            ctx->pc = 0x474DF0u;
            goto label_474df0;
        }
    }
    ctx->pc = 0x474D7Cu;
label_474d7c:
    // 0x474d7c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x474d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_474d80:
    // 0x474d80: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474d84:
    // 0x474d84: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x474d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_474d88:
    // 0x474d88: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474d8c:
    // 0x474d8c: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474d90:
    // 0x474d90: 0x24080073  addiu       $t0, $zero, 0x73
    ctx->pc = 0x474d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_474d94:
    // 0x474d94: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474d94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474d98:
    // 0x474d98: 0x25290b90  addiu       $t1, $t1, 0xB90
    ctx->pc = 0x474d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2960));
label_474d9c:
    // 0x474d9c: 0xc113940  jal         func_44E500
label_474da0:
    if (ctx->pc == 0x474DA0u) {
        ctx->pc = 0x474DA4u;
        goto label_474da4;
    }
    ctx->pc = 0x474D9Cu;
    SET_GPR_U32(ctx, 31, 0x474DA4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474D9Cu, 0x474DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474DA4u;
label_474da4:
    // 0x474da4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x474da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_474da8:
    // 0x474da8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474dac:
    // 0x474dac: 0x24a50cd0  addiu       $a1, $a1, 0xCD0
    ctx->pc = 0x474dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
label_474db0:
    // 0x474db0: 0xc115c24  jal         func_457090
label_474db4:
    if (ctx->pc == 0x474DB4u) {
        ctx->pc = 0x474DB8u;
        goto label_474db8;
    }
    ctx->pc = 0x474DB0u;
    SET_GPR_U32(ctx, 31, 0x474DB8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474DB0u, 0x474DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474DB8u;
label_474db8:
    // 0x474db8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x474db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_474dbc:
    // 0x474dbc: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x474dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_474dc0:
    // 0x474dc0: 0x40f809  jalr        $v0
label_474dc4:
    if (ctx->pc == 0x474DC4u) {
        ctx->pc = 0x474DC8u;
        goto label_474dc8;
    }
    ctx->pc = 0x474DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474DC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474DC0u, 0x474DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474DC8u;
label_474dc8:
    // 0x474dc8: 0xaf82b438  sw          $v0, -0x4BC8($gp)
    ctx->pc = 0x474dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947896), GPR_U32(ctx, 2));
label_474dcc:
    // 0x474dcc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x474dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_474dd0:
    // 0x474dd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474dd4:
    if (ctx->pc == 0x474DD4u) {
        ctx->pc = 0x474DD8u;
        goto label_474dd8;
    }
    ctx->pc = 0x474DD0u;
    {
        const bool branch_taken_0x474dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474dd0) {
            ctx->pc = 0x474DE0u;
            goto label_474de0;
        }
    }
    ctx->pc = 0x474DD8u;
label_474dd8:
    // 0x474dd8: 0xd  break       0
    ctx->pc = 0x474dd8u;
    runtime->handleBreak(rdram, ctx);
label_474ddc:
    // 0x474ddc: 0x0  nop
    ctx->pc = 0x474ddcu;
    // NOP
label_474de0:
    // 0x474de0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x474de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_474de4:
    // 0x474de4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474de8:
    // 0x474de8: 0xc11392c  jal         func_44E4B0
label_474dec:
    if (ctx->pc == 0x474DECu) {
        ctx->pc = 0x474DF0u;
        goto label_474df0;
    }
    ctx->pc = 0x474DE8u;
    SET_GPR_U32(ctx, 31, 0x474DF0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474DE8u, 0x474DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474DF0u;
label_474df0:
    // 0x474df0: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x474df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474df4:
    // 0x474df4: 0x8fa603b0  lw          $a2, 0x3B0($sp)
    ctx->pc = 0x474df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474df8:
    // 0x474df8: 0x8fa503b0  lw          $a1, 0x3B0($sp)
    ctx->pc = 0x474df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474dfc:
    // 0x474dfc: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x474dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e00:
    // 0x474e00: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e04:
    // 0x474e04: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x474e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_474e08:
    // 0x474e08: 0xc4cc0030  lwc1        $f12, 0x30($a2)
    ctx->pc = 0x474e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_474e0c:
    // 0x474e0c: 0xc4ad0034  lwc1        $f13, 0x34($a1)
    ctx->pc = 0x474e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_474e10:
    // 0x474e10: 0xc46e0038  lwc1        $f14, 0x38($v1)
    ctx->pc = 0x474e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_474e14:
    // 0x474e14: 0xc44f003c  lwc1        $f15, 0x3C($v0)
    ctx->pc = 0x474e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_474e18:
    // 0x474e18: 0xc0ec750  jal         func_3B1D40
label_474e1c:
    if (ctx->pc == 0x474E1Cu) {
        ctx->pc = 0x474E20u;
        goto label_474e20;
    }
    ctx->pc = 0x474E18u;
    SET_GPR_U32(ctx, 31, 0x474E20u);
    ctx->pc = 0x3B1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1D40u, 0x474E18u, 0x474E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474E20u;
label_474e20:
    // 0x474e20: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x474e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_474e24:
    // 0x474e24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_474e28:
    if (ctx->pc == 0x474E28u) {
        ctx->pc = 0x474E2Cu;
        goto label_474e2c;
    }
    ctx->pc = 0x474E24u;
    {
        const bool branch_taken_0x474e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e24) {
            ctx->pc = 0x474E38u;
            goto label_474e38;
        }
    }
    ctx->pc = 0x474E2Cu;
label_474e2c:
    // 0x474e2c: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x474e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_474e30:
    // 0x474e30: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e34:
    // 0x474e34: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x474e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_474e38:
    // 0x474e38: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e3c:
    // 0x474e3c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x474e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_474e40:
    // 0x474e40: 0xc11be3c  jal         func_46F8F0
label_474e44:
    if (ctx->pc == 0x474E44u) {
        ctx->pc = 0x474E48u;
        goto label_474e48;
    }
    ctx->pc = 0x474E40u;
    SET_GPR_U32(ctx, 31, 0x474E48u);
    ctx->pc = 0x46F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F8F0u, 0x474E40u, 0x474E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474E48u;
label_474e48:
    // 0x474e48: 0xc0ee592  jal         func_3B9648
label_474e4c:
    if (ctx->pc == 0x474E4Cu) {
        ctx->pc = 0x474E50u;
        goto label_474e50;
    }
    ctx->pc = 0x474E48u;
    SET_GPR_U32(ctx, 31, 0x474E50u);
    ctx->pc = 0x3B9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9648u, 0x474E48u, 0x474E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474E50u;
label_474e50:
    // 0x474e50: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x474e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e54:
    // 0x474e54: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x474e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_474e58:
    // 0x474e58: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e5c:
    // 0x474e5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x474e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_474e60:
    // 0x474e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_474e64:
    if (ctx->pc == 0x474E64u) {
        ctx->pc = 0x474E68u;
        goto label_474e68;
    }
    ctx->pc = 0x474E60u;
    {
        const bool branch_taken_0x474e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e60) {
            ctx->pc = 0x474E74u;
            goto label_474e74;
        }
    }
    ctx->pc = 0x474E68u;
label_474e68:
    // 0x474e68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x474e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474e6c:
    // 0x474e6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_474e70:
    if (ctx->pc == 0x474E70u) {
        ctx->pc = 0x474E74u;
        goto label_474e74;
    }
    ctx->pc = 0x474E6Cu;
    {
        const bool branch_taken_0x474e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e6c) {
            ctx->pc = 0x474E78u;
            goto label_474e78;
        }
    }
    ctx->pc = 0x474E74u;
label_474e74:
    // 0x474e74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x474e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474e78:
    // 0x474e78: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x474e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e7c:
    // 0x474e7c: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x474e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e80:
    // 0x474e80: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474e84:
    // 0x474e84: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x474e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_474e88:
    // 0x474e88: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x474e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_474e8c:
    // 0x474e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x474e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_474e90:
    // 0x474e90: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x474e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_474e94:
    // 0x474e94: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x474e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_474e98:
    // 0x474e98: 0xc0ee5ba  jal         func_3B96E8
label_474e9c:
    if (ctx->pc == 0x474E9Cu) {
        ctx->pc = 0x474EA0u;
        goto label_474ea0;
    }
    ctx->pc = 0x474E98u;
    SET_GPR_U32(ctx, 31, 0x474EA0u);
    ctx->pc = 0x3B96E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B96E8u, 0x474E98u, 0x474EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474EA0u;
label_474ea0:
    // 0x474ea0: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474ea4:
    // 0x474ea4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474ea8:
    // 0x474ea8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474eac:
    // 0x474eac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474eb0:
    // 0x474eb0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474eb4:
    if (ctx->pc == 0x474EB4u) {
        ctx->pc = 0x474EB8u;
        goto label_474eb8;
    }
    ctx->pc = 0x474EB0u;
    {
        const bool branch_taken_0x474eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474eb0) {
            ctx->pc = 0x474F60u;
            goto label_474f60;
        }
    }
    ctx->pc = 0x474EB8u;
label_474eb8:
    // 0x474eb8: 0x8f82b43c  lw          $v0, -0x4BC4($gp)
    ctx->pc = 0x474eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947900)));
label_474ebc:
    // 0x474ebc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474ec0:
    if (ctx->pc == 0x474EC0u) {
        ctx->pc = 0x474EC4u;
        goto label_474ec4;
    }
    ctx->pc = 0x474EBCu;
    {
        const bool branch_taken_0x474ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474ebc) {
            ctx->pc = 0x474F60u;
            goto label_474f60;
        }
    }
    ctx->pc = 0x474EC4u;
label_474ec4:
    // 0x474ec4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474ec8:
    // 0x474ec8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474ecc:
    // 0x474ecc: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x474eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_474ed0:
    // 0x474ed0: 0xc115ee8  jal         func_457BA0
label_474ed4:
    if (ctx->pc == 0x474ED4u) {
        ctx->pc = 0x474ED8u;
        goto label_474ed8;
    }
    ctx->pc = 0x474ED0u;
    SET_GPR_U32(ctx, 31, 0x474ED8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474ED0u, 0x474ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474ED8u;
label_474ed8:
    // 0x474ed8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474edc:
    if (ctx->pc == 0x474EDCu) {
        ctx->pc = 0x474EE0u;
        goto label_474ee0;
    }
    ctx->pc = 0x474ED8u;
    {
        const bool branch_taken_0x474ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474ed8) {
            ctx->pc = 0x474F60u;
            goto label_474f60;
        }
    }
    ctx->pc = 0x474EE0u;
label_474ee0:
    // 0x474ee0: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x474ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_474ee4:
    // 0x474ee4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474ee8:
    if (ctx->pc == 0x474EE8u) {
        ctx->pc = 0x474EECu;
        goto label_474eec;
    }
    ctx->pc = 0x474EE4u;
    {
        const bool branch_taken_0x474ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474ee4) {
            ctx->pc = 0x474F60u;
            goto label_474f60;
        }
    }
    ctx->pc = 0x474EECu;
label_474eec:
    // 0x474eec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x474eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_474ef0:
    // 0x474ef0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474ef4:
    // 0x474ef4: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x474ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_474ef8:
    // 0x474ef8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474efc:
    // 0x474efc: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474f00:
    // 0x474f00: 0x24080087  addiu       $t0, $zero, 0x87
    ctx->pc = 0x474f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_474f04:
    // 0x474f04: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474f04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474f08:
    // 0x474f08: 0x25290be0  addiu       $t1, $t1, 0xBE0
    ctx->pc = 0x474f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3040));
label_474f0c:
    // 0x474f0c: 0xc113940  jal         func_44E500
label_474f10:
    if (ctx->pc == 0x474F10u) {
        ctx->pc = 0x474F14u;
        goto label_474f14;
    }
    ctx->pc = 0x474F0Cu;
    SET_GPR_U32(ctx, 31, 0x474F14u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474F0Cu, 0x474F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474F14u;
label_474f14:
    // 0x474f14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x474f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_474f18:
    // 0x474f18: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474f1c:
    // 0x474f1c: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x474f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
label_474f20:
    // 0x474f20: 0xc115c24  jal         func_457090
label_474f24:
    if (ctx->pc == 0x474F24u) {
        ctx->pc = 0x474F28u;
        goto label_474f28;
    }
    ctx->pc = 0x474F20u;
    SET_GPR_U32(ctx, 31, 0x474F28u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474F20u, 0x474F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474F28u;
label_474f28:
    // 0x474f28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x474f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_474f2c:
    // 0x474f2c: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x474f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_474f30:
    // 0x474f30: 0x40f809  jalr        $v0
label_474f34:
    if (ctx->pc == 0x474F34u) {
        ctx->pc = 0x474F38u;
        goto label_474f38;
    }
    ctx->pc = 0x474F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474F38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474F30u, 0x474F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474F38u;
label_474f38:
    // 0x474f38: 0xaf82b43c  sw          $v0, -0x4BC4($gp)
    ctx->pc = 0x474f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947900), GPR_U32(ctx, 2));
label_474f3c:
    // 0x474f3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x474f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_474f40:
    // 0x474f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474f44:
    if (ctx->pc == 0x474F44u) {
        ctx->pc = 0x474F48u;
        goto label_474f48;
    }
    ctx->pc = 0x474F40u;
    {
        const bool branch_taken_0x474f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474f40) {
            ctx->pc = 0x474F50u;
            goto label_474f50;
        }
    }
    ctx->pc = 0x474F48u;
label_474f48:
    // 0x474f48: 0xd  break       0
    ctx->pc = 0x474f48u;
    runtime->handleBreak(rdram, ctx);
label_474f4c:
    // 0x474f4c: 0x0  nop
    ctx->pc = 0x474f4cu;
    // NOP
label_474f50:
    // 0x474f50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x474f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_474f54:
    // 0x474f54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474f58:
    // 0x474f58: 0xc11392c  jal         func_44E4B0
label_474f5c:
    if (ctx->pc == 0x474F5Cu) {
        ctx->pc = 0x474F60u;
        goto label_474f60;
    }
    ctx->pc = 0x474F58u;
    SET_GPR_U32(ctx, 31, 0x474F60u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474F58u, 0x474F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474F60u;
label_474f60:
    // 0x474f60: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x474f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_474f64:
    // 0x474f64: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x474f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474f68:
    // 0x474f68: 0xc0ee6d8  jal         func_3B9B60
label_474f6c:
    if (ctx->pc == 0x474F6Cu) {
        ctx->pc = 0x474F70u;
        goto label_474f70;
    }
    ctx->pc = 0x474F68u;
    SET_GPR_U32(ctx, 31, 0x474F70u);
    ctx->pc = 0x3B9B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B60u, 0x474F68u, 0x474F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474F70u;
label_474f70:
    // 0x474f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474f74:
    // 0x474f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x474f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_474f78:
    // 0x474f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474f7c:
    // 0x474f7c: 0x27bd03d0  addiu       $sp, $sp, 0x3D0
    ctx->pc = 0x474f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_474f80:
    // 0x474f80: 0x3e00008  jr          $ra
label_474f84:
    if (ctx->pc == 0x474F84u) {
        ctx->pc = 0x474F88u;
        goto label_474f88;
    }
    ctx->pc = 0x474F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474F88u;
label_474f88:
    // 0x474f88: 0x0  nop
    ctx->pc = 0x474f88u;
    // NOP
label_474f8c:
    // 0x474f8c: 0x0  nop
    ctx->pc = 0x474f8cu;
    // NOP
    ctx->pc = 0x474f90u;
}
