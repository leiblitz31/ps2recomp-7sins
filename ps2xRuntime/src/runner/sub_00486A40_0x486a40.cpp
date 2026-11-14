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

// Function: sub_00486A40
// Address: 0x486a40 - 0x486e20
void sub_00486A40_0x486a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486A40_0x486a40");
#endif

    switch (ctx->pc) {
        case 0x486a40u: goto label_486a40;
        case 0x486a44u: goto label_486a44;
        case 0x486a48u: goto label_486a48;
        case 0x486a4cu: goto label_486a4c;
        case 0x486a50u: goto label_486a50;
        case 0x486a54u: goto label_486a54;
        case 0x486a58u: goto label_486a58;
        case 0x486a5cu: goto label_486a5c;
        case 0x486a60u: goto label_486a60;
        case 0x486a64u: goto label_486a64;
        case 0x486a68u: goto label_486a68;
        case 0x486a6cu: goto label_486a6c;
        case 0x486a70u: goto label_486a70;
        case 0x486a74u: goto label_486a74;
        case 0x486a78u: goto label_486a78;
        case 0x486a7cu: goto label_486a7c;
        case 0x486a80u: goto label_486a80;
        case 0x486a84u: goto label_486a84;
        case 0x486a88u: goto label_486a88;
        case 0x486a8cu: goto label_486a8c;
        case 0x486a90u: goto label_486a90;
        case 0x486a94u: goto label_486a94;
        case 0x486a98u: goto label_486a98;
        case 0x486a9cu: goto label_486a9c;
        case 0x486aa0u: goto label_486aa0;
        case 0x486aa4u: goto label_486aa4;
        case 0x486aa8u: goto label_486aa8;
        case 0x486aacu: goto label_486aac;
        case 0x486ab0u: goto label_486ab0;
        case 0x486ab4u: goto label_486ab4;
        case 0x486ab8u: goto label_486ab8;
        case 0x486abcu: goto label_486abc;
        case 0x486ac0u: goto label_486ac0;
        case 0x486ac4u: goto label_486ac4;
        case 0x486ac8u: goto label_486ac8;
        case 0x486accu: goto label_486acc;
        case 0x486ad0u: goto label_486ad0;
        case 0x486ad4u: goto label_486ad4;
        case 0x486ad8u: goto label_486ad8;
        case 0x486adcu: goto label_486adc;
        case 0x486ae0u: goto label_486ae0;
        case 0x486ae4u: goto label_486ae4;
        case 0x486ae8u: goto label_486ae8;
        case 0x486aecu: goto label_486aec;
        case 0x486af0u: goto label_486af0;
        case 0x486af4u: goto label_486af4;
        case 0x486af8u: goto label_486af8;
        case 0x486afcu: goto label_486afc;
        case 0x486b00u: goto label_486b00;
        case 0x486b04u: goto label_486b04;
        case 0x486b08u: goto label_486b08;
        case 0x486b0cu: goto label_486b0c;
        case 0x486b10u: goto label_486b10;
        case 0x486b14u: goto label_486b14;
        case 0x486b18u: goto label_486b18;
        case 0x486b1cu: goto label_486b1c;
        case 0x486b20u: goto label_486b20;
        case 0x486b24u: goto label_486b24;
        case 0x486b28u: goto label_486b28;
        case 0x486b2cu: goto label_486b2c;
        case 0x486b30u: goto label_486b30;
        case 0x486b34u: goto label_486b34;
        case 0x486b38u: goto label_486b38;
        case 0x486b3cu: goto label_486b3c;
        case 0x486b40u: goto label_486b40;
        case 0x486b44u: goto label_486b44;
        case 0x486b48u: goto label_486b48;
        case 0x486b4cu: goto label_486b4c;
        case 0x486b50u: goto label_486b50;
        case 0x486b54u: goto label_486b54;
        case 0x486b58u: goto label_486b58;
        case 0x486b5cu: goto label_486b5c;
        case 0x486b60u: goto label_486b60;
        case 0x486b64u: goto label_486b64;
        case 0x486b68u: goto label_486b68;
        case 0x486b6cu: goto label_486b6c;
        case 0x486b70u: goto label_486b70;
        case 0x486b74u: goto label_486b74;
        case 0x486b78u: goto label_486b78;
        case 0x486b7cu: goto label_486b7c;
        case 0x486b80u: goto label_486b80;
        case 0x486b84u: goto label_486b84;
        case 0x486b88u: goto label_486b88;
        case 0x486b8cu: goto label_486b8c;
        case 0x486b90u: goto label_486b90;
        case 0x486b94u: goto label_486b94;
        case 0x486b98u: goto label_486b98;
        case 0x486b9cu: goto label_486b9c;
        case 0x486ba0u: goto label_486ba0;
        case 0x486ba4u: goto label_486ba4;
        case 0x486ba8u: goto label_486ba8;
        case 0x486bacu: goto label_486bac;
        case 0x486bb0u: goto label_486bb0;
        case 0x486bb4u: goto label_486bb4;
        case 0x486bb8u: goto label_486bb8;
        case 0x486bbcu: goto label_486bbc;
        case 0x486bc0u: goto label_486bc0;
        case 0x486bc4u: goto label_486bc4;
        case 0x486bc8u: goto label_486bc8;
        case 0x486bccu: goto label_486bcc;
        case 0x486bd0u: goto label_486bd0;
        case 0x486bd4u: goto label_486bd4;
        case 0x486bd8u: goto label_486bd8;
        case 0x486bdcu: goto label_486bdc;
        case 0x486be0u: goto label_486be0;
        case 0x486be4u: goto label_486be4;
        case 0x486be8u: goto label_486be8;
        case 0x486becu: goto label_486bec;
        case 0x486bf0u: goto label_486bf0;
        case 0x486bf4u: goto label_486bf4;
        case 0x486bf8u: goto label_486bf8;
        case 0x486bfcu: goto label_486bfc;
        case 0x486c00u: goto label_486c00;
        case 0x486c04u: goto label_486c04;
        case 0x486c08u: goto label_486c08;
        case 0x486c0cu: goto label_486c0c;
        case 0x486c10u: goto label_486c10;
        case 0x486c14u: goto label_486c14;
        case 0x486c18u: goto label_486c18;
        case 0x486c1cu: goto label_486c1c;
        case 0x486c20u: goto label_486c20;
        case 0x486c24u: goto label_486c24;
        case 0x486c28u: goto label_486c28;
        case 0x486c2cu: goto label_486c2c;
        case 0x486c30u: goto label_486c30;
        case 0x486c34u: goto label_486c34;
        case 0x486c38u: goto label_486c38;
        case 0x486c3cu: goto label_486c3c;
        case 0x486c40u: goto label_486c40;
        case 0x486c44u: goto label_486c44;
        case 0x486c48u: goto label_486c48;
        case 0x486c4cu: goto label_486c4c;
        case 0x486c50u: goto label_486c50;
        case 0x486c54u: goto label_486c54;
        case 0x486c58u: goto label_486c58;
        case 0x486c5cu: goto label_486c5c;
        case 0x486c60u: goto label_486c60;
        case 0x486c64u: goto label_486c64;
        case 0x486c68u: goto label_486c68;
        case 0x486c6cu: goto label_486c6c;
        case 0x486c70u: goto label_486c70;
        case 0x486c74u: goto label_486c74;
        case 0x486c78u: goto label_486c78;
        case 0x486c7cu: goto label_486c7c;
        case 0x486c80u: goto label_486c80;
        case 0x486c84u: goto label_486c84;
        case 0x486c88u: goto label_486c88;
        case 0x486c8cu: goto label_486c8c;
        case 0x486c90u: goto label_486c90;
        case 0x486c94u: goto label_486c94;
        case 0x486c98u: goto label_486c98;
        case 0x486c9cu: goto label_486c9c;
        case 0x486ca0u: goto label_486ca0;
        case 0x486ca4u: goto label_486ca4;
        case 0x486ca8u: goto label_486ca8;
        case 0x486cacu: goto label_486cac;
        case 0x486cb0u: goto label_486cb0;
        case 0x486cb4u: goto label_486cb4;
        case 0x486cb8u: goto label_486cb8;
        case 0x486cbcu: goto label_486cbc;
        case 0x486cc0u: goto label_486cc0;
        case 0x486cc4u: goto label_486cc4;
        case 0x486cc8u: goto label_486cc8;
        case 0x486cccu: goto label_486ccc;
        case 0x486cd0u: goto label_486cd0;
        case 0x486cd4u: goto label_486cd4;
        case 0x486cd8u: goto label_486cd8;
        case 0x486cdcu: goto label_486cdc;
        case 0x486ce0u: goto label_486ce0;
        case 0x486ce4u: goto label_486ce4;
        case 0x486ce8u: goto label_486ce8;
        case 0x486cecu: goto label_486cec;
        case 0x486cf0u: goto label_486cf0;
        case 0x486cf4u: goto label_486cf4;
        case 0x486cf8u: goto label_486cf8;
        case 0x486cfcu: goto label_486cfc;
        case 0x486d00u: goto label_486d00;
        case 0x486d04u: goto label_486d04;
        case 0x486d08u: goto label_486d08;
        case 0x486d0cu: goto label_486d0c;
        case 0x486d10u: goto label_486d10;
        case 0x486d14u: goto label_486d14;
        case 0x486d18u: goto label_486d18;
        case 0x486d1cu: goto label_486d1c;
        case 0x486d20u: goto label_486d20;
        case 0x486d24u: goto label_486d24;
        case 0x486d28u: goto label_486d28;
        case 0x486d2cu: goto label_486d2c;
        case 0x486d30u: goto label_486d30;
        case 0x486d34u: goto label_486d34;
        case 0x486d38u: goto label_486d38;
        case 0x486d3cu: goto label_486d3c;
        case 0x486d40u: goto label_486d40;
        case 0x486d44u: goto label_486d44;
        case 0x486d48u: goto label_486d48;
        case 0x486d4cu: goto label_486d4c;
        case 0x486d50u: goto label_486d50;
        case 0x486d54u: goto label_486d54;
        case 0x486d58u: goto label_486d58;
        case 0x486d5cu: goto label_486d5c;
        case 0x486d60u: goto label_486d60;
        case 0x486d64u: goto label_486d64;
        case 0x486d68u: goto label_486d68;
        case 0x486d6cu: goto label_486d6c;
        case 0x486d70u: goto label_486d70;
        case 0x486d74u: goto label_486d74;
        case 0x486d78u: goto label_486d78;
        case 0x486d7cu: goto label_486d7c;
        case 0x486d80u: goto label_486d80;
        case 0x486d84u: goto label_486d84;
        case 0x486d88u: goto label_486d88;
        case 0x486d8cu: goto label_486d8c;
        case 0x486d90u: goto label_486d90;
        case 0x486d94u: goto label_486d94;
        case 0x486d98u: goto label_486d98;
        case 0x486d9cu: goto label_486d9c;
        case 0x486da0u: goto label_486da0;
        case 0x486da4u: goto label_486da4;
        case 0x486da8u: goto label_486da8;
        case 0x486dacu: goto label_486dac;
        case 0x486db0u: goto label_486db0;
        case 0x486db4u: goto label_486db4;
        case 0x486db8u: goto label_486db8;
        case 0x486dbcu: goto label_486dbc;
        case 0x486dc0u: goto label_486dc0;
        case 0x486dc4u: goto label_486dc4;
        case 0x486dc8u: goto label_486dc8;
        case 0x486dccu: goto label_486dcc;
        case 0x486dd0u: goto label_486dd0;
        case 0x486dd4u: goto label_486dd4;
        case 0x486dd8u: goto label_486dd8;
        case 0x486ddcu: goto label_486ddc;
        case 0x486de0u: goto label_486de0;
        case 0x486de4u: goto label_486de4;
        case 0x486de8u: goto label_486de8;
        case 0x486decu: goto label_486dec;
        case 0x486df0u: goto label_486df0;
        case 0x486df4u: goto label_486df4;
        case 0x486df8u: goto label_486df8;
        case 0x486dfcu: goto label_486dfc;
        case 0x486e00u: goto label_486e00;
        case 0x486e04u: goto label_486e04;
        case 0x486e08u: goto label_486e08;
        case 0x486e0cu: goto label_486e0c;
        case 0x486e10u: goto label_486e10;
        case 0x486e14u: goto label_486e14;
        case 0x486e18u: goto label_486e18;
        case 0x486e1cu: goto label_486e1c;
        default: break;
    }

    ctx->pc = 0x486a40u;

label_486a40:
    // 0x486a40: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x486a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_486a44:
    // 0x486a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x486a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_486a48:
    // 0x486a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_486a4c:
    // 0x486a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486a50:
    // 0x486a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486a54:
    // 0x486a54: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x486a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_486a58:
    // 0x486a58: 0xe7ac02d0  swc1        $f12, 0x2D0($sp)
    ctx->pc = 0x486a58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_486a5c:
    // 0x486a5c: 0xafa502e0  sw          $a1, 0x2E0($sp)
    ctx->pc = 0x486a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 5));
label_486a60:
    // 0x486a60: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486a64:
    // 0x486a64: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x486a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486a68:
    // 0x486a68: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x486a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_486a6c:
    // 0x486a6c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_486a70:
    if (ctx->pc == 0x486A70u) {
        ctx->pc = 0x486A74u;
        goto label_486a74;
    }
    ctx->pc = 0x486A6Cu;
    {
        const bool branch_taken_0x486a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486a6c) {
            ctx->pc = 0x486B1Cu;
            goto label_486b1c;
        }
    }
    ctx->pc = 0x486A74u;
label_486a74:
    // 0x486a74: 0x8f82b5c8  lw          $v0, -0x4A38($gp)
    ctx->pc = 0x486a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948296)));
label_486a78:
    // 0x486a78: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_486a7c:
    if (ctx->pc == 0x486A7Cu) {
        ctx->pc = 0x486A80u;
        goto label_486a80;
    }
    ctx->pc = 0x486A78u;
    {
        const bool branch_taken_0x486a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486a78) {
            ctx->pc = 0x486B1Cu;
            goto label_486b1c;
        }
    }
    ctx->pc = 0x486A80u;
label_486a80:
    // 0x486a80: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x486a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_486a84:
    // 0x486a84: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486a88:
    // 0x486a88: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x486a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_486a8c:
    // 0x486a8c: 0xc115ee8  jal         func_457BA0
label_486a90:
    if (ctx->pc == 0x486A90u) {
        ctx->pc = 0x486A94u;
        goto label_486a94;
    }
    ctx->pc = 0x486A8Cu;
    SET_GPR_U32(ctx, 31, 0x486A94u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x486A8Cu, 0x486A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486A94u;
label_486a94:
    // 0x486a94: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_486a98:
    if (ctx->pc == 0x486A98u) {
        ctx->pc = 0x486A9Cu;
        goto label_486a9c;
    }
    ctx->pc = 0x486A94u;
    {
        const bool branch_taken_0x486a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486a94) {
            ctx->pc = 0x486B1Cu;
            goto label_486b1c;
        }
    }
    ctx->pc = 0x486A9Cu;
label_486a9c:
    // 0x486a9c: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x486a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_486aa0:
    // 0x486aa0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_486aa4:
    if (ctx->pc == 0x486AA4u) {
        ctx->pc = 0x486AA8u;
        goto label_486aa8;
    }
    ctx->pc = 0x486AA0u;
    {
        const bool branch_taken_0x486aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486aa0) {
            ctx->pc = 0x486B1Cu;
            goto label_486b1c;
        }
    }
    ctx->pc = 0x486AA8u;
label_486aa8:
    // 0x486aa8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x486aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_486aac:
    // 0x486aac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486ab0:
    // 0x486ab0: 0x8fa602b4  lw          $a2, 0x2B4($sp)
    ctx->pc = 0x486ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_486ab4:
    // 0x486ab4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x486ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_486ab8:
    // 0x486ab8: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x486ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_486abc:
    // 0x486abc: 0x240801c2  addiu       $t0, $zero, 0x1C2
    ctx->pc = 0x486abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_486ac0:
    // 0x486ac0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x486ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_486ac4:
    // 0x486ac4: 0x25293dd0  addiu       $t1, $t1, 0x3DD0
    ctx->pc = 0x486ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15824));
label_486ac8:
    // 0x486ac8: 0xc113940  jal         func_44E500
label_486acc:
    if (ctx->pc == 0x486ACCu) {
        ctx->pc = 0x486AD0u;
        goto label_486ad0;
    }
    ctx->pc = 0x486AC8u;
    SET_GPR_U32(ctx, 31, 0x486AD0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x486AC8u, 0x486AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486AD0u;
label_486ad0:
    // 0x486ad0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x486ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_486ad4:
    // 0x486ad4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x486ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_486ad8:
    // 0x486ad8: 0x24a53df0  addiu       $a1, $a1, 0x3DF0
    ctx->pc = 0x486ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15856));
label_486adc:
    // 0x486adc: 0xc115c24  jal         func_457090
label_486ae0:
    if (ctx->pc == 0x486AE0u) {
        ctx->pc = 0x486AE4u;
        goto label_486ae4;
    }
    ctx->pc = 0x486ADCu;
    SET_GPR_U32(ctx, 31, 0x486AE4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x486ADCu, 0x486AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486AE4u;
label_486ae4:
    // 0x486ae4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x486ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_486ae8:
    // 0x486ae8: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x486ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_486aec:
    // 0x486aec: 0x40f809  jalr        $v0
label_486af0:
    if (ctx->pc == 0x486AF0u) {
        ctx->pc = 0x486AF4u;
        goto label_486af4;
    }
    ctx->pc = 0x486AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486AF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486AECu, 0x486AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486AF4u;
label_486af4:
    // 0x486af4: 0xaf82b5c8  sw          $v0, -0x4A38($gp)
    ctx->pc = 0x486af4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948296), GPR_U32(ctx, 2));
label_486af8:
    // 0x486af8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x486af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_486afc:
    // 0x486afc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_486b00:
    if (ctx->pc == 0x486B00u) {
        ctx->pc = 0x486B04u;
        goto label_486b04;
    }
    ctx->pc = 0x486AFCu;
    {
        const bool branch_taken_0x486afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486afc) {
            ctx->pc = 0x486B0Cu;
            goto label_486b0c;
        }
    }
    ctx->pc = 0x486B04u;
label_486b04:
    // 0x486b04: 0xd  break       0
    ctx->pc = 0x486b04u;
    runtime->handleBreak(rdram, ctx);
label_486b08:
    // 0x486b08: 0x0  nop
    ctx->pc = 0x486b08u;
    // NOP
label_486b0c:
    // 0x486b0c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x486b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_486b10:
    // 0x486b10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x486b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_486b14:
    // 0x486b14: 0xc11392c  jal         func_44E4B0
label_486b18:
    if (ctx->pc == 0x486B18u) {
        ctx->pc = 0x486B1Cu;
        goto label_486b1c;
    }
    ctx->pc = 0x486B14u;
    SET_GPR_U32(ctx, 31, 0x486B1Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x486B14u, 0x486B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486B1Cu;
label_486b1c:
    // 0x486b1c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486b20:
    // 0x486b20: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x486b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486b24:
    // 0x486b24: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x486b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_486b28:
    // 0x486b28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x486b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_486b2c:
    // 0x486b2c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_486b30:
    if (ctx->pc == 0x486B30u) {
        ctx->pc = 0x486B34u;
        goto label_486b34;
    }
    ctx->pc = 0x486B2Cu;
    {
        const bool branch_taken_0x486b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486b2c) {
            ctx->pc = 0x486BDCu;
            goto label_486bdc;
        }
    }
    ctx->pc = 0x486B34u;
label_486b34:
    // 0x486b34: 0x8f82b5cc  lw          $v0, -0x4A34($gp)
    ctx->pc = 0x486b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948300)));
label_486b38:
    // 0x486b38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_486b3c:
    if (ctx->pc == 0x486B3Cu) {
        ctx->pc = 0x486B40u;
        goto label_486b40;
    }
    ctx->pc = 0x486B38u;
    {
        const bool branch_taken_0x486b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486b38) {
            ctx->pc = 0x486BDCu;
            goto label_486bdc;
        }
    }
    ctx->pc = 0x486B40u;
label_486b40:
    // 0x486b40: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x486b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_486b44:
    // 0x486b44: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486b48:
    // 0x486b48: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x486b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_486b4c:
    // 0x486b4c: 0xc115ee8  jal         func_457BA0
label_486b50:
    if (ctx->pc == 0x486B50u) {
        ctx->pc = 0x486B54u;
        goto label_486b54;
    }
    ctx->pc = 0x486B4Cu;
    SET_GPR_U32(ctx, 31, 0x486B54u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x486B4Cu, 0x486B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486B54u;
label_486b54:
    // 0x486b54: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_486b58:
    if (ctx->pc == 0x486B58u) {
        ctx->pc = 0x486B5Cu;
        goto label_486b5c;
    }
    ctx->pc = 0x486B54u;
    {
        const bool branch_taken_0x486b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486b54) {
            ctx->pc = 0x486BDCu;
            goto label_486bdc;
        }
    }
    ctx->pc = 0x486B5Cu;
label_486b5c:
    // 0x486b5c: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x486b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_486b60:
    // 0x486b60: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_486b64:
    if (ctx->pc == 0x486B64u) {
        ctx->pc = 0x486B68u;
        goto label_486b68;
    }
    ctx->pc = 0x486B60u;
    {
        const bool branch_taken_0x486b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486b60) {
            ctx->pc = 0x486BDCu;
            goto label_486bdc;
        }
    }
    ctx->pc = 0x486B68u;
label_486b68:
    // 0x486b68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x486b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_486b6c:
    // 0x486b6c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486b70:
    // 0x486b70: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x486b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_486b74:
    // 0x486b74: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x486b74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_486b78:
    // 0x486b78: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x486b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_486b7c:
    // 0x486b7c: 0x240801c3  addiu       $t0, $zero, 0x1C3
    ctx->pc = 0x486b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
label_486b80:
    // 0x486b80: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x486b80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_486b84:
    // 0x486b84: 0x25293e40  addiu       $t1, $t1, 0x3E40
    ctx->pc = 0x486b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15936));
label_486b88:
    // 0x486b88: 0xc113940  jal         func_44E500
label_486b8c:
    if (ctx->pc == 0x486B8Cu) {
        ctx->pc = 0x486B90u;
        goto label_486b90;
    }
    ctx->pc = 0x486B88u;
    SET_GPR_U32(ctx, 31, 0x486B90u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x486B88u, 0x486B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486B90u;
label_486b90:
    // 0x486b90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x486b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_486b94:
    // 0x486b94: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x486b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_486b98:
    // 0x486b98: 0x24a53e70  addiu       $a1, $a1, 0x3E70
    ctx->pc = 0x486b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15984));
label_486b9c:
    // 0x486b9c: 0xc115c24  jal         func_457090
label_486ba0:
    if (ctx->pc == 0x486BA0u) {
        ctx->pc = 0x486BA4u;
        goto label_486ba4;
    }
    ctx->pc = 0x486B9Cu;
    SET_GPR_U32(ctx, 31, 0x486BA4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x486B9Cu, 0x486BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486BA4u;
label_486ba4:
    // 0x486ba4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x486ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_486ba8:
    // 0x486ba8: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x486ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_486bac:
    // 0x486bac: 0x40f809  jalr        $v0
label_486bb0:
    if (ctx->pc == 0x486BB0u) {
        ctx->pc = 0x486BB4u;
        goto label_486bb4;
    }
    ctx->pc = 0x486BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486BB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486BACu, 0x486BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486BB4u;
label_486bb4:
    // 0x486bb4: 0xaf82b5cc  sw          $v0, -0x4A34($gp)
    ctx->pc = 0x486bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948300), GPR_U32(ctx, 2));
label_486bb8:
    // 0x486bb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x486bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_486bbc:
    // 0x486bbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_486bc0:
    if (ctx->pc == 0x486BC0u) {
        ctx->pc = 0x486BC4u;
        goto label_486bc4;
    }
    ctx->pc = 0x486BBCu;
    {
        const bool branch_taken_0x486bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486bbc) {
            ctx->pc = 0x486BCCu;
            goto label_486bcc;
        }
    }
    ctx->pc = 0x486BC4u;
label_486bc4:
    // 0x486bc4: 0xd  break       0
    ctx->pc = 0x486bc4u;
    runtime->handleBreak(rdram, ctx);
label_486bc8:
    // 0x486bc8: 0x0  nop
    ctx->pc = 0x486bc8u;
    // NOP
label_486bcc:
    // 0x486bcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x486bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_486bd0:
    // 0x486bd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x486bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_486bd4:
    // 0x486bd4: 0xc11392c  jal         func_44E4B0
label_486bd8:
    if (ctx->pc == 0x486BD8u) {
        ctx->pc = 0x486BDCu;
        goto label_486bdc;
    }
    ctx->pc = 0x486BD4u;
    SET_GPR_U32(ctx, 31, 0x486BDCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x486BD4u, 0x486BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486BDCu;
label_486bdc:
    // 0x486bdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x486bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486be0:
    // 0x486be0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486be4:
    // 0x486be4: 0x90420072  lbu         $v0, 0x72($v0)
    ctx->pc = 0x486be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_486be8:
    // 0x486be8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_486bec:
    if (ctx->pc == 0x486BECu) {
        ctx->pc = 0x486BF0u;
        goto label_486bf0;
    }
    ctx->pc = 0x486BE8u;
    {
        const bool branch_taken_0x486be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486be8) {
            ctx->pc = 0x486C00u;
            goto label_486c00;
        }
    }
    ctx->pc = 0x486BF0u;
label_486bf0:
    // 0x486bf0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486bf4:
    // 0x486bf4: 0x8c51007c  lw          $s1, 0x7C($v0)
    ctx->pc = 0x486bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_486bf8:
    // 0x486bf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_486bfc:
    if (ctx->pc == 0x486BFCu) {
        ctx->pc = 0x486C00u;
        goto label_486c00;
    }
    ctx->pc = 0x486BF8u;
    {
        const bool branch_taken_0x486bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486bf8) {
            ctx->pc = 0x486C08u;
            goto label_486c08;
        }
    }
    ctx->pc = 0x486C00u;
label_486c00:
    // 0x486c00: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486c04:
    // 0x486c04: 0x8c510078  lw          $s1, 0x78($v0)
    ctx->pc = 0x486c04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_486c08:
    // 0x486c08: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x486c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486c0c:
    // 0x486c0c: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x486c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486c10:
    // 0x486c10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x486c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_486c14:
    // 0x486c14: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x486c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_486c18:
    // 0x486c18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486c1c:
    // 0x486c1c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_486c20:
    if (ctx->pc == 0x486C20u) {
        ctx->pc = 0x486C24u;
        goto label_486c24;
    }
    ctx->pc = 0x486C1Cu;
    {
        const bool branch_taken_0x486c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486c1c) {
            ctx->pc = 0x486CC8u;
            goto label_486cc8;
        }
    }
    ctx->pc = 0x486C24u;
label_486c24:
    // 0x486c24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x486c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_486c28:
    // 0x486c28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x486c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_486c2c:
    // 0x486c2c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x486c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_486c30:
    // 0x486c30: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486c34:
    // 0x486c34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486c38:
    // 0x486c38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486c3c:
    // 0x486c3c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486c40:
    // 0x486c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486c44:
    // 0x486c44: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x486c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_486c48:
    // 0x486c48: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_486c4c:
    if (ctx->pc == 0x486C4Cu) {
        ctx->pc = 0x486C50u;
        goto label_486c50;
    }
    ctx->pc = 0x486C48u;
    {
        const bool branch_taken_0x486c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486c48) {
            ctx->pc = 0x486CC4u;
            goto label_486cc4;
        }
    }
    ctx->pc = 0x486C50u;
label_486c50:
    // 0x486c50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x486c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486c54:
    // 0x486c54: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486c58:
    // 0x486c58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486c5c:
    // 0x486c5c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486c60:
    // 0x486c60: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486c64:
    // 0x486c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486c68:
    // 0x486c68: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x486c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486c6c:
    // 0x486c6c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x486c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486c70:
    // 0x486c70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x486c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486c74:
    // 0x486c74: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_486c78:
    if (ctx->pc == 0x486C78u) {
        ctx->pc = 0x486C7Cu;
        goto label_486c7c;
    }
    ctx->pc = 0x486C74u;
    {
        const bool branch_taken_0x486c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x486c74) {
            ctx->pc = 0x486CACu;
            goto label_486cac;
        }
    }
    ctx->pc = 0x486C7Cu;
label_486c7c:
    // 0x486c7c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486c80:
    // 0x486c80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486c84:
    // 0x486c84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486c88:
    // 0x486c88: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486c8c:
    // 0x486c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486c90:
    // 0x486c90: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x486c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486c94:
    // 0x486c94: 0xc7a002bc  lwc1        $f0, 0x2BC($sp)
    ctx->pc = 0x486c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486c98:
    // 0x486c98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x486c98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486c9c:
    // 0x486c9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_486ca0:
    if (ctx->pc == 0x486CA0u) {
        ctx->pc = 0x486CA4u;
        goto label_486ca4;
    }
    ctx->pc = 0x486C9Cu;
    {
        const bool branch_taken_0x486c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486c9c) {
            ctx->pc = 0x486CACu;
            goto label_486cac;
        }
    }
    ctx->pc = 0x486CA4u;
label_486ca4:
    // 0x486ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x486ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486ca8:
    // 0x486ca8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x486ca8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_486cac:
    // 0x486cac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x486cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_486cb0:
    // 0x486cb0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x486cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_486cb4:
    // 0x486cb4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x486cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_486cb8:
    // 0x486cb8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x486cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_486cbc:
    // 0x486cbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x486cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_486cc0:
    // 0x486cc0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x486cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_486cc4:
    // 0x486cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x486cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_486cc8:
    // 0x486cc8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x486cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_486ccc:
    // 0x486ccc: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_486cd0:
    if (ctx->pc == 0x486CD0u) {
        ctx->pc = 0x486CD4u;
        goto label_486cd4;
    }
    ctx->pc = 0x486CCCu;
    {
        const bool branch_taken_0x486ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486ccc) {
            ctx->pc = 0x486C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486c24;
        }
    }
    ctx->pc = 0x486CD4u;
label_486cd4:
    // 0x486cd4: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x486cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486cd8:
    // 0x486cd8: 0xc1218fc  jal         func_4863F0
label_486cdc:
    if (ctx->pc == 0x486CDCu) {
        ctx->pc = 0x486CE0u;
        goto label_486ce0;
    }
    ctx->pc = 0x486CD8u;
    SET_GPR_U32(ctx, 31, 0x486CE0u);
    ctx->pc = 0x4863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4863F0u, 0x486CD8u, 0x486CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486CE0u;
label_486ce0:
    // 0x486ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_486ce4:
    if (ctx->pc == 0x486CE4u) {
        ctx->pc = 0x486CE8u;
        goto label_486ce8;
    }
    ctx->pc = 0x486CE0u;
    {
        const bool branch_taken_0x486ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486ce0) {
            ctx->pc = 0x486CF4u;
            goto label_486cf4;
        }
    }
    ctx->pc = 0x486CE8u;
label_486ce8:
    // 0x486ce8: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x486ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_486cec:
    // 0x486cec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_486cf0:
    if (ctx->pc == 0x486CF0u) {
        ctx->pc = 0x486CF4u;
        goto label_486cf4;
    }
    ctx->pc = 0x486CECu;
    {
        const bool branch_taken_0x486cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486cec) {
            ctx->pc = 0x486D04u;
            goto label_486d04;
        }
    }
    ctx->pc = 0x486CF4u;
label_486cf4:
    // 0x486cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x486cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486cf8:
    // 0x486cf8: 0xc7ac02d0  lwc1        $f12, 0x2D0($sp)
    ctx->pc = 0x486cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_486cfc:
    // 0x486cfc: 0xc0eef00  jal         func_3BBC00
label_486d00:
    if (ctx->pc == 0x486D00u) {
        ctx->pc = 0x486D04u;
        goto label_486d04;
    }
    ctx->pc = 0x486CFCu;
    SET_GPR_U32(ctx, 31, 0x486D04u);
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x486CFCu, 0x486D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486D04u;
label_486d04:
    // 0x486d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486d08:
    // 0x486d08: 0x10000028  b           . + 4 + (0x28 << 2)
label_486d0c:
    if (ctx->pc == 0x486D0Cu) {
        ctx->pc = 0x486D10u;
        goto label_486d10;
    }
    ctx->pc = 0x486D08u;
    {
        const bool branch_taken_0x486d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486d08) {
            ctx->pc = 0x486DACu;
            goto label_486dac;
        }
    }
    ctx->pc = 0x486D10u;
label_486d10:
    // 0x486d10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x486d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_486d14:
    // 0x486d14: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x486d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_486d18:
    // 0x486d18: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x486d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_486d1c:
    // 0x486d1c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_486d20:
    if (ctx->pc == 0x486D20u) {
        ctx->pc = 0x486D24u;
        goto label_486d24;
    }
    ctx->pc = 0x486D1Cu;
    {
        const bool branch_taken_0x486d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486d1c) {
            ctx->pc = 0x486DA8u;
            goto label_486da8;
        }
    }
    ctx->pc = 0x486D24u;
label_486d24:
    // 0x486d24: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x486d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486d28:
    // 0x486d28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x486d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_486d2c:
    // 0x486d2c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x486d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_486d30:
    // 0x486d30: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x486d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486d34:
    // 0x486d34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x486d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_486d38:
    // 0x486d38: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x486d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_486d3c:
    // 0x486d3c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_486d40:
    if (ctx->pc == 0x486D40u) {
        ctx->pc = 0x486D44u;
        goto label_486d44;
    }
    ctx->pc = 0x486D3Cu;
    {
        const bool branch_taken_0x486d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486d3c) {
            ctx->pc = 0x486DA8u;
            goto label_486da8;
        }
    }
    ctx->pc = 0x486D44u;
label_486d44:
    // 0x486d44: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486d48:
    // 0x486d48: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x486d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486d4c:
    // 0x486d4c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486d50:
    // 0x486d50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486d54:
    // 0x486d54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486d58:
    // 0x486d58: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486d5c:
    // 0x486d5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486d60:
    // 0x486d60: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x486d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_486d64:
    // 0x486d64: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x486d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_486d68:
    // 0x486d68: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486d6c:
    // 0x486d6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486d70:
    // 0x486d70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486d74:
    // 0x486d74: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486d78:
    // 0x486d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486d7c:
    // 0x486d7c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x486d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_486d80:
    // 0x486d80: 0x40f809  jalr        $v0
label_486d84:
    if (ctx->pc == 0x486D84u) {
        ctx->pc = 0x486D88u;
        goto label_486d88;
    }
    ctx->pc = 0x486D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486D88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486D80u, 0x486D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486D88u;
label_486d88:
    // 0x486d88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_486d8c:
    if (ctx->pc == 0x486D8Cu) {
        ctx->pc = 0x486D90u;
        goto label_486d90;
    }
    ctx->pc = 0x486D88u;
    {
        const bool branch_taken_0x486d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486d88) {
            ctx->pc = 0x486DA8u;
            goto label_486da8;
        }
    }
    ctx->pc = 0x486D90u;
label_486d90:
    // 0x486d90: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x486d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486d94:
    // 0x486d94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x486d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_486d98:
    // 0x486d98: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x486d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_486d9c:
    // 0x486d9c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x486d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486da0:
    // 0x486da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x486da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_486da4:
    // 0x486da4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x486da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_486da8:
    // 0x486da8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x486da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_486dac:
    // 0x486dac: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x486dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_486db0:
    // 0x486db0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_486db4:
    if (ctx->pc == 0x486DB4u) {
        ctx->pc = 0x486DB8u;
        goto label_486db8;
    }
    ctx->pc = 0x486DB0u;
    {
        const bool branch_taken_0x486db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x486db0) {
            ctx->pc = 0x486D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486d10;
        }
    }
    ctx->pc = 0x486DB8u;
label_486db8:
    // 0x486db8: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x486db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_486dbc:
    // 0x486dbc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_486dc0:
    if (ctx->pc == 0x486DC0u) {
        ctx->pc = 0x486DC4u;
        goto label_486dc4;
    }
    ctx->pc = 0x486DBCu;
    {
        const bool branch_taken_0x486dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x486dbc) {
            ctx->pc = 0x486DD8u;
            goto label_486dd8;
        }
    }
    ctx->pc = 0x486DC4u;
label_486dc4:
    // 0x486dc4: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x486dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486dc8:
    // 0x486dc8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x486dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486dcc:
    // 0x486dcc: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x486dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486dd0:
    // 0x486dd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x486dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_486dd4:
    // 0x486dd4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x486dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_486dd8:
    // 0x486dd8: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x486dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486ddc:
    // 0x486ddc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x486ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486de0:
    // 0x486de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486de4:
    // 0x486de4: 0x0  nop
    ctx->pc = 0x486de4u;
    // NOP
label_486de8:
    // 0x486de8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x486de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486dec:
    // 0x486dec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_486df0:
    if (ctx->pc == 0x486DF0u) {
        ctx->pc = 0x486DF4u;
        goto label_486df4;
    }
    ctx->pc = 0x486DECu;
    {
        const bool branch_taken_0x486dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486dec) {
            ctx->pc = 0x486E00u;
            goto label_486e00;
        }
    }
    ctx->pc = 0x486DF4u;
label_486df4:
    // 0x486df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486df8:
    // 0x486df8: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x486df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486dfc:
    // 0x486dfc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x486dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_486e00:
    // 0x486e00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x486e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_486e04:
    // 0x486e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x486e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_486e08:
    // 0x486e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486e0c:
    // 0x486e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486e10:
    // 0x486e10: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x486e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_486e14:
    // 0x486e14: 0x3e00008  jr          $ra
label_486e18:
    if (ctx->pc == 0x486E18u) {
        ctx->pc = 0x486E1Cu;
        goto label_486e1c;
    }
    ctx->pc = 0x486E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486E1Cu;
label_486e1c:
    // 0x486e1c: 0x0  nop
    ctx->pc = 0x486e1cu;
    // NOP
    ctx->pc = 0x486e20u;
}
