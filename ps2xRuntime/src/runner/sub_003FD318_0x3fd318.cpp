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

// Function: sub_003FD318
// Address: 0x3fd318 - 0x3fd340
void sub_003FD318_0x3fd318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD318_0x3fd318");
#endif

    switch (ctx->pc) {
        case 0x3fd318u: goto label_3fd318;
        case 0x3fd31cu: goto label_3fd31c;
        case 0x3fd320u: goto label_3fd320;
        case 0x3fd324u: goto label_3fd324;
        case 0x3fd328u: goto label_3fd328;
        case 0x3fd32cu: goto label_3fd32c;
        case 0x3fd330u: goto label_3fd330;
        case 0x3fd334u: goto label_3fd334;
        case 0x3fd338u: goto label_3fd338;
        case 0x3fd33cu: goto label_3fd33c;
        default: break;
    }

    ctx->pc = 0x3fd318u;

label_3fd318:
    // 0x3fd318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3fd318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3fd31c:
    // 0x3fd31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fd31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fd320:
    // 0x3fd320: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x3fd320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_3fd324:
    // 0x3fd324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3fd328:
    if (ctx->pc == 0x3FD328u) {
        ctx->pc = 0x3FD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD324u;
        // 0x3fd328: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD32Cu;
        goto label_3fd32c;
    }
    ctx->pc = 0x3FD324u;
    {
        const bool branch_taken_0x3fd324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD324u;
        // 0x3fd328: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd324) {
            ctx->pc = 0x3FD338u;
            goto label_3fd338;
        }
    }
    ctx->pc = 0x3FD32Cu;
label_3fd32c:
    // 0x3fd32c: 0x40f809  jalr        $v0
label_3fd330:
    if (ctx->pc == 0x3FD330u) {
        ctx->pc = 0x3FD334u;
        goto label_3fd334;
    }
    ctx->pc = 0x3FD32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD334u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD32Cu, 0x3FD334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD334u;
label_3fd334:
    // 0x3fd334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fd334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fd338:
    // 0x3fd338: 0x3e00008  jr          $ra
label_3fd33c:
    if (ctx->pc == 0x3FD33Cu) {
        ctx->pc = 0x3FD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD338u;
        // 0x3fd33c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD340u;
        goto label_fallthrough_0x3fd338;
    }
    ctx->pc = 0x3FD338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD338u;
        // 0x3fd33c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fd338:
    ctx->pc = 0x3FD340u;
}
