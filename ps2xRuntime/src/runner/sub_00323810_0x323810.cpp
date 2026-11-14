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

// Function: sub_00323810
// Address: 0x323810 - 0x323888
void sub_00323810_0x323810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323810_0x323810");
#endif

    switch (ctx->pc) {
        case 0x323810u: goto label_323810;
        case 0x323814u: goto label_323814;
        case 0x323818u: goto label_323818;
        case 0x32381cu: goto label_32381c;
        case 0x323820u: goto label_323820;
        case 0x323824u: goto label_323824;
        case 0x323828u: goto label_323828;
        case 0x32382cu: goto label_32382c;
        case 0x323830u: goto label_323830;
        case 0x323834u: goto label_323834;
        case 0x323838u: goto label_323838;
        case 0x32383cu: goto label_32383c;
        case 0x323840u: goto label_323840;
        case 0x323844u: goto label_323844;
        case 0x323848u: goto label_323848;
        case 0x32384cu: goto label_32384c;
        case 0x323850u: goto label_323850;
        case 0x323854u: goto label_323854;
        case 0x323858u: goto label_323858;
        case 0x32385cu: goto label_32385c;
        case 0x323860u: goto label_323860;
        case 0x323864u: goto label_323864;
        case 0x323868u: goto label_323868;
        case 0x32386cu: goto label_32386c;
        case 0x323870u: goto label_323870;
        case 0x323874u: goto label_323874;
        case 0x323878u: goto label_323878;
        case 0x32387cu: goto label_32387c;
        case 0x323880u: goto label_323880;
        case 0x323884u: goto label_323884;
        default: break;
    }

    ctx->pc = 0x323810u;

label_323810:
    // 0x323810: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x323810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_323814:
    // 0x323814: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_323818:
    // 0x323818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32381c:
    // 0x32381c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_323820:
    // 0x323820: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x323820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_323824:
    // 0x323824: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x323824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_323828:
    // 0x323828: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_32382c:
    // 0x32382c: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x32382cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_323830:
    // 0x323830: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x323830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_323834:
    // 0x323834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323838:
    // 0x323838: 0x488c2  srl         $s1, $a0, 3
    ctx->pc = 0x323838u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_32383c:
    // 0x32383c: 0x40f809  jalr        $v0
label_323840:
    if (ctx->pc == 0x323840u) {
        ctx->pc = 0x323840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32383Cu;
        // 0x323840: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323844u;
        goto label_323844;
    }
    ctx->pc = 0x32383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323844u);
        ctx->pc = 0x323840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32383Cu;
        // 0x323840: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32383Cu, 0x323844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323844u;
label_323844:
    // 0x323844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x323844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323848:
    // 0x323848: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_32384c:
    if (ctx->pc == 0x32384Cu) {
        ctx->pc = 0x32384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323848u;
        // 0x32384c: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323850u;
        goto label_323850;
    }
    ctx->pc = 0x323848u;
    {
        const bool branch_taken_0x323848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323848u;
        // 0x32384c: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323848) {
            ctx->pc = 0x32386Cu;
            goto label_32386c;
        }
    }
    ctx->pc = 0x323850u;
label_323850:
    // 0x323850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323854:
    // 0x323854: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_323858:
    // 0x323858: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x323858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32385c:
    // 0x32385c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32385cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323860:
    // 0x323860: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x323860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_323864:
    // 0x323864: 0xc0bb7e6  jal         func_2EDF98
label_323868:
    if (ctx->pc == 0x323868u) {
        ctx->pc = 0x323868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323864u;
        // 0x323868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32386Cu;
        goto label_32386c;
    }
    ctx->pc = 0x323864u;
    SET_GPR_U32(ctx, 31, 0x32386Cu);
    ctx->pc = 0x323868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323864u;
    // 0x323868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x323864u, 0x32386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32386Cu;
label_32386c:
    // 0x32386c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32386cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323870:
    // 0x323870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_323874:
    // 0x323874: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_323878:
    // 0x323878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32387c:
    // 0x32387c: 0x3e00008  jr          $ra
label_323880:
    if (ctx->pc == 0x323880u) {
        ctx->pc = 0x323880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32387Cu;
        // 0x323880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323884u;
        goto label_323884;
    }
    ctx->pc = 0x32387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32387Cu;
        // 0x323880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323884u;
label_323884:
    // 0x323884: 0x0  nop
    ctx->pc = 0x323884u;
    // NOP
    ctx->pc = 0x323888u;
}
