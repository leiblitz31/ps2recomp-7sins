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

// Function: sub_00492A40
// Address: 0x492a40 - 0x492d20
void sub_00492A40_0x492a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492A40_0x492a40");
#endif

    switch (ctx->pc) {
        case 0x492a40u: goto label_492a40;
        case 0x492a44u: goto label_492a44;
        case 0x492a48u: goto label_492a48;
        case 0x492a4cu: goto label_492a4c;
        case 0x492a50u: goto label_492a50;
        case 0x492a54u: goto label_492a54;
        case 0x492a58u: goto label_492a58;
        case 0x492a5cu: goto label_492a5c;
        case 0x492a60u: goto label_492a60;
        case 0x492a64u: goto label_492a64;
        case 0x492a68u: goto label_492a68;
        case 0x492a6cu: goto label_492a6c;
        case 0x492a70u: goto label_492a70;
        case 0x492a74u: goto label_492a74;
        case 0x492a78u: goto label_492a78;
        case 0x492a7cu: goto label_492a7c;
        case 0x492a80u: goto label_492a80;
        case 0x492a84u: goto label_492a84;
        case 0x492a88u: goto label_492a88;
        case 0x492a8cu: goto label_492a8c;
        case 0x492a90u: goto label_492a90;
        case 0x492a94u: goto label_492a94;
        case 0x492a98u: goto label_492a98;
        case 0x492a9cu: goto label_492a9c;
        case 0x492aa0u: goto label_492aa0;
        case 0x492aa4u: goto label_492aa4;
        case 0x492aa8u: goto label_492aa8;
        case 0x492aacu: goto label_492aac;
        case 0x492ab0u: goto label_492ab0;
        case 0x492ab4u: goto label_492ab4;
        case 0x492ab8u: goto label_492ab8;
        case 0x492abcu: goto label_492abc;
        case 0x492ac0u: goto label_492ac0;
        case 0x492ac4u: goto label_492ac4;
        case 0x492ac8u: goto label_492ac8;
        case 0x492accu: goto label_492acc;
        case 0x492ad0u: goto label_492ad0;
        case 0x492ad4u: goto label_492ad4;
        case 0x492ad8u: goto label_492ad8;
        case 0x492adcu: goto label_492adc;
        case 0x492ae0u: goto label_492ae0;
        case 0x492ae4u: goto label_492ae4;
        case 0x492ae8u: goto label_492ae8;
        case 0x492aecu: goto label_492aec;
        case 0x492af0u: goto label_492af0;
        case 0x492af4u: goto label_492af4;
        case 0x492af8u: goto label_492af8;
        case 0x492afcu: goto label_492afc;
        case 0x492b00u: goto label_492b00;
        case 0x492b04u: goto label_492b04;
        case 0x492b08u: goto label_492b08;
        case 0x492b0cu: goto label_492b0c;
        case 0x492b10u: goto label_492b10;
        case 0x492b14u: goto label_492b14;
        case 0x492b18u: goto label_492b18;
        case 0x492b1cu: goto label_492b1c;
        case 0x492b20u: goto label_492b20;
        case 0x492b24u: goto label_492b24;
        case 0x492b28u: goto label_492b28;
        case 0x492b2cu: goto label_492b2c;
        case 0x492b30u: goto label_492b30;
        case 0x492b34u: goto label_492b34;
        case 0x492b38u: goto label_492b38;
        case 0x492b3cu: goto label_492b3c;
        case 0x492b40u: goto label_492b40;
        case 0x492b44u: goto label_492b44;
        case 0x492b48u: goto label_492b48;
        case 0x492b4cu: goto label_492b4c;
        case 0x492b50u: goto label_492b50;
        case 0x492b54u: goto label_492b54;
        case 0x492b58u: goto label_492b58;
        case 0x492b5cu: goto label_492b5c;
        case 0x492b60u: goto label_492b60;
        case 0x492b64u: goto label_492b64;
        case 0x492b68u: goto label_492b68;
        case 0x492b6cu: goto label_492b6c;
        case 0x492b70u: goto label_492b70;
        case 0x492b74u: goto label_492b74;
        case 0x492b78u: goto label_492b78;
        case 0x492b7cu: goto label_492b7c;
        case 0x492b80u: goto label_492b80;
        case 0x492b84u: goto label_492b84;
        case 0x492b88u: goto label_492b88;
        case 0x492b8cu: goto label_492b8c;
        case 0x492b90u: goto label_492b90;
        case 0x492b94u: goto label_492b94;
        case 0x492b98u: goto label_492b98;
        case 0x492b9cu: goto label_492b9c;
        case 0x492ba0u: goto label_492ba0;
        case 0x492ba4u: goto label_492ba4;
        case 0x492ba8u: goto label_492ba8;
        case 0x492bacu: goto label_492bac;
        case 0x492bb0u: goto label_492bb0;
        case 0x492bb4u: goto label_492bb4;
        case 0x492bb8u: goto label_492bb8;
        case 0x492bbcu: goto label_492bbc;
        case 0x492bc0u: goto label_492bc0;
        case 0x492bc4u: goto label_492bc4;
        case 0x492bc8u: goto label_492bc8;
        case 0x492bccu: goto label_492bcc;
        case 0x492bd0u: goto label_492bd0;
        case 0x492bd4u: goto label_492bd4;
        case 0x492bd8u: goto label_492bd8;
        case 0x492bdcu: goto label_492bdc;
        case 0x492be0u: goto label_492be0;
        case 0x492be4u: goto label_492be4;
        case 0x492be8u: goto label_492be8;
        case 0x492becu: goto label_492bec;
        case 0x492bf0u: goto label_492bf0;
        case 0x492bf4u: goto label_492bf4;
        case 0x492bf8u: goto label_492bf8;
        case 0x492bfcu: goto label_492bfc;
        case 0x492c00u: goto label_492c00;
        case 0x492c04u: goto label_492c04;
        case 0x492c08u: goto label_492c08;
        case 0x492c0cu: goto label_492c0c;
        case 0x492c10u: goto label_492c10;
        case 0x492c14u: goto label_492c14;
        case 0x492c18u: goto label_492c18;
        case 0x492c1cu: goto label_492c1c;
        case 0x492c20u: goto label_492c20;
        case 0x492c24u: goto label_492c24;
        case 0x492c28u: goto label_492c28;
        case 0x492c2cu: goto label_492c2c;
        case 0x492c30u: goto label_492c30;
        case 0x492c34u: goto label_492c34;
        case 0x492c38u: goto label_492c38;
        case 0x492c3cu: goto label_492c3c;
        case 0x492c40u: goto label_492c40;
        case 0x492c44u: goto label_492c44;
        case 0x492c48u: goto label_492c48;
        case 0x492c4cu: goto label_492c4c;
        case 0x492c50u: goto label_492c50;
        case 0x492c54u: goto label_492c54;
        case 0x492c58u: goto label_492c58;
        case 0x492c5cu: goto label_492c5c;
        case 0x492c60u: goto label_492c60;
        case 0x492c64u: goto label_492c64;
        case 0x492c68u: goto label_492c68;
        case 0x492c6cu: goto label_492c6c;
        case 0x492c70u: goto label_492c70;
        case 0x492c74u: goto label_492c74;
        case 0x492c78u: goto label_492c78;
        case 0x492c7cu: goto label_492c7c;
        case 0x492c80u: goto label_492c80;
        case 0x492c84u: goto label_492c84;
        case 0x492c88u: goto label_492c88;
        case 0x492c8cu: goto label_492c8c;
        case 0x492c90u: goto label_492c90;
        case 0x492c94u: goto label_492c94;
        case 0x492c98u: goto label_492c98;
        case 0x492c9cu: goto label_492c9c;
        case 0x492ca0u: goto label_492ca0;
        case 0x492ca4u: goto label_492ca4;
        case 0x492ca8u: goto label_492ca8;
        case 0x492cacu: goto label_492cac;
        case 0x492cb0u: goto label_492cb0;
        case 0x492cb4u: goto label_492cb4;
        case 0x492cb8u: goto label_492cb8;
        case 0x492cbcu: goto label_492cbc;
        case 0x492cc0u: goto label_492cc0;
        case 0x492cc4u: goto label_492cc4;
        case 0x492cc8u: goto label_492cc8;
        case 0x492cccu: goto label_492ccc;
        case 0x492cd0u: goto label_492cd0;
        case 0x492cd4u: goto label_492cd4;
        case 0x492cd8u: goto label_492cd8;
        case 0x492cdcu: goto label_492cdc;
        case 0x492ce0u: goto label_492ce0;
        case 0x492ce4u: goto label_492ce4;
        case 0x492ce8u: goto label_492ce8;
        case 0x492cecu: goto label_492cec;
        case 0x492cf0u: goto label_492cf0;
        case 0x492cf4u: goto label_492cf4;
        case 0x492cf8u: goto label_492cf8;
        case 0x492cfcu: goto label_492cfc;
        case 0x492d00u: goto label_492d00;
        case 0x492d04u: goto label_492d04;
        case 0x492d08u: goto label_492d08;
        case 0x492d0cu: goto label_492d0c;
        case 0x492d10u: goto label_492d10;
        case 0x492d14u: goto label_492d14;
        case 0x492d18u: goto label_492d18;
        case 0x492d1cu: goto label_492d1c;
        default: break;
    }

    ctx->pc = 0x492a40u;

label_492a40:
    // 0x492a40: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x492a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_492a44:
    // 0x492a44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x492a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_492a48:
    // 0x492a48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x492a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_492a4c:
    // 0x492a4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x492a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_492a50:
    // 0x492a50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x492a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_492a54:
    // 0x492a54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x492a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_492a58:
    // 0x492a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x492a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_492a5c:
    // 0x492a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x492a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_492a60:
    // 0x492a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x492a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_492a64:
    // 0x492a64: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x492a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_492a68:
    // 0x492a68: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_492a6c:
    if (ctx->pc == 0x492A6Cu) {
        ctx->pc = 0x492A70u;
        goto label_492a70;
    }
    ctx->pc = 0x492A68u;
    {
        const bool branch_taken_0x492a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492a68) {
            ctx->pc = 0x492B14u;
            goto label_492b14;
        }
    }
    ctx->pc = 0x492A70u;
label_492a70:
    // 0x492a70: 0x8f82b6fc  lw          $v0, -0x4904($gp)
    ctx->pc = 0x492a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948604)));
label_492a74:
    // 0x492a74: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_492a78:
    if (ctx->pc == 0x492A78u) {
        ctx->pc = 0x492A7Cu;
        goto label_492a7c;
    }
    ctx->pc = 0x492A74u;
    {
        const bool branch_taken_0x492a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492a74) {
            ctx->pc = 0x492B14u;
            goto label_492b14;
        }
    }
    ctx->pc = 0x492A7Cu;
label_492a7c:
    // 0x492a7c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x492a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_492a80:
    // 0x492a80: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x492a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_492a84:
    // 0x492a84: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x492a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_492a88:
    // 0x492a88: 0xc115ee8  jal         func_457BA0
label_492a8c:
    if (ctx->pc == 0x492A8Cu) {
        ctx->pc = 0x492A90u;
        goto label_492a90;
    }
    ctx->pc = 0x492A88u;
    SET_GPR_U32(ctx, 31, 0x492A90u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x492A88u, 0x492A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492A90u;
label_492a90:
    // 0x492a90: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_492a94:
    if (ctx->pc == 0x492A94u) {
        ctx->pc = 0x492A98u;
        goto label_492a98;
    }
    ctx->pc = 0x492A90u;
    {
        const bool branch_taken_0x492a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492a90) {
            ctx->pc = 0x492B14u;
            goto label_492b14;
        }
    }
    ctx->pc = 0x492A98u;
label_492a98:
    // 0x492a98: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x492a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_492a9c:
    // 0x492a9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_492aa0:
    if (ctx->pc == 0x492AA0u) {
        ctx->pc = 0x492AA4u;
        goto label_492aa4;
    }
    ctx->pc = 0x492A9Cu;
    {
        const bool branch_taken_0x492a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492a9c) {
            ctx->pc = 0x492B14u;
            goto label_492b14;
        }
    }
    ctx->pc = 0x492AA4u;
label_492aa4:
    // 0x492aa4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x492aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492aa8:
    // 0x492aa8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x492aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_492aac:
    // 0x492aac: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x492aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_492ab0:
    // 0x492ab0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x492ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_492ab4:
    // 0x492ab4: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x492ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_492ab8:
    // 0x492ab8: 0x240801ef  addiu       $t0, $zero, 0x1EF
    ctx->pc = 0x492ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 495));
label_492abc:
    // 0x492abc: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x492abcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_492ac0:
    // 0x492ac0: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x492ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_492ac4:
    // 0x492ac4: 0xc113940  jal         func_44E500
label_492ac8:
    if (ctx->pc == 0x492AC8u) {
        ctx->pc = 0x492ACCu;
        goto label_492acc;
    }
    ctx->pc = 0x492AC4u;
    SET_GPR_U32(ctx, 31, 0x492ACCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x492AC4u, 0x492ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492ACCu;
label_492acc:
    // 0x492acc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x492accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492ad0:
    // 0x492ad0: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x492ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_492ad4:
    // 0x492ad4: 0xc115c24  jal         func_457090
label_492ad8:
    if (ctx->pc == 0x492AD8u) {
        ctx->pc = 0x492ADCu;
        goto label_492adc;
    }
    ctx->pc = 0x492AD4u;
    SET_GPR_U32(ctx, 31, 0x492ADCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x492AD4u, 0x492ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492ADCu;
label_492adc:
    // 0x492adc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x492adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492ae0:
    // 0x492ae0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x492ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_492ae4:
    // 0x492ae4: 0x40f809  jalr        $v0
label_492ae8:
    if (ctx->pc == 0x492AE8u) {
        ctx->pc = 0x492AECu;
        goto label_492aec;
    }
    ctx->pc = 0x492AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492AECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492AE4u, 0x492AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492AECu;
label_492aec:
    // 0x492aec: 0xaf82b6fc  sw          $v0, -0x4904($gp)
    ctx->pc = 0x492aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948604), GPR_U32(ctx, 2));
label_492af0:
    // 0x492af0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x492af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_492af4:
    // 0x492af4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_492af8:
    if (ctx->pc == 0x492AF8u) {
        ctx->pc = 0x492AFCu;
        goto label_492afc;
    }
    ctx->pc = 0x492AF4u;
    {
        const bool branch_taken_0x492af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492af4) {
            ctx->pc = 0x492B04u;
            goto label_492b04;
        }
    }
    ctx->pc = 0x492AFCu;
label_492afc:
    // 0x492afc: 0xd  break       0
    ctx->pc = 0x492afcu;
    runtime->handleBreak(rdram, ctx);
label_492b00:
    // 0x492b00: 0x0  nop
    ctx->pc = 0x492b00u;
    // NOP
label_492b04:
    // 0x492b04: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x492b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492b08:
    // 0x492b08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x492b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_492b0c:
    // 0x492b0c: 0xc11392c  jal         func_44E4B0
label_492b10:
    if (ctx->pc == 0x492B10u) {
        ctx->pc = 0x492B14u;
        goto label_492b14;
    }
    ctx->pc = 0x492B0Cu;
    SET_GPR_U32(ctx, 31, 0x492B14u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x492B0Cu, 0x492B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B14u;
label_492b14:
    // 0x492b14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x492b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492b18:
    // 0x492b18: 0x1000006f  b           . + 4 + (0x6F << 2)
label_492b1c:
    if (ctx->pc == 0x492B1Cu) {
        ctx->pc = 0x492B20u;
        goto label_492b20;
    }
    ctx->pc = 0x492B18u;
    {
        const bool branch_taken_0x492b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492b18) {
            ctx->pc = 0x492CD8u;
            goto label_492cd8;
        }
    }
    ctx->pc = 0x492B20u;
label_492b20:
    // 0x492b20: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x492b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_492b24:
    // 0x492b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x492b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_492b28:
    // 0x492b28: 0xc124b48  jal         func_492D20
label_492b2c:
    if (ctx->pc == 0x492B2Cu) {
        ctx->pc = 0x492B30u;
        goto label_492b30;
    }
    ctx->pc = 0x492B28u;
    SET_GPR_U32(ctx, 31, 0x492B30u);
    ctx->pc = 0x492D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492D20u, 0x492B28u, 0x492B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B30u;
label_492b30:
    // 0x492b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x492b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492b34:
    // 0x492b34: 0x2c410024  sltiu       $at, $v0, 0x24
    ctx->pc = 0x492b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_492b38:
    // 0x492b38: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_492b3c:
    if (ctx->pc == 0x492B3Cu) {
        ctx->pc = 0x492B40u;
        goto label_492b40;
    }
    ctx->pc = 0x492B38u;
    {
        const bool branch_taken_0x492b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x492b38) {
            ctx->pc = 0x492CD4u;
            goto label_492cd4;
        }
    }
    ctx->pc = 0x492B40u;
label_492b40:
    // 0x492b40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x492b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_492b44:
    // 0x492b44: 0x24631c30  addiu       $v1, $v1, 0x1C30
    ctx->pc = 0x492b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7216));
label_492b48:
    // 0x492b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x492b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_492b4c:
    // 0x492b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_492b50:
    // 0x492b50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x492b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492b54:
    // 0x492b54: 0x400008  jr          $v0
label_492b58:
    if (ctx->pc == 0x492B58u) {
        ctx->pc = 0x492B5Cu;
        goto label_492b5c;
    }
    ctx->pc = 0x492B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x492B5Cu: goto label_492b5c;
            case 0x492CCCu: goto label_492ccc;
            case 0x492CD4u: goto label_492cd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492B54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x492B5Cu;
label_492b5c:
    // 0x492b5c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492b60:
    // 0x492b60: 0x24422e60  addiu       $v0, $v0, 0x2E60
    ctx->pc = 0x492b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
label_492b64:
    // 0x492b64: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x492b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_492b68:
    // 0x492b68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492b6c:
    // 0x492b6c: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x492b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
label_492b70:
    // 0x492b70: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x492b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_492b74:
    // 0x492b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492b78:
    // 0x492b78: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x492b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_492b7c:
    // 0x492b7c: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x492b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_492b80:
    // 0x492b80: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x492b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_492b84:
    // 0x492b84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x492b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_492b88:
    // 0x492b88: 0xc0caa4a  jal         func_32A928
label_492b8c:
    if (ctx->pc == 0x492B8Cu) {
        ctx->pc = 0x492B90u;
        goto label_492b90;
    }
    ctx->pc = 0x492B88u;
    SET_GPR_U32(ctx, 31, 0x492B90u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492B88u, 0x492B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B90u;
label_492b90:
    // 0x492b90: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x492b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492b94:
    // 0x492b94: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492b98:
    // 0x492b98: 0x24422ee8  addiu       $v0, $v0, 0x2EE8
    ctx->pc = 0x492b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12008));
label_492b9c:
    // 0x492b9c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x492b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_492ba0:
    // 0x492ba0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492ba4:
    // 0x492ba4: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x492ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
label_492ba8:
    // 0x492ba8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x492ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_492bac:
    // 0x492bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492bb0:
    // 0x492bb0: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x492bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_492bb4:
    // 0x492bb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492bb8:
    // 0x492bb8: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x492bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
label_492bbc:
    // 0x492bbc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x492bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_492bc0:
    // 0x492bc0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x492bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_492bc4:
    // 0x492bc4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x492bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_492bc8:
    // 0x492bc8: 0xc0caa4a  jal         func_32A928
label_492bcc:
    if (ctx->pc == 0x492BCCu) {
        ctx->pc = 0x492BD0u;
        goto label_492bd0;
    }
    ctx->pc = 0x492BC8u;
    SET_GPR_U32(ctx, 31, 0x492BD0u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492BC8u, 0x492BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492BD0u;
label_492bd0:
    // 0x492bd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x492bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492bd4:
    // 0x492bd4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492bd8:
    // 0x492bd8: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x492bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
label_492bdc:
    // 0x492bdc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x492bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_492be0:
    // 0x492be0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492be4:
    // 0x492be4: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x492be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
label_492be8:
    // 0x492be8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x492be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_492bec:
    // 0x492bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492bf0:
    // 0x492bf0: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x492bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_492bf4:
    // 0x492bf4: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x492bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_492bf8:
    // 0x492bf8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x492bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_492bfc:
    // 0x492bfc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x492bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_492c00:
    // 0x492c00: 0xc0caa4a  jal         func_32A928
label_492c04:
    if (ctx->pc == 0x492C04u) {
        ctx->pc = 0x492C08u;
        goto label_492c08;
    }
    ctx->pc = 0x492C00u;
    SET_GPR_U32(ctx, 31, 0x492C08u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492C00u, 0x492C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C08u;
label_492c08:
    // 0x492c08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x492c08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492c0c:
    // 0x492c0c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492c10:
    // 0x492c10: 0x24422de8  addiu       $v0, $v0, 0x2DE8
    ctx->pc = 0x492c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11752));
label_492c14:
    // 0x492c14: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x492c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_492c18:
    // 0x492c18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492c1c:
    // 0x492c1c: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x492c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
label_492c20:
    // 0x492c20: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x492c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_492c24:
    // 0x492c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492c28:
    // 0x492c28: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x492c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_492c2c:
    // 0x492c2c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492c30:
    // 0x492c30: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x492c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
label_492c34:
    // 0x492c34: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x492c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_492c38:
    // 0x492c38: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x492c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_492c3c:
    // 0x492c3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x492c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_492c40:
    // 0x492c40: 0xc0caa4a  jal         func_32A928
label_492c44:
    if (ctx->pc == 0x492C44u) {
        ctx->pc = 0x492C48u;
        goto label_492c48;
    }
    ctx->pc = 0x492C40u;
    SET_GPR_U32(ctx, 31, 0x492C48u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492C40u, 0x492C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C48u;
label_492c48:
    // 0x492c48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x492c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492c4c:
    // 0x492c4c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492c50:
    // 0x492c50: 0x24422c60  addiu       $v0, $v0, 0x2C60
    ctx->pc = 0x492c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11360));
label_492c54:
    // 0x492c54: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x492c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_492c58:
    // 0x492c58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492c5c:
    // 0x492c5c: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x492c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_492c60:
    // 0x492c60: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x492c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_492c64:
    // 0x492c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492c68:
    // 0x492c68: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x492c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_492c6c:
    // 0x492c6c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x492c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_492c70:
    // 0x492c70: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x492c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_492c74:
    // 0x492c74: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x492c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_492c78:
    // 0x492c78: 0xc0caa4a  jal         func_32A928
label_492c7c:
    if (ctx->pc == 0x492C7Cu) {
        ctx->pc = 0x492C80u;
        goto label_492c80;
    }
    ctx->pc = 0x492C78u;
    SET_GPR_U32(ctx, 31, 0x492C80u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492C78u, 0x492C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C80u;
label_492c80:
    // 0x492c80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x492c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492c84:
    // 0x492c84: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492c88:
    // 0x492c88: 0x24422ce8  addiu       $v0, $v0, 0x2CE8
    ctx->pc = 0x492c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11496));
label_492c8c:
    // 0x492c8c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x492c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_492c90:
    // 0x492c90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492c94:
    // 0x492c94: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x492c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
label_492c98:
    // 0x492c98: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x492c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_492c9c:
    // 0x492c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492ca0:
    // 0x492ca0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x492ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_492ca4:
    // 0x492ca4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492ca8:
    // 0x492ca8: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x492ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_492cac:
    // 0x492cac: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x492cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_492cb0:
    // 0x492cb0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x492cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_492cb4:
    // 0x492cb4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x492cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_492cb8:
    // 0x492cb8: 0xc0caa4a  jal         func_32A928
label_492cbc:
    if (ctx->pc == 0x492CBCu) {
        ctx->pc = 0x492CC0u;
        goto label_492cc0;
    }
    ctx->pc = 0x492CB8u;
    SET_GPR_U32(ctx, 31, 0x492CC0u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492CB8u, 0x492CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492CC0u;
label_492cc0:
    // 0x492cc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x492cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492cc4:
    // 0x492cc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_492cc8:
    if (ctx->pc == 0x492CC8u) {
        ctx->pc = 0x492CCCu;
        goto label_492ccc;
    }
    ctx->pc = 0x492CC4u;
    {
        const bool branch_taken_0x492cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492cc4) {
            ctx->pc = 0x492CD4u;
            goto label_492cd4;
        }
    }
    ctx->pc = 0x492CCCu;
label_492ccc:
    // 0x492ccc: 0xc0efbf8  jal         func_3BEFE0
label_492cd0:
    if (ctx->pc == 0x492CD0u) {
        ctx->pc = 0x492CD4u;
        goto label_492cd4;
    }
    ctx->pc = 0x492CCCu;
    SET_GPR_U32(ctx, 31, 0x492CD4u);
    ctx->pc = 0x3BEFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFE0u, 0x492CCCu, 0x492CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492CD4u;
label_492cd4:
    // 0x492cd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x492cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_492cd8:
    // 0x492cd8: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x492cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_492cdc:
    // 0x492cdc: 0xc124690  jal         func_491A40
label_492ce0:
    if (ctx->pc == 0x492CE0u) {
        ctx->pc = 0x492CE4u;
        goto label_492ce4;
    }
    ctx->pc = 0x492CDCu;
    SET_GPR_U32(ctx, 31, 0x492CE4u);
    ctx->pc = 0x491A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A40u, 0x492CDCu, 0x492CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492CE4u;
label_492ce4:
    // 0x492ce4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x492ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_492ce8:
    // 0x492ce8: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
label_492cec:
    if (ctx->pc == 0x492CECu) {
        ctx->pc = 0x492CF0u;
        goto label_492cf0;
    }
    ctx->pc = 0x492CE8u;
    {
        const bool branch_taken_0x492ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492ce8) {
            ctx->pc = 0x492B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_492b20;
        }
    }
    ctx->pc = 0x492CF0u;
label_492cf0:
    // 0x492cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492cf4:
    // 0x492cf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x492cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_492cf8:
    // 0x492cf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x492cf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_492cfc:
    // 0x492cfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x492cfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_492d00:
    // 0x492d00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x492d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_492d04:
    // 0x492d04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x492d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_492d08:
    // 0x492d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x492d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_492d0c:
    // 0x492d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x492d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_492d10:
    // 0x492d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x492d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_492d14:
    // 0x492d14: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x492d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_492d18:
    // 0x492d18: 0x3e00008  jr          $ra
label_492d1c:
    if (ctx->pc == 0x492D1Cu) {
        ctx->pc = 0x492D20u;
        goto label_fallthrough_0x492d18;
    }
    ctx->pc = 0x492D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x492d18:
    ctx->pc = 0x492D20u;
}
