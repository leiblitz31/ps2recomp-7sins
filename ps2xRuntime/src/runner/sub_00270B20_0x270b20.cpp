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

// Function: sub_00270B20
// Address: 0x270b20 - 0x270e20
void sub_00270B20_0x270b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270B20_0x270b20");
#endif

    switch (ctx->pc) {
        case 0x270b20u: goto label_270b20;
        case 0x270b24u: goto label_270b24;
        case 0x270b28u: goto label_270b28;
        case 0x270b2cu: goto label_270b2c;
        case 0x270b30u: goto label_270b30;
        case 0x270b34u: goto label_270b34;
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        case 0x270b88u: goto label_270b88;
        case 0x270b8cu: goto label_270b8c;
        case 0x270b90u: goto label_270b90;
        case 0x270b94u: goto label_270b94;
        case 0x270b98u: goto label_270b98;
        case 0x270b9cu: goto label_270b9c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270ba4u: goto label_270ba4;
        case 0x270ba8u: goto label_270ba8;
        case 0x270bacu: goto label_270bac;
        case 0x270bb0u: goto label_270bb0;
        case 0x270bb4u: goto label_270bb4;
        case 0x270bb8u: goto label_270bb8;
        case 0x270bbcu: goto label_270bbc;
        case 0x270bc0u: goto label_270bc0;
        case 0x270bc4u: goto label_270bc4;
        case 0x270bc8u: goto label_270bc8;
        case 0x270bccu: goto label_270bcc;
        case 0x270bd0u: goto label_270bd0;
        case 0x270bd4u: goto label_270bd4;
        case 0x270bd8u: goto label_270bd8;
        case 0x270bdcu: goto label_270bdc;
        case 0x270be0u: goto label_270be0;
        case 0x270be4u: goto label_270be4;
        case 0x270be8u: goto label_270be8;
        case 0x270becu: goto label_270bec;
        case 0x270bf0u: goto label_270bf0;
        case 0x270bf4u: goto label_270bf4;
        case 0x270bf8u: goto label_270bf8;
        case 0x270bfcu: goto label_270bfc;
        case 0x270c00u: goto label_270c00;
        case 0x270c04u: goto label_270c04;
        case 0x270c08u: goto label_270c08;
        case 0x270c0cu: goto label_270c0c;
        case 0x270c10u: goto label_270c10;
        case 0x270c14u: goto label_270c14;
        case 0x270c18u: goto label_270c18;
        case 0x270c1cu: goto label_270c1c;
        case 0x270c20u: goto label_270c20;
        case 0x270c24u: goto label_270c24;
        case 0x270c28u: goto label_270c28;
        case 0x270c2cu: goto label_270c2c;
        case 0x270c30u: goto label_270c30;
        case 0x270c34u: goto label_270c34;
        case 0x270c38u: goto label_270c38;
        case 0x270c3cu: goto label_270c3c;
        case 0x270c40u: goto label_270c40;
        case 0x270c44u: goto label_270c44;
        case 0x270c48u: goto label_270c48;
        case 0x270c4cu: goto label_270c4c;
        case 0x270c50u: goto label_270c50;
        case 0x270c54u: goto label_270c54;
        case 0x270c58u: goto label_270c58;
        case 0x270c5cu: goto label_270c5c;
        case 0x270c60u: goto label_270c60;
        case 0x270c64u: goto label_270c64;
        case 0x270c68u: goto label_270c68;
        case 0x270c6cu: goto label_270c6c;
        case 0x270c70u: goto label_270c70;
        case 0x270c74u: goto label_270c74;
        case 0x270c78u: goto label_270c78;
        case 0x270c7cu: goto label_270c7c;
        case 0x270c80u: goto label_270c80;
        case 0x270c84u: goto label_270c84;
        case 0x270c88u: goto label_270c88;
        case 0x270c8cu: goto label_270c8c;
        case 0x270c90u: goto label_270c90;
        case 0x270c94u: goto label_270c94;
        case 0x270c98u: goto label_270c98;
        case 0x270c9cu: goto label_270c9c;
        case 0x270ca0u: goto label_270ca0;
        case 0x270ca4u: goto label_270ca4;
        case 0x270ca8u: goto label_270ca8;
        case 0x270cacu: goto label_270cac;
        case 0x270cb0u: goto label_270cb0;
        case 0x270cb4u: goto label_270cb4;
        case 0x270cb8u: goto label_270cb8;
        case 0x270cbcu: goto label_270cbc;
        case 0x270cc0u: goto label_270cc0;
        case 0x270cc4u: goto label_270cc4;
        case 0x270cc8u: goto label_270cc8;
        case 0x270cccu: goto label_270ccc;
        case 0x270cd0u: goto label_270cd0;
        case 0x270cd4u: goto label_270cd4;
        case 0x270cd8u: goto label_270cd8;
        case 0x270cdcu: goto label_270cdc;
        case 0x270ce0u: goto label_270ce0;
        case 0x270ce4u: goto label_270ce4;
        case 0x270ce8u: goto label_270ce8;
        case 0x270cecu: goto label_270cec;
        case 0x270cf0u: goto label_270cf0;
        case 0x270cf4u: goto label_270cf4;
        case 0x270cf8u: goto label_270cf8;
        case 0x270cfcu: goto label_270cfc;
        case 0x270d00u: goto label_270d00;
        case 0x270d04u: goto label_270d04;
        case 0x270d08u: goto label_270d08;
        case 0x270d0cu: goto label_270d0c;
        case 0x270d10u: goto label_270d10;
        case 0x270d14u: goto label_270d14;
        case 0x270d18u: goto label_270d18;
        case 0x270d1cu: goto label_270d1c;
        case 0x270d20u: goto label_270d20;
        case 0x270d24u: goto label_270d24;
        case 0x270d28u: goto label_270d28;
        case 0x270d2cu: goto label_270d2c;
        case 0x270d30u: goto label_270d30;
        case 0x270d34u: goto label_270d34;
        case 0x270d38u: goto label_270d38;
        case 0x270d3cu: goto label_270d3c;
        case 0x270d40u: goto label_270d40;
        case 0x270d44u: goto label_270d44;
        case 0x270d48u: goto label_270d48;
        case 0x270d4cu: goto label_270d4c;
        case 0x270d50u: goto label_270d50;
        case 0x270d54u: goto label_270d54;
        case 0x270d58u: goto label_270d58;
        case 0x270d5cu: goto label_270d5c;
        case 0x270d60u: goto label_270d60;
        case 0x270d64u: goto label_270d64;
        case 0x270d68u: goto label_270d68;
        case 0x270d6cu: goto label_270d6c;
        case 0x270d70u: goto label_270d70;
        case 0x270d74u: goto label_270d74;
        case 0x270d78u: goto label_270d78;
        case 0x270d7cu: goto label_270d7c;
        case 0x270d80u: goto label_270d80;
        case 0x270d84u: goto label_270d84;
        case 0x270d88u: goto label_270d88;
        case 0x270d8cu: goto label_270d8c;
        case 0x270d90u: goto label_270d90;
        case 0x270d94u: goto label_270d94;
        case 0x270d98u: goto label_270d98;
        case 0x270d9cu: goto label_270d9c;
        case 0x270da0u: goto label_270da0;
        case 0x270da4u: goto label_270da4;
        case 0x270da8u: goto label_270da8;
        case 0x270dacu: goto label_270dac;
        case 0x270db0u: goto label_270db0;
        case 0x270db4u: goto label_270db4;
        case 0x270db8u: goto label_270db8;
        case 0x270dbcu: goto label_270dbc;
        case 0x270dc0u: goto label_270dc0;
        case 0x270dc4u: goto label_270dc4;
        case 0x270dc8u: goto label_270dc8;
        case 0x270dccu: goto label_270dcc;
        case 0x270dd0u: goto label_270dd0;
        case 0x270dd4u: goto label_270dd4;
        case 0x270dd8u: goto label_270dd8;
        case 0x270ddcu: goto label_270ddc;
        case 0x270de0u: goto label_270de0;
        case 0x270de4u: goto label_270de4;
        case 0x270de8u: goto label_270de8;
        case 0x270decu: goto label_270dec;
        case 0x270df0u: goto label_270df0;
        case 0x270df4u: goto label_270df4;
        case 0x270df8u: goto label_270df8;
        case 0x270dfcu: goto label_270dfc;
        case 0x270e00u: goto label_270e00;
        case 0x270e04u: goto label_270e04;
        case 0x270e08u: goto label_270e08;
        case 0x270e0cu: goto label_270e0c;
        case 0x270e10u: goto label_270e10;
        case 0x270e14u: goto label_270e14;
        case 0x270e18u: goto label_270e18;
        case 0x270e1cu: goto label_270e1c;
        default: break;
    }

    ctx->pc = 0x270b20u;

label_270b20:
    // 0x270b20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x270b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_270b24:
    // 0x270b24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x270b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_270b28:
    // 0x270b28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x270b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_270b2c:
    // 0x270b2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x270b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_270b30:
    // 0x270b30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x270b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_270b34:
    // 0x270b34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x270b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_270b38:
    // 0x270b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_270b3c:
    // 0x270b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_270b40:
    // 0x270b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_270b44:
    // 0x270b44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_270b48:
    // 0x270b48: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x270b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_270b4c:
    // 0x270b4c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x270b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_270b50:
    // 0x270b50: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270b54:
    // 0x270b54: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x270b54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270b58:
    // 0x270b58: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x270b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270b5c:
    // 0x270b5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x270b5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270b60:
    // 0x270b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270b64:
    // 0x270b64: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x270b64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_270b68:
    // 0x270b68: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_270b6c:
    // 0x270b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270b70:
    // 0x270b70: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_270b74:
    if (ctx->pc == 0x270B74u) {
        ctx->pc = 0x270B78u;
        goto label_270b78;
    }
    ctx->pc = 0x270B70u;
    {
        const bool branch_taken_0x270b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270b70) {
            ctx->pc = 0x270C7Cu;
            goto label_270c7c;
        }
    }
    ctx->pc = 0x270B78u;
label_270b78:
    // 0x270b78: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270b7c:
    // 0x270b7c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270b80:
    // 0x270b80: 0xc0513f8  jal         func_144FE0
label_270b84:
    if (ctx->pc == 0x270B84u) {
        ctx->pc = 0x270B88u;
        goto label_270b88;
    }
    ctx->pc = 0x270B80u;
    SET_GPR_U32(ctx, 31, 0x270B88u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x270B80u, 0x270B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B88u;
label_270b88:
    // 0x270b88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270b8c:
    // 0x270b8c: 0x10000028  b           . + 4 + (0x28 << 2)
label_270b90:
    if (ctx->pc == 0x270B90u) {
        ctx->pc = 0x270B94u;
        goto label_270b94;
    }
    ctx->pc = 0x270B8Cu;
    {
        const bool branch_taken_0x270b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b8c) {
            ctx->pc = 0x270C30u;
            goto label_270c30;
        }
    }
    ctx->pc = 0x270B94u;
label_270b94:
    // 0x270b94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270b98:
    // 0x270b98: 0xc09d274  jal         func_2749D0
label_270b9c:
    if (ctx->pc == 0x270B9Cu) {
        ctx->pc = 0x270BA0u;
        goto label_270ba0;
    }
    ctx->pc = 0x270B98u;
    SET_GPR_U32(ctx, 31, 0x270BA0u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270B98u, 0x270BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BA0u;
label_270ba0:
    // 0x270ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270ba4:
    // 0x270ba4: 0xc09d0b8  jal         func_2742E0
label_270ba8:
    if (ctx->pc == 0x270BA8u) {
        ctx->pc = 0x270BACu;
        goto label_270bac;
    }
    ctx->pc = 0x270BA4u;
    SET_GPR_U32(ctx, 31, 0x270BACu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x270BA4u, 0x270BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BACu;
label_270bac:
    // 0x270bac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x270bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_270bb0:
    // 0x270bb0: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_270bb4:
    if (ctx->pc == 0x270BB4u) {
        ctx->pc = 0x270BB8u;
        goto label_270bb8;
    }
    ctx->pc = 0x270BB0u;
    {
        const bool branch_taken_0x270bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270bb0) {
            ctx->pc = 0x270C2Cu;
            goto label_270c2c;
        }
    }
    ctx->pc = 0x270BB8u;
label_270bb8:
    // 0x270bb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270bbc:
    // 0x270bbc: 0xc09d274  jal         func_2749D0
label_270bc0:
    if (ctx->pc == 0x270BC0u) {
        ctx->pc = 0x270BC4u;
        goto label_270bc4;
    }
    ctx->pc = 0x270BBCu;
    SET_GPR_U32(ctx, 31, 0x270BC4u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270BBCu, 0x270BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BC4u;
label_270bc4:
    // 0x270bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270bc8:
    // 0x270bc8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x270bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_270bcc:
    // 0x270bcc: 0x24a5cfb0  addiu       $a1, $a1, -0x3050
    ctx->pc = 0x270bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
label_270bd0:
    // 0x270bd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x270bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270bd4:
    // 0x270bd4: 0xc047970  jal         func_11E5C0
label_270bd8:
    if (ctx->pc == 0x270BD8u) {
        ctx->pc = 0x270BDCu;
        goto label_270bdc;
    }
    ctx->pc = 0x270BD4u;
    SET_GPR_U32(ctx, 31, 0x270BDCu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x270BD4u, 0x270BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BDCu;
label_270bdc:
    // 0x270bdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x270bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270be0:
    // 0x270be0: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
label_270be4:
    if (ctx->pc == 0x270BE4u) {
        ctx->pc = 0x270BE8u;
        goto label_270be8;
    }
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x270be0) {
            ctx->pc = 0x270C08u;
            goto label_270c08;
        }
    }
    ctx->pc = 0x270BE8u;
label_270be8:
    // 0x270be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270bec:
    // 0x270bec: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x270becu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_270bf0:
    // 0x270bf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270bf4:
    // 0x270bf4: 0xc09d22c  jal         func_2748B0
label_270bf8:
    if (ctx->pc == 0x270BF8u) {
        ctx->pc = 0x270BFCu;
        goto label_270bfc;
    }
    ctx->pc = 0x270BF4u;
    SET_GPR_U32(ctx, 31, 0x270BFCu);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x270BF4u, 0x270BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BFCu;
label_270bfc:
    // 0x270bfc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x270bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270c00:
    // 0x270c00: 0x1000000a  b           . + 4 + (0xA << 2)
label_270c04:
    if (ctx->pc == 0x270C04u) {
        ctx->pc = 0x270C08u;
        goto label_270c08;
    }
    ctx->pc = 0x270C00u;
    {
        const bool branch_taken_0x270c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c00) {
            ctx->pc = 0x270C2Cu;
            goto label_270c2c;
        }
    }
    ctx->pc = 0x270C08u;
label_270c08:
    // 0x270c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_270c0c:
    // 0x270c0c: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
label_270c10:
    if (ctx->pc == 0x270C10u) {
        ctx->pc = 0x270C14u;
        goto label_270c14;
    }
    ctx->pc = 0x270C0Cu;
    {
        const bool branch_taken_0x270c0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x270c0c) {
            ctx->pc = 0x270C2Cu;
            goto label_270c2c;
        }
    }
    ctx->pc = 0x270C14u;
label_270c14:
    // 0x270c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270c18:
    // 0x270c18: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x270c18u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_270c1c:
    // 0x270c1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270c20:
    // 0x270c20: 0xc09d22c  jal         func_2748B0
label_270c24:
    if (ctx->pc == 0x270C24u) {
        ctx->pc = 0x270C28u;
        goto label_270c28;
    }
    ctx->pc = 0x270C20u;
    SET_GPR_U32(ctx, 31, 0x270C28u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x270C20u, 0x270C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C28u;
label_270c28:
    // 0x270c28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x270c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270c2c:
    // 0x270c2c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x270c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_270c30:
    // 0x270c30: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270c34:
    // 0x270c34: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270c38:
    // 0x270c38: 0xc09c064  jal         func_270190
label_270c3c:
    if (ctx->pc == 0x270C3Cu) {
        ctx->pc = 0x270C40u;
        goto label_270c40;
    }
    ctx->pc = 0x270C38u;
    SET_GPR_U32(ctx, 31, 0x270C40u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x270C38u, 0x270C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C40u;
label_270c40:
    // 0x270c40: 0x1622ffd4  bne         $s1, $v0, . + 4 + (-0x2C << 2)
label_270c44:
    if (ctx->pc == 0x270C44u) {
        ctx->pc = 0x270C48u;
        goto label_270c48;
    }
    ctx->pc = 0x270C40u;
    {
        const bool branch_taken_0x270c40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x270c40) {
            ctx->pc = 0x270B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270b94;
        }
    }
    ctx->pc = 0x270C48u;
label_270c48:
    // 0x270c48: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
label_270c4c:
    if (ctx->pc == 0x270C4Cu) {
        ctx->pc = 0x270C50u;
        goto label_270c50;
    }
    ctx->pc = 0x270C48u;
    {
        const bool branch_taken_0x270c48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c48) {
            ctx->pc = 0x270C7Cu;
            goto label_270c7c;
        }
    }
    ctx->pc = 0x270C50u;
label_270c50:
    // 0x270c50: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_270c54:
    if (ctx->pc == 0x270C54u) {
        ctx->pc = 0x270C58u;
        goto label_270c58;
    }
    ctx->pc = 0x270C50u;
    {
        const bool branch_taken_0x270c50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c50) {
            ctx->pc = 0x270C78u;
            goto label_270c78;
        }
    }
    ctx->pc = 0x270C58u;
label_270c58:
    // 0x270c58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270c5c:
    // 0x270c5c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x270c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_270c60:
    // 0x270c60: 0x2a2082b  sltu        $at, $s5, $v0
    ctx->pc = 0x270c60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_270c64:
    // 0x270c64: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_270c68:
    if (ctx->pc == 0x270C68u) {
        ctx->pc = 0x270C6Cu;
        goto label_270c6c;
    }
    ctx->pc = 0x270C64u;
    {
        const bool branch_taken_0x270c64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c64) {
            ctx->pc = 0x270C7Cu;
            goto label_270c7c;
        }
    }
    ctx->pc = 0x270C6Cu;
label_270c6c:
    // 0x270c6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x270c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270c70:
    // 0x270c70: 0x10000002  b           . + 4 + (0x2 << 2)
label_270c74:
    if (ctx->pc == 0x270C74u) {
        ctx->pc = 0x270C78u;
        goto label_270c78;
    }
    ctx->pc = 0x270C70u;
    {
        const bool branch_taken_0x270c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c70) {
            ctx->pc = 0x270C7Cu;
            goto label_270c7c;
        }
    }
    ctx->pc = 0x270C78u;
label_270c78:
    // 0x270c78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x270c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270c7c:
    // 0x270c7c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270c80:
    // 0x270c80: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270c84:
    // 0x270c84: 0xc0513f8  jal         func_144FE0
label_270c88:
    if (ctx->pc == 0x270C88u) {
        ctx->pc = 0x270C8Cu;
        goto label_270c8c;
    }
    ctx->pc = 0x270C84u;
    SET_GPR_U32(ctx, 31, 0x270C8Cu);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x270C84u, 0x270C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C8Cu;
label_270c8c:
    // 0x270c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270c90:
    // 0x270c90: 0x10000042  b           . + 4 + (0x42 << 2)
label_270c94:
    if (ctx->pc == 0x270C94u) {
        ctx->pc = 0x270C98u;
        goto label_270c98;
    }
    ctx->pc = 0x270C90u;
    {
        const bool branch_taken_0x270c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c90) {
            ctx->pc = 0x270D9Cu;
            goto label_270d9c;
        }
    }
    ctx->pc = 0x270C98u;
label_270c98:
    // 0x270c98: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_270c9c:
    if (ctx->pc == 0x270C9Cu) {
        ctx->pc = 0x270CA0u;
        goto label_270ca0;
    }
    ctx->pc = 0x270C98u;
    {
        const bool branch_taken_0x270c98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x270c98) {
            ctx->pc = 0x270CC0u;
            goto label_270cc0;
        }
    }
    ctx->pc = 0x270CA0u;
label_270ca0:
    // 0x270ca0: 0x1640003d  bnez        $s2, . + 4 + (0x3D << 2)
label_270ca4:
    if (ctx->pc == 0x270CA4u) {
        ctx->pc = 0x270CA8u;
        goto label_270ca8;
    }
    ctx->pc = 0x270CA0u;
    {
        const bool branch_taken_0x270ca0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ca0) {
            ctx->pc = 0x270D98u;
            goto label_270d98;
        }
    }
    ctx->pc = 0x270CA8u;
label_270ca8:
    // 0x270ca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270cac:
    // 0x270cac: 0xc09d22c  jal         func_2748B0
label_270cb0:
    if (ctx->pc == 0x270CB0u) {
        ctx->pc = 0x270CB4u;
        goto label_270cb4;
    }
    ctx->pc = 0x270CACu;
    SET_GPR_U32(ctx, 31, 0x270CB4u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x270CACu, 0x270CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270CB4u;
label_270cb4:
    // 0x270cb4: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x270cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_270cb8:
    // 0x270cb8: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_270cbc:
    if (ctx->pc == 0x270CBCu) {
        ctx->pc = 0x270CC0u;
        goto label_270cc0;
    }
    ctx->pc = 0x270CB8u;
    {
        const bool branch_taken_0x270cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x270cb8) {
            ctx->pc = 0x270D98u;
            goto label_270d98;
        }
    }
    ctx->pc = 0x270CC0u;
label_270cc0:
    // 0x270cc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270cc4:
    // 0x270cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270cc8:
    // 0x270cc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x270cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_270ccc:
    // 0x270ccc: 0x320f809  jalr        $t9
label_270cd0:
    if (ctx->pc == 0x270CD0u) {
        ctx->pc = 0x270CD4u;
        goto label_270cd4;
    }
    ctx->pc = 0x270CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270CD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270CCCu, 0x270CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270CD4u;
label_270cd4:
    // 0x270cd4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x270cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_270cd8:
    // 0x270cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270cdc:
    // 0x270cdc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_270ce0:
    if (ctx->pc == 0x270CE0u) {
        ctx->pc = 0x270CE4u;
        goto label_270ce4;
    }
    ctx->pc = 0x270CDCu;
    {
        const bool branch_taken_0x270cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270cdc) {
            ctx->pc = 0x270D00u;
            goto label_270d00;
        }
    }
    ctx->pc = 0x270CE4u;
label_270ce4:
    // 0x270ce4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270ce8:
    // 0x270ce8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270cec:
    // 0x270cec: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x270cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_270cf0:
    // 0x270cf0: 0x320f809  jalr        $t9
label_270cf4:
    if (ctx->pc == 0x270CF4u) {
        ctx->pc = 0x270CF8u;
        goto label_270cf8;
    }
    ctx->pc = 0x270CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270CF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270CF0u, 0x270CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270CF8u;
label_270cf8:
    // 0x270cf8: 0x10000010  b           . + 4 + (0x10 << 2)
label_270cfc:
    if (ctx->pc == 0x270CFCu) {
        ctx->pc = 0x270D00u;
        goto label_270d00;
    }
    ctx->pc = 0x270CF8u;
    {
        const bool branch_taken_0x270cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270cf8) {
            ctx->pc = 0x270D3Cu;
            goto label_270d3c;
        }
    }
    ctx->pc = 0x270D00u;
label_270d00:
    // 0x270d00: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x270d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_270d04:
    // 0x270d04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_270d08:
    // 0x270d08: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_270d0c:
    if (ctx->pc == 0x270D0Cu) {
        ctx->pc = 0x270D10u;
        goto label_270d10;
    }
    ctx->pc = 0x270D08u;
    {
        const bool branch_taken_0x270d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270d08) {
            ctx->pc = 0x270D2Cu;
            goto label_270d2c;
        }
    }
    ctx->pc = 0x270D10u;
label_270d10:
    // 0x270d10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270d14:
    // 0x270d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270d18:
    // 0x270d18: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x270d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_270d1c:
    // 0x270d1c: 0x320f809  jalr        $t9
label_270d20:
    if (ctx->pc == 0x270D20u) {
        ctx->pc = 0x270D24u;
        goto label_270d24;
    }
    ctx->pc = 0x270D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270D24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270D1Cu, 0x270D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270D24u;
label_270d24:
    // 0x270d24: 0x10000005  b           . + 4 + (0x5 << 2)
label_270d28:
    if (ctx->pc == 0x270D28u) {
        ctx->pc = 0x270D2Cu;
        goto label_270d2c;
    }
    ctx->pc = 0x270D24u;
    {
        const bool branch_taken_0x270d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d24) {
            ctx->pc = 0x270D3Cu;
            goto label_270d3c;
        }
    }
    ctx->pc = 0x270D2Cu;
label_270d2c:
    // 0x270d2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270d30:
    // 0x270d30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x270d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_270d34:
    // 0x270d34: 0xc09d250  jal         func_274940
label_270d38:
    if (ctx->pc == 0x270D38u) {
        ctx->pc = 0x270D3Cu;
        goto label_270d3c;
    }
    ctx->pc = 0x270D34u;
    SET_GPR_U32(ctx, 31, 0x270D3Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x270D34u, 0x270D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D3Cu;
label_270d3c:
    // 0x270d3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270d40:
    // 0x270d40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270d44:
    // 0x270d44: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x270d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_270d48:
    // 0x270d48: 0x320f809  jalr        $t9
label_270d4c:
    if (ctx->pc == 0x270D4Cu) {
        ctx->pc = 0x270D50u;
        goto label_270d50;
    }
    ctx->pc = 0x270D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270D50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270D48u, 0x270D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270D50u;
label_270d50:
    // 0x270d50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x270d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270d54:
    // 0x270d54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_270d58:
    if (ctx->pc == 0x270D58u) {
        ctx->pc = 0x270D5Cu;
        goto label_270d5c;
    }
    ctx->pc = 0x270D54u;
    {
        const bool branch_taken_0x270d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d54) {
            ctx->pc = 0x270D78u;
            goto label_270d78;
        }
    }
    ctx->pc = 0x270D5Cu;
label_270d5c:
    // 0x270d5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270d60:
    // 0x270d60: 0xc051830  jal         func_1460C0
label_270d64:
    if (ctx->pc == 0x270D64u) {
        ctx->pc = 0x270D68u;
        goto label_270d68;
    }
    ctx->pc = 0x270D60u;
    SET_GPR_U32(ctx, 31, 0x270D68u);
    ctx->pc = 0x1460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460C0u, 0x270D60u, 0x270D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D68u;
label_270d68:
    // 0x270d68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x270d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270d6c:
    // 0x270d6c: 0xc119c5c  jal         func_467170
label_270d70:
    if (ctx->pc == 0x270D70u) {
        ctx->pc = 0x270D74u;
        goto label_270d74;
    }
    ctx->pc = 0x270D6Cu;
    SET_GPR_U32(ctx, 31, 0x270D74u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x270D6Cu, 0x270D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D74u;
label_270d74:
    // 0x270d74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x270d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_270d78:
    // 0x270d78: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270d7c:
    // 0x270d7c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270d80:
    // 0x270d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270d84:
    // 0x270d84: 0xc09c1ac  jal         func_2706B0
label_270d88:
    if (ctx->pc == 0x270D88u) {
        ctx->pc = 0x270D8Cu;
        goto label_270d8c;
    }
    ctx->pc = 0x270D84u;
    SET_GPR_U32(ctx, 31, 0x270D8Cu);
    ctx->pc = 0x2706B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2706B0u, 0x270D84u, 0x270D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D8Cu;
label_270d8c:
    // 0x270d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270d90:
    // 0x270d90: 0x10000002  b           . + 4 + (0x2 << 2)
label_270d94:
    if (ctx->pc == 0x270D94u) {
        ctx->pc = 0x270D98u;
        goto label_270d98;
    }
    ctx->pc = 0x270D90u;
    {
        const bool branch_taken_0x270d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d90) {
            ctx->pc = 0x270D9Cu;
            goto label_270d9c;
        }
    }
    ctx->pc = 0x270D98u;
label_270d98:
    // 0x270d98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x270d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_270d9c:
    // 0x270d9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270da0:
    // 0x270da0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270da4:
    // 0x270da4: 0xc09c064  jal         func_270190
label_270da8:
    if (ctx->pc == 0x270DA8u) {
        ctx->pc = 0x270DACu;
        goto label_270dac;
    }
    ctx->pc = 0x270DA4u;
    SET_GPR_U32(ctx, 31, 0x270DACu);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x270DA4u, 0x270DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DACu;
label_270dac:
    // 0x270dac: 0x1602ffba  bne         $s0, $v0, . + 4 + (-0x46 << 2)
label_270db0:
    if (ctx->pc == 0x270DB0u) {
        ctx->pc = 0x270DB4u;
        goto label_270db4;
    }
    ctx->pc = 0x270DACu;
    {
        const bool branch_taken_0x270dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x270dac) {
            ctx->pc = 0x270C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270c98;
        }
    }
    ctx->pc = 0x270DB4u;
label_270db4:
    // 0x270db4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_270db8:
    if (ctx->pc == 0x270DB8u) {
        ctx->pc = 0x270DBCu;
        goto label_270dbc;
    }
    ctx->pc = 0x270DB4u;
    {
        const bool branch_taken_0x270db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x270db4) {
            ctx->pc = 0x270DD4u;
            goto label_270dd4;
        }
    }
    ctx->pc = 0x270DBCu;
label_270dbc:
    // 0x270dbc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270dc0:
    // 0x270dc0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270dc4:
    // 0x270dc4: 0xc09c020  jal         func_270080
label_270dc8:
    if (ctx->pc == 0x270DC8u) {
        ctx->pc = 0x270DCCu;
        goto label_270dcc;
    }
    ctx->pc = 0x270DC4u;
    SET_GPR_U32(ctx, 31, 0x270DCCu);
    ctx->pc = 0x270080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270080u, 0x270DC4u, 0x270DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DCCu;
label_270dcc:
    // 0x270dcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_270dd0:
    if (ctx->pc == 0x270DD0u) {
        ctx->pc = 0x270DD4u;
        goto label_270dd4;
    }
    ctx->pc = 0x270DCCu;
    {
        const bool branch_taken_0x270dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270dcc) {
            ctx->pc = 0x270DDCu;
            goto label_270ddc;
        }
    }
    ctx->pc = 0x270DD4u;
label_270dd4:
    // 0x270dd4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270dd8:
    // 0x270dd8: 0xac53003c  sw          $s3, 0x3C($v0)
    ctx->pc = 0x270dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 19));
label_270ddc:
    // 0x270ddc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270de0:
    // 0x270de0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270de4:
    // 0x270de4: 0xc051400  jal         func_145000
label_270de8:
    if (ctx->pc == 0x270DE8u) {
        ctx->pc = 0x270DECu;
        goto label_270dec;
    }
    ctx->pc = 0x270DE4u;
    SET_GPR_U32(ctx, 31, 0x270DECu);
    ctx->pc = 0x145000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145000u, 0x270DE4u, 0x270DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DECu;
label_270dec:
    // 0x270dec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x270decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_270df0:
    // 0x270df0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x270df0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_270df4:
    // 0x270df4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x270df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_270df8:
    // 0x270df8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x270df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_270dfc:
    // 0x270dfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x270dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_270e00:
    // 0x270e00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_270e04:
    // 0x270e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270e08:
    // 0x270e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_270e0c:
    // 0x270e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_270e10:
    // 0x270e10: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x270e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_270e14:
    // 0x270e14: 0x3e00008  jr          $ra
label_270e18:
    if (ctx->pc == 0x270E18u) {
        ctx->pc = 0x270E1Cu;
        goto label_270e1c;
    }
    ctx->pc = 0x270E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270E1Cu;
label_270e1c:
    // 0x270e1c: 0x0  nop
    ctx->pc = 0x270e1cu;
    // NOP
    ctx->pc = 0x270e20u;
}
