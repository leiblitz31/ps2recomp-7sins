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

// Function: sub_0047BA90
// Address: 0x47ba90 - 0x47bc90
void sub_0047BA90_0x47ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BA90_0x47ba90");
#endif

    switch (ctx->pc) {
        case 0x47ba90u: goto label_47ba90;
        case 0x47ba94u: goto label_47ba94;
        case 0x47ba98u: goto label_47ba98;
        case 0x47ba9cu: goto label_47ba9c;
        case 0x47baa0u: goto label_47baa0;
        case 0x47baa4u: goto label_47baa4;
        case 0x47baa8u: goto label_47baa8;
        case 0x47baacu: goto label_47baac;
        case 0x47bab0u: goto label_47bab0;
        case 0x47bab4u: goto label_47bab4;
        case 0x47bab8u: goto label_47bab8;
        case 0x47babcu: goto label_47babc;
        case 0x47bac0u: goto label_47bac0;
        case 0x47bac4u: goto label_47bac4;
        case 0x47bac8u: goto label_47bac8;
        case 0x47baccu: goto label_47bacc;
        case 0x47bad0u: goto label_47bad0;
        case 0x47bad4u: goto label_47bad4;
        case 0x47bad8u: goto label_47bad8;
        case 0x47badcu: goto label_47badc;
        case 0x47bae0u: goto label_47bae0;
        case 0x47bae4u: goto label_47bae4;
        case 0x47bae8u: goto label_47bae8;
        case 0x47baecu: goto label_47baec;
        case 0x47baf0u: goto label_47baf0;
        case 0x47baf4u: goto label_47baf4;
        case 0x47baf8u: goto label_47baf8;
        case 0x47bafcu: goto label_47bafc;
        case 0x47bb00u: goto label_47bb00;
        case 0x47bb04u: goto label_47bb04;
        case 0x47bb08u: goto label_47bb08;
        case 0x47bb0cu: goto label_47bb0c;
        case 0x47bb10u: goto label_47bb10;
        case 0x47bb14u: goto label_47bb14;
        case 0x47bb18u: goto label_47bb18;
        case 0x47bb1cu: goto label_47bb1c;
        case 0x47bb20u: goto label_47bb20;
        case 0x47bb24u: goto label_47bb24;
        case 0x47bb28u: goto label_47bb28;
        case 0x47bb2cu: goto label_47bb2c;
        case 0x47bb30u: goto label_47bb30;
        case 0x47bb34u: goto label_47bb34;
        case 0x47bb38u: goto label_47bb38;
        case 0x47bb3cu: goto label_47bb3c;
        case 0x47bb40u: goto label_47bb40;
        case 0x47bb44u: goto label_47bb44;
        case 0x47bb48u: goto label_47bb48;
        case 0x47bb4cu: goto label_47bb4c;
        case 0x47bb50u: goto label_47bb50;
        case 0x47bb54u: goto label_47bb54;
        case 0x47bb58u: goto label_47bb58;
        case 0x47bb5cu: goto label_47bb5c;
        case 0x47bb60u: goto label_47bb60;
        case 0x47bb64u: goto label_47bb64;
        case 0x47bb68u: goto label_47bb68;
        case 0x47bb6cu: goto label_47bb6c;
        case 0x47bb70u: goto label_47bb70;
        case 0x47bb74u: goto label_47bb74;
        case 0x47bb78u: goto label_47bb78;
        case 0x47bb7cu: goto label_47bb7c;
        case 0x47bb80u: goto label_47bb80;
        case 0x47bb84u: goto label_47bb84;
        case 0x47bb88u: goto label_47bb88;
        case 0x47bb8cu: goto label_47bb8c;
        case 0x47bb90u: goto label_47bb90;
        case 0x47bb94u: goto label_47bb94;
        case 0x47bb98u: goto label_47bb98;
        case 0x47bb9cu: goto label_47bb9c;
        case 0x47bba0u: goto label_47bba0;
        case 0x47bba4u: goto label_47bba4;
        case 0x47bba8u: goto label_47bba8;
        case 0x47bbacu: goto label_47bbac;
        case 0x47bbb0u: goto label_47bbb0;
        case 0x47bbb4u: goto label_47bbb4;
        case 0x47bbb8u: goto label_47bbb8;
        case 0x47bbbcu: goto label_47bbbc;
        case 0x47bbc0u: goto label_47bbc0;
        case 0x47bbc4u: goto label_47bbc4;
        case 0x47bbc8u: goto label_47bbc8;
        case 0x47bbccu: goto label_47bbcc;
        case 0x47bbd0u: goto label_47bbd0;
        case 0x47bbd4u: goto label_47bbd4;
        case 0x47bbd8u: goto label_47bbd8;
        case 0x47bbdcu: goto label_47bbdc;
        case 0x47bbe0u: goto label_47bbe0;
        case 0x47bbe4u: goto label_47bbe4;
        case 0x47bbe8u: goto label_47bbe8;
        case 0x47bbecu: goto label_47bbec;
        case 0x47bbf0u: goto label_47bbf0;
        case 0x47bbf4u: goto label_47bbf4;
        case 0x47bbf8u: goto label_47bbf8;
        case 0x47bbfcu: goto label_47bbfc;
        case 0x47bc00u: goto label_47bc00;
        case 0x47bc04u: goto label_47bc04;
        case 0x47bc08u: goto label_47bc08;
        case 0x47bc0cu: goto label_47bc0c;
        case 0x47bc10u: goto label_47bc10;
        case 0x47bc14u: goto label_47bc14;
        case 0x47bc18u: goto label_47bc18;
        case 0x47bc1cu: goto label_47bc1c;
        case 0x47bc20u: goto label_47bc20;
        case 0x47bc24u: goto label_47bc24;
        case 0x47bc28u: goto label_47bc28;
        case 0x47bc2cu: goto label_47bc2c;
        case 0x47bc30u: goto label_47bc30;
        case 0x47bc34u: goto label_47bc34;
        case 0x47bc38u: goto label_47bc38;
        case 0x47bc3cu: goto label_47bc3c;
        case 0x47bc40u: goto label_47bc40;
        case 0x47bc44u: goto label_47bc44;
        case 0x47bc48u: goto label_47bc48;
        case 0x47bc4cu: goto label_47bc4c;
        case 0x47bc50u: goto label_47bc50;
        case 0x47bc54u: goto label_47bc54;
        case 0x47bc58u: goto label_47bc58;
        case 0x47bc5cu: goto label_47bc5c;
        case 0x47bc60u: goto label_47bc60;
        case 0x47bc64u: goto label_47bc64;
        case 0x47bc68u: goto label_47bc68;
        case 0x47bc6cu: goto label_47bc6c;
        case 0x47bc70u: goto label_47bc70;
        case 0x47bc74u: goto label_47bc74;
        case 0x47bc78u: goto label_47bc78;
        case 0x47bc7cu: goto label_47bc7c;
        case 0x47bc80u: goto label_47bc80;
        case 0x47bc84u: goto label_47bc84;
        case 0x47bc88u: goto label_47bc88;
        case 0x47bc8cu: goto label_47bc8c;
        default: break;
    }

    ctx->pc = 0x47ba90u;

label_47ba90:
    // 0x47ba90: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x47ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_47ba94:
    // 0x47ba94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47ba98:
    // 0x47ba98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ba9c:
    // 0x47ba9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47baa0:
    // 0x47baa0: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x47baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
label_47baa4:
    // 0x47baa4: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x47baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_47baa8:
    // 0x47baa8: 0xafa602b0  sw          $a2, 0x2B0($sp)
    ctx->pc = 0x47baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 6));
label_47baac:
    // 0x47baac: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x47baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_47bab0:
    // 0x47bab0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47bab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47bab4:
    // 0x47bab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47bab8:
    // 0x47bab8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47babc:
    if (ctx->pc == 0x47BABCu) {
        ctx->pc = 0x47BAC0u;
        goto label_47bac0;
    }
    ctx->pc = 0x47BAB8u;
    {
        const bool branch_taken_0x47bab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47bab8) {
            ctx->pc = 0x47BB68u;
            goto label_47bb68;
        }
    }
    ctx->pc = 0x47BAC0u;
label_47bac0:
    // 0x47bac0: 0x8f82b4cc  lw          $v0, -0x4B34($gp)
    ctx->pc = 0x47bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948044)));
label_47bac4:
    // 0x47bac4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47bac8:
    if (ctx->pc == 0x47BAC8u) {
        ctx->pc = 0x47BACCu;
        goto label_47bacc;
    }
    ctx->pc = 0x47BAC4u;
    {
        const bool branch_taken_0x47bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bac4) {
            ctx->pc = 0x47BB68u;
            goto label_47bb68;
        }
    }
    ctx->pc = 0x47BACCu;
label_47bacc:
    // 0x47bacc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47baccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47bad0:
    // 0x47bad0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47bad4:
    // 0x47bad4: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x47bad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_47bad8:
    // 0x47bad8: 0xc115ee8  jal         func_457BA0
label_47badc:
    if (ctx->pc == 0x47BADCu) {
        ctx->pc = 0x47BAE0u;
        goto label_47bae0;
    }
    ctx->pc = 0x47BAD8u;
    SET_GPR_U32(ctx, 31, 0x47BAE0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47BAD8u, 0x47BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BAE0u;
label_47bae0:
    // 0x47bae0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47bae4:
    if (ctx->pc == 0x47BAE4u) {
        ctx->pc = 0x47BAE8u;
        goto label_47bae8;
    }
    ctx->pc = 0x47BAE0u;
    {
        const bool branch_taken_0x47bae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bae0) {
            ctx->pc = 0x47BB68u;
            goto label_47bb68;
        }
    }
    ctx->pc = 0x47BAE8u;
label_47bae8:
    // 0x47bae8: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x47bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_47baec:
    // 0x47baec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47baf0:
    if (ctx->pc == 0x47BAF0u) {
        ctx->pc = 0x47BAF4u;
        goto label_47baf4;
    }
    ctx->pc = 0x47BAECu;
    {
        const bool branch_taken_0x47baec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47baec) {
            ctx->pc = 0x47BB68u;
            goto label_47bb68;
        }
    }
    ctx->pc = 0x47BAF4u;
label_47baf4:
    // 0x47baf4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47baf8:
    // 0x47baf8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47bafc:
    // 0x47bafc: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x47bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_47bb00:
    // 0x47bb00: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47bb00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47bb04:
    // 0x47bb04: 0x24e714c0  addiu       $a3, $a3, 0x14C0
    ctx->pc = 0x47bb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
label_47bb08:
    // 0x47bb08: 0x240801e4  addiu       $t0, $zero, 0x1E4
    ctx->pc = 0x47bb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
label_47bb0c:
    // 0x47bb0c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47bb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47bb10:
    // 0x47bb10: 0x252914f0  addiu       $t1, $t1, 0x14F0
    ctx->pc = 0x47bb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5360));
label_47bb14:
    // 0x47bb14: 0xc113940  jal         func_44E500
label_47bb18:
    if (ctx->pc == 0x47BB18u) {
        ctx->pc = 0x47BB1Cu;
        goto label_47bb1c;
    }
    ctx->pc = 0x47BB14u;
    SET_GPR_U32(ctx, 31, 0x47BB1Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47BB14u, 0x47BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB1Cu;
label_47bb1c:
    // 0x47bb1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47bb20:
    // 0x47bb20: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47bb24:
    // 0x47bb24: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x47bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
label_47bb28:
    // 0x47bb28: 0xc115c24  jal         func_457090
label_47bb2c:
    if (ctx->pc == 0x47BB2Cu) {
        ctx->pc = 0x47BB30u;
        goto label_47bb30;
    }
    ctx->pc = 0x47BB28u;
    SET_GPR_U32(ctx, 31, 0x47BB30u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47BB28u, 0x47BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB30u;
label_47bb30:
    // 0x47bb30: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47bb34:
    // 0x47bb34: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x47bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_47bb38:
    // 0x47bb38: 0x40f809  jalr        $v0
label_47bb3c:
    if (ctx->pc == 0x47BB3Cu) {
        ctx->pc = 0x47BB40u;
        goto label_47bb40;
    }
    ctx->pc = 0x47BB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47BB40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BB38u, 0x47BB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47BB40u;
label_47bb40:
    // 0x47bb40: 0xaf82b4cc  sw          $v0, -0x4B34($gp)
    ctx->pc = 0x47bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948044), GPR_U32(ctx, 2));
label_47bb44:
    // 0x47bb44: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x47bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_47bb48:
    // 0x47bb48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47bb4c:
    if (ctx->pc == 0x47BB4Cu) {
        ctx->pc = 0x47BB50u;
        goto label_47bb50;
    }
    ctx->pc = 0x47BB48u;
    {
        const bool branch_taken_0x47bb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bb48) {
            ctx->pc = 0x47BB58u;
            goto label_47bb58;
        }
    }
    ctx->pc = 0x47BB50u;
label_47bb50:
    // 0x47bb50: 0xd  break       0
    ctx->pc = 0x47bb50u;
    runtime->handleBreak(rdram, ctx);
label_47bb54:
    // 0x47bb54: 0x0  nop
    ctx->pc = 0x47bb54u;
    // NOP
label_47bb58:
    // 0x47bb58: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47bb5c:
    // 0x47bb5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47bb60:
    // 0x47bb60: 0xc11392c  jal         func_44E4B0
label_47bb64:
    if (ctx->pc == 0x47BB64u) {
        ctx->pc = 0x47BB68u;
        goto label_47bb68;
    }
    ctx->pc = 0x47BB60u;
    SET_GPR_U32(ctx, 31, 0x47BB68u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47BB60u, 0x47BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB68u;
label_47bb68:
    // 0x47bb68: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x47bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_47bb6c:
    // 0x47bb6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47bb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47bb70:
    // 0x47bb70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47bb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47bb74:
    // 0x47bb74: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47bb78:
    if (ctx->pc == 0x47BB78u) {
        ctx->pc = 0x47BB7Cu;
        goto label_47bb7c;
    }
    ctx->pc = 0x47BB74u;
    {
        const bool branch_taken_0x47bb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47bb74) {
            ctx->pc = 0x47BC24u;
            goto label_47bc24;
        }
    }
    ctx->pc = 0x47BB7Cu;
label_47bb7c:
    // 0x47bb7c: 0x8f82b4d0  lw          $v0, -0x4B30($gp)
    ctx->pc = 0x47bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948048)));
label_47bb80:
    // 0x47bb80: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47bb84:
    if (ctx->pc == 0x47BB84u) {
        ctx->pc = 0x47BB88u;
        goto label_47bb88;
    }
    ctx->pc = 0x47BB80u;
    {
        const bool branch_taken_0x47bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bb80) {
            ctx->pc = 0x47BC24u;
            goto label_47bc24;
        }
    }
    ctx->pc = 0x47BB88u;
label_47bb88:
    // 0x47bb88: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47bb8c:
    // 0x47bb8c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47bb90:
    // 0x47bb90: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x47bb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_47bb94:
    // 0x47bb94: 0xc115ee8  jal         func_457BA0
label_47bb98:
    if (ctx->pc == 0x47BB98u) {
        ctx->pc = 0x47BB9Cu;
        goto label_47bb9c;
    }
    ctx->pc = 0x47BB94u;
    SET_GPR_U32(ctx, 31, 0x47BB9Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47BB94u, 0x47BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB9Cu;
label_47bb9c:
    // 0x47bb9c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47bba0:
    if (ctx->pc == 0x47BBA0u) {
        ctx->pc = 0x47BBA4u;
        goto label_47bba4;
    }
    ctx->pc = 0x47BB9Cu;
    {
        const bool branch_taken_0x47bb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bb9c) {
            ctx->pc = 0x47BC24u;
            goto label_47bc24;
        }
    }
    ctx->pc = 0x47BBA4u;
label_47bba4:
    // 0x47bba4: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x47bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_47bba8:
    // 0x47bba8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47bbac:
    if (ctx->pc == 0x47BBACu) {
        ctx->pc = 0x47BBB0u;
        goto label_47bbb0;
    }
    ctx->pc = 0x47BBA8u;
    {
        const bool branch_taken_0x47bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bba8) {
            ctx->pc = 0x47BC24u;
            goto label_47bc24;
        }
    }
    ctx->pc = 0x47BBB0u;
label_47bbb0:
    // 0x47bbb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x47bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47bbb4:
    // 0x47bbb4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47bbb8:
    // 0x47bbb8: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x47bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_47bbbc:
    // 0x47bbbc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47bbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47bbc0:
    // 0x47bbc0: 0x24e714c0  addiu       $a3, $a3, 0x14C0
    ctx->pc = 0x47bbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5312));
label_47bbc4:
    // 0x47bbc4: 0x240801e5  addiu       $t0, $zero, 0x1E5
    ctx->pc = 0x47bbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
label_47bbc8:
    // 0x47bbc8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47bbc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47bbcc:
    // 0x47bbcc: 0x25291660  addiu       $t1, $t1, 0x1660
    ctx->pc = 0x47bbccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5728));
label_47bbd0:
    // 0x47bbd0: 0xc113940  jal         func_44E500
label_47bbd4:
    if (ctx->pc == 0x47BBD4u) {
        ctx->pc = 0x47BBD8u;
        goto label_47bbd8;
    }
    ctx->pc = 0x47BBD0u;
    SET_GPR_U32(ctx, 31, 0x47BBD8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47BBD0u, 0x47BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BBD8u;
label_47bbd8:
    // 0x47bbd8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x47bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47bbdc:
    // 0x47bbdc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47bbe0:
    // 0x47bbe0: 0x24a51680  addiu       $a1, $a1, 0x1680
    ctx->pc = 0x47bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
label_47bbe4:
    // 0x47bbe4: 0xc115c24  jal         func_457090
label_47bbe8:
    if (ctx->pc == 0x47BBE8u) {
        ctx->pc = 0x47BBECu;
        goto label_47bbec;
    }
    ctx->pc = 0x47BBE4u;
    SET_GPR_U32(ctx, 31, 0x47BBECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47BBE4u, 0x47BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BBECu;
label_47bbec:
    // 0x47bbec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x47bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47bbf0:
    // 0x47bbf0: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x47bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_47bbf4:
    // 0x47bbf4: 0x40f809  jalr        $v0
label_47bbf8:
    if (ctx->pc == 0x47BBF8u) {
        ctx->pc = 0x47BBFCu;
        goto label_47bbfc;
    }
    ctx->pc = 0x47BBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47BBFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BBF4u, 0x47BBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47BBFCu;
label_47bbfc:
    // 0x47bbfc: 0xaf82b4d0  sw          $v0, -0x4B30($gp)
    ctx->pc = 0x47bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 2));
label_47bc00:
    // 0x47bc00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_47bc04:
    // 0x47bc04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47bc08:
    if (ctx->pc == 0x47BC08u) {
        ctx->pc = 0x47BC0Cu;
        goto label_47bc0c;
    }
    ctx->pc = 0x47BC04u;
    {
        const bool branch_taken_0x47bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bc04) {
            ctx->pc = 0x47BC14u;
            goto label_47bc14;
        }
    }
    ctx->pc = 0x47BC0Cu;
label_47bc0c:
    // 0x47bc0c: 0xd  break       0
    ctx->pc = 0x47bc0cu;
    runtime->handleBreak(rdram, ctx);
label_47bc10:
    // 0x47bc10: 0x0  nop
    ctx->pc = 0x47bc10u;
    // NOP
label_47bc14:
    // 0x47bc14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x47bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47bc18:
    // 0x47bc18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47bc1c:
    // 0x47bc1c: 0xc11392c  jal         func_44E4B0
label_47bc20:
    if (ctx->pc == 0x47BC20u) {
        ctx->pc = 0x47BC24u;
        goto label_47bc24;
    }
    ctx->pc = 0x47BC1Cu;
    SET_GPR_U32(ctx, 31, 0x47BC24u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47BC1Cu, 0x47BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC24u;
label_47bc24:
    // 0x47bc24: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x47bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_47bc28:
    // 0x47bc28: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x47bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_47bc2c:
    // 0x47bc2c: 0xc11eb9c  jal         func_47AE70
label_47bc30:
    if (ctx->pc == 0x47BC30u) {
        ctx->pc = 0x47BC34u;
        goto label_47bc34;
    }
    ctx->pc = 0x47BC2Cu;
    SET_GPR_U32(ctx, 31, 0x47BC34u);
    ctx->pc = 0x47AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE70u, 0x47BC2Cu, 0x47BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC34u;
label_47bc34:
    // 0x47bc34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47bc38:
    // 0x47bc38: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_47bc3c:
    if (ctx->pc == 0x47BC3Cu) {
        ctx->pc = 0x47BC40u;
        goto label_47bc40;
    }
    ctx->pc = 0x47BC38u;
    {
        const bool branch_taken_0x47bc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47bc38) {
            ctx->pc = 0x47BC4Cu;
            goto label_47bc4c;
        }
    }
    ctx->pc = 0x47BC40u;
label_47bc40:
    // 0x47bc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47bc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47bc44:
    // 0x47bc44: 0x1000000c  b           . + 4 + (0xC << 2)
label_47bc48:
    if (ctx->pc == 0x47BC48u) {
        ctx->pc = 0x47BC4Cu;
        goto label_47bc4c;
    }
    ctx->pc = 0x47BC44u;
    {
        const bool branch_taken_0x47bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bc44) {
            ctx->pc = 0x47BC78u;
            goto label_47bc78;
        }
    }
    ctx->pc = 0x47BC4Cu;
label_47bc4c:
    // 0x47bc4c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x47bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_47bc50:
    // 0x47bc50: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x47bc50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47bc54:
    // 0x47bc54: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x47bc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47bc58:
    // 0x47bc58: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x47bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_47bc5c:
    // 0x47bc5c: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x47bc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_47bc60:
    // 0x47bc60: 0xc041d58  jal         func_107560
label_47bc64:
    if (ctx->pc == 0x47BC64u) {
        ctx->pc = 0x47BC68u;
        goto label_47bc68;
    }
    ctx->pc = 0x47BC60u;
    SET_GPR_U32(ctx, 31, 0x47BC68u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47BC60u, 0x47BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC68u;
label_47bc68:
    // 0x47bc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47bc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47bc6c:
    // 0x47bc6c: 0xc106794  jal         func_419E50
label_47bc70:
    if (ctx->pc == 0x47BC70u) {
        ctx->pc = 0x47BC74u;
        goto label_47bc74;
    }
    ctx->pc = 0x47BC6Cu;
    SET_GPR_U32(ctx, 31, 0x47BC74u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x47BC6Cu, 0x47BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC74u;
label_47bc74:
    // 0x47bc74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bc78:
    // 0x47bc78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47bc7c:
    // 0x47bc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47bc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47bc80:
    // 0x47bc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47bc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47bc84:
    // 0x47bc84: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x47bc84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47bc88:
    // 0x47bc88: 0x3e00008  jr          $ra
label_47bc8c:
    if (ctx->pc == 0x47BC8Cu) {
        ctx->pc = 0x47BC90u;
        goto label_fallthrough_0x47bc88;
    }
    ctx->pc = 0x47BC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47bc88:
    ctx->pc = 0x47BC90u;
}
