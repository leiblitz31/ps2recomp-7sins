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

// Function: sub_00420828
// Address: 0x420828 - 0x4208b0
void sub_00420828_0x420828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420828_0x420828");
#endif

    switch (ctx->pc) {
        case 0x420828u: goto label_420828;
        case 0x42082cu: goto label_42082c;
        case 0x420830u: goto label_420830;
        case 0x420834u: goto label_420834;
        case 0x420838u: goto label_420838;
        case 0x42083cu: goto label_42083c;
        case 0x420840u: goto label_420840;
        case 0x420844u: goto label_420844;
        case 0x420848u: goto label_420848;
        case 0x42084cu: goto label_42084c;
        case 0x420850u: goto label_420850;
        case 0x420854u: goto label_420854;
        case 0x420858u: goto label_420858;
        case 0x42085cu: goto label_42085c;
        case 0x420860u: goto label_420860;
        case 0x420864u: goto label_420864;
        case 0x420868u: goto label_420868;
        case 0x42086cu: goto label_42086c;
        case 0x420870u: goto label_420870;
        case 0x420874u: goto label_420874;
        case 0x420878u: goto label_420878;
        case 0x42087cu: goto label_42087c;
        case 0x420880u: goto label_420880;
        case 0x420884u: goto label_420884;
        case 0x420888u: goto label_420888;
        case 0x42088cu: goto label_42088c;
        case 0x420890u: goto label_420890;
        case 0x420894u: goto label_420894;
        case 0x420898u: goto label_420898;
        case 0x42089cu: goto label_42089c;
        case 0x4208a0u: goto label_4208a0;
        case 0x4208a4u: goto label_4208a4;
        case 0x4208a8u: goto label_4208a8;
        case 0x4208acu: goto label_4208ac;
        default: break;
    }

    ctx->pc = 0x420828u;

label_420828:
    // 0x420828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x420828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42082c:
    // 0x42082c: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x42082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420830:
    // 0x420830: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x420830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_420834:
    // 0x420834: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x420834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_420838:
    // 0x420838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42083c:
    // 0x42083c: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x42083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_420840:
    // 0x420840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_420844:
    // 0x420844: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x420844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_420848:
    // 0x420848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x420848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42084c:
    // 0x42084c: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x42084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_420850:
    // 0x420850: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x420850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_420854:
    // 0x420854: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x420854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_420858:
    // 0x420858: 0x40f809  jalr        $v0
label_42085c:
    if (ctx->pc == 0x42085Cu) {
        ctx->pc = 0x42085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420858u;
        // 0x42085c: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x420860u;
        goto label_420860;
    }
    ctx->pc = 0x420858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420860u);
        ctx->pc = 0x42085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420858u;
        // 0x42085c: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420858u, 0x420860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420860u;
label_420860:
    // 0x420860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x420860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_420864:
    // 0x420864: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_420868:
    if (ctx->pc == 0x420868u) {
        ctx->pc = 0x420868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420864u;
        // 0x420868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42086Cu;
        goto label_42086c;
    }
    ctx->pc = 0x420864u;
    {
        const bool branch_taken_0x420864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x420868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420864u;
        // 0x420868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420864) {
            ctx->pc = 0x420898u;
            goto label_420898;
        }
    }
    ctx->pc = 0x42086Cu;
label_42086c:
    // 0x42086c: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x42086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
label_420870:
    // 0x420870: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x420870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_420874:
    // 0x420874: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x420874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_420878:
    // 0x420878: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x420878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_42087c:
    // 0x42087c: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x42087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
label_420880:
    // 0x420880: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x420880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_420884:
    // 0x420884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x420884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_420888:
    // 0x420888: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x420888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
label_42088c:
    // 0x42088c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42088cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_420890:
    // 0x420890: 0xc104c80  jal         func_413200
label_420894:
    if (ctx->pc == 0x420894u) {
        ctx->pc = 0x420894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420890u;
        // 0x420894: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420898u;
        goto label_420898;
    }
    ctx->pc = 0x420890u;
    SET_GPR_U32(ctx, 31, 0x420898u);
    ctx->pc = 0x420894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420890u;
    // 0x420894: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x420890u, 0x420898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420898u;
label_420898:
    // 0x420898: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x420898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42089c:
    // 0x42089c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42089cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4208a0:
    // 0x4208a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4208a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4208a4:
    // 0x4208a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4208a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4208a8:
    // 0x4208a8: 0x3e00008  jr          $ra
label_4208ac:
    if (ctx->pc == 0x4208ACu) {
        ctx->pc = 0x4208ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208A8u;
        // 0x4208ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208B0u;
        goto label_fallthrough_0x4208a8;
    }
    ctx->pc = 0x4208A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4208ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208A8u;
        // 0x4208ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4208A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4208a8:
    ctx->pc = 0x4208B0u;
}
