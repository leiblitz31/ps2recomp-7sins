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

// Function: sub_00383A08
// Address: 0x383a08 - 0x383a38
void sub_00383A08_0x383a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383A08_0x383a08");
#endif

    switch (ctx->pc) {
        case 0x383a24u: goto label_383a24;
        default: break;
    }

    ctx->pc = 0x383a08u;

    // 0x383a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x383a0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x383a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x383a10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x383a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x383a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383a1c: 0xc0e093a  jal         func_3824E8
    ctx->pc = 0x383A1Cu;
    SET_GPR_U32(ctx, 31, 0x383A24u);
    ctx->pc = 0x383A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A1Cu;
    // 0x383a20: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3824E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3824E8u, 0x383A1Cu, 0x383A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A24u;
label_383a24:
    // 0x383a24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x383a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383a2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x383a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383a30: 0x3e00008  jr          $ra
    ctx->pc = 0x383A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A30u;
        // 0x383a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383A38u;
}
