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

// Function: sub_002EA278
// Address: 0x2ea278 - 0x2ea2a0
void sub_002EA278_0x2ea278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA278_0x2ea278");
#endif

    switch (ctx->pc) {
        case 0x2ea28cu: goto label_2ea28c;
        default: break;
    }

    ctx->pc = 0x2ea278u;

    // 0x2ea278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ea278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ea27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea284: 0xc0bcce8  jal         func_2F33A0
    ctx->pc = 0x2EA284u;
    SET_GPR_U32(ctx, 31, 0x2EA28Cu);
    ctx->pc = 0x2EA288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA284u;
    // 0x2ea288: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F33A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F33A0u, 0x2EA284u, 0x2EA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA28Cu;
label_2ea28c:
    // 0x2ea28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea290: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea294: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea298: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA298u;
        // 0x2ea29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA2A0u;
}
