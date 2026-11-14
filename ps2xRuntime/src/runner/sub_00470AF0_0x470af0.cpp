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

// Function: sub_00470AF0
// Address: 0x470af0 - 0x470be0
void sub_00470AF0_0x470af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470AF0_0x470af0");
#endif

    switch (ctx->pc) {
        case 0x470af0u: goto label_470af0;
        case 0x470af4u: goto label_470af4;
        case 0x470af8u: goto label_470af8;
        case 0x470afcu: goto label_470afc;
        case 0x470b00u: goto label_470b00;
        case 0x470b04u: goto label_470b04;
        case 0x470b08u: goto label_470b08;
        case 0x470b0cu: goto label_470b0c;
        case 0x470b10u: goto label_470b10;
        case 0x470b14u: goto label_470b14;
        case 0x470b18u: goto label_470b18;
        case 0x470b1cu: goto label_470b1c;
        case 0x470b20u: goto label_470b20;
        case 0x470b24u: goto label_470b24;
        case 0x470b28u: goto label_470b28;
        case 0x470b2cu: goto label_470b2c;
        case 0x470b30u: goto label_470b30;
        case 0x470b34u: goto label_470b34;
        case 0x470b38u: goto label_470b38;
        case 0x470b3cu: goto label_470b3c;
        case 0x470b40u: goto label_470b40;
        case 0x470b44u: goto label_470b44;
        case 0x470b48u: goto label_470b48;
        case 0x470b4cu: goto label_470b4c;
        case 0x470b50u: goto label_470b50;
        case 0x470b54u: goto label_470b54;
        case 0x470b58u: goto label_470b58;
        case 0x470b5cu: goto label_470b5c;
        case 0x470b60u: goto label_470b60;
        case 0x470b64u: goto label_470b64;
        case 0x470b68u: goto label_470b68;
        case 0x470b6cu: goto label_470b6c;
        case 0x470b70u: goto label_470b70;
        case 0x470b74u: goto label_470b74;
        case 0x470b78u: goto label_470b78;
        case 0x470b7cu: goto label_470b7c;
        case 0x470b80u: goto label_470b80;
        case 0x470b84u: goto label_470b84;
        case 0x470b88u: goto label_470b88;
        case 0x470b8cu: goto label_470b8c;
        case 0x470b90u: goto label_470b90;
        case 0x470b94u: goto label_470b94;
        case 0x470b98u: goto label_470b98;
        case 0x470b9cu: goto label_470b9c;
        case 0x470ba0u: goto label_470ba0;
        case 0x470ba4u: goto label_470ba4;
        case 0x470ba8u: goto label_470ba8;
        case 0x470bacu: goto label_470bac;
        case 0x470bb0u: goto label_470bb0;
        case 0x470bb4u: goto label_470bb4;
        case 0x470bb8u: goto label_470bb8;
        case 0x470bbcu: goto label_470bbc;
        case 0x470bc0u: goto label_470bc0;
        case 0x470bc4u: goto label_470bc4;
        case 0x470bc8u: goto label_470bc8;
        case 0x470bccu: goto label_470bcc;
        case 0x470bd0u: goto label_470bd0;
        case 0x470bd4u: goto label_470bd4;
        case 0x470bd8u: goto label_470bd8;
        case 0x470bdcu: goto label_470bdc;
        default: break;
    }

    ctx->pc = 0x470af0u;

label_470af0:
    // 0x470af0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x470af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_470af4:
    // 0x470af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470af8:
    // 0x470af8: 0xe7ac0140  swc1        $f12, 0x140($sp)
    ctx->pc = 0x470af8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_470afc:
    // 0x470afc: 0x8f82c048  lw          $v0, -0x3FB8($gp)
    ctx->pc = 0x470afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950984)));
label_470b00:
    // 0x470b00: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470b04:
    if (ctx->pc == 0x470B04u) {
        ctx->pc = 0x470B08u;
        goto label_470b08;
    }
    ctx->pc = 0x470B00u;
    {
        const bool branch_taken_0x470b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470b00) {
            ctx->pc = 0x470BB0u;
            goto label_470bb0;
        }
    }
    ctx->pc = 0x470B08u;
label_470b08:
    // 0x470b08: 0x8f82b360  lw          $v0, -0x4CA0($gp)
    ctx->pc = 0x470b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947680)));
label_470b0c:
    // 0x470b0c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470b10:
    if (ctx->pc == 0x470B10u) {
        ctx->pc = 0x470B14u;
        goto label_470b14;
    }
    ctx->pc = 0x470B0Cu;
    {
        const bool branch_taken_0x470b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470b0c) {
            ctx->pc = 0x470BB0u;
            goto label_470bb0;
        }
    }
    ctx->pc = 0x470B14u;
label_470b14:
    // 0x470b14: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470b18:
    // 0x470b18: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470b1c:
    // 0x470b1c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x470b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_470b20:
    // 0x470b20: 0xc115ee8  jal         func_457BA0
label_470b24:
    if (ctx->pc == 0x470B24u) {
        ctx->pc = 0x470B28u;
        goto label_470b28;
    }
    ctx->pc = 0x470B20u;
    SET_GPR_U32(ctx, 31, 0x470B28u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470B20u, 0x470B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470B28u;
label_470b28:
    // 0x470b28: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470b2c:
    if (ctx->pc == 0x470B2Cu) {
        ctx->pc = 0x470B30u;
        goto label_470b30;
    }
    ctx->pc = 0x470B28u;
    {
        const bool branch_taken_0x470b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470b28) {
            ctx->pc = 0x470BB0u;
            goto label_470bb0;
        }
    }
    ctx->pc = 0x470B30u;
label_470b30:
    // 0x470b30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x470b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_470b34:
    // 0x470b34: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470b38:
    if (ctx->pc == 0x470B38u) {
        ctx->pc = 0x470B3Cu;
        goto label_470b3c;
    }
    ctx->pc = 0x470B34u;
    {
        const bool branch_taken_0x470b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470b34) {
            ctx->pc = 0x470BB0u;
            goto label_470bb0;
        }
    }
    ctx->pc = 0x470B3Cu;
label_470b3c:
    // 0x470b3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470b40:
    // 0x470b40: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470b44:
    // 0x470b44: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x470b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_470b48:
    // 0x470b48: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470b48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470b4c:
    // 0x470b4c: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470b50:
    // 0x470b50: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x470b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_470b54:
    // 0x470b54: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470b54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470b58:
    // 0x470b58: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x470b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_470b5c:
    // 0x470b5c: 0xc113940  jal         func_44E500
label_470b60:
    if (ctx->pc == 0x470B60u) {
        ctx->pc = 0x470B64u;
        goto label_470b64;
    }
    ctx->pc = 0x470B5Cu;
    SET_GPR_U32(ctx, 31, 0x470B64u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470B5Cu, 0x470B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470B64u;
label_470b64:
    // 0x470b64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470b68:
    // 0x470b68: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470b6c:
    // 0x470b6c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x470b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
label_470b70:
    // 0x470b70: 0xc115c24  jal         func_457090
label_470b74:
    if (ctx->pc == 0x470B74u) {
        ctx->pc = 0x470B78u;
        goto label_470b78;
    }
    ctx->pc = 0x470B70u;
    SET_GPR_U32(ctx, 31, 0x470B78u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470B70u, 0x470B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470B78u;
label_470b78:
    // 0x470b78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470b7c:
    // 0x470b7c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x470b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_470b80:
    // 0x470b80: 0x40f809  jalr        $v0
label_470b84:
    if (ctx->pc == 0x470B84u) {
        ctx->pc = 0x470B88u;
        goto label_470b88;
    }
    ctx->pc = 0x470B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470B88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470B80u, 0x470B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470B88u;
label_470b88:
    // 0x470b88: 0xaf82b360  sw          $v0, -0x4CA0($gp)
    ctx->pc = 0x470b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947680), GPR_U32(ctx, 2));
label_470b8c:
    // 0x470b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470b90:
    // 0x470b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470b94:
    if (ctx->pc == 0x470B94u) {
        ctx->pc = 0x470B98u;
        goto label_470b98;
    }
    ctx->pc = 0x470B90u;
    {
        const bool branch_taken_0x470b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470b90) {
            ctx->pc = 0x470BA0u;
            goto label_470ba0;
        }
    }
    ctx->pc = 0x470B98u;
label_470b98:
    // 0x470b98: 0xd  break       0
    ctx->pc = 0x470b98u;
    runtime->handleBreak(rdram, ctx);
label_470b9c:
    // 0x470b9c: 0x0  nop
    ctx->pc = 0x470b9cu;
    // NOP
label_470ba0:
    // 0x470ba0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470ba4:
    // 0x470ba4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470ba8:
    // 0x470ba8: 0xc11392c  jal         func_44E4B0
label_470bac:
    if (ctx->pc == 0x470BACu) {
        ctx->pc = 0x470BB0u;
        goto label_470bb0;
    }
    ctx->pc = 0x470BA8u;
    SET_GPR_U32(ctx, 31, 0x470BB0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470BA8u, 0x470BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470BB0u;
label_470bb0:
    // 0x470bb0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x470bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_470bb4:
    // 0x470bb4: 0xe780c064  swc1        $f0, -0x3F9C($gp)
    ctx->pc = 0x470bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294951012), bits); }
label_470bb8:
    // 0x470bb8: 0xc78cc064  lwc1        $f12, -0x3F9C($gp)
    ctx->pc = 0x470bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294951012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_470bbc:
    // 0x470bbc: 0xc0eb9b4  jal         func_3AE6D0
label_470bc0:
    if (ctx->pc == 0x470BC0u) {
        ctx->pc = 0x470BC4u;
        goto label_470bc4;
    }
    ctx->pc = 0x470BBCu;
    SET_GPR_U32(ctx, 31, 0x470BC4u);
    ctx->pc = 0x3AE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE6D0u, 0x470BBCu, 0x470BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470BC4u;
label_470bc4:
    // 0x470bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_470bc8:
    // 0x470bc8: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x470bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_470bcc:
    // 0x470bcc: 0x3e00008  jr          $ra
label_470bd0:
    if (ctx->pc == 0x470BD0u) {
        ctx->pc = 0x470BD4u;
        goto label_470bd4;
    }
    ctx->pc = 0x470BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470BD4u;
label_470bd4:
    // 0x470bd4: 0x0  nop
    ctx->pc = 0x470bd4u;
    // NOP
label_470bd8:
    // 0x470bd8: 0x0  nop
    ctx->pc = 0x470bd8u;
    // NOP
label_470bdc:
    // 0x470bdc: 0x0  nop
    ctx->pc = 0x470bdcu;
    // NOP
    ctx->pc = 0x470be0u;
}
