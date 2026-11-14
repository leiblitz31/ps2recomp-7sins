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

// Function: sub_0046FF20
// Address: 0x46ff20 - 0x4700f0
void sub_0046FF20_0x46ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046FF20_0x46ff20");
#endif

    switch (ctx->pc) {
        case 0x46ff20u: goto label_46ff20;
        case 0x46ff24u: goto label_46ff24;
        case 0x46ff28u: goto label_46ff28;
        case 0x46ff2cu: goto label_46ff2c;
        case 0x46ff30u: goto label_46ff30;
        case 0x46ff34u: goto label_46ff34;
        case 0x46ff38u: goto label_46ff38;
        case 0x46ff3cu: goto label_46ff3c;
        case 0x46ff40u: goto label_46ff40;
        case 0x46ff44u: goto label_46ff44;
        case 0x46ff48u: goto label_46ff48;
        case 0x46ff4cu: goto label_46ff4c;
        case 0x46ff50u: goto label_46ff50;
        case 0x46ff54u: goto label_46ff54;
        case 0x46ff58u: goto label_46ff58;
        case 0x46ff5cu: goto label_46ff5c;
        case 0x46ff60u: goto label_46ff60;
        case 0x46ff64u: goto label_46ff64;
        case 0x46ff68u: goto label_46ff68;
        case 0x46ff6cu: goto label_46ff6c;
        case 0x46ff70u: goto label_46ff70;
        case 0x46ff74u: goto label_46ff74;
        case 0x46ff78u: goto label_46ff78;
        case 0x46ff7cu: goto label_46ff7c;
        case 0x46ff80u: goto label_46ff80;
        case 0x46ff84u: goto label_46ff84;
        case 0x46ff88u: goto label_46ff88;
        case 0x46ff8cu: goto label_46ff8c;
        case 0x46ff90u: goto label_46ff90;
        case 0x46ff94u: goto label_46ff94;
        case 0x46ff98u: goto label_46ff98;
        case 0x46ff9cu: goto label_46ff9c;
        case 0x46ffa0u: goto label_46ffa0;
        case 0x46ffa4u: goto label_46ffa4;
        case 0x46ffa8u: goto label_46ffa8;
        case 0x46ffacu: goto label_46ffac;
        case 0x46ffb0u: goto label_46ffb0;
        case 0x46ffb4u: goto label_46ffb4;
        case 0x46ffb8u: goto label_46ffb8;
        case 0x46ffbcu: goto label_46ffbc;
        case 0x46ffc0u: goto label_46ffc0;
        case 0x46ffc4u: goto label_46ffc4;
        case 0x46ffc8u: goto label_46ffc8;
        case 0x46ffccu: goto label_46ffcc;
        case 0x46ffd0u: goto label_46ffd0;
        case 0x46ffd4u: goto label_46ffd4;
        case 0x46ffd8u: goto label_46ffd8;
        case 0x46ffdcu: goto label_46ffdc;
        case 0x46ffe0u: goto label_46ffe0;
        case 0x46ffe4u: goto label_46ffe4;
        case 0x46ffe8u: goto label_46ffe8;
        case 0x46ffecu: goto label_46ffec;
        case 0x46fff0u: goto label_46fff0;
        case 0x46fff4u: goto label_46fff4;
        case 0x46fff8u: goto label_46fff8;
        case 0x46fffcu: goto label_46fffc;
        case 0x470000u: goto label_470000;
        case 0x470004u: goto label_470004;
        case 0x470008u: goto label_470008;
        case 0x47000cu: goto label_47000c;
        case 0x470010u: goto label_470010;
        case 0x470014u: goto label_470014;
        case 0x470018u: goto label_470018;
        case 0x47001cu: goto label_47001c;
        case 0x470020u: goto label_470020;
        case 0x470024u: goto label_470024;
        case 0x470028u: goto label_470028;
        case 0x47002cu: goto label_47002c;
        case 0x470030u: goto label_470030;
        case 0x470034u: goto label_470034;
        case 0x470038u: goto label_470038;
        case 0x47003cu: goto label_47003c;
        case 0x470040u: goto label_470040;
        case 0x470044u: goto label_470044;
        case 0x470048u: goto label_470048;
        case 0x47004cu: goto label_47004c;
        case 0x470050u: goto label_470050;
        case 0x470054u: goto label_470054;
        case 0x470058u: goto label_470058;
        case 0x47005cu: goto label_47005c;
        case 0x470060u: goto label_470060;
        case 0x470064u: goto label_470064;
        case 0x470068u: goto label_470068;
        case 0x47006cu: goto label_47006c;
        case 0x470070u: goto label_470070;
        case 0x470074u: goto label_470074;
        case 0x470078u: goto label_470078;
        case 0x47007cu: goto label_47007c;
        case 0x470080u: goto label_470080;
        case 0x470084u: goto label_470084;
        case 0x470088u: goto label_470088;
        case 0x47008cu: goto label_47008c;
        case 0x470090u: goto label_470090;
        case 0x470094u: goto label_470094;
        case 0x470098u: goto label_470098;
        case 0x47009cu: goto label_47009c;
        case 0x4700a0u: goto label_4700a0;
        case 0x4700a4u: goto label_4700a4;
        case 0x4700a8u: goto label_4700a8;
        case 0x4700acu: goto label_4700ac;
        case 0x4700b0u: goto label_4700b0;
        case 0x4700b4u: goto label_4700b4;
        case 0x4700b8u: goto label_4700b8;
        case 0x4700bcu: goto label_4700bc;
        case 0x4700c0u: goto label_4700c0;
        case 0x4700c4u: goto label_4700c4;
        case 0x4700c8u: goto label_4700c8;
        case 0x4700ccu: goto label_4700cc;
        case 0x4700d0u: goto label_4700d0;
        case 0x4700d4u: goto label_4700d4;
        case 0x4700d8u: goto label_4700d8;
        case 0x4700dcu: goto label_4700dc;
        case 0x4700e0u: goto label_4700e0;
        case 0x4700e4u: goto label_4700e4;
        case 0x4700e8u: goto label_4700e8;
        case 0x4700ecu: goto label_4700ec;
        default: break;
    }

    ctx->pc = 0x46ff20u;

label_46ff20:
    // 0x46ff20: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x46ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_46ff24:
    // 0x46ff24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46ff28:
    // 0x46ff28: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x46ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_46ff2c:
    // 0x46ff2c: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x46ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
label_46ff30:
    // 0x46ff30: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x46ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_46ff34:
    // 0x46ff34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ff38:
    // 0x46ff38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46ff38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46ff3c:
    // 0x46ff3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46ff40:
    // 0x46ff40: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46ff44:
    if (ctx->pc == 0x46FF44u) {
        ctx->pc = 0x46FF48u;
        goto label_46ff48;
    }
    ctx->pc = 0x46FF40u;
    {
        const bool branch_taken_0x46ff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ff40) {
            ctx->pc = 0x46FFF0u;
            goto label_46fff0;
        }
    }
    ctx->pc = 0x46FF48u;
label_46ff48:
    // 0x46ff48: 0x8f82b334  lw          $v0, -0x4CCC($gp)
    ctx->pc = 0x46ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947636)));
label_46ff4c:
    // 0x46ff4c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46ff50:
    if (ctx->pc == 0x46FF50u) {
        ctx->pc = 0x46FF54u;
        goto label_46ff54;
    }
    ctx->pc = 0x46FF4Cu;
    {
        const bool branch_taken_0x46ff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ff4c) {
            ctx->pc = 0x46FFF0u;
            goto label_46fff0;
        }
    }
    ctx->pc = 0x46FF54u;
label_46ff54:
    // 0x46ff54: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46ff58:
    // 0x46ff58: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46ff5c:
    // 0x46ff5c: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x46ff5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46ff60:
    // 0x46ff60: 0xc115ee8  jal         func_457BA0
label_46ff64:
    if (ctx->pc == 0x46FF64u) {
        ctx->pc = 0x46FF68u;
        goto label_46ff68;
    }
    ctx->pc = 0x46FF60u;
    SET_GPR_U32(ctx, 31, 0x46FF68u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46FF60u, 0x46FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FF68u;
label_46ff68:
    // 0x46ff68: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46ff6c:
    if (ctx->pc == 0x46FF6Cu) {
        ctx->pc = 0x46FF70u;
        goto label_46ff70;
    }
    ctx->pc = 0x46FF68u;
    {
        const bool branch_taken_0x46ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ff68) {
            ctx->pc = 0x46FFF0u;
            goto label_46fff0;
        }
    }
    ctx->pc = 0x46FF70u;
label_46ff70:
    // 0x46ff70: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x46ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_46ff74:
    // 0x46ff74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46ff78:
    if (ctx->pc == 0x46FF78u) {
        ctx->pc = 0x46FF7Cu;
        goto label_46ff7c;
    }
    ctx->pc = 0x46FF74u;
    {
        const bool branch_taken_0x46ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ff74) {
            ctx->pc = 0x46FFF0u;
            goto label_46fff0;
        }
    }
    ctx->pc = 0x46FF7Cu;
label_46ff7c:
    // 0x46ff7c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x46ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_46ff80:
    // 0x46ff80: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46ff84:
    // 0x46ff84: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x46ff84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_46ff88:
    // 0x46ff88: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46ff8c:
    // 0x46ff8c: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x46ff8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_46ff90:
    // 0x46ff90: 0x240800d4  addiu       $t0, $zero, 0xD4
    ctx->pc = 0x46ff90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_46ff94:
    // 0x46ff94: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46ff94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46ff98:
    // 0x46ff98: 0x2529fc80  addiu       $t1, $t1, -0x380
    ctx->pc = 0x46ff98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966400));
label_46ff9c:
    // 0x46ff9c: 0xc113940  jal         func_44E500
label_46ffa0:
    if (ctx->pc == 0x46FFA0u) {
        ctx->pc = 0x46FFA4u;
        goto label_46ffa4;
    }
    ctx->pc = 0x46FF9Cu;
    SET_GPR_U32(ctx, 31, 0x46FFA4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46FF9Cu, 0x46FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FFA4u;
label_46ffa4:
    // 0x46ffa4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x46ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_46ffa8:
    // 0x46ffa8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46ffac:
    // 0x46ffac: 0x24a5fd80  addiu       $a1, $a1, -0x280
    ctx->pc = 0x46ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
label_46ffb0:
    // 0x46ffb0: 0xc115c24  jal         func_457090
label_46ffb4:
    if (ctx->pc == 0x46FFB4u) {
        ctx->pc = 0x46FFB8u;
        goto label_46ffb8;
    }
    ctx->pc = 0x46FFB0u;
    SET_GPR_U32(ctx, 31, 0x46FFB8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46FFB0u, 0x46FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FFB8u;
label_46ffb8:
    // 0x46ffb8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x46ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_46ffbc:
    // 0x46ffbc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x46ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_46ffc0:
    // 0x46ffc0: 0x40f809  jalr        $v0
label_46ffc4:
    if (ctx->pc == 0x46FFC4u) {
        ctx->pc = 0x46FFC8u;
        goto label_46ffc8;
    }
    ctx->pc = 0x46FFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FFC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FFC0u, 0x46FFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FFC8u;
label_46ffc8:
    // 0x46ffc8: 0xaf82b334  sw          $v0, -0x4CCC($gp)
    ctx->pc = 0x46ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947636), GPR_U32(ctx, 2));
label_46ffcc:
    // 0x46ffcc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x46ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_46ffd0:
    // 0x46ffd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46ffd4:
    if (ctx->pc == 0x46FFD4u) {
        ctx->pc = 0x46FFD8u;
        goto label_46ffd8;
    }
    ctx->pc = 0x46FFD0u;
    {
        const bool branch_taken_0x46ffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ffd0) {
            ctx->pc = 0x46FFE0u;
            goto label_46ffe0;
        }
    }
    ctx->pc = 0x46FFD8u;
label_46ffd8:
    // 0x46ffd8: 0xd  break       0
    ctx->pc = 0x46ffd8u;
    runtime->handleBreak(rdram, ctx);
label_46ffdc:
    // 0x46ffdc: 0x0  nop
    ctx->pc = 0x46ffdcu;
    // NOP
label_46ffe0:
    // 0x46ffe0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x46ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_46ffe4:
    // 0x46ffe4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46ffe8:
    // 0x46ffe8: 0xc11392c  jal         func_44E4B0
label_46ffec:
    if (ctx->pc == 0x46FFECu) {
        ctx->pc = 0x46FFF0u;
        goto label_46fff0;
    }
    ctx->pc = 0x46FFE8u;
    SET_GPR_U32(ctx, 31, 0x46FFF0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46FFE8u, 0x46FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FFF0u;
label_46fff0:
    // 0x46fff0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x46fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_46fff4:
    // 0x46fff4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46fff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fff8:
    // 0x46fff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46fff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46fffc:
    // 0x46fffc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470000:
    if (ctx->pc == 0x470000u) {
        ctx->pc = 0x470004u;
        goto label_470004;
    }
    ctx->pc = 0x46FFFCu;
    {
        const bool branch_taken_0x46fffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fffc) {
            ctx->pc = 0x4700ACu;
            goto label_4700ac;
        }
    }
    ctx->pc = 0x470004u;
label_470004:
    // 0x470004: 0x8f82b338  lw          $v0, -0x4CC8($gp)
    ctx->pc = 0x470004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947640)));
label_470008:
    // 0x470008: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47000c:
    if (ctx->pc == 0x47000Cu) {
        ctx->pc = 0x470010u;
        goto label_470010;
    }
    ctx->pc = 0x470008u;
    {
        const bool branch_taken_0x470008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470008) {
            ctx->pc = 0x4700ACu;
            goto label_4700ac;
        }
    }
    ctx->pc = 0x470010u;
label_470010:
    // 0x470010: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470014:
    // 0x470014: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470018:
    // 0x470018: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x470018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_47001c:
    // 0x47001c: 0xc115ee8  jal         func_457BA0
label_470020:
    if (ctx->pc == 0x470020u) {
        ctx->pc = 0x470024u;
        goto label_470024;
    }
    ctx->pc = 0x47001Cu;
    SET_GPR_U32(ctx, 31, 0x470024u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47001Cu, 0x470024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470024u;
label_470024:
    // 0x470024: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470028:
    if (ctx->pc == 0x470028u) {
        ctx->pc = 0x47002Cu;
        goto label_47002c;
    }
    ctx->pc = 0x470024u;
    {
        const bool branch_taken_0x470024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470024) {
            ctx->pc = 0x4700ACu;
            goto label_4700ac;
        }
    }
    ctx->pc = 0x47002Cu;
label_47002c:
    // 0x47002c: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x47002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_470030:
    // 0x470030: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470034:
    if (ctx->pc == 0x470034u) {
        ctx->pc = 0x470038u;
        goto label_470038;
    }
    ctx->pc = 0x470030u;
    {
        const bool branch_taken_0x470030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470030) {
            ctx->pc = 0x4700ACu;
            goto label_4700ac;
        }
    }
    ctx->pc = 0x470038u;
label_470038:
    // 0x470038: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47003c:
    // 0x47003c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470040:
    // 0x470040: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x470040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_470044:
    // 0x470044: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470048:
    // 0x470048: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x470048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_47004c:
    // 0x47004c: 0x240800d5  addiu       $t0, $zero, 0xD5
    ctx->pc = 0x47004cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_470050:
    // 0x470050: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470054:
    // 0x470054: 0x2529fde0  addiu       $t1, $t1, -0x220
    ctx->pc = 0x470054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966752));
label_470058:
    // 0x470058: 0xc113940  jal         func_44E500
label_47005c:
    if (ctx->pc == 0x47005Cu) {
        ctx->pc = 0x470060u;
        goto label_470060;
    }
    ctx->pc = 0x470058u;
    SET_GPR_U32(ctx, 31, 0x470060u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470058u, 0x470060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470060u;
label_470060:
    // 0x470060: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470064:
    // 0x470064: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470068:
    // 0x470068: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x470068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
label_47006c:
    // 0x47006c: 0xc115c24  jal         func_457090
label_470070:
    if (ctx->pc == 0x470070u) {
        ctx->pc = 0x470074u;
        goto label_470074;
    }
    ctx->pc = 0x47006Cu;
    SET_GPR_U32(ctx, 31, 0x470074u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47006Cu, 0x470074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470074u;
label_470074:
    // 0x470074: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470078:
    // 0x470078: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x470078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_47007c:
    // 0x47007c: 0x40f809  jalr        $v0
label_470080:
    if (ctx->pc == 0x470080u) {
        ctx->pc = 0x470084u;
        goto label_470084;
    }
    ctx->pc = 0x47007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470084u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47007Cu, 0x470084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470084u;
label_470084:
    // 0x470084: 0xaf82b338  sw          $v0, -0x4CC8($gp)
    ctx->pc = 0x470084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947640), GPR_U32(ctx, 2));
label_470088:
    // 0x470088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_47008c:
    // 0x47008c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470090:
    if (ctx->pc == 0x470090u) {
        ctx->pc = 0x470094u;
        goto label_470094;
    }
    ctx->pc = 0x47008Cu;
    {
        const bool branch_taken_0x47008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47008c) {
            ctx->pc = 0x47009Cu;
            goto label_47009c;
        }
    }
    ctx->pc = 0x470094u;
label_470094:
    // 0x470094: 0xd  break       0
    ctx->pc = 0x470094u;
    runtime->handleBreak(rdram, ctx);
label_470098:
    // 0x470098: 0x0  nop
    ctx->pc = 0x470098u;
    // NOP
label_47009c:
    // 0x47009c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4700a0:
    // 0x4700a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4700a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4700a4:
    // 0x4700a4: 0xc11392c  jal         func_44E4B0
label_4700a8:
    if (ctx->pc == 0x4700A8u) {
        ctx->pc = 0x4700ACu;
        goto label_4700ac;
    }
    ctx->pc = 0x4700A4u;
    SET_GPR_U32(ctx, 31, 0x4700ACu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4700A4u, 0x4700ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4700ACu;
label_4700ac:
    // 0x4700ac: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x4700acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4700b0:
    // 0x4700b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4700b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4700b4:
    // 0x4700b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4700b8:
    if (ctx->pc == 0x4700B8u) {
        ctx->pc = 0x4700BCu;
        goto label_4700bc;
    }
    ctx->pc = 0x4700B4u;
    {
        const bool branch_taken_0x4700b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4700b4) {
            ctx->pc = 0x4700C8u;
            goto label_4700c8;
        }
    }
    ctx->pc = 0x4700BCu;
label_4700bc:
    // 0x4700bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4700bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4700c0:
    // 0x4700c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4700c4:
    if (ctx->pc == 0x4700C4u) {
        ctx->pc = 0x4700C8u;
        goto label_4700c8;
    }
    ctx->pc = 0x4700C0u;
    {
        const bool branch_taken_0x4700c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4700c0) {
            ctx->pc = 0x4700D8u;
            goto label_4700d8;
        }
    }
    ctx->pc = 0x4700C8u;
label_4700c8:
    // 0x4700c8: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x4700c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4700cc:
    // 0x4700cc: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x4700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4700d0:
    // 0x4700d0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4700d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4700d4:
    // 0x4700d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4700d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4700d8:
    // 0x4700d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4700d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4700dc:
    // 0x4700dc: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x4700dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_4700e0:
    // 0x4700e0: 0x3e00008  jr          $ra
label_4700e4:
    if (ctx->pc == 0x4700E4u) {
        ctx->pc = 0x4700E8u;
        goto label_4700e8;
    }
    ctx->pc = 0x4700E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4700E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4700E8u;
label_4700e8:
    // 0x4700e8: 0x0  nop
    ctx->pc = 0x4700e8u;
    // NOP
label_4700ec:
    // 0x4700ec: 0x0  nop
    ctx->pc = 0x4700ecu;
    // NOP
    ctx->pc = 0x4700f0u;
}
