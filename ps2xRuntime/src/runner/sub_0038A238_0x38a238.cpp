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

// Function: sub_0038A238
// Address: 0x38a238 - 0x38a288
void sub_0038A238_0x38a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A238_0x38a238");
#endif

    switch (ctx->pc) {
        case 0x38a254u: goto label_38a254;
        default: break;
    }

    ctx->pc = 0x38a238u;

    // 0x38a238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a23c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38a240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a244: 0x24a5a690  addiu       $a1, $a1, -0x5970
    ctx->pc = 0x38a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944400));
    // 0x38a248: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x38a248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x38a24c: 0xc0e2666  jal         func_389998
    ctx->pc = 0x38A24Cu;
    SET_GPR_U32(ctx, 31, 0x38A254u);
    ctx->pc = 0x38A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A24Cu;
    // 0x38a250: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389998u, 0x38A24Cu, 0x38A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A254u;
label_38a254:
    // 0x38a254: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x38a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A25Cu;
        // 0x38a260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A264u;
    // 0x38a264: 0x0  nop
    ctx->pc = 0x38a264u;
    // NOP
    // 0x38a268: 0x8f82a98c  lw          $v0, -0x5674($gp)
    ctx->pc = 0x38a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
    // 0x38a26c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38a270: 0x3e00008  jr          $ra
    ctx->pc = 0x38A270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A270u;
        // 0x38a274: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A278u;
    // 0x38a278: 0x8f82a988  lw          $v0, -0x5678($gp)
    ctx->pc = 0x38a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
    // 0x38a27c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38a280: 0x3e00008  jr          $ra
    ctx->pc = 0x38A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A280u;
        // 0x38a284: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A288u;
}
