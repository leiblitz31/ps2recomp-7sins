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

// Function: sub_0049ABD8
// Address: 0x49abd8 - 0x49ac00
void sub_0049ABD8_0x49abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ABD8_0x49abd8");
#endif

    switch (ctx->pc) {
        case 0x49abecu: goto label_49abec;
        default: break;
    }

    ctx->pc = 0x49abd8u;

    // 0x49abd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49abd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49abdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49abe0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x49abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49abe4: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x49ABE4u;
    SET_GPR_U32(ctx, 31, 0x49ABECu);
    ctx->pc = 0x49ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ABE4u;
    // 0x49abe8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49ABE4u, 0x49ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ABECu;
label_49abec:
    // 0x49abec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49abecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49abf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x49abf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x49abf4: 0x3e00008  jr          $ra
    ctx->pc = 0x49ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ABF4u;
        // 0x49abf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ABF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ABFCu;
    // 0x49abfc: 0x0  nop
    ctx->pc = 0x49abfcu;
    // NOP
    ctx->pc = 0x49ac00u;
}
