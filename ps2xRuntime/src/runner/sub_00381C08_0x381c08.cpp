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

// Function: sub_00381C08
// Address: 0x381c08 - 0x381c28
void sub_00381C08_0x381c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381C08_0x381c08");
#endif

    switch (ctx->pc) {
        case 0x381c1cu: goto label_381c1c;
        default: break;
    }

    ctx->pc = 0x381c08u;

    // 0x381c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x381c0c: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x381c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x381c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381c14: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x381C14u;
    SET_GPR_U32(ctx, 31, 0x381C1Cu);
    ctx->pc = 0x381C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C14u;
    // 0x381c18: 0x3484001f  ori         $a0, $a0, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x381C14u, 0x381C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C1Cu;
label_381c1c:
    // 0x381c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381c20: 0x3e00008  jr          $ra
    ctx->pc = 0x381C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C20u;
        // 0x381c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381C28u;
}
