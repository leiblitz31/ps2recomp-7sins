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

// Function: sub_0048AE10
// Address: 0x48ae10 - 0x48af40
void sub_0048AE10_0x48ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AE10_0x48ae10");
#endif

    switch (ctx->pc) {
        case 0x48ae10u: goto label_48ae10;
        case 0x48ae14u: goto label_48ae14;
        case 0x48ae18u: goto label_48ae18;
        case 0x48ae1cu: goto label_48ae1c;
        case 0x48ae20u: goto label_48ae20;
        case 0x48ae24u: goto label_48ae24;
        case 0x48ae28u: goto label_48ae28;
        case 0x48ae2cu: goto label_48ae2c;
        case 0x48ae30u: goto label_48ae30;
        case 0x48ae34u: goto label_48ae34;
        case 0x48ae38u: goto label_48ae38;
        case 0x48ae3cu: goto label_48ae3c;
        case 0x48ae40u: goto label_48ae40;
        case 0x48ae44u: goto label_48ae44;
        case 0x48ae48u: goto label_48ae48;
        case 0x48ae4cu: goto label_48ae4c;
        case 0x48ae50u: goto label_48ae50;
        case 0x48ae54u: goto label_48ae54;
        case 0x48ae58u: goto label_48ae58;
        case 0x48ae5cu: goto label_48ae5c;
        case 0x48ae60u: goto label_48ae60;
        case 0x48ae64u: goto label_48ae64;
        case 0x48ae68u: goto label_48ae68;
        case 0x48ae6cu: goto label_48ae6c;
        case 0x48ae70u: goto label_48ae70;
        case 0x48ae74u: goto label_48ae74;
        case 0x48ae78u: goto label_48ae78;
        case 0x48ae7cu: goto label_48ae7c;
        case 0x48ae80u: goto label_48ae80;
        case 0x48ae84u: goto label_48ae84;
        case 0x48ae88u: goto label_48ae88;
        case 0x48ae8cu: goto label_48ae8c;
        case 0x48ae90u: goto label_48ae90;
        case 0x48ae94u: goto label_48ae94;
        case 0x48ae98u: goto label_48ae98;
        case 0x48ae9cu: goto label_48ae9c;
        case 0x48aea0u: goto label_48aea0;
        case 0x48aea4u: goto label_48aea4;
        case 0x48aea8u: goto label_48aea8;
        case 0x48aeacu: goto label_48aeac;
        case 0x48aeb0u: goto label_48aeb0;
        case 0x48aeb4u: goto label_48aeb4;
        case 0x48aeb8u: goto label_48aeb8;
        case 0x48aebcu: goto label_48aebc;
        case 0x48aec0u: goto label_48aec0;
        case 0x48aec4u: goto label_48aec4;
        case 0x48aec8u: goto label_48aec8;
        case 0x48aeccu: goto label_48aecc;
        case 0x48aed0u: goto label_48aed0;
        case 0x48aed4u: goto label_48aed4;
        case 0x48aed8u: goto label_48aed8;
        case 0x48aedcu: goto label_48aedc;
        case 0x48aee0u: goto label_48aee0;
        case 0x48aee4u: goto label_48aee4;
        case 0x48aee8u: goto label_48aee8;
        case 0x48aeecu: goto label_48aeec;
        case 0x48aef0u: goto label_48aef0;
        case 0x48aef4u: goto label_48aef4;
        case 0x48aef8u: goto label_48aef8;
        case 0x48aefcu: goto label_48aefc;
        case 0x48af00u: goto label_48af00;
        case 0x48af04u: goto label_48af04;
        case 0x48af08u: goto label_48af08;
        case 0x48af0cu: goto label_48af0c;
        case 0x48af10u: goto label_48af10;
        case 0x48af14u: goto label_48af14;
        case 0x48af18u: goto label_48af18;
        case 0x48af1cu: goto label_48af1c;
        case 0x48af20u: goto label_48af20;
        case 0x48af24u: goto label_48af24;
        case 0x48af28u: goto label_48af28;
        case 0x48af2cu: goto label_48af2c;
        case 0x48af30u: goto label_48af30;
        case 0x48af34u: goto label_48af34;
        case 0x48af38u: goto label_48af38;
        case 0x48af3cu: goto label_48af3c;
        default: break;
    }

    ctx->pc = 0x48ae10u;

label_48ae10:
    // 0x48ae10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x48ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_48ae14:
    // 0x48ae14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48ae18:
    // 0x48ae18: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48ae1c:
    // 0x48ae1c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x48ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_48ae20:
    // 0x48ae20: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ae24:
    // 0x48ae24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48ae24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48ae28:
    // 0x48ae28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48ae2c:
    // 0x48ae2c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48ae30:
    if (ctx->pc == 0x48AE30u) {
        ctx->pc = 0x48AE34u;
        goto label_48ae34;
    }
    ctx->pc = 0x48AE2Cu;
    {
        const bool branch_taken_0x48ae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ae2c) {
            ctx->pc = 0x48AEDCu;
            goto label_48aedc;
        }
    }
    ctx->pc = 0x48AE34u;
label_48ae34:
    // 0x48ae34: 0x8f82b62c  lw          $v0, -0x49D4($gp)
    ctx->pc = 0x48ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948396)));
label_48ae38:
    // 0x48ae38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48ae3c:
    if (ctx->pc == 0x48AE3Cu) {
        ctx->pc = 0x48AE40u;
        goto label_48ae40;
    }
    ctx->pc = 0x48AE38u;
    {
        const bool branch_taken_0x48ae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ae38) {
            ctx->pc = 0x48AEDCu;
            goto label_48aedc;
        }
    }
    ctx->pc = 0x48AE40u;
label_48ae40:
    // 0x48ae40: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48ae44:
    // 0x48ae44: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48ae48:
    // 0x48ae48: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48ae4c:
    // 0x48ae4c: 0xc115ee8  jal         func_457BA0
label_48ae50:
    if (ctx->pc == 0x48AE50u) {
        ctx->pc = 0x48AE54u;
        goto label_48ae54;
    }
    ctx->pc = 0x48AE4Cu;
    SET_GPR_U32(ctx, 31, 0x48AE54u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48AE4Cu, 0x48AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AE54u;
label_48ae54:
    // 0x48ae54: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48ae58:
    if (ctx->pc == 0x48AE58u) {
        ctx->pc = 0x48AE5Cu;
        goto label_48ae5c;
    }
    ctx->pc = 0x48AE54u;
    {
        const bool branch_taken_0x48ae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ae54) {
            ctx->pc = 0x48AEDCu;
            goto label_48aedc;
        }
    }
    ctx->pc = 0x48AE5Cu;
label_48ae5c:
    // 0x48ae5c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48ae60:
    // 0x48ae60: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48ae64:
    if (ctx->pc == 0x48AE64u) {
        ctx->pc = 0x48AE68u;
        goto label_48ae68;
    }
    ctx->pc = 0x48AE60u;
    {
        const bool branch_taken_0x48ae60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ae60) {
            ctx->pc = 0x48AEDCu;
            goto label_48aedc;
        }
    }
    ctx->pc = 0x48AE68u;
label_48ae68:
    // 0x48ae68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48ae6c:
    // 0x48ae6c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48ae70:
    // 0x48ae70: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48ae74:
    // 0x48ae74: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48ae78:
    // 0x48ae78: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48ae78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48ae7c:
    // 0x48ae7c: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x48ae7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_48ae80:
    // 0x48ae80: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48ae80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48ae84:
    // 0x48ae84: 0x25294720  addiu       $t1, $t1, 0x4720
    ctx->pc = 0x48ae84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18208));
label_48ae88:
    // 0x48ae88: 0xc113940  jal         func_44E500
label_48ae8c:
    if (ctx->pc == 0x48AE8Cu) {
        ctx->pc = 0x48AE90u;
        goto label_48ae90;
    }
    ctx->pc = 0x48AE88u;
    SET_GPR_U32(ctx, 31, 0x48AE90u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48AE88u, 0x48AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AE90u;
label_48ae90:
    // 0x48ae90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48ae94:
    // 0x48ae94: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48ae98:
    // 0x48ae98: 0x24a54740  addiu       $a1, $a1, 0x4740
    ctx->pc = 0x48ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18240));
label_48ae9c:
    // 0x48ae9c: 0xc115c24  jal         func_457090
label_48aea0:
    if (ctx->pc == 0x48AEA0u) {
        ctx->pc = 0x48AEA4u;
        goto label_48aea4;
    }
    ctx->pc = 0x48AE9Cu;
    SET_GPR_U32(ctx, 31, 0x48AEA4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48AE9Cu, 0x48AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AEA4u;
label_48aea4:
    // 0x48aea4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48aea8:
    // 0x48aea8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48aeac:
    // 0x48aeac: 0x40f809  jalr        $v0
label_48aeb0:
    if (ctx->pc == 0x48AEB0u) {
        ctx->pc = 0x48AEB4u;
        goto label_48aeb4;
    }
    ctx->pc = 0x48AEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48AEB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AEACu, 0x48AEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48AEB4u;
label_48aeb4:
    // 0x48aeb4: 0xaf82b62c  sw          $v0, -0x49D4($gp)
    ctx->pc = 0x48aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948396), GPR_U32(ctx, 2));
label_48aeb8:
    // 0x48aeb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48aebc:
    // 0x48aebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48aec0:
    if (ctx->pc == 0x48AEC0u) {
        ctx->pc = 0x48AEC4u;
        goto label_48aec4;
    }
    ctx->pc = 0x48AEBCu;
    {
        const bool branch_taken_0x48aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48aebc) {
            ctx->pc = 0x48AECCu;
            goto label_48aecc;
        }
    }
    ctx->pc = 0x48AEC4u;
label_48aec4:
    // 0x48aec4: 0xd  break       0
    ctx->pc = 0x48aec4u;
    runtime->handleBreak(rdram, ctx);
label_48aec8:
    // 0x48aec8: 0x0  nop
    ctx->pc = 0x48aec8u;
    // NOP
label_48aecc:
    // 0x48aecc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48aed0:
    // 0x48aed0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48aed4:
    // 0x48aed4: 0xc11392c  jal         func_44E4B0
label_48aed8:
    if (ctx->pc == 0x48AED8u) {
        ctx->pc = 0x48AEDCu;
        goto label_48aedc;
    }
    ctx->pc = 0x48AED4u;
    SET_GPR_U32(ctx, 31, 0x48AEDCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48AED4u, 0x48AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AEDCu;
label_48aedc:
    // 0x48aedc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x48aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48aee0:
    // 0x48aee0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x48aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48aee4:
    // 0x48aee4: 0xc0bc5c6  jal         func_2F1718
label_48aee8:
    if (ctx->pc == 0x48AEE8u) {
        ctx->pc = 0x48AEECu;
        goto label_48aeec;
    }
    ctx->pc = 0x48AEE4u;
    SET_GPR_U32(ctx, 31, 0x48AEECu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x48AEE4u, 0x48AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AEECu;
label_48aeec:
    // 0x48aeec: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48aef0:
    // 0x48aef0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x48aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48aef4:
    // 0x48aef4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x48aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_48aef8:
    // 0x48aef8: 0xc1229b8  jal         func_48A6E0
label_48aefc:
    if (ctx->pc == 0x48AEFCu) {
        ctx->pc = 0x48AF00u;
        goto label_48af00;
    }
    ctx->pc = 0x48AEF8u;
    SET_GPR_U32(ctx, 31, 0x48AF00u);
    ctx->pc = 0x48A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6E0u, 0x48AEF8u, 0x48AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AF00u;
label_48af00:
    // 0x48af00: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48af04:
    // 0x48af04: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x48af04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48af08:
    // 0x48af08: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x48af08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_48af0c:
    // 0x48af0c: 0xc1229f8  jal         func_48A7E0
label_48af10:
    if (ctx->pc == 0x48AF10u) {
        ctx->pc = 0x48AF14u;
        goto label_48af14;
    }
    ctx->pc = 0x48AF0Cu;
    SET_GPR_U32(ctx, 31, 0x48AF14u);
    ctx->pc = 0x48A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A7E0u, 0x48AF0Cu, 0x48AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AF14u;
label_48af14:
    // 0x48af14: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48af18:
    // 0x48af18: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x48af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48af1c:
    // 0x48af1c: 0xc44c003c  lwc1        $f12, 0x3C($v0)
    ctx->pc = 0x48af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48af20:
    // 0x48af20: 0xc122b40  jal         func_48AD00
label_48af24:
    if (ctx->pc == 0x48AF24u) {
        ctx->pc = 0x48AF28u;
        goto label_48af28;
    }
    ctx->pc = 0x48AF20u;
    SET_GPR_U32(ctx, 31, 0x48AF28u);
    ctx->pc = 0x48AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48AD00u, 0x48AF20u, 0x48AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AF28u;
label_48af28:
    // 0x48af28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48af2c:
    // 0x48af2c: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x48af2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48af30:
    // 0x48af30: 0x3e00008  jr          $ra
label_48af34:
    if (ctx->pc == 0x48AF34u) {
        ctx->pc = 0x48AF38u;
        goto label_48af38;
    }
    ctx->pc = 0x48AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48AF38u;
label_48af38:
    // 0x48af38: 0x0  nop
    ctx->pc = 0x48af38u;
    // NOP
label_48af3c:
    // 0x48af3c: 0x0  nop
    ctx->pc = 0x48af3cu;
    // NOP
    ctx->pc = 0x48af40u;
}
