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

// Function: sub_0038A9E0
// Address: 0x38a9e0 - 0x38aa30
void sub_0038A9E0_0x38a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A9E0_0x38a9e0");
#endif

    switch (ctx->pc) {
        case 0x38aa08u: goto label_38aa08;
        default: break;
    }

    ctx->pc = 0x38a9e0u;

    // 0x38a9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a9e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38a9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38a9ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38a9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a9f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a9fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x38a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x38aa00: 0xc1054c0  jal         func_415300
    ctx->pc = 0x38AA00u;
    SET_GPR_U32(ctx, 31, 0x38AA08u);
    ctx->pc = 0x38AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA00u;
    // 0x38aa04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415300u, 0x38AA00u, 0x38AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA08u;
label_38aa08:
    // 0x38aa08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38aa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38aa10: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x38aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38aa14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38aa18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38aa1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38aa1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38aa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38aa24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38aa24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x38AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA28u;
        // 0x38aa2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AA30u;
}
