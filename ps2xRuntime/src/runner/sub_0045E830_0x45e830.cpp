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

// Function: sub_0045E830
// Address: 0x45e830 - 0x45e8b0
void sub_0045E830_0x45e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E830_0x45e830");
#endif

    switch (ctx->pc) {
        case 0x45e858u: goto label_45e858;
        case 0x45e878u: goto label_45e878;
        default: break;
    }

    ctx->pc = 0x45e830u;

    // 0x45e830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45e834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45e838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45e83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45e840: 0x8f83bf9c  lw          $v1, -0x4064($gp)
    ctx->pc = 0x45e840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950812)));
    // 0x45e844: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x45E844u;
    {
        const bool branch_taken_0x45e844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e844) {
            ctx->pc = 0x45E88Cu;
            goto label_45e88c;
        }
    }
    ctx->pc = 0x45E84Cu;
    // 0x45e84c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45e84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e850: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x45E850u;
    {
        const bool branch_taken_0x45e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e850) {
            ctx->pc = 0x45E87Cu;
            goto label_45e87c;
        }
    }
    ctx->pc = 0x45E858u;
label_45e858:
    // 0x45e858: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x45e858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x45e85c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x45e860: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45e860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45e864: 0x8f82bf9c  lw          $v0, -0x4064($gp)
    ctx->pc = 0x45e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950812)));
    // 0x45e868: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x45e868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e86c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45e86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e870: 0xc117a2c  jal         func_45E8B0
    ctx->pc = 0x45E870u;
    SET_GPR_U32(ctx, 31, 0x45E878u);
    ctx->pc = 0x45E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E8B0u, 0x45E870u, 0x45E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E878u;
label_45e878:
    // 0x45e878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45e878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45e87c:
    // 0x45e87c: 0x8f83bf94  lw          $v1, -0x406C($gp)
    ctx->pc = 0x45e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950804)));
    // 0x45e880: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x45e880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x45e884: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x45E884u;
    {
        const bool branch_taken_0x45e884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e884) {
            ctx->pc = 0x45E858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e858;
        }
    }
    ctx->pc = 0x45E88Cu;
label_45e88c:
    // 0x45e88c: 0xaf80bf98  sw          $zero, -0x4068($gp)
    ctx->pc = 0x45e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950808), GPR_U32(ctx, 0));
    // 0x45e890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45e890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45e894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e89c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45e89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45e8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x45E8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E8A8u;
    // 0x45e8a8: 0x0  nop
    ctx->pc = 0x45e8a8u;
    // NOP
    // 0x45e8ac: 0x0  nop
    ctx->pc = 0x45e8acu;
    // NOP
    ctx->pc = 0x45e8b0u;
}
