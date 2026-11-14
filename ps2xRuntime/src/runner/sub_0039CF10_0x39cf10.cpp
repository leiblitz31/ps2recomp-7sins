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

// Function: sub_0039CF10
// Address: 0x39cf10 - 0x39cf68
void sub_0039CF10_0x39cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CF10_0x39cf10");
#endif

    switch (ctx->pc) {
        case 0x39cf30u: goto label_39cf30;
        case 0x39cf40u: goto label_39cf40;
        default: break;
    }

    ctx->pc = 0x39cf10u;

    // 0x39cf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cf14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39cf18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39cf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x39cf20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cf28: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x39CF28u;
    SET_GPR_U32(ctx, 31, 0x39CF30u);
    ctx->pc = 0x39CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF28u;
    // 0x39cf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x39CF28u, 0x39CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF30u;
label_39cf30:
    // 0x39cf30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39cf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf38: 0xc0e3f3c  jal         func_38FCF0
    ctx->pc = 0x39CF38u;
    SET_GPR_U32(ctx, 31, 0x39CF40u);
    ctx->pc = 0x39CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF38u;
    // 0x39cf3c: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FCF0u, 0x39CF38u, 0x39CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF40u;
label_39cf40:
    // 0x39cf40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39cf40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cf48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39cf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf4c: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x39cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x39cf50: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x39cf50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x39cf54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39cf54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cf58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x39CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF5Cu;
        // 0x39cf60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CF64u;
    // 0x39cf64: 0x0  nop
    ctx->pc = 0x39cf64u;
    // NOP
    ctx->pc = 0x39cf68u;
}
