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

// Function: sub_00398E88
// Address: 0x398e88 - 0x398ed0
void sub_00398E88_0x398e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398E88_0x398e88");
#endif

    switch (ctx->pc) {
        case 0x398ec0u: goto label_398ec0;
        default: break;
    }

    ctx->pc = 0x398e88u;

    // 0x398e88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x398e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398e90: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x398e90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e94: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x398e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e98: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x398e98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e9c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x398e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ea0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x398ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x398ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398ea8: 0x2484ae40  addiu       $a0, $a0, -0x51C0
    ctx->pc = 0x398ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    // 0x398eac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x398eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398eb0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x398eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398eb4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x398eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398eb8: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x398EB8u;
    SET_GPR_U32(ctx, 31, 0x398EC0u);
    ctx->pc = 0x398EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398EB8u;
    // 0x398ebc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x398EB8u, 0x398EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398EC0u;
label_398ec0:
    // 0x398ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x398EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EC4u;
        // 0x398ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398ECCu;
    // 0x398ecc: 0x0  nop
    ctx->pc = 0x398eccu;
    // NOP
    ctx->pc = 0x398ed0u;
}
