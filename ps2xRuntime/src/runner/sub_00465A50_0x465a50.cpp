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

// Function: sub_00465A50
// Address: 0x465a50 - 0x465bc0
void sub_00465A50_0x465a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465A50_0x465a50");
#endif

    switch (ctx->pc) {
        case 0x465a50u: goto label_465a50;
        case 0x465a54u: goto label_465a54;
        case 0x465a58u: goto label_465a58;
        case 0x465a5cu: goto label_465a5c;
        case 0x465a60u: goto label_465a60;
        case 0x465a64u: goto label_465a64;
        case 0x465a68u: goto label_465a68;
        case 0x465a6cu: goto label_465a6c;
        case 0x465a70u: goto label_465a70;
        case 0x465a74u: goto label_465a74;
        case 0x465a78u: goto label_465a78;
        case 0x465a7cu: goto label_465a7c;
        case 0x465a80u: goto label_465a80;
        case 0x465a84u: goto label_465a84;
        case 0x465a88u: goto label_465a88;
        case 0x465a8cu: goto label_465a8c;
        case 0x465a90u: goto label_465a90;
        case 0x465a94u: goto label_465a94;
        case 0x465a98u: goto label_465a98;
        case 0x465a9cu: goto label_465a9c;
        case 0x465aa0u: goto label_465aa0;
        case 0x465aa4u: goto label_465aa4;
        case 0x465aa8u: goto label_465aa8;
        case 0x465aacu: goto label_465aac;
        case 0x465ab0u: goto label_465ab0;
        case 0x465ab4u: goto label_465ab4;
        case 0x465ab8u: goto label_465ab8;
        case 0x465abcu: goto label_465abc;
        case 0x465ac0u: goto label_465ac0;
        case 0x465ac4u: goto label_465ac4;
        case 0x465ac8u: goto label_465ac8;
        case 0x465accu: goto label_465acc;
        case 0x465ad0u: goto label_465ad0;
        case 0x465ad4u: goto label_465ad4;
        case 0x465ad8u: goto label_465ad8;
        case 0x465adcu: goto label_465adc;
        case 0x465ae0u: goto label_465ae0;
        case 0x465ae4u: goto label_465ae4;
        case 0x465ae8u: goto label_465ae8;
        case 0x465aecu: goto label_465aec;
        case 0x465af0u: goto label_465af0;
        case 0x465af4u: goto label_465af4;
        case 0x465af8u: goto label_465af8;
        case 0x465afcu: goto label_465afc;
        case 0x465b00u: goto label_465b00;
        case 0x465b04u: goto label_465b04;
        case 0x465b08u: goto label_465b08;
        case 0x465b0cu: goto label_465b0c;
        case 0x465b10u: goto label_465b10;
        case 0x465b14u: goto label_465b14;
        case 0x465b18u: goto label_465b18;
        case 0x465b1cu: goto label_465b1c;
        case 0x465b20u: goto label_465b20;
        case 0x465b24u: goto label_465b24;
        case 0x465b28u: goto label_465b28;
        case 0x465b2cu: goto label_465b2c;
        case 0x465b30u: goto label_465b30;
        case 0x465b34u: goto label_465b34;
        case 0x465b38u: goto label_465b38;
        case 0x465b3cu: goto label_465b3c;
        case 0x465b40u: goto label_465b40;
        case 0x465b44u: goto label_465b44;
        case 0x465b48u: goto label_465b48;
        case 0x465b4cu: goto label_465b4c;
        case 0x465b50u: goto label_465b50;
        case 0x465b54u: goto label_465b54;
        case 0x465b58u: goto label_465b58;
        case 0x465b5cu: goto label_465b5c;
        case 0x465b60u: goto label_465b60;
        case 0x465b64u: goto label_465b64;
        case 0x465b68u: goto label_465b68;
        case 0x465b6cu: goto label_465b6c;
        case 0x465b70u: goto label_465b70;
        case 0x465b74u: goto label_465b74;
        case 0x465b78u: goto label_465b78;
        case 0x465b7cu: goto label_465b7c;
        case 0x465b80u: goto label_465b80;
        case 0x465b84u: goto label_465b84;
        case 0x465b88u: goto label_465b88;
        case 0x465b8cu: goto label_465b8c;
        case 0x465b90u: goto label_465b90;
        case 0x465b94u: goto label_465b94;
        case 0x465b98u: goto label_465b98;
        case 0x465b9cu: goto label_465b9c;
        case 0x465ba0u: goto label_465ba0;
        case 0x465ba4u: goto label_465ba4;
        case 0x465ba8u: goto label_465ba8;
        case 0x465bacu: goto label_465bac;
        case 0x465bb0u: goto label_465bb0;
        case 0x465bb4u: goto label_465bb4;
        case 0x465bb8u: goto label_465bb8;
        case 0x465bbcu: goto label_465bbc;
        default: break;
    }

    ctx->pc = 0x465a50u;

label_465a50:
    // 0x465a50: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x465a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_465a54:
    // 0x465a54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x465a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_465a58:
    // 0x465a58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x465a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_465a5c:
    // 0x465a5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_465a60:
    // 0x465a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465a64:
    // 0x465a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465a68:
    // 0x465a68: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x465a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_465a6c:
    // 0x465a6c: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x465a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
label_465a70:
    // 0x465a70: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x465a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_465a74:
    // 0x465a74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x465a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_465a78:
    // 0x465a78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x465a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_465a7c:
    // 0x465a7c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_465a80:
    if (ctx->pc == 0x465A80u) {
        ctx->pc = 0x465A84u;
        goto label_465a84;
    }
    ctx->pc = 0x465A7Cu;
    {
        const bool branch_taken_0x465a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465a7c) {
            ctx->pc = 0x465B2Cu;
            goto label_465b2c;
        }
    }
    ctx->pc = 0x465A84u;
label_465a84:
    // 0x465a84: 0x8f82b2ac  lw          $v0, -0x4D54($gp)
    ctx->pc = 0x465a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947500)));
label_465a88:
    // 0x465a88: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_465a8c:
    if (ctx->pc == 0x465A8Cu) {
        ctx->pc = 0x465A90u;
        goto label_465a90;
    }
    ctx->pc = 0x465A88u;
    {
        const bool branch_taken_0x465a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465a88) {
            ctx->pc = 0x465B2Cu;
            goto label_465b2c;
        }
    }
    ctx->pc = 0x465A90u;
label_465a90:
    // 0x465a90: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x465a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_465a94:
    // 0x465a94: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_465a98:
    // 0x465a98: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x465a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_465a9c:
    // 0x465a9c: 0xc115ee8  jal         func_457BA0
label_465aa0:
    if (ctx->pc == 0x465AA0u) {
        ctx->pc = 0x465AA4u;
        goto label_465aa4;
    }
    ctx->pc = 0x465A9Cu;
    SET_GPR_U32(ctx, 31, 0x465AA4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x465A9Cu, 0x465AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465AA4u;
label_465aa4:
    // 0x465aa4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_465aa8:
    if (ctx->pc == 0x465AA8u) {
        ctx->pc = 0x465AACu;
        goto label_465aac;
    }
    ctx->pc = 0x465AA4u;
    {
        const bool branch_taken_0x465aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465aa4) {
            ctx->pc = 0x465B2Cu;
            goto label_465b2c;
        }
    }
    ctx->pc = 0x465AACu;
label_465aac:
    // 0x465aac: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x465aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_465ab0:
    // 0x465ab0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_465ab4:
    if (ctx->pc == 0x465AB4u) {
        ctx->pc = 0x465AB8u;
        goto label_465ab8;
    }
    ctx->pc = 0x465AB0u;
    {
        const bool branch_taken_0x465ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465ab0) {
            ctx->pc = 0x465B2Cu;
            goto label_465b2c;
        }
    }
    ctx->pc = 0x465AB8u;
label_465ab8:
    // 0x465ab8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_465abc:
    // 0x465abc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_465ac0:
    // 0x465ac0: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x465ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_465ac4:
    // 0x465ac4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x465ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_465ac8:
    // 0x465ac8: 0x24e7f4f8  addiu       $a3, $a3, -0xB08
    ctx->pc = 0x465ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964472));
label_465acc:
    // 0x465acc: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x465accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_465ad0:
    // 0x465ad0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x465ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_465ad4:
    // 0x465ad4: 0x2529f508  addiu       $t1, $t1, -0xAF8
    ctx->pc = 0x465ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964488));
label_465ad8:
    // 0x465ad8: 0xc113940  jal         func_44E500
label_465adc:
    if (ctx->pc == 0x465ADCu) {
        ctx->pc = 0x465AE0u;
        goto label_465ae0;
    }
    ctx->pc = 0x465AD8u;
    SET_GPR_U32(ctx, 31, 0x465AE0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x465AD8u, 0x465AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465AE0u;
label_465ae0:
    // 0x465ae0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_465ae4:
    // 0x465ae4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x465ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_465ae8:
    // 0x465ae8: 0x24a5f520  addiu       $a1, $a1, -0xAE0
    ctx->pc = 0x465ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964512));
label_465aec:
    // 0x465aec: 0xc115c24  jal         func_457090
label_465af0:
    if (ctx->pc == 0x465AF0u) {
        ctx->pc = 0x465AF4u;
        goto label_465af4;
    }
    ctx->pc = 0x465AECu;
    SET_GPR_U32(ctx, 31, 0x465AF4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x465AECu, 0x465AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465AF4u;
label_465af4:
    // 0x465af4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_465af8:
    // 0x465af8: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x465af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_465afc:
    // 0x465afc: 0x40f809  jalr        $v0
label_465b00:
    if (ctx->pc == 0x465B00u) {
        ctx->pc = 0x465B04u;
        goto label_465b04;
    }
    ctx->pc = 0x465AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x465B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465AFCu, 0x465B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x465B04u;
label_465b04:
    // 0x465b04: 0xaf82b2ac  sw          $v0, -0x4D54($gp)
    ctx->pc = 0x465b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947500), GPR_U32(ctx, 2));
label_465b08:
    // 0x465b08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x465b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_465b0c:
    // 0x465b0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_465b10:
    if (ctx->pc == 0x465B10u) {
        ctx->pc = 0x465B14u;
        goto label_465b14;
    }
    ctx->pc = 0x465B0Cu;
    {
        const bool branch_taken_0x465b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465b0c) {
            ctx->pc = 0x465B1Cu;
            goto label_465b1c;
        }
    }
    ctx->pc = 0x465B14u;
label_465b14:
    // 0x465b14: 0xd  break       0
    ctx->pc = 0x465b14u;
    runtime->handleBreak(rdram, ctx);
label_465b18:
    // 0x465b18: 0x0  nop
    ctx->pc = 0x465b18u;
    // NOP
label_465b1c:
    // 0x465b1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_465b20:
    // 0x465b20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465b24:
    // 0x465b24: 0xc11392c  jal         func_44E4B0
label_465b28:
    if (ctx->pc == 0x465B28u) {
        ctx->pc = 0x465B2Cu;
        goto label_465b2c;
    }
    ctx->pc = 0x465B24u;
    SET_GPR_U32(ctx, 31, 0x465B2Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x465B24u, 0x465B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465B2Cu;
label_465b2c:
    // 0x465b2c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x465b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465b30:
    // 0x465b30: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x465b30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_465b34:
    // 0x465b34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x465b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465b38:
    // 0x465b38: 0x10000011  b           . + 4 + (0x11 << 2)
label_465b3c:
    if (ctx->pc == 0x465B3Cu) {
        ctx->pc = 0x465B40u;
        goto label_465b40;
    }
    ctx->pc = 0x465B38u;
    {
        const bool branch_taken_0x465b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465b38) {
            ctx->pc = 0x465B80u;
            goto label_465b80;
        }
    }
    ctx->pc = 0x465B40u;
label_465b40:
    // 0x465b40: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x465b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_465b44:
    // 0x465b44: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x465b44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_465b48:
    // 0x465b48: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x465b48u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
label_465b4c:
    // 0x465b4c: 0x2131026  xor         $v0, $s0, $s3
    ctx->pc = 0x465b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 19));
label_465b50:
    // 0x465b50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x465b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_465b54:
    // 0x465b54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x465b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_465b58:
    // 0x465b58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x465b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_465b5c:
    // 0x465b5c: 0x244257c0  addiu       $v0, $v0, 0x57C0
    ctx->pc = 0x465b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22464));
label_465b60:
    // 0x465b60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x465b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_465b64:
    // 0x465b64: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x465b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_465b68:
    // 0x465b68: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x465b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
label_465b6c:
    // 0x465b6c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x465b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_465b70:
    // 0x465b70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x465b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465b74:
    // 0x465b74: 0x628026  xor         $s0, $v1, $v0
    ctx->pc = 0x465b74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_465b78:
    // 0x465b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x465b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_465b7c:
    // 0x465b7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x465b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_465b80:
    // 0x465b80: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x465b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_465b84:
    // 0x465b84: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x465b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_465b88:
    // 0x465b88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_465b8c:
    if (ctx->pc == 0x465B8Cu) {
        ctx->pc = 0x465B90u;
        goto label_465b90;
    }
    ctx->pc = 0x465B88u;
    {
        const bool branch_taken_0x465b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465b88) {
            ctx->pc = 0x465B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465b40;
        }
    }
    ctx->pc = 0x465B90u;
label_465b90:
    // 0x465b90: 0x2001027  not         $v0, $s0
    ctx->pc = 0x465b90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_465b94:
    // 0x465b94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x465b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_465b98:
    // 0x465b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x465b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_465b9c:
    // 0x465b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_465ba0:
    // 0x465ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465ba4:
    // 0x465ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465ba8:
    // 0x465ba8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x465ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_465bac:
    // 0x465bac: 0x3e00008  jr          $ra
label_465bb0:
    if (ctx->pc == 0x465BB0u) {
        ctx->pc = 0x465BB4u;
        goto label_465bb4;
    }
    ctx->pc = 0x465BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465BB4u;
label_465bb4:
    // 0x465bb4: 0x0  nop
    ctx->pc = 0x465bb4u;
    // NOP
label_465bb8:
    // 0x465bb8: 0x0  nop
    ctx->pc = 0x465bb8u;
    // NOP
label_465bbc:
    // 0x465bbc: 0x0  nop
    ctx->pc = 0x465bbcu;
    // NOP
    ctx->pc = 0x465bc0u;
}
