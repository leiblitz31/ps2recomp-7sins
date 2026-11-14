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

// Function: sub_001BE5A0
// Address: 0x1be5a0 - 0x1be600
void sub_001BE5A0_0x1be5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE5A0_0x1be5a0");
#endif

    switch (ctx->pc) {
        case 0x1be5ccu: goto label_1be5cc;
        case 0x1be5e4u: goto label_1be5e4;
        default: break;
    }

    ctx->pc = 0x1be5a0u;

    // 0x1be5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be5ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1be5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1be5b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be5b4: 0x2c410081  sltiu       $at, $v0, 0x81
    ctx->pc = 0x1be5b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1be5b8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE5B8u;
    {
        const bool branch_taken_0x1be5b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be5b8) {
            ctx->pc = 0x1BE5D4u;
            goto label_1be5d4;
        }
    }
    ctx->pc = 0x1BE5C0u;
    // 0x1be5c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be5c4: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BE5C4u;
    SET_GPR_U32(ctx, 31, 0x1BE5CCu);
    ctx->pc = 0x1BE600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE600u, 0x1BE5C4u, 0x1BE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5CCu;
label_1be5cc:
    // 0x1be5cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE5CCu;
    {
        const bool branch_taken_0x1be5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5cc) {
            ctx->pc = 0x1BE5E4u;
            goto label_1be5e4;
        }
    }
    ctx->pc = 0x1BE5D4u;
label_1be5d4:
    // 0x1be5d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be5d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be5dc: 0xc070fa0  jal         func_1C3E80
    ctx->pc = 0x1BE5DCu;
    SET_GPR_U32(ctx, 31, 0x1BE5E4u);
    ctx->pc = 0x1C3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3E80u, 0x1BE5DCu, 0x1BE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5E4u;
label_1be5e4:
    // 0x1be5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be5e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE5F4u;
    // 0x1be5f4: 0x0  nop
    ctx->pc = 0x1be5f4u;
    // NOP
    // 0x1be5f8: 0x0  nop
    ctx->pc = 0x1be5f8u;
    // NOP
    // 0x1be5fc: 0x0  nop
    ctx->pc = 0x1be5fcu;
    // NOP
    ctx->pc = 0x1be600u;
}
