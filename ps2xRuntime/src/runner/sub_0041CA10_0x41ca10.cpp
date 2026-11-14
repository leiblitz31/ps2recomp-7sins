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

// Function: sub_0041CA10
// Address: 0x41ca10 - 0x41cb98
void sub_0041CA10_0x41ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CA10_0x41ca10");
#endif

    switch (ctx->pc) {
        case 0x41ca68u: goto label_41ca68;
        case 0x41ca88u: goto label_41ca88;
        case 0x41cac4u: goto label_41cac4;
        case 0x41cae0u: goto label_41cae0;
        case 0x41cb00u: goto label_41cb00;
        case 0x41cb40u: goto label_41cb40;
        default: break;
    }

    ctx->pc = 0x41ca10u;

    // 0x41ca10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41ca14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41ca18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41ca1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41ca1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ca20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41ca24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41ca24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ca28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41ca2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x41ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41ca30: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x41ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41ca34: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x41ca34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41ca38: 0x28a40009  slti        $a0, $a1, 0x9
    ctx->pc = 0x41ca38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x41ca3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41CA3Cu;
    {
        const bool branch_taken_0x41ca3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA3Cu;
        // 0x41ca40: 0x2446001c  addiu       $a2, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ca3c) {
            ctx->pc = 0x41CA50u;
            goto label_41ca50;
        }
    }
    ctx->pc = 0x41CA44u;
    // 0x41ca44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41ca48: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x41ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x41ca4c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x41ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_41ca50:
    // 0x41ca50: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x41ca50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x41ca54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ca58: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x41ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x41ca5c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x41ca5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x41ca60: 0xc103404  jal         func_40D010
    ctx->pc = 0x41CA60u;
    SET_GPR_U32(ctx, 31, 0x41CA68u);
    ctx->pc = 0x41CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA60u;
    // 0x41ca64: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x41CA60u, 0x41CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA68u;
label_41ca68:
    // 0x41ca68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41CA68u;
    {
        const bool branch_taken_0x41ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA68u;
        // 0x41ca6c: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ca68) {
            ctx->pc = 0x41CA90u;
            goto label_41ca90;
        }
    }
    ctx->pc = 0x41CA70u;
    // 0x41ca70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ca74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ca78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x41ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x41ca7c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x41ca7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x41ca80: 0xc103404  jal         func_40D010
    ctx->pc = 0x41CA80u;
    SET_GPR_U32(ctx, 31, 0x41CA88u);
    ctx->pc = 0x41CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA80u;
    // 0x41ca84: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x41CA80u, 0x41CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA88u;
label_41ca88:
    // 0x41ca88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x41CA88u;
    {
        const bool branch_taken_0x41ca88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ca88) {
            ctx->pc = 0x41CA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CA88u;
            // 0x41ca8c: 0x8e080004  lw          $t0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CA98u;
            goto label_41ca98;
        }
    }
    ctx->pc = 0x41CA90u;
label_41ca90:
    // 0x41ca90: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x41CA90u;
    {
        const bool branch_taken_0x41ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA90u;
        // 0x41ca94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ca90) {
            ctx->pc = 0x41CB04u;
            goto label_41cb04;
        }
    }
    ctx->pc = 0x41CA98u;
label_41ca98:
    // 0x41ca98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41ca98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ca9c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x41ca9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41caa0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x41caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x41caa4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x41caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41caa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41caac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x41caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41cab0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x41cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x41cab4: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x41cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x41cab8: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x41cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x41cabc: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x41CABCu;
    SET_GPR_U32(ctx, 31, 0x41CAC4u);
    ctx->pc = 0x41CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CABCu;
    // 0x41cac0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x41CABCu, 0x41CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CAC4u;
label_41cac4:
    // 0x41cac4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x41cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41cac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cacc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x41caccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41cad0: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x41cad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x41cad4: 0x3012  mflo        $a2
    ctx->pc = 0x41cad4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x41cad8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x41CAD8u;
    SET_GPR_U32(ctx, 31, 0x41CAE0u);
    ctx->pc = 0x41CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CAD8u;
    // 0x41cadc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x41CAD8u, 0x41CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CAE0u;
label_41cae0:
    // 0x41cae0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x41cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41cae4: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x41cae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x41cae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41CAE8u;
    {
        const bool branch_taken_0x41cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAE8u;
        // 0x41caec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cae8) {
            ctx->pc = 0x41CB00u;
            goto label_41cb00;
        }
    }
    ctx->pc = 0x41CAF0u;
    // 0x41caf0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x41caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x41caf4: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x41caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x41caf8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x41CAF8u;
    SET_GPR_U32(ctx, 31, 0x41CB00u);
    ctx->pc = 0x41CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CAF8u;
    // 0x41cafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x41CAF8u, 0x41CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CB00u;
label_41cb00:
    // 0x41cb00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41cb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cb04:
    // 0x41cb04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41cb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41cb08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41cb08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41cb0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41cb10: 0x3e00008  jr          $ra
    ctx->pc = 0x41CB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB10u;
        // 0x41cb14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CB18u;
    // 0x41cb18: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x41cb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cb1c: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41cb20: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x41cb24: 0x2463e88c  addiu       $v1, $v1, -0x1774
    ctx->pc = 0x41cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961292));
    // 0x41cb28: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41cb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41cb2c: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x41CB2Cu;
    {
        const bool branch_taken_0x41cb2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB2Cu;
        // 0x41cb30: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cb2c) {
            ctx->pc = 0x41CB8Cu;
            goto label_41cb8c;
        }
    }
    ctx->pc = 0x41CB34u;
    // 0x41cb34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x41cb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cb38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41cb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cb3c: 0x0  nop
    ctx->pc = 0x41cb3cu;
    // NOP
label_41cb40:
    // 0x41cb40: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x41cb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41cb44: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x41cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cb48: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x41cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x41cb4c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41cb50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41cb50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41cb54: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x41cb54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cb58: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x41cb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x41cb5c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41cb60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41cb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41cb64: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x41cb64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cb68: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x41cb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x41cb6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41cb70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41cb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41cb74: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x41cb74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cb78: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x41cb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x41cb7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x41cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x41cb80: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x41cb80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41cb84: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x41CB84u;
    {
        const bool branch_taken_0x41cb84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB84u;
        // 0x41cb88: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cb84) {
            ctx->pc = 0x41CB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41cb40;
        }
    }
    ctx->pc = 0x41CB8Cu;
label_41cb8c:
    // 0x41cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x41CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CB94u;
    // 0x41cb94: 0x0  nop
    ctx->pc = 0x41cb94u;
    // NOP
    ctx->pc = 0x41cb98u;
}
