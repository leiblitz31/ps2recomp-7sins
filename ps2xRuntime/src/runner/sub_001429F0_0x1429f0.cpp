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

// Function: sub_001429F0
// Address: 0x1429f0 - 0x142c60
void sub_001429F0_0x1429f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001429F0_0x1429f0");
#endif

    switch (ctx->pc) {
        case 0x1429f0u: goto label_1429f0;
        case 0x1429f4u: goto label_1429f4;
        case 0x1429f8u: goto label_1429f8;
        case 0x1429fcu: goto label_1429fc;
        case 0x142a00u: goto label_142a00;
        case 0x142a04u: goto label_142a04;
        case 0x142a08u: goto label_142a08;
        case 0x142a0cu: goto label_142a0c;
        case 0x142a10u: goto label_142a10;
        case 0x142a14u: goto label_142a14;
        case 0x142a18u: goto label_142a18;
        case 0x142a1cu: goto label_142a1c;
        case 0x142a20u: goto label_142a20;
        case 0x142a24u: goto label_142a24;
        case 0x142a28u: goto label_142a28;
        case 0x142a2cu: goto label_142a2c;
        case 0x142a30u: goto label_142a30;
        case 0x142a34u: goto label_142a34;
        case 0x142a38u: goto label_142a38;
        case 0x142a3cu: goto label_142a3c;
        case 0x142a40u: goto label_142a40;
        case 0x142a44u: goto label_142a44;
        case 0x142a48u: goto label_142a48;
        case 0x142a4cu: goto label_142a4c;
        case 0x142a50u: goto label_142a50;
        case 0x142a54u: goto label_142a54;
        case 0x142a58u: goto label_142a58;
        case 0x142a5cu: goto label_142a5c;
        case 0x142a60u: goto label_142a60;
        case 0x142a64u: goto label_142a64;
        case 0x142a68u: goto label_142a68;
        case 0x142a6cu: goto label_142a6c;
        case 0x142a70u: goto label_142a70;
        case 0x142a74u: goto label_142a74;
        case 0x142a78u: goto label_142a78;
        case 0x142a7cu: goto label_142a7c;
        case 0x142a80u: goto label_142a80;
        case 0x142a84u: goto label_142a84;
        case 0x142a88u: goto label_142a88;
        case 0x142a8cu: goto label_142a8c;
        case 0x142a90u: goto label_142a90;
        case 0x142a94u: goto label_142a94;
        case 0x142a98u: goto label_142a98;
        case 0x142a9cu: goto label_142a9c;
        case 0x142aa0u: goto label_142aa0;
        case 0x142aa4u: goto label_142aa4;
        case 0x142aa8u: goto label_142aa8;
        case 0x142aacu: goto label_142aac;
        case 0x142ab0u: goto label_142ab0;
        case 0x142ab4u: goto label_142ab4;
        case 0x142ab8u: goto label_142ab8;
        case 0x142abcu: goto label_142abc;
        case 0x142ac0u: goto label_142ac0;
        case 0x142ac4u: goto label_142ac4;
        case 0x142ac8u: goto label_142ac8;
        case 0x142accu: goto label_142acc;
        case 0x142ad0u: goto label_142ad0;
        case 0x142ad4u: goto label_142ad4;
        case 0x142ad8u: goto label_142ad8;
        case 0x142adcu: goto label_142adc;
        case 0x142ae0u: goto label_142ae0;
        case 0x142ae4u: goto label_142ae4;
        case 0x142ae8u: goto label_142ae8;
        case 0x142aecu: goto label_142aec;
        case 0x142af0u: goto label_142af0;
        case 0x142af4u: goto label_142af4;
        case 0x142af8u: goto label_142af8;
        case 0x142afcu: goto label_142afc;
        case 0x142b00u: goto label_142b00;
        case 0x142b04u: goto label_142b04;
        case 0x142b08u: goto label_142b08;
        case 0x142b0cu: goto label_142b0c;
        case 0x142b10u: goto label_142b10;
        case 0x142b14u: goto label_142b14;
        case 0x142b18u: goto label_142b18;
        case 0x142b1cu: goto label_142b1c;
        case 0x142b20u: goto label_142b20;
        case 0x142b24u: goto label_142b24;
        case 0x142b28u: goto label_142b28;
        case 0x142b2cu: goto label_142b2c;
        case 0x142b30u: goto label_142b30;
        case 0x142b34u: goto label_142b34;
        case 0x142b38u: goto label_142b38;
        case 0x142b3cu: goto label_142b3c;
        case 0x142b40u: goto label_142b40;
        case 0x142b44u: goto label_142b44;
        case 0x142b48u: goto label_142b48;
        case 0x142b4cu: goto label_142b4c;
        case 0x142b50u: goto label_142b50;
        case 0x142b54u: goto label_142b54;
        case 0x142b58u: goto label_142b58;
        case 0x142b5cu: goto label_142b5c;
        case 0x142b60u: goto label_142b60;
        case 0x142b64u: goto label_142b64;
        case 0x142b68u: goto label_142b68;
        case 0x142b6cu: goto label_142b6c;
        case 0x142b70u: goto label_142b70;
        case 0x142b74u: goto label_142b74;
        case 0x142b78u: goto label_142b78;
        case 0x142b7cu: goto label_142b7c;
        case 0x142b80u: goto label_142b80;
        case 0x142b84u: goto label_142b84;
        case 0x142b88u: goto label_142b88;
        case 0x142b8cu: goto label_142b8c;
        case 0x142b90u: goto label_142b90;
        case 0x142b94u: goto label_142b94;
        case 0x142b98u: goto label_142b98;
        case 0x142b9cu: goto label_142b9c;
        case 0x142ba0u: goto label_142ba0;
        case 0x142ba4u: goto label_142ba4;
        case 0x142ba8u: goto label_142ba8;
        case 0x142bacu: goto label_142bac;
        case 0x142bb0u: goto label_142bb0;
        case 0x142bb4u: goto label_142bb4;
        case 0x142bb8u: goto label_142bb8;
        case 0x142bbcu: goto label_142bbc;
        case 0x142bc0u: goto label_142bc0;
        case 0x142bc4u: goto label_142bc4;
        case 0x142bc8u: goto label_142bc8;
        case 0x142bccu: goto label_142bcc;
        case 0x142bd0u: goto label_142bd0;
        case 0x142bd4u: goto label_142bd4;
        case 0x142bd8u: goto label_142bd8;
        case 0x142bdcu: goto label_142bdc;
        case 0x142be0u: goto label_142be0;
        case 0x142be4u: goto label_142be4;
        case 0x142be8u: goto label_142be8;
        case 0x142becu: goto label_142bec;
        case 0x142bf0u: goto label_142bf0;
        case 0x142bf4u: goto label_142bf4;
        case 0x142bf8u: goto label_142bf8;
        case 0x142bfcu: goto label_142bfc;
        case 0x142c00u: goto label_142c00;
        case 0x142c04u: goto label_142c04;
        case 0x142c08u: goto label_142c08;
        case 0x142c0cu: goto label_142c0c;
        case 0x142c10u: goto label_142c10;
        case 0x142c14u: goto label_142c14;
        case 0x142c18u: goto label_142c18;
        case 0x142c1cu: goto label_142c1c;
        case 0x142c20u: goto label_142c20;
        case 0x142c24u: goto label_142c24;
        case 0x142c28u: goto label_142c28;
        case 0x142c2cu: goto label_142c2c;
        case 0x142c30u: goto label_142c30;
        case 0x142c34u: goto label_142c34;
        case 0x142c38u: goto label_142c38;
        case 0x142c3cu: goto label_142c3c;
        case 0x142c40u: goto label_142c40;
        case 0x142c44u: goto label_142c44;
        case 0x142c48u: goto label_142c48;
        case 0x142c4cu: goto label_142c4c;
        case 0x142c50u: goto label_142c50;
        case 0x142c54u: goto label_142c54;
        case 0x142c58u: goto label_142c58;
        case 0x142c5cu: goto label_142c5c;
        default: break;
    }

    ctx->pc = 0x1429f0u;

label_1429f0:
    // 0x1429f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1429f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1429f4:
    // 0x1429f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1429f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1429f8:
    // 0x1429f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1429f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1429fc:
    // 0x1429fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1429fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_142a00:
    // 0x142a00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x142a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_142a04:
    // 0x142a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142a08:
    // 0x142a08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_142a0c:
    // 0x142a0c: 0x320f809  jalr        $t9
label_142a10:
    if (ctx->pc == 0x142A10u) {
        ctx->pc = 0x142A14u;
        goto label_142a14;
    }
    ctx->pc = 0x142A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142A14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A0Cu, 0x142A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142A14u;
label_142a14:
    // 0x142a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142a18:
    // 0x142a18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_142a1c:
    // 0x142a1c: 0x3e00008  jr          $ra
label_142a20:
    if (ctx->pc == 0x142A20u) {
        ctx->pc = 0x142A24u;
        goto label_142a24;
    }
    ctx->pc = 0x142A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142A24u;
label_142a24:
    // 0x142a24: 0x0  nop
    ctx->pc = 0x142a24u;
    // NOP
label_142a28:
    // 0x142a28: 0x0  nop
    ctx->pc = 0x142a28u;
    // NOP
label_142a2c:
    // 0x142a2c: 0x0  nop
    ctx->pc = 0x142a2cu;
    // NOP
label_142a30:
    // 0x142a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_142a34:
    // 0x142a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_142a38:
    // 0x142a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_142a3c:
    // 0x142a3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x142a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_142a40:
    // 0x142a40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x142a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142a44:
    // 0x142a44: 0xc08ec5c  jal         func_23B170
label_142a48:
    if (ctx->pc == 0x142A48u) {
        ctx->pc = 0x142A4Cu;
        goto label_142a4c;
    }
    ctx->pc = 0x142A44u;
    SET_GPR_U32(ctx, 31, 0x142A4Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x142A44u, 0x142A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A4Cu;
label_142a4c:
    // 0x142a4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142a50:
    // 0x142a50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142a54:
    // 0x142a54: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x142a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_142a58:
    // 0x142a58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142a5c:
    // 0x142a5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x142a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_142a60:
    // 0x142a60: 0x320f809  jalr        $t9
label_142a64:
    if (ctx->pc == 0x142A64u) {
        ctx->pc = 0x142A68u;
        goto label_142a68;
    }
    ctx->pc = 0x142A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A60u, 0x142A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142A68u;
label_142a68:
    // 0x142a68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142a6c:
    // 0x142a6c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142a70:
    // 0x142a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142a74:
    // 0x142a74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142a78:
    // 0x142a78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142a7c:
    // 0x142a7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142a80:
    // 0x142a80: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142a80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142a84:
    // 0x142a84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x142a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142a88:
    // 0x142a88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142a8c:
    // 0x142a8c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_142a90:
    // 0x142a90: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_142a94:
    // 0x142a94: 0xc04f97c  jal         func_13E5F0
label_142a98:
    if (ctx->pc == 0x142A98u) {
        ctx->pc = 0x142A9Cu;
        goto label_142a9c;
    }
    ctx->pc = 0x142A94u;
    SET_GPR_U32(ctx, 31, 0x142A9Cu);
    ctx->pc = 0x13E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5F0u, 0x142A94u, 0x142A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A9Cu;
label_142a9c:
    // 0x142a9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142aa0:
    // 0x142aa0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142aa4:
    // 0x142aa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142aa8:
    // 0x142aa8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_142aac:
    // 0x142aac: 0x320f809  jalr        $t9
label_142ab0:
    if (ctx->pc == 0x142AB0u) {
        ctx->pc = 0x142AB4u;
        goto label_142ab4;
    }
    ctx->pc = 0x142AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142AB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142AACu, 0x142AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142AB4u;
label_142ab4:
    // 0x142ab4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142ab8:
    // 0x142ab8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142abc:
    // 0x142abc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142ac0:
    // 0x142ac0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142ac4:
    // 0x142ac4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142ac8:
    // 0x142ac8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142acc:
    // 0x142acc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142accu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142ad0:
    // 0x142ad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x142ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142ad4:
    // 0x142ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142ad8:
    // 0x142ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_142adc:
    // 0x142adc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_142ae0:
    // 0x142ae0: 0x3e00008  jr          $ra
label_142ae4:
    if (ctx->pc == 0x142AE4u) {
        ctx->pc = 0x142AE8u;
        goto label_142ae8;
    }
    ctx->pc = 0x142AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142AE8u;
label_142ae8:
    // 0x142ae8: 0x0  nop
    ctx->pc = 0x142ae8u;
    // NOP
label_142aec:
    // 0x142aec: 0x0  nop
    ctx->pc = 0x142aecu;
    // NOP
label_142af0:
    // 0x142af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_142af4:
    // 0x142af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142af8:
    // 0x142af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x142af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_142afc:
    // 0x142afc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_142b00:
    // 0x142b00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x142b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_142b04:
    // 0x142b04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x142b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142b08:
    // 0x142b08: 0xc08ec68  jal         func_23B1A0
label_142b0c:
    if (ctx->pc == 0x142B0Cu) {
        ctx->pc = 0x142B10u;
        goto label_142b10;
    }
    ctx->pc = 0x142B08u;
    SET_GPR_U32(ctx, 31, 0x142B10u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x142B08u, 0x142B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B10u;
label_142b10:
    // 0x142b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142b14:
    // 0x142b14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x142b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_142b18:
    // 0x142b18: 0x3e00008  jr          $ra
label_142b1c:
    if (ctx->pc == 0x142B1Cu) {
        ctx->pc = 0x142B20u;
        goto label_142b20;
    }
    ctx->pc = 0x142B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142B20u;
label_142b20:
    // 0x142b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_142b24:
    // 0x142b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_142b28:
    // 0x142b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_142b2c:
    // 0x142b2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x142b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_142b30:
    // 0x142b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142b34:
    // 0x142b34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142b34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142b38:
    // 0x142b38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142b3c:
    // 0x142b3c: 0xc050c2c  jal         func_1430B0
label_142b40:
    if (ctx->pc == 0x142B40u) {
        ctx->pc = 0x142B44u;
        goto label_142b44;
    }
    ctx->pc = 0x142B3Cu;
    SET_GPR_U32(ctx, 31, 0x142B44u);
    ctx->pc = 0x1430B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1430B0u, 0x142B3Cu, 0x142B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B44u;
label_142b44:
    // 0x142b44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142b48:
    // 0x142b48: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x142b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142b4c:
    // 0x142b4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142b50:
    // 0x142b50: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_142b54:
    // 0x142b54: 0x320f809  jalr        $t9
label_142b58:
    if (ctx->pc == 0x142B58u) {
        ctx->pc = 0x142B5Cu;
        goto label_142b5c;
    }
    ctx->pc = 0x142B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142B5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142B54u, 0x142B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142B5Cu;
label_142b5c:
    // 0x142b5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142b60:
    // 0x142b60: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142b64:
    // 0x142b64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142b68:
    // 0x142b68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142b6c:
    // 0x142b6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142b70:
    // 0x142b70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142b74:
    // 0x142b74: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142b74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142b78:
    // 0x142b78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142b7c:
    // 0x142b7c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_142b80:
    // 0x142b80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142b84:
    // 0x142b84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x142b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_142b88:
    // 0x142b88: 0x320f809  jalr        $t9
label_142b8c:
    if (ctx->pc == 0x142B8Cu) {
        ctx->pc = 0x142B90u;
        goto label_142b90;
    }
    ctx->pc = 0x142B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142B90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142B88u, 0x142B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142B90u;
label_142b90:
    // 0x142b90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142b94:
    // 0x142b94: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142b98:
    // 0x142b98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142b9c:
    // 0x142b9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142ba0:
    // 0x142ba0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142ba4:
    // 0x142ba4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142ba8:
    // 0x142ba8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142ba8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142bac:
    // 0x142bac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142bb0:
    // 0x142bb0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x142bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_142bb4:
    // 0x142bb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142bb8:
    // 0x142bb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x142bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_142bbc:
    // 0x142bbc: 0x320f809  jalr        $t9
label_142bc0:
    if (ctx->pc == 0x142BC0u) {
        ctx->pc = 0x142BC4u;
        goto label_142bc4;
    }
    ctx->pc = 0x142BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142BC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BBCu, 0x142BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142BC4u;
label_142bc4:
    // 0x142bc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142bc8:
    // 0x142bc8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142bcc:
    // 0x142bcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142bd0:
    // 0x142bd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142bd4:
    // 0x142bd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142bd8:
    // 0x142bd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142bdc:
    // 0x142bdc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142bdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142be0:
    // 0x142be0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142be4:
    // 0x142be4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_142be8:
    // 0x142be8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142bec:
    // 0x142bec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_142bf0:
    // 0x142bf0: 0x320f809  jalr        $t9
label_142bf4:
    if (ctx->pc == 0x142BF4u) {
        ctx->pc = 0x142BF8u;
        goto label_142bf8;
    }
    ctx->pc = 0x142BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142BF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BF0u, 0x142BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142BF8u;
label_142bf8:
    // 0x142bf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142bfc:
    // 0x142bfc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142c00:
    // 0x142c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142c04:
    // 0x142c04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142c08:
    // 0x142c08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142c0c:
    // 0x142c0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142c10:
    // 0x142c10: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142c10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142c14:
    // 0x142c14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_142c18:
    // 0x142c18: 0xc08ec70  jal         func_23B1C0
label_142c1c:
    if (ctx->pc == 0x142C1Cu) {
        ctx->pc = 0x142C20u;
        goto label_142c20;
    }
    ctx->pc = 0x142C18u;
    SET_GPR_U32(ctx, 31, 0x142C20u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x142C18u, 0x142C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C20u;
label_142c20:
    // 0x142c20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142c24:
    // 0x142c24: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x142c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_142c28:
    // 0x142c28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142c2c:
    // 0x142c2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142c30:
    // 0x142c30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142c34:
    // 0x142c34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_142c38:
    // 0x142c38: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x142c38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142c3c:
    // 0x142c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x142c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142c40:
    // 0x142c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142c44:
    // 0x142c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_142c48:
    // 0x142c48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x142c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_142c4c:
    // 0x142c4c: 0x3e00008  jr          $ra
label_142c50:
    if (ctx->pc == 0x142C50u) {
        ctx->pc = 0x142C54u;
        goto label_142c54;
    }
    ctx->pc = 0x142C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142C54u;
label_142c54:
    // 0x142c54: 0x0  nop
    ctx->pc = 0x142c54u;
    // NOP
label_142c58:
    // 0x142c58: 0x0  nop
    ctx->pc = 0x142c58u;
    // NOP
label_142c5c:
    // 0x142c5c: 0x0  nop
    ctx->pc = 0x142c5cu;
    // NOP
    ctx->pc = 0x142c60u;
}
