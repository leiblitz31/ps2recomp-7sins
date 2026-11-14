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

// Function: sub_00487550
// Address: 0x487550 - 0x4875b0
void sub_00487550_0x487550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487550_0x487550");
#endif

    switch (ctx->pc) {
        case 0x48756cu: goto label_48756c;
        case 0x487580u: goto label_487580;
        default: break;
    }

    ctx->pc = 0x487550u;

    // 0x487550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x487550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x487554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x487554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x487558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48755c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x487560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x487560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487564: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x487564u;
    {
        const bool branch_taken_0x487564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487564) {
            ctx->pc = 0x487584u;
            goto label_487584;
        }
    }
    ctx->pc = 0x48756Cu;
label_48756c:
    // 0x48756c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x487574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487578: 0xc0c8784  jal         func_321E10
    ctx->pc = 0x487578u;
    SET_GPR_U32(ctx, 31, 0x487580u);
    ctx->pc = 0x321E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321E10u, 0x487578u, 0x487580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487580u;
label_487580:
    // 0x487580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x487580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_487584:
    // 0x487584: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x487584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x487588: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x487588u;
    {
        const bool branch_taken_0x487588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x487588) {
            ctx->pc = 0x48756Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48756c;
        }
    }
    ctx->pc = 0x487590u;
    // 0x487590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x487590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48759c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48759cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4875a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4875A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4875A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4875A8u;
    // 0x4875a8: 0x0  nop
    ctx->pc = 0x4875a8u;
    // NOP
    // 0x4875ac: 0x0  nop
    ctx->pc = 0x4875acu;
    // NOP
    ctx->pc = 0x4875b0u;
}
