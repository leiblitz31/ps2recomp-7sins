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

// Function: sub_0046D8E0
// Address: 0x46d8e0 - 0x46d980
void sub_0046D8E0_0x46d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D8E0_0x46d8e0");
#endif

    switch (ctx->pc) {
        case 0x46d90cu: goto label_46d90c;
        case 0x46d920u: goto label_46d920;
        default: break;
    }

    ctx->pc = 0x46d8e0u;

    // 0x46d8e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46d8e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46d8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46d8ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46d8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46d8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d8f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x46d8f8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x46d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x46d8fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x46d8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46d900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46d900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d904: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x46D904u;
    {
        const bool branch_taken_0x46d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d904) {
            ctx->pc = 0x46D954u;
            goto label_46d954;
        }
    }
    ctx->pc = 0x46D90Cu;
label_46d90c:
    // 0x46d90c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46d910: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x46d910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x46d914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46d914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d918: 0xc056628  jal         func_1598A0
    ctx->pc = 0x46D918u;
    SET_GPR_U32(ctx, 31, 0x46D920u);
    ctx->pc = 0x1598A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598A0u, 0x46D918u, 0x46D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D920u;
label_46d920:
    // 0x46d920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46d920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d924: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46d928: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x46d928u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x46d92c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x46D92Cu;
    {
        const bool branch_taken_0x46d92c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d92c) {
            ctx->pc = 0x46D940u;
            goto label_46d940;
        }
    }
    ctx->pc = 0x46D934u;
    // 0x46d934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x46d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d938: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46D938u;
    {
        const bool branch_taken_0x46d938 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46d938) {
            ctx->pc = 0x46D94Cu;
            goto label_46d94c;
        }
    }
    ctx->pc = 0x46D940u;
label_46d940:
    // 0x46d940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46d940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d944: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x46D944u;
    {
        const bool branch_taken_0x46d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d944) {
            ctx->pc = 0x46D964u;
            goto label_46d964;
        }
    }
    ctx->pc = 0x46D94Cu;
label_46d94c:
    // 0x46d94c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46d94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x46d950: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x46d950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46d954:
    // 0x46d954: 0x2e022710  sltiu       $v0, $s0, 0x2710
    ctx->pc = 0x46d954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10000) ? 1 : 0);
    // 0x46d958: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x46D958u;
    {
        const bool branch_taken_0x46d958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d958) {
            ctx->pc = 0x46D90Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d90c;
        }
    }
    ctx->pc = 0x46D960u;
    // 0x46d960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46d960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d964:
    // 0x46d964: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46d964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46d968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d96c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46d96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d974: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46d974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d978: 0x3e00008  jr          $ra
    ctx->pc = 0x46D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D980u;
}
