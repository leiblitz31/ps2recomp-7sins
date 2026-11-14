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

// Function: sub_00443A60
// Address: 0x443a60 - 0x443bd0
void sub_00443A60_0x443a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443A60_0x443a60");
#endif

    switch (ctx->pc) {
        case 0x443a60u: goto label_443a60;
        case 0x443a64u: goto label_443a64;
        case 0x443a68u: goto label_443a68;
        case 0x443a6cu: goto label_443a6c;
        case 0x443a70u: goto label_443a70;
        case 0x443a74u: goto label_443a74;
        case 0x443a78u: goto label_443a78;
        case 0x443a7cu: goto label_443a7c;
        case 0x443a80u: goto label_443a80;
        case 0x443a84u: goto label_443a84;
        case 0x443a88u: goto label_443a88;
        case 0x443a8cu: goto label_443a8c;
        case 0x443a90u: goto label_443a90;
        case 0x443a94u: goto label_443a94;
        case 0x443a98u: goto label_443a98;
        case 0x443a9cu: goto label_443a9c;
        case 0x443aa0u: goto label_443aa0;
        case 0x443aa4u: goto label_443aa4;
        case 0x443aa8u: goto label_443aa8;
        case 0x443aacu: goto label_443aac;
        case 0x443ab0u: goto label_443ab0;
        case 0x443ab4u: goto label_443ab4;
        case 0x443ab8u: goto label_443ab8;
        case 0x443abcu: goto label_443abc;
        case 0x443ac0u: goto label_443ac0;
        case 0x443ac4u: goto label_443ac4;
        case 0x443ac8u: goto label_443ac8;
        case 0x443accu: goto label_443acc;
        case 0x443ad0u: goto label_443ad0;
        case 0x443ad4u: goto label_443ad4;
        case 0x443ad8u: goto label_443ad8;
        case 0x443adcu: goto label_443adc;
        case 0x443ae0u: goto label_443ae0;
        case 0x443ae4u: goto label_443ae4;
        case 0x443ae8u: goto label_443ae8;
        case 0x443aecu: goto label_443aec;
        case 0x443af0u: goto label_443af0;
        case 0x443af4u: goto label_443af4;
        case 0x443af8u: goto label_443af8;
        case 0x443afcu: goto label_443afc;
        case 0x443b00u: goto label_443b00;
        case 0x443b04u: goto label_443b04;
        case 0x443b08u: goto label_443b08;
        case 0x443b0cu: goto label_443b0c;
        case 0x443b10u: goto label_443b10;
        case 0x443b14u: goto label_443b14;
        case 0x443b18u: goto label_443b18;
        case 0x443b1cu: goto label_443b1c;
        case 0x443b20u: goto label_443b20;
        case 0x443b24u: goto label_443b24;
        case 0x443b28u: goto label_443b28;
        case 0x443b2cu: goto label_443b2c;
        case 0x443b30u: goto label_443b30;
        case 0x443b34u: goto label_443b34;
        case 0x443b38u: goto label_443b38;
        case 0x443b3cu: goto label_443b3c;
        case 0x443b40u: goto label_443b40;
        case 0x443b44u: goto label_443b44;
        case 0x443b48u: goto label_443b48;
        case 0x443b4cu: goto label_443b4c;
        case 0x443b50u: goto label_443b50;
        case 0x443b54u: goto label_443b54;
        case 0x443b58u: goto label_443b58;
        case 0x443b5cu: goto label_443b5c;
        case 0x443b60u: goto label_443b60;
        case 0x443b64u: goto label_443b64;
        case 0x443b68u: goto label_443b68;
        case 0x443b6cu: goto label_443b6c;
        case 0x443b70u: goto label_443b70;
        case 0x443b74u: goto label_443b74;
        case 0x443b78u: goto label_443b78;
        case 0x443b7cu: goto label_443b7c;
        case 0x443b80u: goto label_443b80;
        case 0x443b84u: goto label_443b84;
        case 0x443b88u: goto label_443b88;
        case 0x443b8cu: goto label_443b8c;
        case 0x443b90u: goto label_443b90;
        case 0x443b94u: goto label_443b94;
        case 0x443b98u: goto label_443b98;
        case 0x443b9cu: goto label_443b9c;
        case 0x443ba0u: goto label_443ba0;
        case 0x443ba4u: goto label_443ba4;
        case 0x443ba8u: goto label_443ba8;
        case 0x443bacu: goto label_443bac;
        case 0x443bb0u: goto label_443bb0;
        case 0x443bb4u: goto label_443bb4;
        case 0x443bb8u: goto label_443bb8;
        case 0x443bbcu: goto label_443bbc;
        case 0x443bc0u: goto label_443bc0;
        case 0x443bc4u: goto label_443bc4;
        case 0x443bc8u: goto label_443bc8;
        case 0x443bccu: goto label_443bcc;
        default: break;
    }

    ctx->pc = 0x443a60u;

label_443a60:
    // 0x443a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x443a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_443a64:
    // 0x443a64: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x443a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_443a68:
    // 0x443a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x443a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_443a6c:
    // 0x443a6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x443a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_443a70:
    // 0x443a70: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x443a70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_443a74:
    // 0x443a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x443a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_443a78:
    // 0x443a78: 0x2625d7c0  addiu       $a1, $s1, -0x2840
    ctx->pc = 0x443a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956992));
label_443a7c:
    // 0x443a7c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x443a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_443a80:
    // 0x443a80: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
label_443a84:
    if (ctx->pc == 0x443A84u) {
        ctx->pc = 0x443A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A80u;
        // 0x443a84: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443A88u;
        goto label_443a88;
    }
    ctx->pc = 0x443A80u;
    {
        const bool branch_taken_0x443a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x443A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A80u;
        // 0x443a84: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443a80) {
            ctx->pc = 0x443B1Cu;
            goto label_443b1c;
        }
    }
    ctx->pc = 0x443A88u;
label_443a88:
    // 0x443a88: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x443a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_443a8c:
    // 0x443a8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x443a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_443a90:
    // 0x443a90: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_443a94:
    if (ctx->pc == 0x443A94u) {
        ctx->pc = 0x443A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A90u;
        // 0x443a94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443A98u;
        goto label_443a98;
    }
    ctx->pc = 0x443A90u;
    {
        const bool branch_taken_0x443a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x443a90) {
            ctx->pc = 0x443A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443A90u;
            // 0x443a94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443B20u;
            goto label_443b20;
        }
    }
    ctx->pc = 0x443A98u;
label_443a98:
    // 0x443a98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x443a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_443a9c:
    // 0x443a9c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_443aa0:
    if (ctx->pc == 0x443AA0u) {
        ctx->pc = 0x443AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A9Cu;
        // 0x443aa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443AA4u;
        goto label_443aa4;
    }
    ctx->pc = 0x443A9Cu;
    {
        const bool branch_taken_0x443a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443a9c) {
            ctx->pc = 0x443AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443A9Cu;
            // 0x443aa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443B20u;
            goto label_443b20;
        }
    }
    ctx->pc = 0x443AA4u;
label_443aa4:
    // 0x443aa4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x443aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_443aa8:
    // 0x443aa8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_443aac:
    if (ctx->pc == 0x443AACu) {
        ctx->pc = 0x443AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AA8u;
        // 0x443aac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443AB0u;
        goto label_443ab0;
    }
    ctx->pc = 0x443AA8u;
    {
        const bool branch_taken_0x443aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x443aa8) {
            ctx->pc = 0x443AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443AA8u;
            // 0x443aac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443B20u;
            goto label_443b20;
        }
    }
    ctx->pc = 0x443AB0u;
label_443ab0:
    // 0x443ab0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x443ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_443ab4:
    // 0x443ab4: 0x40f809  jalr        $v0
label_443ab8:
    if (ctx->pc == 0x443AB8u) {
        ctx->pc = 0x443AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AB4u;
        // 0x443ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443ABCu;
        goto label_443abc;
    }
    ctx->pc = 0x443AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x443ABCu);
        ctx->pc = 0x443AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AB4u;
        // 0x443ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443AB4u, 0x443ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x443ABCu;
label_443abc:
    // 0x443abc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x443abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_443ac0:
    // 0x443ac0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_443ac4:
    if (ctx->pc == 0x443AC4u) {
        ctx->pc = 0x443AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AC0u;
        // 0x443ac4: 0x8e22d7c0  lw          $v0, -0x2840($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443AC8u;
        goto label_443ac8;
    }
    ctx->pc = 0x443AC0u;
    {
        const bool branch_taken_0x443ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AC0u;
        // 0x443ac4: 0x8e22d7c0  lw          $v0, -0x2840($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ac0) {
            ctx->pc = 0x443B1Cu;
            goto label_443b1c;
        }
    }
    ctx->pc = 0x443AC8u;
label_443ac8:
    // 0x443ac8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_443acc:
    if (ctx->pc == 0x443ACCu) {
        ctx->pc = 0x443ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AC8u;
        // 0x443acc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443AD0u;
        goto label_443ad0;
    }
    ctx->pc = 0x443AC8u;
    {
        const bool branch_taken_0x443ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443ac8) {
            ctx->pc = 0x443ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443AC8u;
            // 0x443acc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443B20u;
            goto label_443b20;
        }
    }
    ctx->pc = 0x443AD0u;
label_443ad0:
    // 0x443ad0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x443ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_443ad4:
    // 0x443ad4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x443ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_443ad8:
    // 0x443ad8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x443ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_443adc:
    // 0x443adc: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x443adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_443ae0:
    // 0x443ae0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x443ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_443ae4:
    // 0x443ae4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x443ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_443ae8:
    // 0x443ae8: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x443ae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_443aec:
    // 0x443aec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x443aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_443af0:
    // 0x443af0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x443af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_443af4:
    // 0x443af4: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x443af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_443af8:
    // 0x443af8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x443af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_443afc:
    // 0x443afc: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x443afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_443b00:
    // 0x443b00: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x443b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_443b04:
    // 0x443b04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x443b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_443b08:
    // 0x443b08: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x443b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_443b0c:
    // 0x443b0c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x443b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_443b10:
    // 0x443b10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x443b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_443b14:
    // 0x443b14: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x443b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_443b18:
    // 0x443b18: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x443b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_443b1c:
    // 0x443b1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x443b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_443b20:
    // 0x443b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x443b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_443b24:
    // 0x443b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x443b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_443b28:
    // 0x443b28: 0x3e00008  jr          $ra
label_443b2c:
    if (ctx->pc == 0x443B2Cu) {
        ctx->pc = 0x443B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B28u;
        // 0x443b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443B30u;
        goto label_443b30;
    }
    ctx->pc = 0x443B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B28u;
        // 0x443b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443B30u;
label_443b30:
    // 0x443b30: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x443b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_443b34:
    // 0x443b34: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x443b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956992)));
label_443b38:
    // 0x443b38: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x443b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443b3c:
    // 0x443b3c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_443b40:
    if (ctx->pc == 0x443B40u) {
        ctx->pc = 0x443B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B3Cu;
        // 0x443b40: 0x2444d7c0  addiu       $a0, $v0, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443B44u;
        goto label_443b44;
    }
    ctx->pc = 0x443B3Cu;
    {
        const bool branch_taken_0x443b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B3Cu;
        // 0x443b40: 0x2444d7c0  addiu       $a0, $v0, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443b3c) {
            ctx->pc = 0x443BC4u;
            goto label_443bc4;
        }
    }
    ctx->pc = 0x443B44u;
label_443b44:
    // 0x443b44: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x443b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_443b48:
    // 0x443b48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x443b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_443b4c:
    // 0x443b4c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x443b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_443b50:
    // 0x443b50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_443b54:
    if (ctx->pc == 0x443B54u) {
        ctx->pc = 0x443B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B50u;
        // 0x443b54: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443B58u;
        goto label_443b58;
    }
    ctx->pc = 0x443B50u;
    {
        const bool branch_taken_0x443b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B50u;
        // 0x443b54: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443b50) {
            ctx->pc = 0x443BB8u;
            goto label_443bb8;
        }
    }
    ctx->pc = 0x443B58u;
label_443b58:
    // 0x443b58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x443b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_443b5c:
    // 0x443b5c: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x443b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_443b60:
    // 0x443b60: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x443b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_443b64:
    // 0x443b64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x443b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_443b68:
    // 0x443b68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x443b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_443b6c:
    // 0x443b6c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_443b70:
    if (ctx->pc == 0x443B70u) {
        ctx->pc = 0x443B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B6Cu;
        // 0x443b70: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443B74u;
        goto label_443b74;
    }
    ctx->pc = 0x443B6Cu;
    {
        const bool branch_taken_0x443b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B6Cu;
        // 0x443b70: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443b6c) {
            ctx->pc = 0x443BA4u;
            goto label_443ba4;
        }
    }
    ctx->pc = 0x443B74u;
label_443b74:
    // 0x443b74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x443b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_443b78:
    // 0x443b78: 0xa0400017  sb          $zero, 0x17($v0)
    ctx->pc = 0x443b78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23), (uint8_t)GPR_U32(ctx, 0));
label_443b7c:
    // 0x443b7c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x443b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_443b80:
    // 0x443b80: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x443b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_443b84:
    // 0x443b84: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x443b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_443b88:
    // 0x443b88: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x443b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_443b8c:
    // 0x443b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x443b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_443b90:
    // 0x443b90: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
label_443b94:
    if (ctx->pc == 0x443B94u) {
        ctx->pc = 0x443B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B90u;
        // 0x443b94: 0xace00024  sw          $zero, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443B98u;
        goto label_443b98;
    }
    ctx->pc = 0x443B90u;
    {
        const bool branch_taken_0x443b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x443b90) {
            ctx->pc = 0x443B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443B90u;
            // 0x443b94: 0xace00024  sw          $zero, 0x24($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443B98u;
            goto label_443b98;
        }
    }
    ctx->pc = 0x443B98u;
label_443b98:
    // 0x443b98: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x443b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_443b9c:
    // 0x443b9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x443b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_443ba0:
    // 0x443ba0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x443ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_443ba4:
    // 0x443ba4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x443ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_443ba8:
    // 0x443ba8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x443ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_443bac:
    // 0x443bac: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x443bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_443bb0:
    // 0x443bb0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_443bb4:
    if (ctx->pc == 0x443BB4u) {
        ctx->pc = 0x443BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BB0u;
        // 0x443bb4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443BB8u;
        goto label_443bb8;
    }
    ctx->pc = 0x443BB0u;
    {
        const bool branch_taken_0x443bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BB0u;
        // 0x443bb4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443bb0) {
            ctx->pc = 0x443B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443b60;
        }
    }
    ctx->pc = 0x443BB8u;
label_443bb8:
    // 0x443bb8: 0x2503d7c0  addiu       $v1, $t0, -0x2840
    ctx->pc = 0x443bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956992));
label_443bbc:
    // 0x443bbc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x443bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_443bc0:
    // 0x443bc0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x443bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_443bc4:
    // 0x443bc4: 0x3e00008  jr          $ra
label_443bc8:
    if (ctx->pc == 0x443BC8u) {
        ctx->pc = 0x443BCCu;
        goto label_443bcc;
    }
    ctx->pc = 0x443BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443BCCu;
label_443bcc:
    // 0x443bcc: 0x0  nop
    ctx->pc = 0x443bccu;
    // NOP
    ctx->pc = 0x443bd0u;
}
