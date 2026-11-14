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

// Function: sub_0031D728
// Address: 0x31d728 - 0x31d7c0
void sub_0031D728_0x31d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D728_0x31d728");
#endif

    switch (ctx->pc) {
        case 0x31d728u: goto label_31d728;
        case 0x31d72cu: goto label_31d72c;
        case 0x31d730u: goto label_31d730;
        case 0x31d734u: goto label_31d734;
        case 0x31d738u: goto label_31d738;
        case 0x31d73cu: goto label_31d73c;
        case 0x31d740u: goto label_31d740;
        case 0x31d744u: goto label_31d744;
        case 0x31d748u: goto label_31d748;
        case 0x31d74cu: goto label_31d74c;
        case 0x31d750u: goto label_31d750;
        case 0x31d754u: goto label_31d754;
        case 0x31d758u: goto label_31d758;
        case 0x31d75cu: goto label_31d75c;
        case 0x31d760u: goto label_31d760;
        case 0x31d764u: goto label_31d764;
        case 0x31d768u: goto label_31d768;
        case 0x31d76cu: goto label_31d76c;
        case 0x31d770u: goto label_31d770;
        case 0x31d774u: goto label_31d774;
        case 0x31d778u: goto label_31d778;
        case 0x31d77cu: goto label_31d77c;
        case 0x31d780u: goto label_31d780;
        case 0x31d784u: goto label_31d784;
        case 0x31d788u: goto label_31d788;
        case 0x31d78cu: goto label_31d78c;
        case 0x31d790u: goto label_31d790;
        case 0x31d794u: goto label_31d794;
        case 0x31d798u: goto label_31d798;
        case 0x31d79cu: goto label_31d79c;
        case 0x31d7a0u: goto label_31d7a0;
        case 0x31d7a4u: goto label_31d7a4;
        case 0x31d7a8u: goto label_31d7a8;
        case 0x31d7acu: goto label_31d7ac;
        case 0x31d7b0u: goto label_31d7b0;
        case 0x31d7b4u: goto label_31d7b4;
        case 0x31d7b8u: goto label_31d7b8;
        case 0x31d7bcu: goto label_31d7bc;
        default: break;
    }

    ctx->pc = 0x31d728u;

label_31d728:
    // 0x31d728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31d72c:
    // 0x31d72c: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d730:
    // 0x31d730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31d734:
    // 0x31d734: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31d734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_31d738:
    // 0x31d738: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31d738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d73c:
    // 0x31d73c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31d73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_31d740:
    // 0x31d740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d744:
    // 0x31d744: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x31d744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_31d748:
    // 0x31d748: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_31d74c:
    // 0x31d74c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x31d74cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31d750:
    // 0x31d750: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d754:
    // 0x31d754: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31d758:
    if (ctx->pc == 0x31D758u) {
        ctx->pc = 0x31D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D754u;
        // 0x31d758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D75Cu;
        goto label_31d75c;
    }
    ctx->pc = 0x31D754u;
    {
        const bool branch_taken_0x31d754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D754u;
        // 0x31d758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d754) {
            ctx->pc = 0x31D77Cu;
            goto label_31d77c;
        }
    }
    ctx->pc = 0x31D75Cu;
label_31d75c:
    // 0x31d75c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d760:
    // 0x31d760: 0xc0c75f0  jal         func_31D7C0
label_31d764:
    if (ctx->pc == 0x31D764u) {
        ctx->pc = 0x31D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D760u;
        // 0x31d764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D768u;
        goto label_31d768;
    }
    ctx->pc = 0x31D760u;
    SET_GPR_U32(ctx, 31, 0x31D768u);
    ctx->pc = 0x31D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D760u;
    // 0x31d764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D7C0u, 0x31D760u, 0x31D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D768u;
label_31d768:
    // 0x31d768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31d768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31d76c:
    // 0x31d76c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d770:
    // 0x31d770: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x31d770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d774:
    // 0x31d774: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31d778:
    if (ctx->pc == 0x31D778u) {
        ctx->pc = 0x31D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D774u;
        // 0x31d778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D77Cu;
        goto label_31d77c;
    }
    ctx->pc = 0x31D774u;
    {
        const bool branch_taken_0x31d774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D774u;
        // 0x31d778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d774) {
            ctx->pc = 0x31D760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d760;
        }
    }
    ctx->pc = 0x31D77Cu;
label_31d77c:
    // 0x31d77c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x31d77cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_31d780:
    // 0x31d780: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x31d780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_31d784:
    // 0x31d784: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x31d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_31d788:
    // 0x31d788: 0x40f809  jalr        $v0
label_31d78c:
    if (ctx->pc == 0x31D78Cu) {
        ctx->pc = 0x31D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D788u;
        // 0x31d78c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D790u;
        goto label_31d790;
    }
    ctx->pc = 0x31D788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D790u);
        ctx->pc = 0x31D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D788u;
        // 0x31d78c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D788u, 0x31D790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D790u;
label_31d790:
    // 0x31d790: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x31d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_31d794:
    // 0x31d794: 0x60f809  jalr        $v1
label_31d798:
    if (ctx->pc == 0x31D798u) {
        ctx->pc = 0x31D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D794u;
        // 0x31d798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D79Cu;
        goto label_31d79c;
    }
    ctx->pc = 0x31D794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D79Cu);
        ctx->pc = 0x31D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D794u;
        // 0x31d798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D794u, 0x31D79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D79Cu;
label_31d79c:
    // 0x31d79c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x31d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_31d7a0:
    // 0x31d7a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31d7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d7a4:
    // 0x31d7a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31d7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31d7a8:
    // 0x31d7a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31d7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d7ac:
    // 0x31d7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d7b0:
    // 0x31d7b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31d7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d7b4:
    // 0x31d7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d7b8:
    // 0x31d7b8: 0x3e00008  jr          $ra
label_31d7bc:
    if (ctx->pc == 0x31D7BCu) {
        ctx->pc = 0x31D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7B8u;
        // 0x31d7bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7C0u;
        goto label_fallthrough_0x31d7b8;
    }
    ctx->pc = 0x31D7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7B8u;
        // 0x31d7bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31d7b8:
    ctx->pc = 0x31D7C0u;
}
