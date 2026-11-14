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

// Function: sub_00256B40
// Address: 0x256b40 - 0x256f60
void sub_00256B40_0x256b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256B40_0x256b40");
#endif

    switch (ctx->pc) {
        case 0x256b40u: goto label_256b40;
        case 0x256b44u: goto label_256b44;
        case 0x256b48u: goto label_256b48;
        case 0x256b4cu: goto label_256b4c;
        case 0x256b50u: goto label_256b50;
        case 0x256b54u: goto label_256b54;
        case 0x256b58u: goto label_256b58;
        case 0x256b5cu: goto label_256b5c;
        case 0x256b60u: goto label_256b60;
        case 0x256b64u: goto label_256b64;
        case 0x256b68u: goto label_256b68;
        case 0x256b6cu: goto label_256b6c;
        case 0x256b70u: goto label_256b70;
        case 0x256b74u: goto label_256b74;
        case 0x256b78u: goto label_256b78;
        case 0x256b7cu: goto label_256b7c;
        case 0x256b80u: goto label_256b80;
        case 0x256b84u: goto label_256b84;
        case 0x256b88u: goto label_256b88;
        case 0x256b8cu: goto label_256b8c;
        case 0x256b90u: goto label_256b90;
        case 0x256b94u: goto label_256b94;
        case 0x256b98u: goto label_256b98;
        case 0x256b9cu: goto label_256b9c;
        case 0x256ba0u: goto label_256ba0;
        case 0x256ba4u: goto label_256ba4;
        case 0x256ba8u: goto label_256ba8;
        case 0x256bacu: goto label_256bac;
        case 0x256bb0u: goto label_256bb0;
        case 0x256bb4u: goto label_256bb4;
        case 0x256bb8u: goto label_256bb8;
        case 0x256bbcu: goto label_256bbc;
        case 0x256bc0u: goto label_256bc0;
        case 0x256bc4u: goto label_256bc4;
        case 0x256bc8u: goto label_256bc8;
        case 0x256bccu: goto label_256bcc;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bd4u: goto label_256bd4;
        case 0x256bd8u: goto label_256bd8;
        case 0x256bdcu: goto label_256bdc;
        case 0x256be0u: goto label_256be0;
        case 0x256be4u: goto label_256be4;
        case 0x256be8u: goto label_256be8;
        case 0x256becu: goto label_256bec;
        case 0x256bf0u: goto label_256bf0;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bf8u: goto label_256bf8;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c00u: goto label_256c00;
        case 0x256c04u: goto label_256c04;
        case 0x256c08u: goto label_256c08;
        case 0x256c0cu: goto label_256c0c;
        case 0x256c10u: goto label_256c10;
        case 0x256c14u: goto label_256c14;
        case 0x256c18u: goto label_256c18;
        case 0x256c1cu: goto label_256c1c;
        case 0x256c20u: goto label_256c20;
        case 0x256c24u: goto label_256c24;
        case 0x256c28u: goto label_256c28;
        case 0x256c2cu: goto label_256c2c;
        case 0x256c30u: goto label_256c30;
        case 0x256c34u: goto label_256c34;
        case 0x256c38u: goto label_256c38;
        case 0x256c3cu: goto label_256c3c;
        case 0x256c40u: goto label_256c40;
        case 0x256c44u: goto label_256c44;
        case 0x256c48u: goto label_256c48;
        case 0x256c4cu: goto label_256c4c;
        case 0x256c50u: goto label_256c50;
        case 0x256c54u: goto label_256c54;
        case 0x256c58u: goto label_256c58;
        case 0x256c5cu: goto label_256c5c;
        case 0x256c60u: goto label_256c60;
        case 0x256c64u: goto label_256c64;
        case 0x256c68u: goto label_256c68;
        case 0x256c6cu: goto label_256c6c;
        case 0x256c70u: goto label_256c70;
        case 0x256c74u: goto label_256c74;
        case 0x256c78u: goto label_256c78;
        case 0x256c7cu: goto label_256c7c;
        case 0x256c80u: goto label_256c80;
        case 0x256c84u: goto label_256c84;
        case 0x256c88u: goto label_256c88;
        case 0x256c8cu: goto label_256c8c;
        case 0x256c90u: goto label_256c90;
        case 0x256c94u: goto label_256c94;
        case 0x256c98u: goto label_256c98;
        case 0x256c9cu: goto label_256c9c;
        case 0x256ca0u: goto label_256ca0;
        case 0x256ca4u: goto label_256ca4;
        case 0x256ca8u: goto label_256ca8;
        case 0x256cacu: goto label_256cac;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cbcu: goto label_256cbc;
        case 0x256cc0u: goto label_256cc0;
        case 0x256cc4u: goto label_256cc4;
        case 0x256cc8u: goto label_256cc8;
        case 0x256cccu: goto label_256ccc;
        case 0x256cd0u: goto label_256cd0;
        case 0x256cd4u: goto label_256cd4;
        case 0x256cd8u: goto label_256cd8;
        case 0x256cdcu: goto label_256cdc;
        case 0x256ce0u: goto label_256ce0;
        case 0x256ce4u: goto label_256ce4;
        case 0x256ce8u: goto label_256ce8;
        case 0x256cecu: goto label_256cec;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256cfcu: goto label_256cfc;
        case 0x256d00u: goto label_256d00;
        case 0x256d04u: goto label_256d04;
        case 0x256d08u: goto label_256d08;
        case 0x256d0cu: goto label_256d0c;
        case 0x256d10u: goto label_256d10;
        case 0x256d14u: goto label_256d14;
        case 0x256d18u: goto label_256d18;
        case 0x256d1cu: goto label_256d1c;
        case 0x256d20u: goto label_256d20;
        case 0x256d24u: goto label_256d24;
        case 0x256d28u: goto label_256d28;
        case 0x256d2cu: goto label_256d2c;
        case 0x256d30u: goto label_256d30;
        case 0x256d34u: goto label_256d34;
        case 0x256d38u: goto label_256d38;
        case 0x256d3cu: goto label_256d3c;
        case 0x256d40u: goto label_256d40;
        case 0x256d44u: goto label_256d44;
        case 0x256d48u: goto label_256d48;
        case 0x256d4cu: goto label_256d4c;
        case 0x256d50u: goto label_256d50;
        case 0x256d54u: goto label_256d54;
        case 0x256d58u: goto label_256d58;
        case 0x256d5cu: goto label_256d5c;
        case 0x256d60u: goto label_256d60;
        case 0x256d64u: goto label_256d64;
        case 0x256d68u: goto label_256d68;
        case 0x256d6cu: goto label_256d6c;
        case 0x256d70u: goto label_256d70;
        case 0x256d74u: goto label_256d74;
        case 0x256d78u: goto label_256d78;
        case 0x256d7cu: goto label_256d7c;
        case 0x256d80u: goto label_256d80;
        case 0x256d84u: goto label_256d84;
        case 0x256d88u: goto label_256d88;
        case 0x256d8cu: goto label_256d8c;
        case 0x256d90u: goto label_256d90;
        case 0x256d94u: goto label_256d94;
        case 0x256d98u: goto label_256d98;
        case 0x256d9cu: goto label_256d9c;
        case 0x256da0u: goto label_256da0;
        case 0x256da4u: goto label_256da4;
        case 0x256da8u: goto label_256da8;
        case 0x256dacu: goto label_256dac;
        case 0x256db0u: goto label_256db0;
        case 0x256db4u: goto label_256db4;
        case 0x256db8u: goto label_256db8;
        case 0x256dbcu: goto label_256dbc;
        case 0x256dc0u: goto label_256dc0;
        case 0x256dc4u: goto label_256dc4;
        case 0x256dc8u: goto label_256dc8;
        case 0x256dccu: goto label_256dcc;
        case 0x256dd0u: goto label_256dd0;
        case 0x256dd4u: goto label_256dd4;
        case 0x256dd8u: goto label_256dd8;
        case 0x256ddcu: goto label_256ddc;
        case 0x256de0u: goto label_256de0;
        case 0x256de4u: goto label_256de4;
        case 0x256de8u: goto label_256de8;
        case 0x256decu: goto label_256dec;
        case 0x256df0u: goto label_256df0;
        case 0x256df4u: goto label_256df4;
        case 0x256df8u: goto label_256df8;
        case 0x256dfcu: goto label_256dfc;
        case 0x256e00u: goto label_256e00;
        case 0x256e04u: goto label_256e04;
        case 0x256e08u: goto label_256e08;
        case 0x256e0cu: goto label_256e0c;
        case 0x256e10u: goto label_256e10;
        case 0x256e14u: goto label_256e14;
        case 0x256e18u: goto label_256e18;
        case 0x256e1cu: goto label_256e1c;
        case 0x256e20u: goto label_256e20;
        case 0x256e24u: goto label_256e24;
        case 0x256e28u: goto label_256e28;
        case 0x256e2cu: goto label_256e2c;
        case 0x256e30u: goto label_256e30;
        case 0x256e34u: goto label_256e34;
        case 0x256e38u: goto label_256e38;
        case 0x256e3cu: goto label_256e3c;
        case 0x256e40u: goto label_256e40;
        case 0x256e44u: goto label_256e44;
        case 0x256e48u: goto label_256e48;
        case 0x256e4cu: goto label_256e4c;
        case 0x256e50u: goto label_256e50;
        case 0x256e54u: goto label_256e54;
        case 0x256e58u: goto label_256e58;
        case 0x256e5cu: goto label_256e5c;
        case 0x256e60u: goto label_256e60;
        case 0x256e64u: goto label_256e64;
        case 0x256e68u: goto label_256e68;
        case 0x256e6cu: goto label_256e6c;
        case 0x256e70u: goto label_256e70;
        case 0x256e74u: goto label_256e74;
        case 0x256e78u: goto label_256e78;
        case 0x256e7cu: goto label_256e7c;
        case 0x256e80u: goto label_256e80;
        case 0x256e84u: goto label_256e84;
        case 0x256e88u: goto label_256e88;
        case 0x256e8cu: goto label_256e8c;
        case 0x256e90u: goto label_256e90;
        case 0x256e94u: goto label_256e94;
        case 0x256e98u: goto label_256e98;
        case 0x256e9cu: goto label_256e9c;
        case 0x256ea0u: goto label_256ea0;
        case 0x256ea4u: goto label_256ea4;
        case 0x256ea8u: goto label_256ea8;
        case 0x256eacu: goto label_256eac;
        case 0x256eb0u: goto label_256eb0;
        case 0x256eb4u: goto label_256eb4;
        case 0x256eb8u: goto label_256eb8;
        case 0x256ebcu: goto label_256ebc;
        case 0x256ec0u: goto label_256ec0;
        case 0x256ec4u: goto label_256ec4;
        case 0x256ec8u: goto label_256ec8;
        case 0x256eccu: goto label_256ecc;
        case 0x256ed0u: goto label_256ed0;
        case 0x256ed4u: goto label_256ed4;
        case 0x256ed8u: goto label_256ed8;
        case 0x256edcu: goto label_256edc;
        case 0x256ee0u: goto label_256ee0;
        case 0x256ee4u: goto label_256ee4;
        case 0x256ee8u: goto label_256ee8;
        case 0x256eecu: goto label_256eec;
        case 0x256ef0u: goto label_256ef0;
        case 0x256ef4u: goto label_256ef4;
        case 0x256ef8u: goto label_256ef8;
        case 0x256efcu: goto label_256efc;
        case 0x256f00u: goto label_256f00;
        case 0x256f04u: goto label_256f04;
        case 0x256f08u: goto label_256f08;
        case 0x256f0cu: goto label_256f0c;
        case 0x256f10u: goto label_256f10;
        case 0x256f14u: goto label_256f14;
        case 0x256f18u: goto label_256f18;
        case 0x256f1cu: goto label_256f1c;
        case 0x256f20u: goto label_256f20;
        case 0x256f24u: goto label_256f24;
        case 0x256f28u: goto label_256f28;
        case 0x256f2cu: goto label_256f2c;
        case 0x256f30u: goto label_256f30;
        case 0x256f34u: goto label_256f34;
        case 0x256f38u: goto label_256f38;
        case 0x256f3cu: goto label_256f3c;
        case 0x256f40u: goto label_256f40;
        case 0x256f44u: goto label_256f44;
        case 0x256f48u: goto label_256f48;
        case 0x256f4cu: goto label_256f4c;
        case 0x256f50u: goto label_256f50;
        case 0x256f54u: goto label_256f54;
        case 0x256f58u: goto label_256f58;
        case 0x256f5cu: goto label_256f5c;
        default: break;
    }

    ctx->pc = 0x256b40u;

label_256b40:
    // 0x256b40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_256b44:
    // 0x256b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_256b48:
    // 0x256b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_256b4c:
    // 0x256b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_256b50:
    // 0x256b50: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x256b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_256b54:
    // 0x256b54: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x256b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_256b58:
    // 0x256b58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x256b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256b5c:
    // 0x256b5c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x256b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_256b60:
    // 0x256b60: 0xc09573c  jal         func_255CF0
label_256b64:
    if (ctx->pc == 0x256B64u) {
        ctx->pc = 0x256B68u;
        goto label_256b68;
    }
    ctx->pc = 0x256B60u;
    SET_GPR_U32(ctx, 31, 0x256B68u);
    ctx->pc = 0x255CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CF0u, 0x256B60u, 0x256B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B68u;
label_256b68:
    // 0x256b68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x256b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_256b6c:
    // 0x256b6c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x256b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_256b70:
    // 0x256b70: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256b74:
    // 0x256b74: 0xc095410  jal         func_255040
label_256b78:
    if (ctx->pc == 0x256B78u) {
        ctx->pc = 0x256B7Cu;
        goto label_256b7c;
    }
    ctx->pc = 0x256B74u;
    SET_GPR_U32(ctx, 31, 0x256B7Cu);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x256B74u, 0x256B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B7Cu;
label_256b7c:
    // 0x256b7c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_256b80:
    // 0x256b80: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_256b84:
    // 0x256b84: 0xc09572c  jal         func_255CB0
label_256b88:
    if (ctx->pc == 0x256B88u) {
        ctx->pc = 0x256B8Cu;
        goto label_256b8c;
    }
    ctx->pc = 0x256B84u;
    SET_GPR_U32(ctx, 31, 0x256B8Cu);
    ctx->pc = 0x255CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CB0u, 0x256B84u, 0x256B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B8Cu;
label_256b8c:
    // 0x256b8c: 0x1000000f  b           . + 4 + (0xF << 2)
label_256b90:
    if (ctx->pc == 0x256B90u) {
        ctx->pc = 0x256B94u;
        goto label_256b94;
    }
    ctx->pc = 0x256B8Cu;
    {
        const bool branch_taken_0x256b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b8c) {
            ctx->pc = 0x256BCCu;
            goto label_256bcc;
        }
    }
    ctx->pc = 0x256B94u;
label_256b94:
    // 0x256b94: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_256b98:
    // 0x256b98: 0xc095408  jal         func_255020
label_256b9c:
    if (ctx->pc == 0x256B9Cu) {
        ctx->pc = 0x256BA0u;
        goto label_256ba0;
    }
    ctx->pc = 0x256B98u;
    SET_GPR_U32(ctx, 31, 0x256BA0u);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x256B98u, 0x256BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BA0u;
label_256ba0:
    // 0x256ba0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x256ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256ba4:
    // 0x256ba4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x256ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_256ba8:
    // 0x256ba8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x256ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_256bac:
    // 0x256bac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_256bb0:
    if (ctx->pc == 0x256BB0u) {
        ctx->pc = 0x256BB4u;
        goto label_256bb4;
    }
    ctx->pc = 0x256BACu;
    {
        const bool branch_taken_0x256bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x256bac) {
            ctx->pc = 0x256BC0u;
            goto label_256bc0;
        }
    }
    ctx->pc = 0x256BB4u;
label_256bb4:
    // 0x256bb4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256bb8:
    // 0x256bb8: 0x1000000f  b           . + 4 + (0xF << 2)
label_256bbc:
    if (ctx->pc == 0x256BBCu) {
        ctx->pc = 0x256BC0u;
        goto label_256bc0;
    }
    ctx->pc = 0x256BB8u;
    {
        const bool branch_taken_0x256bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256bb8) {
            ctx->pc = 0x256BF8u;
            goto label_256bf8;
        }
    }
    ctx->pc = 0x256BC0u;
label_256bc0:
    // 0x256bc0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x256bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_256bc4:
    // 0x256bc4: 0xc0953cc  jal         func_254F30
label_256bc8:
    if (ctx->pc == 0x256BC8u) {
        ctx->pc = 0x256BCCu;
        goto label_256bcc;
    }
    ctx->pc = 0x256BC4u;
    SET_GPR_U32(ctx, 31, 0x256BCCu);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x256BC4u, 0x256BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BCCu;
label_256bcc:
    // 0x256bcc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x256bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_256bd0:
    // 0x256bd0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x256bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_256bd4:
    // 0x256bd4: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256bd8:
    // 0x256bd8: 0xc0953a0  jal         func_254E80
label_256bdc:
    if (ctx->pc == 0x256BDCu) {
        ctx->pc = 0x256BE0u;
        goto label_256be0;
    }
    ctx->pc = 0x256BD8u;
    SET_GPR_U32(ctx, 31, 0x256BE0u);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x256BD8u, 0x256BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BE0u;
label_256be0:
    // 0x256be0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x256be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_256be4:
    // 0x256be4: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x256be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_256be8:
    // 0x256be8: 0xc041998  jal         func_106660
label_256bec:
    if (ctx->pc == 0x256BECu) {
        ctx->pc = 0x256BF0u;
        goto label_256bf0;
    }
    ctx->pc = 0x256BE8u;
    SET_GPR_U32(ctx, 31, 0x256BF0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x256BE8u, 0x256BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BF0u;
label_256bf0:
    // 0x256bf0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_256bf4:
    if (ctx->pc == 0x256BF4u) {
        ctx->pc = 0x256BF8u;
        goto label_256bf8;
    }
    ctx->pc = 0x256BF0u;
    {
        const bool branch_taken_0x256bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256bf0) {
            ctx->pc = 0x256B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256b94;
        }
    }
    ctx->pc = 0x256BF8u;
label_256bf8:
    // 0x256bf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x256bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256bfc:
    // 0x256bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_256c00:
    // 0x256c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_256c04:
    // 0x256c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_256c08:
    // 0x256c08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x256c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_256c0c:
    // 0x256c0c: 0x3e00008  jr          $ra
label_256c10:
    if (ctx->pc == 0x256C10u) {
        ctx->pc = 0x256C14u;
        goto label_256c14;
    }
    ctx->pc = 0x256C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256C14u;
label_256c14:
    // 0x256c14: 0x0  nop
    ctx->pc = 0x256c14u;
    // NOP
label_256c18:
    // 0x256c18: 0x0  nop
    ctx->pc = 0x256c18u;
    // NOP
label_256c1c:
    // 0x256c1c: 0x0  nop
    ctx->pc = 0x256c1cu;
    // NOP
label_256c20:
    // 0x256c20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x256c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_256c24:
    // 0x256c24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x256c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_256c28:
    // 0x256c28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_256c2c:
    // 0x256c2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_256c30:
    // 0x256c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_256c34:
    // 0x256c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_256c38:
    // 0x256c38: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x256c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_256c3c:
    // 0x256c3c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x256c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_256c40:
    // 0x256c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256c44:
    // 0x256c44: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x256c44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_256c48:
    // 0x256c48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x256c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256c4c:
    // 0x256c4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x256c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256c50:
    // 0x256c50: 0x100200b8  beq         $zero, $v0, . + 4 + (0xB8 << 2)
label_256c54:
    if (ctx->pc == 0x256C54u) {
        ctx->pc = 0x256C58u;
        goto label_256c58;
    }
    ctx->pc = 0x256C50u;
    {
        const bool branch_taken_0x256c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x256c50) {
            ctx->pc = 0x256F34u;
            goto label_256f34;
        }
    }
    ctx->pc = 0x256C58u;
label_256c58:
    // 0x256c58: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256c5c:
    // 0x256c5c: 0xc0422b8  jal         func_108AE0
label_256c60:
    if (ctx->pc == 0x256C60u) {
        ctx->pc = 0x256C64u;
        goto label_256c64;
    }
    ctx->pc = 0x256C5Cu;
    SET_GPR_U32(ctx, 31, 0x256C64u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256C5Cu, 0x256C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C64u;
label_256c64:
    // 0x256c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256c68:
    // 0x256c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256c6c:
    // 0x256c6c: 0xc08ec98  jal         func_23B260
label_256c70:
    if (ctx->pc == 0x256C70u) {
        ctx->pc = 0x256C74u;
        goto label_256c74;
    }
    ctx->pc = 0x256C6Cu;
    SET_GPR_U32(ctx, 31, 0x256C74u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x256C6Cu, 0x256C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C74u;
label_256c74:
    // 0x256c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256c78:
    // 0x256c78: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x256c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_256c7c:
    // 0x256c7c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256c80:
    // 0x256c80: 0xc0422b8  jal         func_108AE0
label_256c84:
    if (ctx->pc == 0x256C84u) {
        ctx->pc = 0x256C88u;
        goto label_256c88;
    }
    ctx->pc = 0x256C80u;
    SET_GPR_U32(ctx, 31, 0x256C88u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256C80u, 0x256C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C88u;
label_256c88:
    // 0x256c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256c8c:
    // 0x256c8c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x256c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_256c90:
    // 0x256c90: 0xc0422a8  jal         func_108AA0
label_256c94:
    if (ctx->pc == 0x256C94u) {
        ctx->pc = 0x256C98u;
        goto label_256c98;
    }
    ctx->pc = 0x256C90u;
    SET_GPR_U32(ctx, 31, 0x256C98u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x256C90u, 0x256C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C98u;
label_256c98:
    // 0x256c98: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256c9c:
    // 0x256c9c: 0xc0422b8  jal         func_108AE0
label_256ca0:
    if (ctx->pc == 0x256CA0u) {
        ctx->pc = 0x256CA4u;
        goto label_256ca4;
    }
    ctx->pc = 0x256C9Cu;
    SET_GPR_U32(ctx, 31, 0x256CA4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256C9Cu, 0x256CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CA4u;
label_256ca4:
    // 0x256ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256ca8:
    // 0x256ca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256cac:
    // 0x256cac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_256cb0:
    // 0x256cb0: 0x320f809  jalr        $t9
label_256cb4:
    if (ctx->pc == 0x256CB4u) {
        ctx->pc = 0x256CB8u;
        goto label_256cb8;
    }
    ctx->pc = 0x256CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256CB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256CB0u, 0x256CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256CB8u;
label_256cb8:
    // 0x256cb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x256cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_256cbc:
    // 0x256cbc: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
label_256cc0:
    if (ctx->pc == 0x256CC0u) {
        ctx->pc = 0x256CC4u;
        goto label_256cc4;
    }
    ctx->pc = 0x256CBCu;
    {
        const bool branch_taken_0x256cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x256cbc) {
            ctx->pc = 0x256DA0u;
            goto label_256da0;
        }
    }
    ctx->pc = 0x256CC4u;
label_256cc4:
    // 0x256cc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256cc8:
    // 0x256cc8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x256cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256ccc:
    // 0x256ccc: 0xc095bd8  jal         func_256F60
label_256cd0:
    if (ctx->pc == 0x256CD0u) {
        ctx->pc = 0x256CD4u;
        goto label_256cd4;
    }
    ctx->pc = 0x256CCCu;
    SET_GPR_U32(ctx, 31, 0x256CD4u);
    ctx->pc = 0x256F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F60u, 0x256CCCu, 0x256CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CD4u;
label_256cd4:
    // 0x256cd4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x256cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_256cd8:
    // 0x256cd8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256cdc:
    // 0x256cdc: 0xc0422b8  jal         func_108AE0
label_256ce0:
    if (ctx->pc == 0x256CE0u) {
        ctx->pc = 0x256CE4u;
        goto label_256ce4;
    }
    ctx->pc = 0x256CDCu;
    SET_GPR_U32(ctx, 31, 0x256CE4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256CDCu, 0x256CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CE4u;
label_256ce4:
    // 0x256ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256ce8:
    // 0x256ce8: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x256ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_256cec:
    // 0x256cec: 0xc042298  jal         func_108A60
label_256cf0:
    if (ctx->pc == 0x256CF0u) {
        ctx->pc = 0x256CF4u;
        goto label_256cf4;
    }
    ctx->pc = 0x256CECu;
    SET_GPR_U32(ctx, 31, 0x256CF4u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x256CECu, 0x256CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CF4u;
label_256cf4:
    // 0x256cf4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256cf8:
    // 0x256cf8: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x256cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_256cfc:
    // 0x256cfc: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256d00:
    // 0x256d00: 0xc095410  jal         func_255040
label_256d04:
    if (ctx->pc == 0x256D04u) {
        ctx->pc = 0x256D08u;
        goto label_256d08;
    }
    ctx->pc = 0x256D00u;
    SET_GPR_U32(ctx, 31, 0x256D08u);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x256D00u, 0x256D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D08u;
label_256d08:
    // 0x256d08: 0x10000018  b           . + 4 + (0x18 << 2)
label_256d0c:
    if (ctx->pc == 0x256D0Cu) {
        ctx->pc = 0x256D10u;
        goto label_256d10;
    }
    ctx->pc = 0x256D08u;
    {
        const bool branch_taken_0x256d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d08) {
            ctx->pc = 0x256D6Cu;
            goto label_256d6c;
        }
    }
    ctx->pc = 0x256D10u;
label_256d10:
    // 0x256d10: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x256d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_256d14:
    // 0x256d14: 0xc095408  jal         func_255020
label_256d18:
    if (ctx->pc == 0x256D18u) {
        ctx->pc = 0x256D1Cu;
        goto label_256d1c;
    }
    ctx->pc = 0x256D14u;
    SET_GPR_U32(ctx, 31, 0x256D1Cu);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x256D14u, 0x256D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D1Cu;
label_256d1c:
    // 0x256d1c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x256d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256d20:
    // 0x256d20: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256d24:
    // 0x256d24: 0xc0422b8  jal         func_108AE0
label_256d28:
    if (ctx->pc == 0x256D28u) {
        ctx->pc = 0x256D2Cu;
        goto label_256d2c;
    }
    ctx->pc = 0x256D24u;
    SET_GPR_U32(ctx, 31, 0x256D2Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256D24u, 0x256D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D2Cu;
label_256d2c:
    // 0x256d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_256d30:
    // 0x256d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256d34:
    // 0x256d34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256d38:
    // 0x256d38: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x256d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_256d3c:
    // 0x256d3c: 0x320f809  jalr        $t9
label_256d40:
    if (ctx->pc == 0x256D40u) {
        ctx->pc = 0x256D44u;
        goto label_256d44;
    }
    ctx->pc = 0x256D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256D3Cu, 0x256D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256D44u;
label_256d44:
    // 0x256d44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x256d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_256d48:
    // 0x256d48: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x256d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_256d4c:
    // 0x256d4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_256d50:
    // 0x256d50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_256d54:
    // 0x256d54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x256d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_256d58:
    // 0x256d58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x256d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_256d5c:
    // 0x256d5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x256d5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_256d60:
    // 0x256d60: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x256d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_256d64:
    // 0x256d64: 0xc0953cc  jal         func_254F30
label_256d68:
    if (ctx->pc == 0x256D68u) {
        ctx->pc = 0x256D6Cu;
        goto label_256d6c;
    }
    ctx->pc = 0x256D64u;
    SET_GPR_U32(ctx, 31, 0x256D6Cu);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x256D64u, 0x256D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D6Cu;
label_256d6c:
    // 0x256d6c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256d70:
    // 0x256d70: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x256d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_256d74:
    // 0x256d74: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256d78:
    // 0x256d78: 0xc0953a0  jal         func_254E80
label_256d7c:
    if (ctx->pc == 0x256D7Cu) {
        ctx->pc = 0x256D80u;
        goto label_256d80;
    }
    ctx->pc = 0x256D78u;
    SET_GPR_U32(ctx, 31, 0x256D80u);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x256D78u, 0x256D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D80u;
label_256d80:
    // 0x256d80: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_256d84:
    // 0x256d84: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x256d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_256d88:
    // 0x256d88: 0xc041998  jal         func_106660
label_256d8c:
    if (ctx->pc == 0x256D8Cu) {
        ctx->pc = 0x256D90u;
        goto label_256d90;
    }
    ctx->pc = 0x256D88u;
    SET_GPR_U32(ctx, 31, 0x256D90u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x256D88u, 0x256D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D90u;
label_256d90:
    // 0x256d90: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_256d94:
    if (ctx->pc == 0x256D94u) {
        ctx->pc = 0x256D98u;
        goto label_256d98;
    }
    ctx->pc = 0x256D90u;
    {
        const bool branch_taken_0x256d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256d90) {
            ctx->pc = 0x256D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256d10;
        }
    }
    ctx->pc = 0x256D98u;
label_256d98:
    // 0x256d98: 0x1000005f  b           . + 4 + (0x5F << 2)
label_256d9c:
    if (ctx->pc == 0x256D9Cu) {
        ctx->pc = 0x256DA0u;
        goto label_256da0;
    }
    ctx->pc = 0x256D98u;
    {
        const bool branch_taken_0x256d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d98) {
            ctx->pc = 0x256F18u;
            goto label_256f18;
        }
    }
    ctx->pc = 0x256DA0u;
label_256da0:
    // 0x256da0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256da4:
    // 0x256da4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x256da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_256da8:
    // 0x256da8: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256dac:
    // 0x256dac: 0xc095410  jal         func_255040
label_256db0:
    if (ctx->pc == 0x256DB0u) {
        ctx->pc = 0x256DB4u;
        goto label_256db4;
    }
    ctx->pc = 0x256DACu;
    SET_GPR_U32(ctx, 31, 0x256DB4u);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x256DACu, 0x256DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DB4u;
label_256db4:
    // 0x256db4: 0x10000011  b           . + 4 + (0x11 << 2)
label_256db8:
    if (ctx->pc == 0x256DB8u) {
        ctx->pc = 0x256DBCu;
        goto label_256dbc;
    }
    ctx->pc = 0x256DB4u;
    {
        const bool branch_taken_0x256db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256db4) {
            ctx->pc = 0x256DFCu;
            goto label_256dfc;
        }
    }
    ctx->pc = 0x256DBCu;
label_256dbc:
    // 0x256dbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x256dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_256dc0:
    // 0x256dc0: 0xc095408  jal         func_255020
label_256dc4:
    if (ctx->pc == 0x256DC4u) {
        ctx->pc = 0x256DC8u;
        goto label_256dc8;
    }
    ctx->pc = 0x256DC0u;
    SET_GPR_U32(ctx, 31, 0x256DC8u);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x256DC0u, 0x256DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DC8u;
label_256dc8:
    // 0x256dc8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x256dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256dcc:
    // 0x256dcc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_256dd0:
    if (ctx->pc == 0x256DD0u) {
        ctx->pc = 0x256DD4u;
        goto label_256dd4;
    }
    ctx->pc = 0x256DCCu;
    {
        const bool branch_taken_0x256dcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x256dcc) {
            ctx->pc = 0x256DF0u;
            goto label_256df0;
        }
    }
    ctx->pc = 0x256DD4u;
label_256dd4:
    // 0x256dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_256dd8:
    // 0x256dd8: 0xc0953dc  jal         func_254F70
label_256ddc:
    if (ctx->pc == 0x256DDCu) {
        ctx->pc = 0x256DE0u;
        goto label_256de0;
    }
    ctx->pc = 0x256DD8u;
    SET_GPR_U32(ctx, 31, 0x256DE0u);
    ctx->pc = 0x254F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F70u, 0x256DD8u, 0x256DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DE0u;
label_256de0:
    // 0x256de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_256de4:
    // 0x256de4: 0xc119c5c  jal         func_467170
label_256de8:
    if (ctx->pc == 0x256DE8u) {
        ctx->pc = 0x256DECu;
        goto label_256dec;
    }
    ctx->pc = 0x256DE4u;
    SET_GPR_U32(ctx, 31, 0x256DECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x256DE4u, 0x256DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DECu;
label_256dec:
    // 0x256dec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x256decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256df0:
    // 0x256df0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x256df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_256df4:
    // 0x256df4: 0xc0953cc  jal         func_254F30
label_256df8:
    if (ctx->pc == 0x256DF8u) {
        ctx->pc = 0x256DFCu;
        goto label_256dfc;
    }
    ctx->pc = 0x256DF4u;
    SET_GPR_U32(ctx, 31, 0x256DFCu);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x256DF4u, 0x256DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DFCu;
label_256dfc:
    // 0x256dfc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256e00:
    // 0x256e00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x256e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_256e04:
    // 0x256e04: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256e08:
    // 0x256e08: 0xc0953a0  jal         func_254E80
label_256e0c:
    if (ctx->pc == 0x256E0Cu) {
        ctx->pc = 0x256E10u;
        goto label_256e10;
    }
    ctx->pc = 0x256E08u;
    SET_GPR_U32(ctx, 31, 0x256E10u);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x256E08u, 0x256E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E10u;
label_256e10:
    // 0x256e10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x256e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_256e14:
    // 0x256e14: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x256e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_256e18:
    // 0x256e18: 0xc041998  jal         func_106660
label_256e1c:
    if (ctx->pc == 0x256E1Cu) {
        ctx->pc = 0x256E20u;
        goto label_256e20;
    }
    ctx->pc = 0x256E18u;
    SET_GPR_U32(ctx, 31, 0x256E20u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x256E18u, 0x256E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E20u;
label_256e20:
    // 0x256e20: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_256e24:
    if (ctx->pc == 0x256E24u) {
        ctx->pc = 0x256E28u;
        goto label_256e28;
    }
    ctx->pc = 0x256E20u;
    {
        const bool branch_taken_0x256e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256e20) {
            ctx->pc = 0x256DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256dbc;
        }
    }
    ctx->pc = 0x256E28u;
label_256e28:
    // 0x256e28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256e2c:
    // 0x256e2c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x256e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256e30:
    // 0x256e30: 0xc095394  jal         func_254E50
label_256e34:
    if (ctx->pc == 0x256E34u) {
        ctx->pc = 0x256E38u;
        goto label_256e38;
    }
    ctx->pc = 0x256E30u;
    SET_GPR_U32(ctx, 31, 0x256E38u);
    ctx->pc = 0x254E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E50u, 0x256E30u, 0x256E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E38u;
label_256e38:
    // 0x256e38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256e3c:
    // 0x256e3c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x256e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256e40:
    // 0x256e40: 0xc095bd8  jal         func_256F60
label_256e44:
    if (ctx->pc == 0x256E44u) {
        ctx->pc = 0x256E48u;
        goto label_256e48;
    }
    ctx->pc = 0x256E40u;
    SET_GPR_U32(ctx, 31, 0x256E48u);
    ctx->pc = 0x256F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F60u, 0x256E40u, 0x256E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E48u;
label_256e48:
    // 0x256e48: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x256e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_256e4c:
    // 0x256e4c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256e50:
    // 0x256e50: 0xc0422b8  jal         func_108AE0
label_256e54:
    if (ctx->pc == 0x256E54u) {
        ctx->pc = 0x256E58u;
        goto label_256e58;
    }
    ctx->pc = 0x256E50u;
    SET_GPR_U32(ctx, 31, 0x256E58u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256E50u, 0x256E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E58u;
label_256e58:
    // 0x256e58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256e5c:
    // 0x256e5c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x256e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_256e60:
    // 0x256e60: 0xc042298  jal         func_108A60
label_256e64:
    if (ctx->pc == 0x256E64u) {
        ctx->pc = 0x256E68u;
        goto label_256e68;
    }
    ctx->pc = 0x256E60u;
    SET_GPR_U32(ctx, 31, 0x256E68u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x256E60u, 0x256E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E68u;
label_256e68:
    // 0x256e68: 0x10000026  b           . + 4 + (0x26 << 2)
label_256e6c:
    if (ctx->pc == 0x256E6Cu) {
        ctx->pc = 0x256E70u;
        goto label_256e70;
    }
    ctx->pc = 0x256E68u;
    {
        const bool branch_taken_0x256e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256e68) {
            ctx->pc = 0x256F04u;
            goto label_256f04;
        }
    }
    ctx->pc = 0x256E70u;
label_256e70:
    // 0x256e70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x256e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_256e74:
    // 0x256e74: 0xc119b68  jal         func_466DA0
label_256e78:
    if (ctx->pc == 0x256E78u) {
        ctx->pc = 0x256E7Cu;
        goto label_256e7c;
    }
    ctx->pc = 0x256E74u;
    SET_GPR_U32(ctx, 31, 0x256E7Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x256E74u, 0x256E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E7Cu;
label_256e7c:
    // 0x256e7c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x256e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_256e80:
    // 0x256e80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256e84:
    // 0x256e84: 0xc0400e0  jal         func_100380
label_256e88:
    if (ctx->pc == 0x256E88u) {
        ctx->pc = 0x256E8Cu;
        goto label_256e8c;
    }
    ctx->pc = 0x256E84u;
    SET_GPR_U32(ctx, 31, 0x256E8Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x256E84u, 0x256E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E8Cu;
label_256e8c:
    // 0x256e8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x256e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256e90:
    // 0x256e90: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_256e94:
    if (ctx->pc == 0x256E94u) {
        ctx->pc = 0x256E98u;
        goto label_256e98;
    }
    ctx->pc = 0x256E90u;
    {
        const bool branch_taken_0x256e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x256e90) {
            ctx->pc = 0x256EA8u;
            goto label_256ea8;
        }
    }
    ctx->pc = 0x256E98u;
label_256e98:
    // 0x256e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256e9c:
    // 0x256e9c: 0xc095ac0  jal         func_256B00
label_256ea0:
    if (ctx->pc == 0x256EA0u) {
        ctx->pc = 0x256EA4u;
        goto label_256ea4;
    }
    ctx->pc = 0x256E9Cu;
    SET_GPR_U32(ctx, 31, 0x256EA4u);
    ctx->pc = 0x256B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256B00u, 0x256E9Cu, 0x256EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EA4u;
label_256ea4:
    // 0x256ea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x256ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256ea8:
    // 0x256ea8: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x256ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
label_256eac:
    // 0x256eac: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256eb0:
    // 0x256eb0: 0xc0422b8  jal         func_108AE0
label_256eb4:
    if (ctx->pc == 0x256EB4u) {
        ctx->pc = 0x256EB8u;
        goto label_256eb8;
    }
    ctx->pc = 0x256EB0u;
    SET_GPR_U32(ctx, 31, 0x256EB8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256EB0u, 0x256EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EB8u;
label_256eb8:
    // 0x256eb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x256eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_256ebc:
    // 0x256ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256ec0:
    // 0x256ec0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256ec4:
    // 0x256ec4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x256ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_256ec8:
    // 0x256ec8: 0x320f809  jalr        $t9
label_256ecc:
    if (ctx->pc == 0x256ECCu) {
        ctx->pc = 0x256ED0u;
        goto label_256ed0;
    }
    ctx->pc = 0x256EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256EC8u, 0x256ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256ED0u;
label_256ed0:
    // 0x256ed0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x256ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_256ed4:
    // 0x256ed4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x256ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_256ed8:
    // 0x256ed8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_256edc:
    // 0x256edc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_256ee0:
    // 0x256ee0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x256ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_256ee4:
    // 0x256ee4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x256ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_256ee8:
    // 0x256ee8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x256ee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_256eec:
    // 0x256eec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x256eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256ef0:
    // 0x256ef0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x256ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_256ef4:
    // 0x256ef4: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_256ef8:
    // 0x256ef8: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x256ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_256efc:
    // 0x256efc: 0xc095a8c  jal         func_256A30
label_256f00:
    if (ctx->pc == 0x256F00u) {
        ctx->pc = 0x256F04u;
        goto label_256f04;
    }
    ctx->pc = 0x256EFCu;
    SET_GPR_U32(ctx, 31, 0x256F04u);
    ctx->pc = 0x256A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A30u, 0x256EFCu, 0x256F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F04u;
label_256f04:
    // 0x256f04: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x256f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_256f08:
    // 0x256f08: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x256f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_256f0c:
    // 0x256f0c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x256f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_256f10:
    // 0x256f10: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_256f14:
    if (ctx->pc == 0x256F14u) {
        ctx->pc = 0x256F18u;
        goto label_256f18;
    }
    ctx->pc = 0x256F10u;
    {
        const bool branch_taken_0x256f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f10) {
            ctx->pc = 0x256E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256e70;
        }
    }
    ctx->pc = 0x256F18u;
label_256f18:
    // 0x256f18: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x256f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_256f1c:
    // 0x256f1c: 0xc0422b8  jal         func_108AE0
label_256f20:
    if (ctx->pc == 0x256F20u) {
        ctx->pc = 0x256F24u;
        goto label_256f24;
    }
    ctx->pc = 0x256F1Cu;
    SET_GPR_U32(ctx, 31, 0x256F24u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x256F1Cu, 0x256F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F24u;
label_256f24:
    // 0x256f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256f28:
    // 0x256f28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256f2c:
    // 0x256f2c: 0xc08ec98  jal         func_23B260
label_256f30:
    if (ctx->pc == 0x256F30u) {
        ctx->pc = 0x256F34u;
        goto label_256f34;
    }
    ctx->pc = 0x256F2Cu;
    SET_GPR_U32(ctx, 31, 0x256F34u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x256F2Cu, 0x256F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F34u;
label_256f34:
    // 0x256f34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x256f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256f38:
    // 0x256f38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x256f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_256f3c:
    // 0x256f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256f40:
    // 0x256f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_256f44:
    // 0x256f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_256f48:
    // 0x256f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_256f4c:
    // 0x256f4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x256f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_256f50:
    // 0x256f50: 0x3e00008  jr          $ra
label_256f54:
    if (ctx->pc == 0x256F54u) {
        ctx->pc = 0x256F58u;
        goto label_256f58;
    }
    ctx->pc = 0x256F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256F58u;
label_256f58:
    // 0x256f58: 0x0  nop
    ctx->pc = 0x256f58u;
    // NOP
label_256f5c:
    // 0x256f5c: 0x0  nop
    ctx->pc = 0x256f5cu;
    // NOP
    ctx->pc = 0x256f60u;
}
