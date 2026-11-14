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

// Function: sub_0039CE08
// Address: 0x39ce08 - 0x39ce38
void sub_0039CE08_0x39ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CE08_0x39ce08");
#endif

    switch (ctx->pc) {
        case 0x39ce20u: goto label_39ce20;
        default: break;
    }

    ctx->pc = 0x39ce08u;

    // 0x39ce08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ce0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39ce0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39ce14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ce18: 0xc0e801c  jal         func_3A0070
    ctx->pc = 0x39CE18u;
    SET_GPR_U32(ctx, 31, 0x39CE20u);
    ctx->pc = 0x39CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE18u;
    // 0x39ce1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0070u, 0x39CE18u, 0x39CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE20u;
label_39ce20:
    // 0x39ce20: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x39ce20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x39ce24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ce28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ce28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ce30: 0x3e00008  jr          $ra
    ctx->pc = 0x39CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CE30u;
        // 0x39ce34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CE38u;
}
