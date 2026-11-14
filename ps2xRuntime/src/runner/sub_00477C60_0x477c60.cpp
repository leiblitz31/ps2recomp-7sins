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

// Function: sub_00477C60
// Address: 0x477c60 - 0x477f60
void sub_00477C60_0x477c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477C60_0x477c60");
#endif

    switch (ctx->pc) {
        case 0x477c60u: goto label_477c60;
        case 0x477c64u: goto label_477c64;
        case 0x477c68u: goto label_477c68;
        case 0x477c6cu: goto label_477c6c;
        case 0x477c70u: goto label_477c70;
        case 0x477c74u: goto label_477c74;
        case 0x477c78u: goto label_477c78;
        case 0x477c7cu: goto label_477c7c;
        case 0x477c80u: goto label_477c80;
        case 0x477c84u: goto label_477c84;
        case 0x477c88u: goto label_477c88;
        case 0x477c8cu: goto label_477c8c;
        case 0x477c90u: goto label_477c90;
        case 0x477c94u: goto label_477c94;
        case 0x477c98u: goto label_477c98;
        case 0x477c9cu: goto label_477c9c;
        case 0x477ca0u: goto label_477ca0;
        case 0x477ca4u: goto label_477ca4;
        case 0x477ca8u: goto label_477ca8;
        case 0x477cacu: goto label_477cac;
        case 0x477cb0u: goto label_477cb0;
        case 0x477cb4u: goto label_477cb4;
        case 0x477cb8u: goto label_477cb8;
        case 0x477cbcu: goto label_477cbc;
        case 0x477cc0u: goto label_477cc0;
        case 0x477cc4u: goto label_477cc4;
        case 0x477cc8u: goto label_477cc8;
        case 0x477cccu: goto label_477ccc;
        case 0x477cd0u: goto label_477cd0;
        case 0x477cd4u: goto label_477cd4;
        case 0x477cd8u: goto label_477cd8;
        case 0x477cdcu: goto label_477cdc;
        case 0x477ce0u: goto label_477ce0;
        case 0x477ce4u: goto label_477ce4;
        case 0x477ce8u: goto label_477ce8;
        case 0x477cecu: goto label_477cec;
        case 0x477cf0u: goto label_477cf0;
        case 0x477cf4u: goto label_477cf4;
        case 0x477cf8u: goto label_477cf8;
        case 0x477cfcu: goto label_477cfc;
        case 0x477d00u: goto label_477d00;
        case 0x477d04u: goto label_477d04;
        case 0x477d08u: goto label_477d08;
        case 0x477d0cu: goto label_477d0c;
        case 0x477d10u: goto label_477d10;
        case 0x477d14u: goto label_477d14;
        case 0x477d18u: goto label_477d18;
        case 0x477d1cu: goto label_477d1c;
        case 0x477d20u: goto label_477d20;
        case 0x477d24u: goto label_477d24;
        case 0x477d28u: goto label_477d28;
        case 0x477d2cu: goto label_477d2c;
        case 0x477d30u: goto label_477d30;
        case 0x477d34u: goto label_477d34;
        case 0x477d38u: goto label_477d38;
        case 0x477d3cu: goto label_477d3c;
        case 0x477d40u: goto label_477d40;
        case 0x477d44u: goto label_477d44;
        case 0x477d48u: goto label_477d48;
        case 0x477d4cu: goto label_477d4c;
        case 0x477d50u: goto label_477d50;
        case 0x477d54u: goto label_477d54;
        case 0x477d58u: goto label_477d58;
        case 0x477d5cu: goto label_477d5c;
        case 0x477d60u: goto label_477d60;
        case 0x477d64u: goto label_477d64;
        case 0x477d68u: goto label_477d68;
        case 0x477d6cu: goto label_477d6c;
        case 0x477d70u: goto label_477d70;
        case 0x477d74u: goto label_477d74;
        case 0x477d78u: goto label_477d78;
        case 0x477d7cu: goto label_477d7c;
        case 0x477d80u: goto label_477d80;
        case 0x477d84u: goto label_477d84;
        case 0x477d88u: goto label_477d88;
        case 0x477d8cu: goto label_477d8c;
        case 0x477d90u: goto label_477d90;
        case 0x477d94u: goto label_477d94;
        case 0x477d98u: goto label_477d98;
        case 0x477d9cu: goto label_477d9c;
        case 0x477da0u: goto label_477da0;
        case 0x477da4u: goto label_477da4;
        case 0x477da8u: goto label_477da8;
        case 0x477dacu: goto label_477dac;
        case 0x477db0u: goto label_477db0;
        case 0x477db4u: goto label_477db4;
        case 0x477db8u: goto label_477db8;
        case 0x477dbcu: goto label_477dbc;
        case 0x477dc0u: goto label_477dc0;
        case 0x477dc4u: goto label_477dc4;
        case 0x477dc8u: goto label_477dc8;
        case 0x477dccu: goto label_477dcc;
        case 0x477dd0u: goto label_477dd0;
        case 0x477dd4u: goto label_477dd4;
        case 0x477dd8u: goto label_477dd8;
        case 0x477ddcu: goto label_477ddc;
        case 0x477de0u: goto label_477de0;
        case 0x477de4u: goto label_477de4;
        case 0x477de8u: goto label_477de8;
        case 0x477decu: goto label_477dec;
        case 0x477df0u: goto label_477df0;
        case 0x477df4u: goto label_477df4;
        case 0x477df8u: goto label_477df8;
        case 0x477dfcu: goto label_477dfc;
        case 0x477e00u: goto label_477e00;
        case 0x477e04u: goto label_477e04;
        case 0x477e08u: goto label_477e08;
        case 0x477e0cu: goto label_477e0c;
        case 0x477e10u: goto label_477e10;
        case 0x477e14u: goto label_477e14;
        case 0x477e18u: goto label_477e18;
        case 0x477e1cu: goto label_477e1c;
        case 0x477e20u: goto label_477e20;
        case 0x477e24u: goto label_477e24;
        case 0x477e28u: goto label_477e28;
        case 0x477e2cu: goto label_477e2c;
        case 0x477e30u: goto label_477e30;
        case 0x477e34u: goto label_477e34;
        case 0x477e38u: goto label_477e38;
        case 0x477e3cu: goto label_477e3c;
        case 0x477e40u: goto label_477e40;
        case 0x477e44u: goto label_477e44;
        case 0x477e48u: goto label_477e48;
        case 0x477e4cu: goto label_477e4c;
        case 0x477e50u: goto label_477e50;
        case 0x477e54u: goto label_477e54;
        case 0x477e58u: goto label_477e58;
        case 0x477e5cu: goto label_477e5c;
        case 0x477e60u: goto label_477e60;
        case 0x477e64u: goto label_477e64;
        case 0x477e68u: goto label_477e68;
        case 0x477e6cu: goto label_477e6c;
        case 0x477e70u: goto label_477e70;
        case 0x477e74u: goto label_477e74;
        case 0x477e78u: goto label_477e78;
        case 0x477e7cu: goto label_477e7c;
        case 0x477e80u: goto label_477e80;
        case 0x477e84u: goto label_477e84;
        case 0x477e88u: goto label_477e88;
        case 0x477e8cu: goto label_477e8c;
        case 0x477e90u: goto label_477e90;
        case 0x477e94u: goto label_477e94;
        case 0x477e98u: goto label_477e98;
        case 0x477e9cu: goto label_477e9c;
        case 0x477ea0u: goto label_477ea0;
        case 0x477ea4u: goto label_477ea4;
        case 0x477ea8u: goto label_477ea8;
        case 0x477eacu: goto label_477eac;
        case 0x477eb0u: goto label_477eb0;
        case 0x477eb4u: goto label_477eb4;
        case 0x477eb8u: goto label_477eb8;
        case 0x477ebcu: goto label_477ebc;
        case 0x477ec0u: goto label_477ec0;
        case 0x477ec4u: goto label_477ec4;
        case 0x477ec8u: goto label_477ec8;
        case 0x477eccu: goto label_477ecc;
        case 0x477ed0u: goto label_477ed0;
        case 0x477ed4u: goto label_477ed4;
        case 0x477ed8u: goto label_477ed8;
        case 0x477edcu: goto label_477edc;
        case 0x477ee0u: goto label_477ee0;
        case 0x477ee4u: goto label_477ee4;
        case 0x477ee8u: goto label_477ee8;
        case 0x477eecu: goto label_477eec;
        case 0x477ef0u: goto label_477ef0;
        case 0x477ef4u: goto label_477ef4;
        case 0x477ef8u: goto label_477ef8;
        case 0x477efcu: goto label_477efc;
        case 0x477f00u: goto label_477f00;
        case 0x477f04u: goto label_477f04;
        case 0x477f08u: goto label_477f08;
        case 0x477f0cu: goto label_477f0c;
        case 0x477f10u: goto label_477f10;
        case 0x477f14u: goto label_477f14;
        case 0x477f18u: goto label_477f18;
        case 0x477f1cu: goto label_477f1c;
        case 0x477f20u: goto label_477f20;
        case 0x477f24u: goto label_477f24;
        case 0x477f28u: goto label_477f28;
        case 0x477f2cu: goto label_477f2c;
        case 0x477f30u: goto label_477f30;
        case 0x477f34u: goto label_477f34;
        case 0x477f38u: goto label_477f38;
        case 0x477f3cu: goto label_477f3c;
        case 0x477f40u: goto label_477f40;
        case 0x477f44u: goto label_477f44;
        case 0x477f48u: goto label_477f48;
        case 0x477f4cu: goto label_477f4c;
        case 0x477f50u: goto label_477f50;
        case 0x477f54u: goto label_477f54;
        case 0x477f58u: goto label_477f58;
        case 0x477f5cu: goto label_477f5c;
        default: break;
    }

    ctx->pc = 0x477c60u;

label_477c60:
    // 0x477c60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x477c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_477c64:
    // 0x477c64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x477c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_477c68:
    // 0x477c68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x477c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_477c6c:
    // 0x477c6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x477c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_477c70:
    // 0x477c70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x477c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_477c74:
    // 0x477c74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x477c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_477c78:
    // 0x477c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x477c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_477c7c:
    // 0x477c7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x477c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_477c80:
    // 0x477c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x477c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_477c84:
    // 0x477c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_477c88:
    // 0x477c88: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
label_477c8c:
    // 0x477c8c: 0xc11dd74  jal         func_4775D0
label_477c90:
    if (ctx->pc == 0x477C90u) {
        ctx->pc = 0x477C94u;
        goto label_477c94;
    }
    ctx->pc = 0x477C8Cu;
    SET_GPR_U32(ctx, 31, 0x477C94u);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x477C8Cu, 0x477C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477C94u;
label_477c94:
    // 0x477c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x477c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_477c98:
    // 0x477c98: 0x1000004a  b           . + 4 + (0x4A << 2)
label_477c9c:
    if (ctx->pc == 0x477C9Cu) {
        ctx->pc = 0x477CA0u;
        goto label_477ca0;
    }
    ctx->pc = 0x477C98u;
    {
        const bool branch_taken_0x477c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477c98) {
            ctx->pc = 0x477DC4u;
            goto label_477dc4;
        }
    }
    ctx->pc = 0x477CA0u;
label_477ca0:
    // 0x477ca0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x477ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477ca4:
    // 0x477ca4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477ca8:
    // 0x477ca8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477cac:
    // 0x477cac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x477cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_477cb0:
    // 0x477cb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x477cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_477cb4:
    // 0x477cb4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x477cb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_477cb8:
    // 0x477cb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x477cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477cbc:
    // 0x477cbc: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477cc0:
    // 0x477cc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477cc4:
    // 0x477cc4: 0x8c570018  lw          $s7, 0x18($v0)
    ctx->pc = 0x477cc4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_477cc8:
    // 0x477cc8: 0x2ee1000a  sltiu       $at, $s7, 0xA
    ctx->pc = 0x477cc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_477ccc:
    // 0x477ccc: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_477cd0:
    if (ctx->pc == 0x477CD0u) {
        ctx->pc = 0x477CD4u;
        goto label_477cd4;
    }
    ctx->pc = 0x477CCCu;
    {
        const bool branch_taken_0x477ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x477ccc) {
            ctx->pc = 0x477DC0u;
            goto label_477dc0;
        }
    }
    ctx->pc = 0x477CD4u;
label_477cd4:
    // 0x477cd4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x477cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_477cd8:
    // 0x477cd8: 0x24631b30  addiu       $v1, $v1, 0x1B30
    ctx->pc = 0x477cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6960));
label_477cdc:
    // 0x477cdc: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x477cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_477ce0:
    // 0x477ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x477ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_477ce4:
    // 0x477ce4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x477ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_477ce8:
    // 0x477ce8: 0x400008  jr          $v0
label_477cec:
    if (ctx->pc == 0x477CECu) {
        ctx->pc = 0x477CF0u;
        goto label_477cf0;
    }
    ctx->pc = 0x477CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x477CF0u: goto label_477cf0;
            case 0x477D70u: goto label_477d70;
            case 0x477D94u: goto label_477d94;
            case 0x477DC0u: goto label_477dc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477CE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x477CF0u;
label_477cf0:
    // 0x477cf0: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x477cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_477cf4:
    // 0x477cf4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x477cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_477cf8:
    // 0x477cf8: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_477cfc:
    if (ctx->pc == 0x477CFCu) {
        ctx->pc = 0x477D00u;
        goto label_477d00;
    }
    ctx->pc = 0x477CF8u;
    {
        const bool branch_taken_0x477cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x477cf8) {
            ctx->pc = 0x477DC0u;
            goto label_477dc0;
        }
    }
    ctx->pc = 0x477D00u;
label_477d00:
    // 0x477d00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x477d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477d04:
    // 0x477d04: 0x8c540018  lw          $s4, 0x18($v0)
    ctx->pc = 0x477d04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_477d08:
    // 0x477d08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x477d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477d0c:
    // 0x477d0c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477d10:
    // 0x477d10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477d14:
    // 0x477d14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x477d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477d18:
    // 0x477d18: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x477d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_477d1c:
    // 0x477d1c: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x477d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
label_477d20:
    // 0x477d20: 0x2446001c  addiu       $a2, $v0, 0x1C
    ctx->pc = 0x477d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_477d24:
    // 0x477d24: 0xc0e3396  jal         func_38CE58
label_477d28:
    if (ctx->pc == 0x477D28u) {
        ctx->pc = 0x477D2Cu;
        goto label_477d2c;
    }
    ctx->pc = 0x477D24u;
    SET_GPR_U32(ctx, 31, 0x477D2Cu);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x477D24u, 0x477D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477D2Cu;
label_477d2c:
    // 0x477d2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x477d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477d30:
    // 0x477d30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x477d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477d34:
    // 0x477d34: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477d38:
    // 0x477d38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477d3c:
    // 0x477d3c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x477d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_477d40:
    // 0x477d40: 0x40f809  jalr        $v0
label_477d44:
    if (ctx->pc == 0x477D44u) {
        ctx->pc = 0x477D48u;
        goto label_477d48;
    }
    ctx->pc = 0x477D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x477D48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477D40u, 0x477D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x477D48u;
label_477d48:
    // 0x477d48: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x477d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_477d4c:
    // 0x477d4c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x477d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_477d50:
    // 0x477d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x477d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477d54:
    // 0x477d54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x477d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_477d58:
    // 0x477d58: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x477d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
label_477d5c:
    // 0x477d5c: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x477d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_477d60:
    // 0x477d60: 0xc0e3396  jal         func_38CE58
label_477d64:
    if (ctx->pc == 0x477D64u) {
        ctx->pc = 0x477D68u;
        goto label_477d68;
    }
    ctx->pc = 0x477D60u;
    SET_GPR_U32(ctx, 31, 0x477D68u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x477D60u, 0x477D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477D68u;
label_477d68:
    // 0x477d68: 0x10000015  b           . + 4 + (0x15 << 2)
label_477d6c:
    if (ctx->pc == 0x477D6Cu) {
        ctx->pc = 0x477D70u;
        goto label_477d70;
    }
    ctx->pc = 0x477D68u;
    {
        const bool branch_taken_0x477d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477d68) {
            ctx->pc = 0x477DC0u;
            goto label_477dc0;
        }
    }
    ctx->pc = 0x477D70u;
label_477d70:
    // 0x477d70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x477d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477d74:
    // 0x477d74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x477d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477d78:
    // 0x477d78: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477d7c:
    // 0x477d7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477d80:
    // 0x477d80: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x477d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_477d84:
    // 0x477d84: 0x40f809  jalr        $v0
label_477d88:
    if (ctx->pc == 0x477D88u) {
        ctx->pc = 0x477D8Cu;
        goto label_477d8c;
    }
    ctx->pc = 0x477D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x477D8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477D84u, 0x477D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x477D8Cu;
label_477d8c:
    // 0x477d8c: 0x1000000c  b           . + 4 + (0xC << 2)
label_477d90:
    if (ctx->pc == 0x477D90u) {
        ctx->pc = 0x477D94u;
        goto label_477d94;
    }
    ctx->pc = 0x477D8Cu;
    {
        const bool branch_taken_0x477d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477d8c) {
            ctx->pc = 0x477DC0u;
            goto label_477dc0;
        }
    }
    ctx->pc = 0x477D94u;
label_477d94:
    // 0x477d94: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x477d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_477d98:
    // 0x477d98: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x477d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_477d9c:
    // 0x477d9c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_477da0:
    if (ctx->pc == 0x477DA0u) {
        ctx->pc = 0x477DA4u;
        goto label_477da4;
    }
    ctx->pc = 0x477D9Cu;
    {
        const bool branch_taken_0x477d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x477d9c) {
            ctx->pc = 0x477DC0u;
            goto label_477dc0;
        }
    }
    ctx->pc = 0x477DA4u;
label_477da4:
    // 0x477da4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x477da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477da8:
    // 0x477da8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x477da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477dac:
    // 0x477dac: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477db0:
    // 0x477db0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477db4:
    // 0x477db4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x477db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_477db8:
    // 0x477db8: 0x40f809  jalr        $v0
label_477dbc:
    if (ctx->pc == 0x477DBCu) {
        ctx->pc = 0x477DC0u;
        goto label_477dc0;
    }
    ctx->pc = 0x477DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x477DC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477DB8u, 0x477DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x477DC0u;
label_477dc0:
    // 0x477dc0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x477dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_477dc4:
    // 0x477dc4: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
label_477dc8:
    // 0x477dc8: 0xc11dd6c  jal         func_4775B0
label_477dcc:
    if (ctx->pc == 0x477DCCu) {
        ctx->pc = 0x477DD0u;
        goto label_477dd0;
    }
    ctx->pc = 0x477DC8u;
    SET_GPR_U32(ctx, 31, 0x477DD0u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x477DC8u, 0x477DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477DD0u;
label_477dd0:
    // 0x477dd0: 0x1622ffb3  bne         $s1, $v0, . + 4 + (-0x4D << 2)
label_477dd4:
    if (ctx->pc == 0x477DD4u) {
        ctx->pc = 0x477DD8u;
        goto label_477dd8;
    }
    ctx->pc = 0x477DD0u;
    {
        const bool branch_taken_0x477dd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x477dd0) {
            ctx->pc = 0x477CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477ca0;
        }
    }
    ctx->pc = 0x477DD8u;
label_477dd8:
    // 0x477dd8: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
label_477ddc:
    // 0x477ddc: 0xc11dd74  jal         func_4775D0
label_477de0:
    if (ctx->pc == 0x477DE0u) {
        ctx->pc = 0x477DE4u;
        goto label_477de4;
    }
    ctx->pc = 0x477DDCu;
    SET_GPR_U32(ctx, 31, 0x477DE4u);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x477DDCu, 0x477DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477DE4u;
label_477de4:
    // 0x477de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_477de8:
    // 0x477de8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_477dec:
    if (ctx->pc == 0x477DECu) {
        ctx->pc = 0x477DF0u;
        goto label_477df0;
    }
    ctx->pc = 0x477DE8u;
    {
        const bool branch_taken_0x477de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477de8) {
            ctx->pc = 0x477F14u;
            goto label_477f14;
        }
    }
    ctx->pc = 0x477DF0u;
label_477df0:
    // 0x477df0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x477df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477df4:
    // 0x477df4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477df8:
    // 0x477df8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477dfc:
    // 0x477dfc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x477dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_477e00:
    // 0x477e00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x477e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_477e04:
    // 0x477e04: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x477e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_477e08:
    // 0x477e08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x477e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477e0c:
    // 0x477e0c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477e10:
    // 0x477e10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477e14:
    // 0x477e14: 0x8c560018  lw          $s6, 0x18($v0)
    ctx->pc = 0x477e14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_477e18:
    // 0x477e18: 0x2ec1000a  sltiu       $at, $s6, 0xA
    ctx->pc = 0x477e18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_477e1c:
    // 0x477e1c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_477e20:
    if (ctx->pc == 0x477E20u) {
        ctx->pc = 0x477E24u;
        goto label_477e24;
    }
    ctx->pc = 0x477E1Cu;
    {
        const bool branch_taken_0x477e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x477e1c) {
            ctx->pc = 0x477F10u;
            goto label_477f10;
        }
    }
    ctx->pc = 0x477E24u;
label_477e24:
    // 0x477e24: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x477e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_477e28:
    // 0x477e28: 0x24631b00  addiu       $v1, $v1, 0x1B00
    ctx->pc = 0x477e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_477e2c:
    // 0x477e2c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x477e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_477e30:
    // 0x477e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x477e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_477e34:
    // 0x477e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x477e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_477e38:
    // 0x477e38: 0x400008  jr          $v0
label_477e3c:
    if (ctx->pc == 0x477E3Cu) {
        ctx->pc = 0x477E40u;
        goto label_477e40;
    }
    ctx->pc = 0x477E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x477E40u: goto label_477e40;
            case 0x477EC0u: goto label_477ec0;
            case 0x477EF4u: goto label_477ef4;
            case 0x477F10u: goto label_477f10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477E38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x477E40u;
label_477e40:
    // 0x477e40: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x477e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_477e44:
    // 0x477e44: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x477e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_477e48:
    // 0x477e48: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_477e4c:
    if (ctx->pc == 0x477E4Cu) {
        ctx->pc = 0x477E50u;
        goto label_477e50;
    }
    ctx->pc = 0x477E48u;
    {
        const bool branch_taken_0x477e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x477e48) {
            ctx->pc = 0x477F10u;
            goto label_477f10;
        }
    }
    ctx->pc = 0x477E50u;
label_477e50:
    // 0x477e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x477e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477e54:
    // 0x477e54: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x477e54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_477e58:
    // 0x477e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x477e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477e5c:
    // 0x477e5c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477e60:
    // 0x477e60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477e64:
    // 0x477e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x477e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_477e68:
    // 0x477e68: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x477e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_477e6c:
    // 0x477e6c: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x477e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
label_477e70:
    // 0x477e70: 0x2446001c  addiu       $a2, $v0, 0x1C
    ctx->pc = 0x477e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_477e74:
    // 0x477e74: 0xc0e3396  jal         func_38CE58
label_477e78:
    if (ctx->pc == 0x477E78u) {
        ctx->pc = 0x477E7Cu;
        goto label_477e7c;
    }
    ctx->pc = 0x477E74u;
    SET_GPR_U32(ctx, 31, 0x477E7Cu);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x477E74u, 0x477E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477E7Cu;
label_477e7c:
    // 0x477e7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x477e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477e80:
    // 0x477e80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x477e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477e84:
    // 0x477e84: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477e88:
    // 0x477e88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477e8c:
    // 0x477e8c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x477e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_477e90:
    // 0x477e90: 0x40f809  jalr        $v0
label_477e94:
    if (ctx->pc == 0x477E94u) {
        ctx->pc = 0x477E98u;
        goto label_477e98;
    }
    ctx->pc = 0x477E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x477E98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477E90u, 0x477E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x477E98u;
label_477e98:
    // 0x477e98: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x477e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_477e9c:
    // 0x477e9c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x477e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_477ea0:
    // 0x477ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x477ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_477ea4:
    // 0x477ea4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x477ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_477ea8:
    // 0x477ea8: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x477ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
label_477eac:
    // 0x477eac: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x477eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_477eb0:
    // 0x477eb0: 0xc0e3396  jal         func_38CE58
label_477eb4:
    if (ctx->pc == 0x477EB4u) {
        ctx->pc = 0x477EB8u;
        goto label_477eb8;
    }
    ctx->pc = 0x477EB0u;
    SET_GPR_U32(ctx, 31, 0x477EB8u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x477EB0u, 0x477EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477EB8u;
label_477eb8:
    // 0x477eb8: 0x10000015  b           . + 4 + (0x15 << 2)
label_477ebc:
    if (ctx->pc == 0x477EBCu) {
        ctx->pc = 0x477EC0u;
        goto label_477ec0;
    }
    ctx->pc = 0x477EB8u;
    {
        const bool branch_taken_0x477eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477eb8) {
            ctx->pc = 0x477F10u;
            goto label_477f10;
        }
    }
    ctx->pc = 0x477EC0u;
label_477ec0:
    // 0x477ec0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x477ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_477ec4:
    // 0x477ec4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x477ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_477ec8:
    // 0x477ec8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_477ecc:
    if (ctx->pc == 0x477ECCu) {
        ctx->pc = 0x477ED0u;
        goto label_477ed0;
    }
    ctx->pc = 0x477EC8u;
    {
        const bool branch_taken_0x477ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x477ec8) {
            ctx->pc = 0x477F10u;
            goto label_477f10;
        }
    }
    ctx->pc = 0x477ED0u;
label_477ed0:
    // 0x477ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x477ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477ed4:
    // 0x477ed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x477ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477ed8:
    // 0x477ed8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477edc:
    // 0x477edc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477ee0:
    // 0x477ee0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x477ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_477ee4:
    // 0x477ee4: 0x40f809  jalr        $v0
label_477ee8:
    if (ctx->pc == 0x477EE8u) {
        ctx->pc = 0x477EECu;
        goto label_477eec;
    }
    ctx->pc = 0x477EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x477EECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477EE4u, 0x477EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x477EECu;
label_477eec:
    // 0x477eec: 0x10000008  b           . + 4 + (0x8 << 2)
label_477ef0:
    if (ctx->pc == 0x477EF0u) {
        ctx->pc = 0x477EF4u;
        goto label_477ef4;
    }
    ctx->pc = 0x477EECu;
    {
        const bool branch_taken_0x477eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477eec) {
            ctx->pc = 0x477F10u;
            goto label_477f10;
        }
    }
    ctx->pc = 0x477EF4u;
label_477ef4:
    // 0x477ef4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x477ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477ef8:
    // 0x477ef8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x477ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_477efc:
    // 0x477efc: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x477efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_477f00:
    // 0x477f00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x477f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_477f04:
    // 0x477f04: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x477f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_477f08:
    // 0x477f08: 0x40f809  jalr        $v0
label_477f0c:
    if (ctx->pc == 0x477F0Cu) {
        ctx->pc = 0x477F10u;
        goto label_477f10;
    }
    ctx->pc = 0x477F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x477F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477F08u, 0x477F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x477F10u;
label_477f10:
    // 0x477f10: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x477f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_477f14:
    // 0x477f14: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
label_477f18:
    // 0x477f18: 0xc11dd6c  jal         func_4775B0
label_477f1c:
    if (ctx->pc == 0x477F1Cu) {
        ctx->pc = 0x477F20u;
        goto label_477f20;
    }
    ctx->pc = 0x477F18u;
    SET_GPR_U32(ctx, 31, 0x477F20u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x477F18u, 0x477F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477F20u;
label_477f20:
    // 0x477f20: 0x1602ffb3  bne         $s0, $v0, . + 4 + (-0x4D << 2)
label_477f24:
    if (ctx->pc == 0x477F24u) {
        ctx->pc = 0x477F28u;
        goto label_477f28;
    }
    ctx->pc = 0x477F20u;
    {
        const bool branch_taken_0x477f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x477f20) {
            ctx->pc = 0x477DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477df0;
        }
    }
    ctx->pc = 0x477F28u;
label_477f28:
    // 0x477f28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x477f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_477f2c:
    // 0x477f2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x477f2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_477f30:
    // 0x477f30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x477f30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_477f34:
    // 0x477f34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x477f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_477f38:
    // 0x477f38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x477f38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_477f3c:
    // 0x477f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x477f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_477f40:
    // 0x477f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x477f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_477f44:
    // 0x477f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x477f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_477f48:
    // 0x477f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_477f4c:
    // 0x477f4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x477f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_477f50:
    // 0x477f50: 0x3e00008  jr          $ra
label_477f54:
    if (ctx->pc == 0x477F54u) {
        ctx->pc = 0x477F58u;
        goto label_477f58;
    }
    ctx->pc = 0x477F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477F58u;
label_477f58:
    // 0x477f58: 0x0  nop
    ctx->pc = 0x477f58u;
    // NOP
label_477f5c:
    // 0x477f5c: 0x0  nop
    ctx->pc = 0x477f5cu;
    // NOP
    ctx->pc = 0x477f60u;
}
