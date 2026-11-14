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

// Function: sub_0032A978
// Address: 0x32a978 - 0x32a9b0
void sub_0032A978_0x32a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A978_0x32a978");
#endif

    switch (ctx->pc) {
        case 0x32a990u: goto label_32a990;
        default: break;
    }

    ctx->pc = 0x32a978u;

    // 0x32a978: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32a978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a97c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a980: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x32a980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x32a984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a988: 0xc0cabce  jal         func_32AF38
    ctx->pc = 0x32A988u;
    SET_GPR_U32(ctx, 31, 0x32A990u);
    ctx->pc = 0x32A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A988u;
    // 0x32a98c: 0x24842374  addiu       $a0, $a0, 0x2374 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AF38u, 0x32A988u, 0x32A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A990u;
label_32a990:
    // 0x32a990: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32A990u;
    {
        const bool branch_taken_0x32a990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A990u;
        // 0x32a994: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a990) {
            ctx->pc = 0x32A99Cu;
            goto label_32a99c;
        }
    }
    ctx->pc = 0x32A998u;
    // 0x32a998: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x32a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32a99c:
    // 0x32a99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a9a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x32a9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9A4u;
        // 0x32a9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A9ACu;
    // 0x32a9ac: 0x0  nop
    ctx->pc = 0x32a9acu;
    // NOP
    ctx->pc = 0x32a9b0u;
}
