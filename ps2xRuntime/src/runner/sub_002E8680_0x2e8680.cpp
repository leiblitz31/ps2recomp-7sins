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

// Function: sub_002E8680
// Address: 0x2e8680 - 0x2e86b0
void sub_002E8680_0x2e8680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8680_0x2e8680");
#endif

    switch (ctx->pc) {
        case 0x2e8680u: goto label_2e8680;
        case 0x2e8684u: goto label_2e8684;
        case 0x2e8688u: goto label_2e8688;
        case 0x2e868cu: goto label_2e868c;
        case 0x2e8690u: goto label_2e8690;
        case 0x2e8694u: goto label_2e8694;
        case 0x2e8698u: goto label_2e8698;
        case 0x2e869cu: goto label_2e869c;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e86a4u: goto label_2e86a4;
        case 0x2e86a8u: goto label_2e86a8;
        case 0x2e86acu: goto label_2e86ac;
        default: break;
    }

    ctx->pc = 0x2e8680u;

label_2e8680:
    // 0x2e8680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e8684:
    // 0x2e8684: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2e8688:
    // 0x2e8688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e868c:
    // 0x2e868c: 0x8c42e790  lw          $v0, -0x1870($v0)
    ctx->pc = 0x2e868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961040)));
label_2e8690:
    // 0x2e8690: 0x40f809  jalr        $v0
label_2e8694:
    if (ctx->pc == 0x2E8694u) {
        ctx->pc = 0x2E8698u;
        goto label_2e8698;
    }
    ctx->pc = 0x2E8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8698u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8690u, 0x2E8698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8698u;
label_2e8698:
    // 0x2e8698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e869c:
    // 0x2e869c: 0x3e00008  jr          $ra
label_2e86a0:
    if (ctx->pc == 0x2E86A0u) {
        ctx->pc = 0x2E86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E869Cu;
        // 0x2e86a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86A4u;
        goto label_2e86a4;
    }
    ctx->pc = 0x2E869Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E869Cu;
        // 0x2e86a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E869Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E86A4u;
label_2e86a4:
    // 0x2e86a4: 0x0  nop
    ctx->pc = 0x2e86a4u;
    // NOP
label_2e86a8:
    // 0x2e86a8: 0x0  nop
    ctx->pc = 0x2e86a8u;
    // NOP
label_2e86ac:
    // 0x2e86ac: 0x0  nop
    ctx->pc = 0x2e86acu;
    // NOP
    ctx->pc = 0x2e86b0u;
}
