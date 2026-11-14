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

// Function: sub_0045F980
// Address: 0x45f980 - 0x45fae0
void sub_0045F980_0x45f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F980_0x45f980");
#endif

    switch (ctx->pc) {
        case 0x45f980u: goto label_45f980;
        case 0x45f984u: goto label_45f984;
        case 0x45f988u: goto label_45f988;
        case 0x45f98cu: goto label_45f98c;
        case 0x45f990u: goto label_45f990;
        case 0x45f994u: goto label_45f994;
        case 0x45f998u: goto label_45f998;
        case 0x45f99cu: goto label_45f99c;
        case 0x45f9a0u: goto label_45f9a0;
        case 0x45f9a4u: goto label_45f9a4;
        case 0x45f9a8u: goto label_45f9a8;
        case 0x45f9acu: goto label_45f9ac;
        case 0x45f9b0u: goto label_45f9b0;
        case 0x45f9b4u: goto label_45f9b4;
        case 0x45f9b8u: goto label_45f9b8;
        case 0x45f9bcu: goto label_45f9bc;
        case 0x45f9c0u: goto label_45f9c0;
        case 0x45f9c4u: goto label_45f9c4;
        case 0x45f9c8u: goto label_45f9c8;
        case 0x45f9ccu: goto label_45f9cc;
        case 0x45f9d0u: goto label_45f9d0;
        case 0x45f9d4u: goto label_45f9d4;
        case 0x45f9d8u: goto label_45f9d8;
        case 0x45f9dcu: goto label_45f9dc;
        case 0x45f9e0u: goto label_45f9e0;
        case 0x45f9e4u: goto label_45f9e4;
        case 0x45f9e8u: goto label_45f9e8;
        case 0x45f9ecu: goto label_45f9ec;
        case 0x45f9f0u: goto label_45f9f0;
        case 0x45f9f4u: goto label_45f9f4;
        case 0x45f9f8u: goto label_45f9f8;
        case 0x45f9fcu: goto label_45f9fc;
        case 0x45fa00u: goto label_45fa00;
        case 0x45fa04u: goto label_45fa04;
        case 0x45fa08u: goto label_45fa08;
        case 0x45fa0cu: goto label_45fa0c;
        case 0x45fa10u: goto label_45fa10;
        case 0x45fa14u: goto label_45fa14;
        case 0x45fa18u: goto label_45fa18;
        case 0x45fa1cu: goto label_45fa1c;
        case 0x45fa20u: goto label_45fa20;
        case 0x45fa24u: goto label_45fa24;
        case 0x45fa28u: goto label_45fa28;
        case 0x45fa2cu: goto label_45fa2c;
        case 0x45fa30u: goto label_45fa30;
        case 0x45fa34u: goto label_45fa34;
        case 0x45fa38u: goto label_45fa38;
        case 0x45fa3cu: goto label_45fa3c;
        case 0x45fa40u: goto label_45fa40;
        case 0x45fa44u: goto label_45fa44;
        case 0x45fa48u: goto label_45fa48;
        case 0x45fa4cu: goto label_45fa4c;
        case 0x45fa50u: goto label_45fa50;
        case 0x45fa54u: goto label_45fa54;
        case 0x45fa58u: goto label_45fa58;
        case 0x45fa5cu: goto label_45fa5c;
        case 0x45fa60u: goto label_45fa60;
        case 0x45fa64u: goto label_45fa64;
        case 0x45fa68u: goto label_45fa68;
        case 0x45fa6cu: goto label_45fa6c;
        case 0x45fa70u: goto label_45fa70;
        case 0x45fa74u: goto label_45fa74;
        case 0x45fa78u: goto label_45fa78;
        case 0x45fa7cu: goto label_45fa7c;
        case 0x45fa80u: goto label_45fa80;
        case 0x45fa84u: goto label_45fa84;
        case 0x45fa88u: goto label_45fa88;
        case 0x45fa8cu: goto label_45fa8c;
        case 0x45fa90u: goto label_45fa90;
        case 0x45fa94u: goto label_45fa94;
        case 0x45fa98u: goto label_45fa98;
        case 0x45fa9cu: goto label_45fa9c;
        case 0x45faa0u: goto label_45faa0;
        case 0x45faa4u: goto label_45faa4;
        case 0x45faa8u: goto label_45faa8;
        case 0x45faacu: goto label_45faac;
        case 0x45fab0u: goto label_45fab0;
        case 0x45fab4u: goto label_45fab4;
        case 0x45fab8u: goto label_45fab8;
        case 0x45fabcu: goto label_45fabc;
        case 0x45fac0u: goto label_45fac0;
        case 0x45fac4u: goto label_45fac4;
        case 0x45fac8u: goto label_45fac8;
        case 0x45faccu: goto label_45facc;
        case 0x45fad0u: goto label_45fad0;
        case 0x45fad4u: goto label_45fad4;
        case 0x45fad8u: goto label_45fad8;
        case 0x45fadcu: goto label_45fadc;
        default: break;
    }

    ctx->pc = 0x45f980u;

label_45f980:
    // 0x45f980: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x45f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_45f984:
    // 0x45f984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45f988:
    // 0x45f988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45f98c:
    // 0x45f98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45f990:
    // 0x45f990: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x45f990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_45f994:
    // 0x45f994: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x45f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_45f998:
    // 0x45f998: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x45f998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_45f99c:
    // 0x45f99c: 0xafa70190  sw          $a3, 0x190($sp)
    ctx->pc = 0x45f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 7));
label_45f9a0:
    // 0x45f9a0: 0xafa801a0  sw          $t0, 0x1A0($sp)
    ctx->pc = 0x45f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 8));
label_45f9a4:
    // 0x45f9a4: 0xafa901b0  sw          $t1, 0x1B0($sp)
    ctx->pc = 0x45f9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 9));
label_45f9a8:
    // 0x45f9a8: 0x8fb10160  lw          $s1, 0x160($sp)
    ctx->pc = 0x45f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45f9ac:
    // 0x45f9ac: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45f9b0:
    // 0x45f9b0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x45f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_45f9b4:
    // 0x45f9b4: 0xafb10170  sw          $s1, 0x170($sp)
    ctx->pc = 0x45f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 17));
label_45f9b8:
    // 0x45f9b8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45f9bc:
    // 0x45f9bc: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x45f9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45f9c0:
    // 0x45f9c0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x45f9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_45f9c4:
    // 0x45f9c4: 0xc11818c  jal         func_460630
label_45f9c8:
    if (ctx->pc == 0x45F9C8u) {
        ctx->pc = 0x45F9CCu;
        goto label_45f9cc;
    }
    ctx->pc = 0x45F9C4u;
    SET_GPR_U32(ctx, 31, 0x45F9CCu);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45F9C4u, 0x45F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F9CCu;
label_45f9cc:
    // 0x45f9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45f9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45f9d0:
    // 0x45f9d0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x45f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45f9d4:
    // 0x45f9d4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45f9d8:
    if (ctx->pc == 0x45F9D8u) {
        ctx->pc = 0x45F9DCu;
        goto label_45f9dc;
    }
    ctx->pc = 0x45F9D4u;
    {
        const bool branch_taken_0x45f9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f9d4) {
            ctx->pc = 0x45FA80u;
            goto label_45fa80;
        }
    }
    ctx->pc = 0x45F9DCu;
label_45f9dc:
    // 0x45f9dc: 0x8f82b1b0  lw          $v0, -0x4E50($gp)
    ctx->pc = 0x45f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947248)));
label_45f9e0:
    // 0x45f9e0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45f9e4:
    if (ctx->pc == 0x45F9E4u) {
        ctx->pc = 0x45F9E8u;
        goto label_45f9e8;
    }
    ctx->pc = 0x45F9E0u;
    {
        const bool branch_taken_0x45f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f9e0) {
            ctx->pc = 0x45FA80u;
            goto label_45fa80;
        }
    }
    ctx->pc = 0x45F9E8u;
label_45f9e8:
    // 0x45f9e8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f9ec:
    // 0x45f9ec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f9f0:
    // 0x45f9f0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x45f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f9f4:
    // 0x45f9f4: 0xc115ee8  jal         func_457BA0
label_45f9f8:
    if (ctx->pc == 0x45F9F8u) {
        ctx->pc = 0x45F9FCu;
        goto label_45f9fc;
    }
    ctx->pc = 0x45F9F4u;
    SET_GPR_U32(ctx, 31, 0x45F9FCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F9F4u, 0x45F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F9FCu;
label_45f9fc:
    // 0x45f9fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45fa00:
    if (ctx->pc == 0x45FA00u) {
        ctx->pc = 0x45FA04u;
        goto label_45fa04;
    }
    ctx->pc = 0x45F9FCu;
    {
        const bool branch_taken_0x45f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f9fc) {
            ctx->pc = 0x45FA80u;
            goto label_45fa80;
        }
    }
    ctx->pc = 0x45FA04u;
label_45fa04:
    // 0x45fa04: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45fa08:
    // 0x45fa08: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45fa0c:
    if (ctx->pc == 0x45FA0Cu) {
        ctx->pc = 0x45FA10u;
        goto label_45fa10;
    }
    ctx->pc = 0x45FA08u;
    {
        const bool branch_taken_0x45fa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fa08) {
            ctx->pc = 0x45FA80u;
            goto label_45fa80;
        }
    }
    ctx->pc = 0x45FA10u;
label_45fa10:
    // 0x45fa10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fa14:
    // 0x45fa14: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45fa18:
    // 0x45fa18: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x45fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_45fa1c:
    // 0x45fa1c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45fa1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45fa20:
    // 0x45fa20: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45fa20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45fa24:
    // 0x45fa24: 0x240803dc  addiu       $t0, $zero, 0x3DC
    ctx->pc = 0x45fa24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 988));
label_45fa28:
    // 0x45fa28: 0x2789b1b8  addiu       $t1, $gp, -0x4E48
    ctx->pc = 0x45fa28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947256));
label_45fa2c:
    // 0x45fa2c: 0xc113940  jal         func_44E500
label_45fa30:
    if (ctx->pc == 0x45FA30u) {
        ctx->pc = 0x45FA34u;
        goto label_45fa34;
    }
    ctx->pc = 0x45FA2Cu;
    SET_GPR_U32(ctx, 31, 0x45FA34u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45FA2Cu, 0x45FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FA34u;
label_45fa34:
    // 0x45fa34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fa38:
    // 0x45fa38: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45fa3c:
    // 0x45fa3c: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x45fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_45fa40:
    // 0x45fa40: 0xc115c24  jal         func_457090
label_45fa44:
    if (ctx->pc == 0x45FA44u) {
        ctx->pc = 0x45FA48u;
        goto label_45fa48;
    }
    ctx->pc = 0x45FA40u;
    SET_GPR_U32(ctx, 31, 0x45FA48u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45FA40u, 0x45FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FA48u;
label_45fa48:
    // 0x45fa48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fa4c:
    // 0x45fa4c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45fa50:
    // 0x45fa50: 0x40f809  jalr        $v0
label_45fa54:
    if (ctx->pc == 0x45FA54u) {
        ctx->pc = 0x45FA58u;
        goto label_45fa58;
    }
    ctx->pc = 0x45FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45FA58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FA50u, 0x45FA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45FA58u;
label_45fa58:
    // 0x45fa58: 0xaf82b1b0  sw          $v0, -0x4E50($gp)
    ctx->pc = 0x45fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947248), GPR_U32(ctx, 2));
label_45fa5c:
    // 0x45fa5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_45fa60:
    // 0x45fa60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45fa64:
    if (ctx->pc == 0x45FA64u) {
        ctx->pc = 0x45FA68u;
        goto label_45fa68;
    }
    ctx->pc = 0x45FA60u;
    {
        const bool branch_taken_0x45fa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fa60) {
            ctx->pc = 0x45FA70u;
            goto label_45fa70;
        }
    }
    ctx->pc = 0x45FA68u;
label_45fa68:
    // 0x45fa68: 0xd  break       0
    ctx->pc = 0x45fa68u;
    runtime->handleBreak(rdram, ctx);
label_45fa6c:
    // 0x45fa6c: 0x0  nop
    ctx->pc = 0x45fa6cu;
    // NOP
label_45fa70:
    // 0x45fa70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fa74:
    // 0x45fa74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fa78:
    // 0x45fa78: 0xc11392c  jal         func_44E4B0
label_45fa7c:
    if (ctx->pc == 0x45FA7Cu) {
        ctx->pc = 0x45FA80u;
        goto label_45fa80;
    }
    ctx->pc = 0x45FA78u;
    SET_GPR_U32(ctx, 31, 0x45FA80u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45FA78u, 0x45FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FA80u;
label_45fa80:
    // 0x45fa80: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x45fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45fa84:
    // 0x45fa84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45fa88:
    // 0x45fa88: 0xac434e24  sw          $v1, 0x4E24($v0)
    ctx->pc = 0x45fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20004), GPR_U32(ctx, 3));
label_45fa8c:
    // 0x45fa8c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45fa90:
    // 0x45fa90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45fa94:
    // 0x45fa94: 0xac434e38  sw          $v1, 0x4E38($v0)
    ctx->pc = 0x45fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20024), GPR_U32(ctx, 3));
label_45fa98:
    // 0x45fa98: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45fa9c:
    // 0x45fa9c: 0x24844e3c  addiu       $a0, $a0, 0x4E3C
    ctx->pc = 0x45fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20028));
label_45faa0:
    // 0x45faa0: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x45faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45faa4:
    // 0x45faa4: 0xc0bc5c6  jal         func_2F1718
label_45faa8:
    if (ctx->pc == 0x45FAA8u) {
        ctx->pc = 0x45FAACu;
        goto label_45faac;
    }
    ctx->pc = 0x45FAA4u;
    SET_GPR_U32(ctx, 31, 0x45FAACu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45FAA4u, 0x45FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FAACu;
label_45faac:
    // 0x45faac: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45faacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45fab0:
    // 0x45fab0: 0x24844e5c  addiu       $a0, $a0, 0x4E5C
    ctx->pc = 0x45fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20060));
label_45fab4:
    // 0x45fab4: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x45fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45fab8:
    // 0x45fab8: 0xc0bc5c6  jal         func_2F1718
label_45fabc:
    if (ctx->pc == 0x45FABCu) {
        ctx->pc = 0x45FAC0u;
        goto label_45fac0;
    }
    ctx->pc = 0x45FAB8u;
    SET_GPR_U32(ctx, 31, 0x45FAC0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45FAB8u, 0x45FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FAC0u;
label_45fac0:
    // 0x45fac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45fac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45fac4:
    // 0x45fac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45fac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45fac8:
    // 0x45fac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45fac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45facc:
    // 0x45facc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45faccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45fad0:
    // 0x45fad0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x45fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45fad4:
    // 0x45fad4: 0x3e00008  jr          $ra
label_45fad8:
    if (ctx->pc == 0x45FAD8u) {
        ctx->pc = 0x45FADCu;
        goto label_45fadc;
    }
    ctx->pc = 0x45FAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45FADCu;
label_45fadc:
    // 0x45fadc: 0x0  nop
    ctx->pc = 0x45fadcu;
    // NOP
    ctx->pc = 0x45fae0u;
}
