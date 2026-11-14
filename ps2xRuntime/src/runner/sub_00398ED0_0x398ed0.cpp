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

// Function: sub_00398ED0
// Address: 0x398ed0 - 0x398f08
void sub_00398ED0_0x398ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398ED0_0x398ed0");
#endif

    switch (ctx->pc) {
        case 0x398efcu: goto label_398efc;
        default: break;
    }

    ctx->pc = 0x398ed0u;

    // 0x398ed0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x398ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ed4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398ed8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x398ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398edc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x398edcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x398ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ee4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x398ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x398ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398eec: 0x2444ae40  addiu       $a0, $v0, -0x51C0
    ctx->pc = 0x398eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946368));
    // 0x398ef0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x398ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ef4: 0xc104a46  jal         func_412918
    ctx->pc = 0x398EF4u;
    SET_GPR_U32(ctx, 31, 0x398EFCu);
    ctx->pc = 0x398EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398EF4u;
    // 0x398ef8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x398EF4u, 0x398EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398EFCu;
label_398efc:
    // 0x398efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398f00: 0x3e00008  jr          $ra
    ctx->pc = 0x398F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F00u;
        // 0x398f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398F08u;
}
