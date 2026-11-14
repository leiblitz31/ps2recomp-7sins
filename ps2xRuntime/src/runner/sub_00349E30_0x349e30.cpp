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

// Function: sub_00349E30
// Address: 0x349e30 - 0x349e70
void sub_00349E30_0x349e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349E30_0x349e30");
#endif

    switch (ctx->pc) {
        case 0x349e60u: goto label_349e60;
        default: break;
    }

    ctx->pc = 0x349e30u;

    // 0x349e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349e34: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x349e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x349e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x349e3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x349e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x349e40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x349e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349e44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x349E44u;
    {
        const bool branch_taken_0x349e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E44u;
        // 0x349e48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e44) {
            ctx->pc = 0x349E60u;
            goto label_349e60;
        }
    }
    ctx->pc = 0x349E4Cu;
    // 0x349e4c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x349e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x349e50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x349e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x349e54: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x349e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
    // 0x349e58: 0xc0d26a8  jal         func_349AA0
    ctx->pc = 0x349E58u;
    SET_GPR_U32(ctx, 31, 0x349E60u);
    ctx->pc = 0x349E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E58u;
    // 0x349e5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349AA0u, 0x349E58u, 0x349E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E60u;
label_349e60:
    // 0x349e60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x349e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349e68: 0x3e00008  jr          $ra
    ctx->pc = 0x349E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E68u;
        // 0x349e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349E70u;
}
