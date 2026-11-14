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

// Function: sub_0048AF40
// Address: 0x48af40 - 0x48b050
void sub_0048AF40_0x48af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AF40_0x48af40");
#endif

    switch (ctx->pc) {
        case 0x48af40u: goto label_48af40;
        case 0x48af44u: goto label_48af44;
        case 0x48af48u: goto label_48af48;
        case 0x48af4cu: goto label_48af4c;
        case 0x48af50u: goto label_48af50;
        case 0x48af54u: goto label_48af54;
        case 0x48af58u: goto label_48af58;
        case 0x48af5cu: goto label_48af5c;
        case 0x48af60u: goto label_48af60;
        case 0x48af64u: goto label_48af64;
        case 0x48af68u: goto label_48af68;
        case 0x48af6cu: goto label_48af6c;
        case 0x48af70u: goto label_48af70;
        case 0x48af74u: goto label_48af74;
        case 0x48af78u: goto label_48af78;
        case 0x48af7cu: goto label_48af7c;
        case 0x48af80u: goto label_48af80;
        case 0x48af84u: goto label_48af84;
        case 0x48af88u: goto label_48af88;
        case 0x48af8cu: goto label_48af8c;
        case 0x48af90u: goto label_48af90;
        case 0x48af94u: goto label_48af94;
        case 0x48af98u: goto label_48af98;
        case 0x48af9cu: goto label_48af9c;
        case 0x48afa0u: goto label_48afa0;
        case 0x48afa4u: goto label_48afa4;
        case 0x48afa8u: goto label_48afa8;
        case 0x48afacu: goto label_48afac;
        case 0x48afb0u: goto label_48afb0;
        case 0x48afb4u: goto label_48afb4;
        case 0x48afb8u: goto label_48afb8;
        case 0x48afbcu: goto label_48afbc;
        case 0x48afc0u: goto label_48afc0;
        case 0x48afc4u: goto label_48afc4;
        case 0x48afc8u: goto label_48afc8;
        case 0x48afccu: goto label_48afcc;
        case 0x48afd0u: goto label_48afd0;
        case 0x48afd4u: goto label_48afd4;
        case 0x48afd8u: goto label_48afd8;
        case 0x48afdcu: goto label_48afdc;
        case 0x48afe0u: goto label_48afe0;
        case 0x48afe4u: goto label_48afe4;
        case 0x48afe8u: goto label_48afe8;
        case 0x48afecu: goto label_48afec;
        case 0x48aff0u: goto label_48aff0;
        case 0x48aff4u: goto label_48aff4;
        case 0x48aff8u: goto label_48aff8;
        case 0x48affcu: goto label_48affc;
        case 0x48b000u: goto label_48b000;
        case 0x48b004u: goto label_48b004;
        case 0x48b008u: goto label_48b008;
        case 0x48b00cu: goto label_48b00c;
        case 0x48b010u: goto label_48b010;
        case 0x48b014u: goto label_48b014;
        case 0x48b018u: goto label_48b018;
        case 0x48b01cu: goto label_48b01c;
        case 0x48b020u: goto label_48b020;
        case 0x48b024u: goto label_48b024;
        case 0x48b028u: goto label_48b028;
        case 0x48b02cu: goto label_48b02c;
        case 0x48b030u: goto label_48b030;
        case 0x48b034u: goto label_48b034;
        case 0x48b038u: goto label_48b038;
        case 0x48b03cu: goto label_48b03c;
        case 0x48b040u: goto label_48b040;
        case 0x48b044u: goto label_48b044;
        case 0x48b048u: goto label_48b048;
        case 0x48b04cu: goto label_48b04c;
        default: break;
    }

    ctx->pc = 0x48af40u;

label_48af40:
    // 0x48af40: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x48af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_48af44:
    // 0x48af44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48af48:
    // 0x48af48: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48af4c:
    // 0x48af4c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x48af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_48af50:
    // 0x48af50: 0xe7ac0160  swc1        $f12, 0x160($sp)
    ctx->pc = 0x48af50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_48af54:
    // 0x48af54: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48af58:
    // 0x48af58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48af58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48af5c:
    // 0x48af5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48af60:
    // 0x48af60: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48af64:
    if (ctx->pc == 0x48AF64u) {
        ctx->pc = 0x48AF68u;
        goto label_48af68;
    }
    ctx->pc = 0x48AF60u;
    {
        const bool branch_taken_0x48af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48af60) {
            ctx->pc = 0x48B010u;
            goto label_48b010;
        }
    }
    ctx->pc = 0x48AF68u;
label_48af68:
    // 0x48af68: 0x8f82b630  lw          $v0, -0x49D0($gp)
    ctx->pc = 0x48af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948400)));
label_48af6c:
    // 0x48af6c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48af70:
    if (ctx->pc == 0x48AF70u) {
        ctx->pc = 0x48AF74u;
        goto label_48af74;
    }
    ctx->pc = 0x48AF6Cu;
    {
        const bool branch_taken_0x48af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48af6c) {
            ctx->pc = 0x48B010u;
            goto label_48b010;
        }
    }
    ctx->pc = 0x48AF74u;
label_48af74:
    // 0x48af74: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48af74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48af78:
    // 0x48af78: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48af78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48af7c:
    // 0x48af7c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48af7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48af80:
    // 0x48af80: 0xc115ee8  jal         func_457BA0
label_48af84:
    if (ctx->pc == 0x48AF84u) {
        ctx->pc = 0x48AF88u;
        goto label_48af88;
    }
    ctx->pc = 0x48AF80u;
    SET_GPR_U32(ctx, 31, 0x48AF88u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48AF80u, 0x48AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AF88u;
label_48af88:
    // 0x48af88: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48af8c:
    if (ctx->pc == 0x48AF8Cu) {
        ctx->pc = 0x48AF90u;
        goto label_48af90;
    }
    ctx->pc = 0x48AF88u;
    {
        const bool branch_taken_0x48af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48af88) {
            ctx->pc = 0x48B010u;
            goto label_48b010;
        }
    }
    ctx->pc = 0x48AF90u;
label_48af90:
    // 0x48af90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48af94:
    // 0x48af94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48af98:
    if (ctx->pc == 0x48AF98u) {
        ctx->pc = 0x48AF9Cu;
        goto label_48af9c;
    }
    ctx->pc = 0x48AF94u;
    {
        const bool branch_taken_0x48af94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48af94) {
            ctx->pc = 0x48B010u;
            goto label_48b010;
        }
    }
    ctx->pc = 0x48AF9Cu;
label_48af9c:
    // 0x48af9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48afa0:
    // 0x48afa0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48afa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48afa4:
    // 0x48afa4: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48afa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48afa8:
    // 0x48afa8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48afa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48afac:
    // 0x48afac: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48afacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48afb0:
    // 0x48afb0: 0x24080193  addiu       $t0, $zero, 0x193
    ctx->pc = 0x48afb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
label_48afb4:
    // 0x48afb4: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48afb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48afb8:
    // 0x48afb8: 0x25294780  addiu       $t1, $t1, 0x4780
    ctx->pc = 0x48afb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18304));
label_48afbc:
    // 0x48afbc: 0xc113940  jal         func_44E500
label_48afc0:
    if (ctx->pc == 0x48AFC0u) {
        ctx->pc = 0x48AFC4u;
        goto label_48afc4;
    }
    ctx->pc = 0x48AFBCu;
    SET_GPR_U32(ctx, 31, 0x48AFC4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48AFBCu, 0x48AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AFC4u;
label_48afc4:
    // 0x48afc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48afc8:
    // 0x48afc8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48afcc:
    // 0x48afcc: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x48afccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_48afd0:
    // 0x48afd0: 0xc115c24  jal         func_457090
label_48afd4:
    if (ctx->pc == 0x48AFD4u) {
        ctx->pc = 0x48AFD8u;
        goto label_48afd8;
    }
    ctx->pc = 0x48AFD0u;
    SET_GPR_U32(ctx, 31, 0x48AFD8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48AFD0u, 0x48AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AFD8u;
label_48afd8:
    // 0x48afd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48afdc:
    // 0x48afdc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48afe0:
    // 0x48afe0: 0x40f809  jalr        $v0
label_48afe4:
    if (ctx->pc == 0x48AFE4u) {
        ctx->pc = 0x48AFE8u;
        goto label_48afe8;
    }
    ctx->pc = 0x48AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48AFE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AFE0u, 0x48AFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48AFE8u;
label_48afe8:
    // 0x48afe8: 0xaf82b630  sw          $v0, -0x49D0($gp)
    ctx->pc = 0x48afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948400), GPR_U32(ctx, 2));
label_48afec:
    // 0x48afec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48aff0:
    // 0x48aff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48aff4:
    if (ctx->pc == 0x48AFF4u) {
        ctx->pc = 0x48AFF8u;
        goto label_48aff8;
    }
    ctx->pc = 0x48AFF0u;
    {
        const bool branch_taken_0x48aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aff0) {
            ctx->pc = 0x48B000u;
            goto label_48b000;
        }
    }
    ctx->pc = 0x48AFF8u;
label_48aff8:
    // 0x48aff8: 0xd  break       0
    ctx->pc = 0x48aff8u;
    runtime->handleBreak(rdram, ctx);
label_48affc:
    // 0x48affc: 0x0  nop
    ctx->pc = 0x48affcu;
    // NOP
label_48b000:
    // 0x48b000: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48b004:
    // 0x48b004: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b008:
    // 0x48b008: 0xc11392c  jal         func_44E4B0
label_48b00c:
    if (ctx->pc == 0x48B00Cu) {
        ctx->pc = 0x48B010u;
        goto label_48b010;
    }
    ctx->pc = 0x48B008u;
    SET_GPR_U32(ctx, 31, 0x48B010u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48B008u, 0x48B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B010u;
label_48b010:
    // 0x48b010: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48b014:
    // 0x48b014: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48b018:
    // 0x48b018: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x48b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_48b01c:
    // 0x48b01c: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x48b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b020:
    // 0x48b020: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x48b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48b024:
    // 0x48b024: 0x2446005c  addiu       $a2, $v0, 0x5C
    ctx->pc = 0x48b024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_48b028:
    // 0x48b028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48b028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b02c:
    // 0x48b02c: 0xc119830  jal         func_4660C0
label_48b030:
    if (ctx->pc == 0x48B030u) {
        ctx->pc = 0x48B034u;
        goto label_48b034;
    }
    ctx->pc = 0x48B02Cu;
    SET_GPR_U32(ctx, 31, 0x48B034u);
    ctx->pc = 0x4660C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4660C0u, 0x48B02Cu, 0x48B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B034u;
label_48b034:
    // 0x48b034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b038:
    // 0x48b038: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48b03c:
    // 0x48b03c: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x48b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
label_48b040:
    // 0x48b040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48b044:
    // 0x48b044: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x48b044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b048:
    // 0x48b048: 0x3e00008  jr          $ra
label_48b04c:
    if (ctx->pc == 0x48B04Cu) {
        ctx->pc = 0x48B050u;
        goto label_fallthrough_0x48b048;
    }
    ctx->pc = 0x48B048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48b048:
    ctx->pc = 0x48B050u;
}
