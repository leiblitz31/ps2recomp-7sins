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

// Function: sub_00469830
// Address: 0x469830 - 0x4698e0
void sub_00469830_0x469830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469830_0x469830");
#endif

    switch (ctx->pc) {
        case 0x469864u: goto label_469864;
        case 0x469878u: goto label_469878;
        case 0x469888u: goto label_469888;
        case 0x4698a0u: goto label_4698a0;
        default: break;
    }

    ctx->pc = 0x469830u;

    // 0x469830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x469830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x469834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x469834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x469838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x469838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46983c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x469840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x469840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x469844: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x469844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x469848: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x469848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46984c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469850: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x469850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469854: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x469854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x469858: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x469858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46985c: 0xc11a644  jal         func_469910
    ctx->pc = 0x46985Cu;
    SET_GPR_U32(ctx, 31, 0x469864u);
    ctx->pc = 0x469910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469910u, 0x46985Cu, 0x469864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469864u;
label_469864:
    // 0x469864: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x469864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469868: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x469868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46986c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x469870: 0xc11a638  jal         func_4698E0
    ctx->pc = 0x469870u;
    SET_GPR_U32(ctx, 31, 0x469878u);
    ctx->pc = 0x4698E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4698E0u, 0x469870u, 0x469878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469878u;
label_469878:
    // 0x469878: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x469878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46987c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46987cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x469880u;
    {
        const bool branch_taken_0x469880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469880) {
            ctx->pc = 0x4698A4u;
            goto label_4698a4;
        }
    }
    ctx->pc = 0x469888u;
label_469888:
    // 0x469888: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x469888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46988c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x469890: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x469894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469898: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x469898u;
    SET_GPR_U32(ctx, 31, 0x4698A0u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x469898u, 0x4698A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4698A0u;
label_4698a0:
    // 0x4698a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4698a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4698a4:
    // 0x4698a4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4698A4u;
    {
        const bool branch_taken_0x4698a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4698a4) {
            ctx->pc = 0x4698BCu;
            goto label_4698bc;
        }
    }
    ctx->pc = 0x4698ACu;
    // 0x4698ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4698acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4698b0: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x4698b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4698b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4698B4u;
    {
        const bool branch_taken_0x4698b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4698b4) {
            ctx->pc = 0x469888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469888;
        }
    }
    ctx->pc = 0x4698BCu;
label_4698bc:
    // 0x4698bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4698bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4698c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4698c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4698c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4698c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4698c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4698c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4698cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4698ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4698d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4698d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4698d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4698D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4698D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4698DCu;
    // 0x4698dc: 0x0  nop
    ctx->pc = 0x4698dcu;
    // NOP
    ctx->pc = 0x4698e0u;
}
