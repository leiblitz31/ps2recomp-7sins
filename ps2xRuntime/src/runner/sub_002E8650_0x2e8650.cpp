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

// Function: sub_002E8650
// Address: 0x2e8650 - 0x2e8680
void sub_002E8650_0x2e8650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8650_0x2e8650");
#endif

    switch (ctx->pc) {
        case 0x2e8650u: goto label_2e8650;
        case 0x2e8654u: goto label_2e8654;
        case 0x2e8658u: goto label_2e8658;
        case 0x2e865cu: goto label_2e865c;
        case 0x2e8660u: goto label_2e8660;
        case 0x2e8664u: goto label_2e8664;
        case 0x2e8668u: goto label_2e8668;
        case 0x2e866cu: goto label_2e866c;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e8674u: goto label_2e8674;
        case 0x2e8678u: goto label_2e8678;
        case 0x2e867cu: goto label_2e867c;
        default: break;
    }

    ctx->pc = 0x2e8650u;

label_2e8650:
    // 0x2e8650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e8654:
    // 0x2e8654: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2e8654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2e8658:
    // 0x2e8658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e865c:
    // 0x2e865c: 0x8c42e798  lw          $v0, -0x1868($v0)
    ctx->pc = 0x2e865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961048)));
label_2e8660:
    // 0x2e8660: 0x40f809  jalr        $v0
label_2e8664:
    if (ctx->pc == 0x2E8664u) {
        ctx->pc = 0x2E8668u;
        goto label_2e8668;
    }
    ctx->pc = 0x2E8660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8660u, 0x2E8668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8668u;
label_2e8668:
    // 0x2e8668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e866c:
    // 0x2e866c: 0x3e00008  jr          $ra
label_2e8670:
    if (ctx->pc == 0x2E8670u) {
        ctx->pc = 0x2E8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E866Cu;
        // 0x2e8670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8674u;
        goto label_2e8674;
    }
    ctx->pc = 0x2E866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E866Cu;
        // 0x2e8670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8674u;
label_2e8674:
    // 0x2e8674: 0x0  nop
    ctx->pc = 0x2e8674u;
    // NOP
label_2e8678:
    // 0x2e8678: 0x0  nop
    ctx->pc = 0x2e8678u;
    // NOP
label_2e867c:
    // 0x2e867c: 0x0  nop
    ctx->pc = 0x2e867cu;
    // NOP
    ctx->pc = 0x2e8680u;
}
