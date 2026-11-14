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

// Function: sub_0049ADF8
// Address: 0x49adf8 - 0x49b108
void sub_0049ADF8_0x49adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ADF8_0x49adf8");
#endif

    switch (ctx->pc) {
        case 0x49adf8u: goto label_49adf8;
        case 0x49adfcu: goto label_49adfc;
        case 0x49ae00u: goto label_49ae00;
        case 0x49ae04u: goto label_49ae04;
        case 0x49ae08u: goto label_49ae08;
        case 0x49ae0cu: goto label_49ae0c;
        case 0x49ae10u: goto label_49ae10;
        case 0x49ae14u: goto label_49ae14;
        case 0x49ae18u: goto label_49ae18;
        case 0x49ae1cu: goto label_49ae1c;
        case 0x49ae20u: goto label_49ae20;
        case 0x49ae24u: goto label_49ae24;
        case 0x49ae28u: goto label_49ae28;
        case 0x49ae2cu: goto label_49ae2c;
        case 0x49ae30u: goto label_49ae30;
        case 0x49ae34u: goto label_49ae34;
        case 0x49ae38u: goto label_49ae38;
        case 0x49ae3cu: goto label_49ae3c;
        case 0x49ae40u: goto label_49ae40;
        case 0x49ae44u: goto label_49ae44;
        case 0x49ae48u: goto label_49ae48;
        case 0x49ae4cu: goto label_49ae4c;
        case 0x49ae50u: goto label_49ae50;
        case 0x49ae54u: goto label_49ae54;
        case 0x49ae58u: goto label_49ae58;
        case 0x49ae5cu: goto label_49ae5c;
        case 0x49ae60u: goto label_49ae60;
        case 0x49ae64u: goto label_49ae64;
        case 0x49ae68u: goto label_49ae68;
        case 0x49ae6cu: goto label_49ae6c;
        case 0x49ae70u: goto label_49ae70;
        case 0x49ae74u: goto label_49ae74;
        case 0x49ae78u: goto label_49ae78;
        case 0x49ae7cu: goto label_49ae7c;
        case 0x49ae80u: goto label_49ae80;
        case 0x49ae84u: goto label_49ae84;
        case 0x49ae88u: goto label_49ae88;
        case 0x49ae8cu: goto label_49ae8c;
        case 0x49ae90u: goto label_49ae90;
        case 0x49ae94u: goto label_49ae94;
        case 0x49ae98u: goto label_49ae98;
        case 0x49ae9cu: goto label_49ae9c;
        case 0x49aea0u: goto label_49aea0;
        case 0x49aea4u: goto label_49aea4;
        case 0x49aea8u: goto label_49aea8;
        case 0x49aeacu: goto label_49aeac;
        case 0x49aeb0u: goto label_49aeb0;
        case 0x49aeb4u: goto label_49aeb4;
        case 0x49aeb8u: goto label_49aeb8;
        case 0x49aebcu: goto label_49aebc;
        case 0x49aec0u: goto label_49aec0;
        case 0x49aec4u: goto label_49aec4;
        case 0x49aec8u: goto label_49aec8;
        case 0x49aeccu: goto label_49aecc;
        case 0x49aed0u: goto label_49aed0;
        case 0x49aed4u: goto label_49aed4;
        case 0x49aed8u: goto label_49aed8;
        case 0x49aedcu: goto label_49aedc;
        case 0x49aee0u: goto label_49aee0;
        case 0x49aee4u: goto label_49aee4;
        case 0x49aee8u: goto label_49aee8;
        case 0x49aeecu: goto label_49aeec;
        case 0x49aef0u: goto label_49aef0;
        case 0x49aef4u: goto label_49aef4;
        case 0x49aef8u: goto label_49aef8;
        case 0x49aefcu: goto label_49aefc;
        case 0x49af00u: goto label_49af00;
        case 0x49af04u: goto label_49af04;
        case 0x49af08u: goto label_49af08;
        case 0x49af0cu: goto label_49af0c;
        case 0x49af10u: goto label_49af10;
        case 0x49af14u: goto label_49af14;
        case 0x49af18u: goto label_49af18;
        case 0x49af1cu: goto label_49af1c;
        case 0x49af20u: goto label_49af20;
        case 0x49af24u: goto label_49af24;
        case 0x49af28u: goto label_49af28;
        case 0x49af2cu: goto label_49af2c;
        case 0x49af30u: goto label_49af30;
        case 0x49af34u: goto label_49af34;
        case 0x49af38u: goto label_49af38;
        case 0x49af3cu: goto label_49af3c;
        case 0x49af40u: goto label_49af40;
        case 0x49af44u: goto label_49af44;
        case 0x49af48u: goto label_49af48;
        case 0x49af4cu: goto label_49af4c;
        case 0x49af50u: goto label_49af50;
        case 0x49af54u: goto label_49af54;
        case 0x49af58u: goto label_49af58;
        case 0x49af5cu: goto label_49af5c;
        case 0x49af60u: goto label_49af60;
        case 0x49af64u: goto label_49af64;
        case 0x49af68u: goto label_49af68;
        case 0x49af6cu: goto label_49af6c;
        case 0x49af70u: goto label_49af70;
        case 0x49af74u: goto label_49af74;
        case 0x49af78u: goto label_49af78;
        case 0x49af7cu: goto label_49af7c;
        case 0x49af80u: goto label_49af80;
        case 0x49af84u: goto label_49af84;
        case 0x49af88u: goto label_49af88;
        case 0x49af8cu: goto label_49af8c;
        case 0x49af90u: goto label_49af90;
        case 0x49af94u: goto label_49af94;
        case 0x49af98u: goto label_49af98;
        case 0x49af9cu: goto label_49af9c;
        case 0x49afa0u: goto label_49afa0;
        case 0x49afa4u: goto label_49afa4;
        case 0x49afa8u: goto label_49afa8;
        case 0x49afacu: goto label_49afac;
        case 0x49afb0u: goto label_49afb0;
        case 0x49afb4u: goto label_49afb4;
        case 0x49afb8u: goto label_49afb8;
        case 0x49afbcu: goto label_49afbc;
        case 0x49afc0u: goto label_49afc0;
        case 0x49afc4u: goto label_49afc4;
        case 0x49afc8u: goto label_49afc8;
        case 0x49afccu: goto label_49afcc;
        case 0x49afd0u: goto label_49afd0;
        case 0x49afd4u: goto label_49afd4;
        case 0x49afd8u: goto label_49afd8;
        case 0x49afdcu: goto label_49afdc;
        case 0x49afe0u: goto label_49afe0;
        case 0x49afe4u: goto label_49afe4;
        case 0x49afe8u: goto label_49afe8;
        case 0x49afecu: goto label_49afec;
        case 0x49aff0u: goto label_49aff0;
        case 0x49aff4u: goto label_49aff4;
        case 0x49aff8u: goto label_49aff8;
        case 0x49affcu: goto label_49affc;
        case 0x49b000u: goto label_49b000;
        case 0x49b004u: goto label_49b004;
        case 0x49b008u: goto label_49b008;
        case 0x49b00cu: goto label_49b00c;
        case 0x49b010u: goto label_49b010;
        case 0x49b014u: goto label_49b014;
        case 0x49b018u: goto label_49b018;
        case 0x49b01cu: goto label_49b01c;
        case 0x49b020u: goto label_49b020;
        case 0x49b024u: goto label_49b024;
        case 0x49b028u: goto label_49b028;
        case 0x49b02cu: goto label_49b02c;
        case 0x49b030u: goto label_49b030;
        case 0x49b034u: goto label_49b034;
        case 0x49b038u: goto label_49b038;
        case 0x49b03cu: goto label_49b03c;
        case 0x49b040u: goto label_49b040;
        case 0x49b044u: goto label_49b044;
        case 0x49b048u: goto label_49b048;
        case 0x49b04cu: goto label_49b04c;
        case 0x49b050u: goto label_49b050;
        case 0x49b054u: goto label_49b054;
        case 0x49b058u: goto label_49b058;
        case 0x49b05cu: goto label_49b05c;
        case 0x49b060u: goto label_49b060;
        case 0x49b064u: goto label_49b064;
        case 0x49b068u: goto label_49b068;
        case 0x49b06cu: goto label_49b06c;
        case 0x49b070u: goto label_49b070;
        case 0x49b074u: goto label_49b074;
        case 0x49b078u: goto label_49b078;
        case 0x49b07cu: goto label_49b07c;
        case 0x49b080u: goto label_49b080;
        case 0x49b084u: goto label_49b084;
        case 0x49b088u: goto label_49b088;
        case 0x49b08cu: goto label_49b08c;
        case 0x49b090u: goto label_49b090;
        case 0x49b094u: goto label_49b094;
        case 0x49b098u: goto label_49b098;
        case 0x49b09cu: goto label_49b09c;
        case 0x49b0a0u: goto label_49b0a0;
        case 0x49b0a4u: goto label_49b0a4;
        case 0x49b0a8u: goto label_49b0a8;
        case 0x49b0acu: goto label_49b0ac;
        case 0x49b0b0u: goto label_49b0b0;
        case 0x49b0b4u: goto label_49b0b4;
        case 0x49b0b8u: goto label_49b0b8;
        case 0x49b0bcu: goto label_49b0bc;
        case 0x49b0c0u: goto label_49b0c0;
        case 0x49b0c4u: goto label_49b0c4;
        case 0x49b0c8u: goto label_49b0c8;
        case 0x49b0ccu: goto label_49b0cc;
        case 0x49b0d0u: goto label_49b0d0;
        case 0x49b0d4u: goto label_49b0d4;
        case 0x49b0d8u: goto label_49b0d8;
        case 0x49b0dcu: goto label_49b0dc;
        case 0x49b0e0u: goto label_49b0e0;
        case 0x49b0e4u: goto label_49b0e4;
        case 0x49b0e8u: goto label_49b0e8;
        case 0x49b0ecu: goto label_49b0ec;
        case 0x49b0f0u: goto label_49b0f0;
        case 0x49b0f4u: goto label_49b0f4;
        case 0x49b0f8u: goto label_49b0f8;
        case 0x49b0fcu: goto label_49b0fc;
        case 0x49b100u: goto label_49b100;
        case 0x49b104u: goto label_49b104;
        default: break;
    }

    ctx->pc = 0x49adf8u;

label_49adf8:
    // 0x49adf8: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x49adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_49adfc:
    // 0x49adfc: 0x30c60007  andi        $a2, $a2, 0x7
    ctx->pc = 0x49adfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_49ae00:
    // 0x49ae00: 0x7fb002b0  sq          $s0, 0x2B0($sp)
    ctx->pc = 0x49ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 16));
label_49ae04:
    // 0x49ae04: 0x7fb102a0  sq          $s1, 0x2A0($sp)
    ctx->pc = 0x49ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 17));
label_49ae08:
    // 0x49ae08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49ae08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ae0c:
    // 0x49ae0c: 0x7fb30280  sq          $s3, 0x280($sp)
    ctx->pc = 0x49ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 19));
label_49ae10:
    // 0x49ae10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49ae10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ae14:
    // 0x49ae14: 0x7fb40270  sq          $s4, 0x270($sp)
    ctx->pc = 0x49ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 20));
label_49ae18:
    // 0x49ae18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x49ae18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49ae1c:
    // 0x49ae1c: 0x7fb70240  sq          $s7, 0x240($sp)
    ctx->pc = 0x49ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 23));
label_49ae20:
    // 0x49ae20: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x49ae20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49ae24:
    // 0x49ae24: 0x7fbe0230  sq          $fp, 0x230($sp)
    ctx->pc = 0x49ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 30));
label_49ae28:
    // 0x49ae28: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x49ae28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49ae2c:
    // 0x49ae2c: 0x8f82b7b4  lw          $v0, -0x484C($gp)
    ctx->pc = 0x49ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
label_49ae30:
    // 0x49ae30: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x49ae30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_49ae34:
    // 0x49ae34: 0x7fb20290  sq          $s2, 0x290($sp)
    ctx->pc = 0x49ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 18));
label_49ae38:
    // 0x49ae38: 0x7fb50260  sq          $s5, 0x260($sp)
    ctx->pc = 0x49ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 21));
label_49ae3c:
    // 0x49ae3c: 0x7fb60250  sq          $s6, 0x250($sp)
    ctx->pc = 0x49ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 22));
label_49ae40:
    // 0x49ae40: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x49ae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
label_49ae44:
    // 0x49ae44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_49ae48:
    if (ctx->pc == 0x49AE48u) {
        ctx->pc = 0x49AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE44u;
        // 0x49ae48: 0xafa60214  sw          $a2, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE4Cu;
        goto label_49ae4c;
    }
    ctx->pc = 0x49AE44u;
    {
        const bool branch_taken_0x49ae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE44u;
        // 0x49ae48: 0xafa60214  sw          $a2, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae44) {
            ctx->pc = 0x49AE74u;
            goto label_49ae74;
        }
    }
    ctx->pc = 0x49AE4Cu;
label_49ae4c:
    // 0x49ae4c: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_49ae50:
    if (ctx->pc == 0x49AE50u) {
        ctx->pc = 0x49AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE4Cu;
        // 0x49ae50: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE54u;
        goto label_49ae54;
    }
    ctx->pc = 0x49AE4Cu;
    {
        const bool branch_taken_0x49ae4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ae4c) {
            ctx->pc = 0x49AE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AE4Cu;
            // 0x49ae50: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AE64u;
            goto label_49ae64;
        }
    }
    ctx->pc = 0x49AE54u;
label_49ae54:
    // 0x49ae54: 0xc127114  jal         func_49C450
label_49ae58:
    if (ctx->pc == 0x49AE58u) {
        ctx->pc = 0x49AE5Cu;
        goto label_49ae5c;
    }
    ctx->pc = 0x49AE54u;
    SET_GPR_U32(ctx, 31, 0x49AE5Cu);
    ctx->pc = 0x49C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C450u, 0x49AE54u, 0x49AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AE5Cu;
label_49ae5c:
    // 0x49ae5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x49ae5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49ae60:
    // 0x49ae60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_49ae64:
    // 0x49ae64: 0xc126884  jal         func_49A210
label_49ae68:
    if (ctx->pc == 0x49AE68u) {
        ctx->pc = 0x49AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE64u;
        // 0x49ae68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE6Cu;
        goto label_49ae6c;
    }
    ctx->pc = 0x49AE64u;
    SET_GPR_U32(ctx, 31, 0x49AE6Cu);
    ctx->pc = 0x49AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AE64u;
    // 0x49ae68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A210u, 0x49AE64u, 0x49AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AE6Cu;
label_49ae6c:
    // 0x49ae6c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_49ae70:
    if (ctx->pc == 0x49AE70u) {
        ctx->pc = 0x49AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE6Cu;
        // 0x49ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE74u;
        goto label_49ae74;
    }
    ctx->pc = 0x49AE6Cu;
    {
        const bool branch_taken_0x49ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE6Cu;
        // 0x49ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae6c) {
            ctx->pc = 0x49B0D4u;
            goto label_49b0d4;
        }
    }
    ctx->pc = 0x49AE74u;
label_49ae74:
    // 0x49ae74: 0x16800014  bnez        $s4, . + 4 + (0x14 << 2)
label_49ae78:
    if (ctx->pc == 0x49AE78u) {
        ctx->pc = 0x49AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE74u;
        // 0x49ae78: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE7Cu;
        goto label_49ae7c;
    }
    ctx->pc = 0x49AE74u;
    {
        const bool branch_taken_0x49ae74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE74u;
        // 0x49ae78: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae74) {
            ctx->pc = 0x49AEC8u;
            goto label_49aec8;
        }
    }
    ctx->pc = 0x49AE7Cu;
label_49ae7c:
    // 0x49ae7c: 0x96220044  lhu         $v0, 0x44($s1)
    ctx->pc = 0x49ae7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_49ae80:
    // 0x49ae80: 0x2c420201  sltiu       $v0, $v0, 0x201
    ctx->pc = 0x49ae80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
label_49ae84:
    // 0x49ae84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_49ae88:
    if (ctx->pc == 0x49AE88u) {
        ctx->pc = 0x49AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE84u;
        // 0x49ae88: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE8Cu;
        goto label_49ae8c;
    }
    ctx->pc = 0x49AE84u;
    {
        const bool branch_taken_0x49ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE84u;
        // 0x49ae88: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae84) {
            ctx->pc = 0x49AEA8u;
            goto label_49aea8;
        }
    }
    ctx->pc = 0x49AE8Cu;
label_49ae8c:
    // 0x49ae8c: 0x96240044  lhu         $a0, 0x44($s1)
    ctx->pc = 0x49ae8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_49ae90:
    // 0x49ae90: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x49ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_49ae94:
    // 0x49ae94: 0xc127ca4  jal         func_49F290
label_49ae98:
    if (ctx->pc == 0x49AE98u) {
        ctx->pc = 0x49AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE94u;
        // 0x49ae98: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AE9Cu;
        goto label_49ae9c;
    }
    ctx->pc = 0x49AE94u;
    SET_GPR_U32(ctx, 31, 0x49AE9Cu);
    ctx->pc = 0x49AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AE94u;
    // 0x49ae98: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x49AE94u, 0x49AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AE9Cu;
label_49ae9c:
    // 0x49ae9c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x49ae9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49aea0:
    // 0x49aea0: 0x12c0007d  beqz        $s6, . + 4 + (0x7D << 2)
label_49aea4:
    if (ctx->pc == 0x49AEA4u) {
        ctx->pc = 0x49AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEA0u;
        // 0x49aea4: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AEA8u;
        goto label_49aea8;
    }
    ctx->pc = 0x49AEA0u;
    {
        const bool branch_taken_0x49aea0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEA0u;
        // 0x49aea4: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aea0) {
            ctx->pc = 0x49B098u;
            goto label_49b098;
        }
    }
    ctx->pc = 0x49AEA8u;
label_49aea8:
    // 0x49aea8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x49aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_49aeac:
    // 0x49aeac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_49aeb0:
    if (ctx->pc == 0x49AEB0u) {
        ctx->pc = 0x49AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEACu;
        // 0x49aeb0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AEB4u;
        goto label_49aeb4;
    }
    ctx->pc = 0x49AEACu;
    {
        const bool branch_taken_0x49aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49aeac) {
            ctx->pc = 0x49AEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AEACu;
            // 0x49aeb0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AEC8u;
            goto label_49aec8;
        }
    }
    ctx->pc = 0x49AEB4u;
label_49aeb4:
    // 0x49aeb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49aeb8:
    // 0x49aeb8: 0x40f809  jalr        $v0
label_49aebc:
    if (ctx->pc == 0x49AEBCu) {
        ctx->pc = 0x49AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEB8u;
        // 0x49aebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AEC0u;
        goto label_49aec0;
    }
    ctx->pc = 0x49AEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49AEC0u);
        ctx->pc = 0x49AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEB8u;
        // 0x49aebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AEB8u, 0x49AEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49AEC0u;
label_49aec0:
    // 0x49aec0: 0x10000002  b           . + 4 + (0x2 << 2)
label_49aec4:
    if (ctx->pc == 0x49AEC4u) {
        ctx->pc = 0x49AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEC0u;
        // 0x49aec4: 0x8fa50214  lw          $a1, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AEC8u;
        goto label_49aec8;
    }
    ctx->pc = 0x49AEC0u;
    {
        const bool branch_taken_0x49aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEC0u;
        // 0x49aec4: 0x8fa50214  lw          $a1, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aec0) {
            ctx->pc = 0x49AECCu;
            goto label_49aecc;
        }
    }
    ctx->pc = 0x49AEC8u;
label_49aec8:
    // 0x49aec8: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x49aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_49aecc:
    // 0x49aecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49aed0:
    // 0x49aed0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x49aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_49aed4:
    // 0x49aed4: 0xc127068  jal         func_49C1A0
label_49aed8:
    if (ctx->pc == 0x49AED8u) {
        ctx->pc = 0x49AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AED4u;
        // 0x49aed8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AEDCu;
        goto label_49aedc;
    }
    ctx->pc = 0x49AED4u;
    SET_GPR_U32(ctx, 31, 0x49AEDCu);
    ctx->pc = 0x49AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AED4u;
    // 0x49aed8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C1A0u, 0x49AED4u, 0x49AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AEDCu;
label_49aedc:
    // 0x49aedc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x49aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_49aee0:
    // 0x49aee0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x49aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49aee4:
    // 0x49aee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49aee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49aee8:
    // 0x49aee8: 0x24681f18  addiu       $t0, $v1, 0x1F18
    ctx->pc = 0x49aee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 7960));
label_49aeec:
    // 0x49aeec: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x49aeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_49aef0:
    // 0x49aef0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x49aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_49aef4:
    // 0x49aef4: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x49aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_49aef8:
    // 0x49aef8: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x49aef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_49aefc:
    // 0x49aefc: 0xb3a20207  sdl         $v0, 0x207($sp)
    ctx->pc = 0x49aefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49af00:
    // 0x49af00: 0xb7a20200  sdr         $v0, 0x200($sp)
    ctx->pc = 0x49af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49af04:
    // 0x49af04: 0xb3a6020f  sdl         $a2, 0x20F($sp)
    ctx->pc = 0x49af04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_49af08:
    // 0x49af08: 0xb7a60208  sdr         $a2, 0x208($sp)
    ctx->pc = 0x49af08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_49af0c:
    // 0x49af0c: 0xc12a3ec  jal         func_4A8FB0
label_49af10:
    if (ctx->pc == 0x49AF10u) {
        ctx->pc = 0x49AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF0Cu;
        // 0x49af10: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF14u;
        goto label_49af14;
    }
    ctx->pc = 0x49AF0Cu;
    SET_GPR_U32(ctx, 31, 0x49AF14u);
    ctx->pc = 0x49AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AF0Cu;
    // 0x49af10: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49AF0Cu, 0x49AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF14u;
label_49af14:
    // 0x49af14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_49af18:
    if (ctx->pc == 0x49AF18u) {
        ctx->pc = 0x49AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF14u;
        // 0x49af18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF1Cu;
        goto label_49af1c;
    }
    ctx->pc = 0x49AF14u;
    {
        const bool branch_taken_0x49af14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF14u;
        // 0x49af18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af14) {
            ctx->pc = 0x49AF2Cu;
            goto label_49af2c;
        }
    }
    ctx->pc = 0x49AF1Cu;
label_49af1c:
    // 0x49af1c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x49af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_49af20:
    // 0x49af20: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x49af20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_49af24:
    // 0x49af24: 0x43a804  sllv        $s5, $v1, $v0
    ctx->pc = 0x49af24u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_49af28:
    // 0x49af28: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x49af28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_49af2c:
    // 0x49af2c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_49af30:
    if (ctx->pc == 0x49AF30u) {
        ctx->pc = 0x49AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF2Cu;
        // 0x49af30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF34u;
        goto label_49af34;
    }
    ctx->pc = 0x49AF2Cu;
    {
        const bool branch_taken_0x49af2c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF2Cu;
        // 0x49af30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af2c) {
            ctx->pc = 0x49AF58u;
            goto label_49af58;
        }
    }
    ctx->pc = 0x49AF34u;
label_49af34:
    // 0x49af34: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x49af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_49af38:
    // 0x49af38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x49af38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49af3c:
    // 0x49af3c: 0x2e0f809  jalr        $s7
label_49af40:
    if (ctx->pc == 0x49AF40u) {
        ctx->pc = 0x49AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF3Cu;
        // 0x49af40: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF44u;
        goto label_49af44;
    }
    ctx->pc = 0x49AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x49AF44u);
        ctx->pc = 0x49AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF3Cu;
        // 0x49af40: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AF3Cu, 0x49AF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49AF44u;
label_49af44:
    // 0x49af44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49af44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49af48:
    // 0x49af48: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_49af4c:
    if (ctx->pc == 0x49AF4Cu) {
        ctx->pc = 0x49AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF48u;
        // 0x49af4c: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF50u;
        goto label_49af50;
    }
    ctx->pc = 0x49AF48u;
    {
        const bool branch_taken_0x49af48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF48u;
        // 0x49af4c: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af48) {
            ctx->pc = 0x49AF60u;
            goto label_49af60;
        }
    }
    ctx->pc = 0x49AF50u;
label_49af50:
    // 0x49af50: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x49af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_49af54:
    // 0x49af54: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x49af54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_49af58:
    // 0x49af58: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_49af5c:
    if (ctx->pc == 0x49AF5Cu) {
        ctx->pc = 0x49AF60u;
        goto label_49af60;
    }
    ctx->pc = 0x49AF58u;
    {
        const bool branch_taken_0x49af58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49af58) {
            ctx->pc = 0x49AF78u;
            goto label_49af78;
        }
    }
    ctx->pc = 0x49AF60u;
label_49af60:
    // 0x49af60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49af60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49af64:
    // 0x49af64: 0x27a50214  addiu       $a1, $sp, 0x214
    ctx->pc = 0x49af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_49af68:
    // 0x49af68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x49af68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49af6c:
    // 0x49af6c: 0xc127010  jal         func_49C040
label_49af70:
    if (ctx->pc == 0x49AF70u) {
        ctx->pc = 0x49AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF6Cu;
        // 0x49af70: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF74u;
        goto label_49af74;
    }
    ctx->pc = 0x49AF6Cu;
    SET_GPR_U32(ctx, 31, 0x49AF74u);
    ctx->pc = 0x49AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AF6Cu;
    // 0x49af70: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C040u, 0x49AF6Cu, 0x49AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF74u;
label_49af74:
    // 0x49af74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49af74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49af78:
    // 0x49af78: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
label_49af7c:
    if (ctx->pc == 0x49AF7Cu) {
        ctx->pc = 0x49AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF78u;
        // 0x49af7c: 0x26a4ffff  addiu       $a0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF80u;
        goto label_49af80;
    }
    ctx->pc = 0x49AF78u;
    {
        const bool branch_taken_0x49af78 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF78u;
        // 0x49af7c: 0x26a4ffff  addiu       $a0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af78) {
            ctx->pc = 0x49AFCCu;
            goto label_49afcc;
        }
    }
    ctx->pc = 0x49AF80u;
label_49af80:
    // 0x49af80: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x49af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_49af84:
    // 0x49af84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_49af88:
    if (ctx->pc == 0x49AF88u) {
        ctx->pc = 0x49AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF84u;
        // 0x49af88: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AF8Cu;
        goto label_49af8c;
    }
    ctx->pc = 0x49AF84u;
    {
        const bool branch_taken_0x49af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF84u;
        // 0x49af88: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af84) {
            ctx->pc = 0x49AFCCu;
            goto label_49afcc;
        }
    }
    ctx->pc = 0x49AF8Cu;
label_49af8c:
    // 0x49af8c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x49af8cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_49af90:
    // 0x49af90: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x49af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_49af94:
    // 0x49af94: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x49af94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_49af98:
    // 0x49af98: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x49af98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_49af9c:
    // 0x49af9c: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x49af9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_49afa0:
    // 0x49afa0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_49afa4:
    if (ctx->pc == 0x49AFA4u) {
        ctx->pc = 0x49AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFA0u;
        // 0x49afa4: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AFA8u;
        goto label_49afa8;
    }
    ctx->pc = 0x49AFA0u;
    {
        const bool branch_taken_0x49afa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFA0u;
        // 0x49afa4: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afa0) {
            ctx->pc = 0x49AFB8u;
            goto label_49afb8;
        }
    }
    ctx->pc = 0x49AFA8u;
label_49afa8:
    // 0x49afa8: 0xac90fffc  sw          $s0, -0x4($a0)
    ctx->pc = 0x49afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 16));
label_49afac:
    // 0x49afac: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x49afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_49afb0:
    // 0x49afb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_49afb4:
    if (ctx->pc == 0x49AFB4u) {
        ctx->pc = 0x49AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFB0u;
        // 0x49afb4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AFB8u;
        goto label_49afb8;
    }
    ctx->pc = 0x49AFB0u;
    {
        const bool branch_taken_0x49afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFB0u;
        // 0x49afb4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afb0) {
            ctx->pc = 0x49AFC4u;
            goto label_49afc4;
        }
    }
    ctx->pc = 0x49AFB8u;
label_49afb8:
    // 0x49afb8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x49afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_49afbc:
    // 0x49afbc: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x49afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_49afc0:
    // 0x49afc0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x49afc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_49afc4:
    // 0x49afc4: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x49afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_49afc8:
    // 0x49afc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49afc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49afcc:
    // 0x49afcc: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_49afd0:
    if (ctx->pc == 0x49AFD0u) {
        ctx->pc = 0x49AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFCCu;
        // 0x49afd0: 0xae130024  sw          $s3, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AFD4u;
        goto label_49afd4;
    }
    ctx->pc = 0x49AFCCu;
    {
        const bool branch_taken_0x49afcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49afcc) {
            ctx->pc = 0x49AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AFCCu;
            // 0x49afd0: 0xae130024  sw          $s3, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AFECu;
            goto label_49afec;
        }
    }
    ctx->pc = 0x49AFD4u;
label_49afd4:
    // 0x49afd4: 0x12c0003f  beqz        $s6, . + 4 + (0x3F << 2)
label_49afd8:
    if (ctx->pc == 0x49AFD8u) {
        ctx->pc = 0x49AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFD4u;
        // 0x49afd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AFDCu;
        goto label_49afdc;
    }
    ctx->pc = 0x49AFD4u;
    {
        const bool branch_taken_0x49afd4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFD4u;
        // 0x49afd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afd4) {
            ctx->pc = 0x49B0D4u;
            goto label_49b0d4;
        }
    }
    ctx->pc = 0x49AFDCu;
label_49afdc:
    // 0x49afdc: 0xc127cae  jal         func_49F2B8
label_49afe0:
    if (ctx->pc == 0x49AFE0u) {
        ctx->pc = 0x49AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFDCu;
        // 0x49afe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AFE4u;
        goto label_49afe4;
    }
    ctx->pc = 0x49AFDCu;
    SET_GPR_U32(ctx, 31, 0x49AFE4u);
    ctx->pc = 0x49AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AFDCu;
    // 0x49afe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49AFDCu, 0x49AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AFE4u;
label_49afe4:
    // 0x49afe4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_49afe8:
    if (ctx->pc == 0x49AFE8u) {
        ctx->pc = 0x49AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFE4u;
        // 0x49afe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AFECu;
        goto label_49afec;
    }
    ctx->pc = 0x49AFE4u;
    {
        const bool branch_taken_0x49afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFE4u;
        // 0x49afe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afe4) {
            ctx->pc = 0x49B0D4u;
            goto label_49b0d4;
        }
    }
    ctx->pc = 0x49AFECu;
label_49afec:
    // 0x49afec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49afecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49aff0:
    // 0x49aff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49aff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49aff4:
    // 0x49aff4: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x49aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_49aff8:
    // 0x49aff8: 0xc126c42  jal         func_49B108
label_49affc:
    if (ctx->pc == 0x49AFFCu) {
        ctx->pc = 0x49AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFF8u;
        // 0x49affc: 0x8fa70210  lw          $a3, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B000u;
        goto label_49b000;
    }
    ctx->pc = 0x49AFF8u;
    SET_GPR_U32(ctx, 31, 0x49B000u);
    ctx->pc = 0x49AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AFF8u;
    // 0x49affc: 0x8fa70210  lw          $a3, 0x210($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B108u, 0x49AFF8u, 0x49B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B000u;
label_49b000:
    // 0x49b000: 0x8f82b7b4  lw          $v0, -0x484C($gp)
    ctx->pc = 0x49b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
label_49b004:
    // 0x49b004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b008:
    if (ctx->pc == 0x49B008u) {
        ctx->pc = 0x49B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B004u;
        // 0x49b008: 0x2662000c  addiu       $v0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B00Cu;
        goto label_49b00c;
    }
    ctx->pc = 0x49B004u;
    {
        const bool branch_taken_0x49b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B004u;
        // 0x49b008: 0x2662000c  addiu       $v0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b004) {
            ctx->pc = 0x49B028u;
            goto label_49b028;
        }
    }
    ctx->pc = 0x49B00Cu;
label_49b00c:
    // 0x49b00c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x49b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_49b010:
    // 0x49b010: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x49b010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_49b014:
    // 0x49b014: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x49b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_49b018:
    // 0x49b018: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x49b018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_49b01c:
    // 0x49b01c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x49b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_49b020:
    // 0x49b020: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x49b020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_49b024:
    // 0x49b024: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x49b024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_49b028:
    // 0x49b028: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b02c:
    // 0x49b02c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x49b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_49b030:
    // 0x49b030: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_49b034:
    if (ctx->pc == 0x49B034u) {
        ctx->pc = 0x49B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B030u;
        // 0x49b034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B038u;
        goto label_49b038;
    }
    ctx->pc = 0x49B030u;
    {
        const bool branch_taken_0x49b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B030u;
        // 0x49b034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b030) {
            ctx->pc = 0x49B0A0u;
            goto label_49b0a0;
        }
    }
    ctx->pc = 0x49B038u;
label_49b038:
    // 0x49b038: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x49b038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49b03c:
    // 0x49b03c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x49b03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_49b040:
    // 0x49b040: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x49b040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_49b044:
    // 0x49b044: 0x40f809  jalr        $v0
label_49b048:
    if (ctx->pc == 0x49B048u) {
        ctx->pc = 0x49B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B044u;
        // 0x49b048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B04Cu;
        goto label_49b04c;
    }
    ctx->pc = 0x49B044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B04Cu);
        ctx->pc = 0x49B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B044u;
        // 0x49b048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B044u, 0x49B04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B04Cu;
label_49b04c:
    // 0x49b04c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_49b050:
    if (ctx->pc == 0x49B050u) {
        ctx->pc = 0x49B054u;
        goto label_49b054;
    }
    ctx->pc = 0x49B04Cu;
    {
        const bool branch_taken_0x49b04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b04c) {
            ctx->pc = 0x49B0A0u;
            goto label_49b0a0;
        }
    }
    ctx->pc = 0x49B054u;
label_49b054:
    // 0x49b054: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_49b058:
    if (ctx->pc == 0x49B058u) {
        ctx->pc = 0x49B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B054u;
        // 0x49b058: 0x8f82b7b4  lw          $v0, -0x484C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B05Cu;
        goto label_49b05c;
    }
    ctx->pc = 0x49B054u;
    {
        const bool branch_taken_0x49b054 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B054u;
        // 0x49b058: 0x8f82b7b4  lw          $v0, -0x484C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b054) {
            ctx->pc = 0x49B068u;
            goto label_49b068;
        }
    }
    ctx->pc = 0x49B05Cu;
label_49b05c:
    // 0x49b05c: 0xc127cae  jal         func_49F2B8
label_49b060:
    if (ctx->pc == 0x49B060u) {
        ctx->pc = 0x49B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B05Cu;
        // 0x49b060: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B064u;
        goto label_49b064;
    }
    ctx->pc = 0x49B05Cu;
    SET_GPR_U32(ctx, 31, 0x49B064u);
    ctx->pc = 0x49B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B05Cu;
    // 0x49b060: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49B05Cu, 0x49B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B064u;
label_49b064:
    // 0x49b064: 0x8f82b7b4  lw          $v0, -0x484C($gp)
    ctx->pc = 0x49b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
label_49b068:
    // 0x49b068: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49b06c:
    if (ctx->pc == 0x49B06Cu) {
        ctx->pc = 0x49B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B068u;
        // 0x49b06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B070u;
        goto label_49b070;
    }
    ctx->pc = 0x49B068u;
    {
        const bool branch_taken_0x49b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B068u;
        // 0x49b06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b068) {
            ctx->pc = 0x49B08Cu;
            goto label_49b08c;
        }
    }
    ctx->pc = 0x49B070u;
label_49b070:
    // 0x49b070: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x49b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49b074:
    // 0x49b074: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x49b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49b078:
    // 0x49b078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49b078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_49b07c:
    // 0x49b07c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x49b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49b080:
    // 0x49b080: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x49b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49b084:
    // 0x49b084: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x49b084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_49b088:
    // 0x49b088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b08c:
    // 0x49b08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49b08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b090:
    // 0x49b090: 0xc126a56  jal         func_49A958
label_49b094:
    if (ctx->pc == 0x49B094u) {
        ctx->pc = 0x49B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B090u;
        // 0x49b094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B098u;
        goto label_49b098;
    }
    ctx->pc = 0x49B090u;
    SET_GPR_U32(ctx, 31, 0x49B098u);
    ctx->pc = 0x49B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B090u;
    // 0x49b094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A958u, 0x49B090u, 0x49B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B098u;
label_49b098:
    // 0x49b098: 0x1000000e  b           . + 4 + (0xE << 2)
label_49b09c:
    if (ctx->pc == 0x49B09Cu) {
        ctx->pc = 0x49B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B098u;
        // 0x49b09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B0A0u;
        goto label_49b0a0;
    }
    ctx->pc = 0x49B098u;
    {
        const bool branch_taken_0x49b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B098u;
        // 0x49b09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b098) {
            ctx->pc = 0x49B0D4u;
            goto label_49b0d4;
        }
    }
    ctx->pc = 0x49B0A0u;
label_49b0a0:
    // 0x49b0a0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_49b0a4:
    if (ctx->pc == 0x49B0A4u) {
        ctx->pc = 0x49B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B0A0u;
        // 0x49b0a4: 0x8f83c198  lw          $v1, -0x3E68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B0A8u;
        goto label_49b0a8;
    }
    ctx->pc = 0x49B0A0u;
    {
        const bool branch_taken_0x49b0a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B0A0u;
        // 0x49b0a4: 0x8f83c198  lw          $v1, -0x3E68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b0a0) {
            ctx->pc = 0x49B0B4u;
            goto label_49b0b4;
        }
    }
    ctx->pc = 0x49B0A8u;
label_49b0a8:
    // 0x49b0a8: 0xc127cae  jal         func_49F2B8
label_49b0ac:
    if (ctx->pc == 0x49B0ACu) {
        ctx->pc = 0x49B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B0A8u;
        // 0x49b0ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B0B0u;
        goto label_49b0b0;
    }
    ctx->pc = 0x49B0A8u;
    SET_GPR_U32(ctx, 31, 0x49B0B0u);
    ctx->pc = 0x49B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B0A8u;
    // 0x49b0ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49B0A8u, 0x49B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B0B0u;
label_49b0b0:
    // 0x49b0b0: 0x8f83c198  lw          $v1, -0x3E68($gp)
    ctx->pc = 0x49b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951320)));
label_49b0b4:
    // 0x49b0b4: 0x2782c198  addiu       $v0, $gp, -0x3E68
    ctx->pc = 0x49b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951320));
label_49b0b8:
    // 0x49b0b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x49b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_49b0bc:
    // 0x49b0bc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x49b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_49b0c0:
    // 0x49b0c0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x49b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_49b0c4:
    // 0x49b0c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49b0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b0c8:
    // 0x49b0c8: 0x8f83c198  lw          $v1, -0x3E68($gp)
    ctx->pc = 0x49b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951320)));
label_49b0cc:
    // 0x49b0cc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x49b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_49b0d0:
    // 0x49b0d0: 0xaf84c198  sw          $a0, -0x3E68($gp)
    ctx->pc = 0x49b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951320), GPR_U32(ctx, 4));
label_49b0d4:
    // 0x49b0d4: 0x7bb002b0  lq          $s0, 0x2B0($sp)
    ctx->pc = 0x49b0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_49b0d8:
    // 0x49b0d8: 0x7bb102a0  lq          $s1, 0x2A0($sp)
    ctx->pc = 0x49b0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_49b0dc:
    // 0x49b0dc: 0x7bb20290  lq          $s2, 0x290($sp)
    ctx->pc = 0x49b0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_49b0e0:
    // 0x49b0e0: 0x7bb30280  lq          $s3, 0x280($sp)
    ctx->pc = 0x49b0e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_49b0e4:
    // 0x49b0e4: 0x7bb40270  lq          $s4, 0x270($sp)
    ctx->pc = 0x49b0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_49b0e8:
    // 0x49b0e8: 0x7bb50260  lq          $s5, 0x260($sp)
    ctx->pc = 0x49b0e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_49b0ec:
    // 0x49b0ec: 0x7bb60250  lq          $s6, 0x250($sp)
    ctx->pc = 0x49b0ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_49b0f0:
    // 0x49b0f0: 0x7bb70240  lq          $s7, 0x240($sp)
    ctx->pc = 0x49b0f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_49b0f4:
    // 0x49b0f4: 0x7bbe0230  lq          $fp, 0x230($sp)
    ctx->pc = 0x49b0f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_49b0f8:
    // 0x49b0f8: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x49b0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_49b0fc:
    // 0x49b0fc: 0x3e00008  jr          $ra
label_49b100:
    if (ctx->pc == 0x49B100u) {
        ctx->pc = 0x49B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B0FCu;
        // 0x49b100: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B104u;
        goto label_49b104;
    }
    ctx->pc = 0x49B0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B0FCu;
        // 0x49b100: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B104u;
label_49b104:
    // 0x49b104: 0x0  nop
    ctx->pc = 0x49b104u;
    // NOP
    ctx->pc = 0x49b108u;
}
