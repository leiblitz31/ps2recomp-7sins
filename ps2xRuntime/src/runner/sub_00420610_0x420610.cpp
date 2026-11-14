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

// Function: sub_00420610
// Address: 0x420610 - 0x4206c0
void sub_00420610_0x420610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420610_0x420610");
#endif

    switch (ctx->pc) {
        case 0x420610u: goto label_420610;
        case 0x420614u: goto label_420614;
        case 0x420618u: goto label_420618;
        case 0x42061cu: goto label_42061c;
        case 0x420620u: goto label_420620;
        case 0x420624u: goto label_420624;
        case 0x420628u: goto label_420628;
        case 0x42062cu: goto label_42062c;
        case 0x420630u: goto label_420630;
        case 0x420634u: goto label_420634;
        case 0x420638u: goto label_420638;
        case 0x42063cu: goto label_42063c;
        case 0x420640u: goto label_420640;
        case 0x420644u: goto label_420644;
        case 0x420648u: goto label_420648;
        case 0x42064cu: goto label_42064c;
        case 0x420650u: goto label_420650;
        case 0x420654u: goto label_420654;
        case 0x420658u: goto label_420658;
        case 0x42065cu: goto label_42065c;
        case 0x420660u: goto label_420660;
        case 0x420664u: goto label_420664;
        case 0x420668u: goto label_420668;
        case 0x42066cu: goto label_42066c;
        case 0x420670u: goto label_420670;
        case 0x420674u: goto label_420674;
        case 0x420678u: goto label_420678;
        case 0x42067cu: goto label_42067c;
        case 0x420680u: goto label_420680;
        case 0x420684u: goto label_420684;
        case 0x420688u: goto label_420688;
        case 0x42068cu: goto label_42068c;
        case 0x420690u: goto label_420690;
        case 0x420694u: goto label_420694;
        case 0x420698u: goto label_420698;
        case 0x42069cu: goto label_42069c;
        case 0x4206a0u: goto label_4206a0;
        case 0x4206a4u: goto label_4206a4;
        case 0x4206a8u: goto label_4206a8;
        case 0x4206acu: goto label_4206ac;
        case 0x4206b0u: goto label_4206b0;
        case 0x4206b4u: goto label_4206b4;
        case 0x4206b8u: goto label_4206b8;
        case 0x4206bcu: goto label_4206bc;
        default: break;
    }

    ctx->pc = 0x420610u;

label_420610:
    // 0x420610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_420614:
    // 0x420614: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_420618:
    // 0x420618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42061c:
    // 0x42061c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42061cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_420620:
    // 0x420620: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420624:
    // 0x420624: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_420628:
    // 0x420628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x420628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42062c:
    // 0x42062c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x42062cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_420630:
    // 0x420630: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x420630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_420634:
    // 0x420634: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x420634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_420638:
    // 0x420638: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x420638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_42063c:
    // 0x42063c: 0x40f809  jalr        $v0
label_420640:
    if (ctx->pc == 0x420640u) {
        ctx->pc = 0x420640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42063Cu;
        // 0x420640: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420644u;
        goto label_420644;
    }
    ctx->pc = 0x42063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420644u);
        ctx->pc = 0x420640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42063Cu;
        // 0x420640: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42063Cu, 0x420644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420644u;
label_420644:
    // 0x420644: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x420644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_420648:
    // 0x420648: 0x40f809  jalr        $v0
label_42064c:
    if (ctx->pc == 0x42064Cu) {
        ctx->pc = 0x42064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420648u;
        // 0x42064c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420650u;
        goto label_420650;
    }
    ctx->pc = 0x420648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420650u);
        ctx->pc = 0x42064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420648u;
        // 0x42064c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420648u, 0x420650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420650u;
label_420650:
    // 0x420650: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x420650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_420654:
    // 0x420654: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_420658:
    if (ctx->pc == 0x420658u) {
        ctx->pc = 0x420658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420654u;
        // 0x420658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42065Cu;
        goto label_42065c;
    }
    ctx->pc = 0x420654u;
    {
        const bool branch_taken_0x420654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x420658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420654u;
        // 0x420658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420654) {
            ctx->pc = 0x420690u;
            goto label_420690;
        }
    }
    ctx->pc = 0x42065Cu;
label_42065c:
    // 0x42065c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420660:
    // 0x420660: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x420660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_420664:
    // 0x420664: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x420664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_420668:
    // 0x420668: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x420668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_42066c:
    // 0x42066c: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x42066cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_420670:
    // 0x420670: 0x80a8001f  lb          $t0, 0x1F($a1)
    ctx->pc = 0x420670u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_420674:
    // 0x420674: 0xc1035f6  jal         func_40D7D8
label_420678:
    if (ctx->pc == 0x420678u) {
        ctx->pc = 0x420678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420674u;
        // 0x420678: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42067Cu;
        goto label_42067c;
    }
    ctx->pc = 0x420674u;
    SET_GPR_U32(ctx, 31, 0x42067Cu);
    ctx->pc = 0x420678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420674u;
    // 0x420678: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x420674u, 0x42067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42067Cu;
label_42067c:
    // 0x42067c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_420680:
    // 0x420680: 0xc103628  jal         func_40D8A0
label_420684:
    if (ctx->pc == 0x420684u) {
        ctx->pc = 0x420684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420680u;
        // 0x420684: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420688u;
        goto label_420688;
    }
    ctx->pc = 0x420680u;
    SET_GPR_U32(ctx, 31, 0x420688u);
    ctx->pc = 0x420684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420680u;
    // 0x420684: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x420680u, 0x420688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420688u;
label_420688:
    // 0x420688: 0xa240004f  sb          $zero, 0x4F($s2)
    ctx->pc = 0x420688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
label_42068c:
    // 0x42068c: 0x0  nop
    ctx->pc = 0x42068cu;
    // NOP
label_420690:
    // 0x420690: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x420690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_420694:
    // 0x420694: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420698:
    // 0x420698: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x420698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42069c:
    // 0x42069c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42069cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4206a0:
    // 0x4206a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4206a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4206a4:
    // 0x4206a4: 0x3e00008  jr          $ra
label_4206a8:
    if (ctx->pc == 0x4206A8u) {
        ctx->pc = 0x4206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206A4u;
        // 0x4206a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206ACu;
        goto label_4206ac;
    }
    ctx->pc = 0x4206A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206A4u;
        // 0x4206a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4206A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4206ACu;
label_4206ac:
    // 0x4206ac: 0x0  nop
    ctx->pc = 0x4206acu;
    // NOP
label_4206b0:
    // 0x4206b0: 0xaf84adc8  sw          $a0, -0x5238($gp)
    ctx->pc = 0x4206b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946248), GPR_U32(ctx, 4));
label_4206b4:
    // 0x4206b4: 0x3e00008  jr          $ra
label_4206b8:
    if (ctx->pc == 0x4206B8u) {
        ctx->pc = 0x4206B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206B4u;
        // 0x4206b8: 0xaf85adcc  sw          $a1, -0x5234($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206BCu;
        goto label_4206bc;
    }
    ctx->pc = 0x4206B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4206B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206B4u;
        // 0x4206b8: 0xaf85adcc  sw          $a1, -0x5234($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4206B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4206BCu;
label_4206bc:
    // 0x4206bc: 0x0  nop
    ctx->pc = 0x4206bcu;
    // NOP
    ctx->pc = 0x4206c0u;
}
