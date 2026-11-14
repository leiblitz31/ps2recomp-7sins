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

// Function: sub_003246F0
// Address: 0x3246f0 - 0x324710
void sub_003246F0_0x3246f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003246F0_0x3246f0");
#endif

    switch (ctx->pc) {
        case 0x324704u: goto label_324704;
        default: break;
    }

    ctx->pc = 0x3246f0u;

    // 0x3246f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3246f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3246f4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3246f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3246f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3246f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3246fc: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3246FCu;
    SET_GPR_U32(ctx, 31, 0x324704u);
    ctx->pc = 0x324700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3246FCu;
    // 0x324700: 0x34841005  ori         $a0, $a0, 0x1005 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4101);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3246FCu, 0x324704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324704u;
label_324704:
    // 0x324704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324708: 0x3e00008  jr          $ra
    ctx->pc = 0x324708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324708u;
        // 0x32470c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324710u;
}
