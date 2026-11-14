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

// Function: sub_00491AE0
// Address: 0x491ae0 - 0x491c00
void sub_00491AE0_0x491ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491AE0_0x491ae0");
#endif

    switch (ctx->pc) {
        case 0x491ae0u: goto label_491ae0;
        case 0x491ae4u: goto label_491ae4;
        case 0x491ae8u: goto label_491ae8;
        case 0x491aecu: goto label_491aec;
        case 0x491af0u: goto label_491af0;
        case 0x491af4u: goto label_491af4;
        case 0x491af8u: goto label_491af8;
        case 0x491afcu: goto label_491afc;
        case 0x491b00u: goto label_491b00;
        case 0x491b04u: goto label_491b04;
        case 0x491b08u: goto label_491b08;
        case 0x491b0cu: goto label_491b0c;
        case 0x491b10u: goto label_491b10;
        case 0x491b14u: goto label_491b14;
        case 0x491b18u: goto label_491b18;
        case 0x491b1cu: goto label_491b1c;
        case 0x491b20u: goto label_491b20;
        case 0x491b24u: goto label_491b24;
        case 0x491b28u: goto label_491b28;
        case 0x491b2cu: goto label_491b2c;
        case 0x491b30u: goto label_491b30;
        case 0x491b34u: goto label_491b34;
        case 0x491b38u: goto label_491b38;
        case 0x491b3cu: goto label_491b3c;
        case 0x491b40u: goto label_491b40;
        case 0x491b44u: goto label_491b44;
        case 0x491b48u: goto label_491b48;
        case 0x491b4cu: goto label_491b4c;
        case 0x491b50u: goto label_491b50;
        case 0x491b54u: goto label_491b54;
        case 0x491b58u: goto label_491b58;
        case 0x491b5cu: goto label_491b5c;
        case 0x491b60u: goto label_491b60;
        case 0x491b64u: goto label_491b64;
        case 0x491b68u: goto label_491b68;
        case 0x491b6cu: goto label_491b6c;
        case 0x491b70u: goto label_491b70;
        case 0x491b74u: goto label_491b74;
        case 0x491b78u: goto label_491b78;
        case 0x491b7cu: goto label_491b7c;
        case 0x491b80u: goto label_491b80;
        case 0x491b84u: goto label_491b84;
        case 0x491b88u: goto label_491b88;
        case 0x491b8cu: goto label_491b8c;
        case 0x491b90u: goto label_491b90;
        case 0x491b94u: goto label_491b94;
        case 0x491b98u: goto label_491b98;
        case 0x491b9cu: goto label_491b9c;
        case 0x491ba0u: goto label_491ba0;
        case 0x491ba4u: goto label_491ba4;
        case 0x491ba8u: goto label_491ba8;
        case 0x491bacu: goto label_491bac;
        case 0x491bb0u: goto label_491bb0;
        case 0x491bb4u: goto label_491bb4;
        case 0x491bb8u: goto label_491bb8;
        case 0x491bbcu: goto label_491bbc;
        case 0x491bc0u: goto label_491bc0;
        case 0x491bc4u: goto label_491bc4;
        case 0x491bc8u: goto label_491bc8;
        case 0x491bccu: goto label_491bcc;
        case 0x491bd0u: goto label_491bd0;
        case 0x491bd4u: goto label_491bd4;
        case 0x491bd8u: goto label_491bd8;
        case 0x491bdcu: goto label_491bdc;
        case 0x491be0u: goto label_491be0;
        case 0x491be4u: goto label_491be4;
        case 0x491be8u: goto label_491be8;
        case 0x491becu: goto label_491bec;
        case 0x491bf0u: goto label_491bf0;
        case 0x491bf4u: goto label_491bf4;
        case 0x491bf8u: goto label_491bf8;
        case 0x491bfcu: goto label_491bfc;
        default: break;
    }

    ctx->pc = 0x491ae0u;

label_491ae0:
    // 0x491ae0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x491ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_491ae4:
    // 0x491ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x491ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_491ae8:
    // 0x491ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_491aec:
    // 0x491aec: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x491aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_491af0:
    // 0x491af0: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x491af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_491af4:
    // 0x491af4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_491af8:
    if (ctx->pc == 0x491AF8u) {
        ctx->pc = 0x491AFCu;
        goto label_491afc;
    }
    ctx->pc = 0x491AF4u;
    {
        const bool branch_taken_0x491af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491af4) {
            ctx->pc = 0x491BA0u;
            goto label_491ba0;
        }
    }
    ctx->pc = 0x491AFCu;
label_491afc:
    // 0x491afc: 0x8f82b6e8  lw          $v0, -0x4918($gp)
    ctx->pc = 0x491afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948584)));
label_491b00:
    // 0x491b00: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_491b04:
    if (ctx->pc == 0x491B04u) {
        ctx->pc = 0x491B08u;
        goto label_491b08;
    }
    ctx->pc = 0x491B00u;
    {
        const bool branch_taken_0x491b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491b00) {
            ctx->pc = 0x491BA0u;
            goto label_491ba0;
        }
    }
    ctx->pc = 0x491B08u;
label_491b08:
    // 0x491b08: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x491b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_491b0c:
    // 0x491b0c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491b10:
    // 0x491b10: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x491b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_491b14:
    // 0x491b14: 0xc115ee8  jal         func_457BA0
label_491b18:
    if (ctx->pc == 0x491B18u) {
        ctx->pc = 0x491B1Cu;
        goto label_491b1c;
    }
    ctx->pc = 0x491B14u;
    SET_GPR_U32(ctx, 31, 0x491B1Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x491B14u, 0x491B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491B1Cu;
label_491b1c:
    // 0x491b1c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_491b20:
    if (ctx->pc == 0x491B20u) {
        ctx->pc = 0x491B24u;
        goto label_491b24;
    }
    ctx->pc = 0x491B1Cu;
    {
        const bool branch_taken_0x491b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491b1c) {
            ctx->pc = 0x491BA0u;
            goto label_491ba0;
        }
    }
    ctx->pc = 0x491B24u;
label_491b24:
    // 0x491b24: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491b28:
    // 0x491b28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_491b2c:
    if (ctx->pc == 0x491B2Cu) {
        ctx->pc = 0x491B30u;
        goto label_491b30;
    }
    ctx->pc = 0x491B28u;
    {
        const bool branch_taken_0x491b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491b28) {
            ctx->pc = 0x491BA0u;
            goto label_491ba0;
        }
    }
    ctx->pc = 0x491B30u;
label_491b30:
    // 0x491b30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491b34:
    // 0x491b34: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491b38:
    // 0x491b38: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x491b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_491b3c:
    // 0x491b3c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x491b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_491b40:
    // 0x491b40: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x491b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_491b44:
    // 0x491b44: 0x240800d6  addiu       $t0, $zero, 0xD6
    ctx->pc = 0x491b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_491b48:
    // 0x491b48: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x491b48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_491b4c:
    // 0x491b4c: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x491b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_491b50:
    // 0x491b50: 0xc113940  jal         func_44E500
label_491b54:
    if (ctx->pc == 0x491B54u) {
        ctx->pc = 0x491B58u;
        goto label_491b58;
    }
    ctx->pc = 0x491B50u;
    SET_GPR_U32(ctx, 31, 0x491B58u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x491B50u, 0x491B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491B58u;
label_491b58:
    // 0x491b58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491b5c:
    // 0x491b5c: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x491b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_491b60:
    // 0x491b60: 0xc115c24  jal         func_457090
label_491b64:
    if (ctx->pc == 0x491B64u) {
        ctx->pc = 0x491B68u;
        goto label_491b68;
    }
    ctx->pc = 0x491B60u;
    SET_GPR_U32(ctx, 31, 0x491B68u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x491B60u, 0x491B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491B68u;
label_491b68:
    // 0x491b68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491b6c:
    // 0x491b6c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491b70:
    // 0x491b70: 0x40f809  jalr        $v0
label_491b74:
    if (ctx->pc == 0x491B74u) {
        ctx->pc = 0x491B78u;
        goto label_491b78;
    }
    ctx->pc = 0x491B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x491B78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491B70u, 0x491B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x491B78u;
label_491b78:
    // 0x491b78: 0xaf82b6e8  sw          $v0, -0x4918($gp)
    ctx->pc = 0x491b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948584), GPR_U32(ctx, 2));
label_491b7c:
    // 0x491b7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_491b80:
    // 0x491b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_491b84:
    if (ctx->pc == 0x491B84u) {
        ctx->pc = 0x491B88u;
        goto label_491b88;
    }
    ctx->pc = 0x491B80u;
    {
        const bool branch_taken_0x491b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491b80) {
            ctx->pc = 0x491B90u;
            goto label_491b90;
        }
    }
    ctx->pc = 0x491B88u;
label_491b88:
    // 0x491b88: 0xd  break       0
    ctx->pc = 0x491b88u;
    runtime->handleBreak(rdram, ctx);
label_491b8c:
    // 0x491b8c: 0x0  nop
    ctx->pc = 0x491b8cu;
    // NOP
label_491b90:
    // 0x491b90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491b94:
    // 0x491b94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x491b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_491b98:
    // 0x491b98: 0xc11392c  jal         func_44E4B0
label_491b9c:
    if (ctx->pc == 0x491B9Cu) {
        ctx->pc = 0x491BA0u;
        goto label_491ba0;
    }
    ctx->pc = 0x491B98u;
    SET_GPR_U32(ctx, 31, 0x491BA0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x491B98u, 0x491BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491BA0u;
label_491ba0:
    // 0x491ba0: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x491ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_491ba4:
    // 0x491ba4: 0xc124708  jal         func_491C20
label_491ba8:
    if (ctx->pc == 0x491BA8u) {
        ctx->pc = 0x491BACu;
        goto label_491bac;
    }
    ctx->pc = 0x491BA4u;
    SET_GPR_U32(ctx, 31, 0x491BACu);
    ctx->pc = 0x491C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C20u, 0x491BA4u, 0x491BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491BACu;
label_491bac:
    // 0x491bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491bb0:
    // 0x491bb0: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x491bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_491bb4:
    // 0x491bb4: 0xc124700  jal         func_491C00
label_491bb8:
    if (ctx->pc == 0x491BB8u) {
        ctx->pc = 0x491BBCu;
        goto label_491bbc;
    }
    ctx->pc = 0x491BB4u;
    SET_GPR_U32(ctx, 31, 0x491BBCu);
    ctx->pc = 0x491C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C00u, 0x491BB4u, 0x491BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491BBCu;
label_491bbc:
    // 0x491bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x491bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_491bc0:
    // 0x491bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x491bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491bc4:
    // 0x491bc4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x491bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_491bc8:
    // 0x491bc8: 0xc124c74  jal         func_4931D0
label_491bcc:
    if (ctx->pc == 0x491BCCu) {
        ctx->pc = 0x491BD0u;
        goto label_491bd0;
    }
    ctx->pc = 0x491BC8u;
    SET_GPR_U32(ctx, 31, 0x491BD0u);
    ctx->pc = 0x4931D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931D0u, 0x491BC8u, 0x491BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491BD0u;
label_491bd0:
    // 0x491bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491bd4:
    // 0x491bd4: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x491bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_491bd8:
    // 0x491bd8: 0xc124700  jal         func_491C00
label_491bdc:
    if (ctx->pc == 0x491BDCu) {
        ctx->pc = 0x491BE0u;
        goto label_491be0;
    }
    ctx->pc = 0x491BD8u;
    SET_GPR_U32(ctx, 31, 0x491BE0u);
    ctx->pc = 0x491C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C00u, 0x491BD8u, 0x491BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491BE0u;
label_491be0:
    // 0x491be0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x491be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_491be4:
    // 0x491be4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x491be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_491be8:
    // 0x491be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x491be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_491bec:
    // 0x491bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_491bf0:
    // 0x491bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_491bf4:
    // 0x491bf4: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x491bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_491bf8:
    // 0x491bf8: 0x3e00008  jr          $ra
label_491bfc:
    if (ctx->pc == 0x491BFCu) {
        ctx->pc = 0x491C00u;
        goto label_fallthrough_0x491bf8;
    }
    ctx->pc = 0x491BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x491bf8:
    ctx->pc = 0x491C00u;
}
