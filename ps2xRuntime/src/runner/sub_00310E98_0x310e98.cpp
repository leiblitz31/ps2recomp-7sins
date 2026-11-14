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

// Function: sub_00310E98
// Address: 0x310e98 - 0x310ec8
void sub_00310E98_0x310e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310E98_0x310e98");
#endif

    ctx->pc = 0x310e98u;

    // 0x310e98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x310e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e9c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x310e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x310ea0: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x310ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x310ea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310ea8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x310ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310eac: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310EACu;
    {
        const bool branch_taken_0x310eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x310EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EACu;
        // 0x310eb0: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310eac) {
            ctx->pc = 0x310EC0u;
            goto label_310ec0;
        }
    }
    ctx->pc = 0x310EB4u;
    // 0x310eb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x310eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310eb8: 0x80c434e  j           func_310D38
    ctx->pc = 0x310EB8u;
    ctx->pc = 0x310EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EB8u;
    // 0x310ebc: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310D38u, 0x310EB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x310EC0u;
label_310ec0:
    // 0x310ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x310EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310EC8u;
}
