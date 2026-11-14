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

// Function: sub_00314A00
// Address: 0x314a00 - 0x314a68
void sub_00314A00_0x314a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314A00_0x314a00");
#endif

    switch (ctx->pc) {
        case 0x314a48u: goto label_314a48;
        default: break;
    }

    ctx->pc = 0x314a00u;

    // 0x314a00: 0x8f83a5b4  lw          $v1, -0x5A4C($gp)
    ctx->pc = 0x314a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
    // 0x314a04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x314a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x314a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x314a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x314A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A0Cu;
        // 0x314a10: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314A14u;
    // 0x314a14: 0x0  nop
    ctx->pc = 0x314a14u;
    // NOP
    // 0x314a18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314a1c: 0x8f82a5b0  lw          $v0, -0x5A50($gp)
    ctx->pc = 0x314a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944176)));
    // 0x314a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x314a24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x314a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x314a28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314a30: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x314a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x314a34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x314a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x314a38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314A38u;
    {
        const bool branch_taken_0x314a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A38u;
        // 0x314a3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a38) {
            ctx->pc = 0x314A50u;
            goto label_314a50;
        }
    }
    ctx->pc = 0x314A40u;
    // 0x314a40: 0xc0c4b5a  jal         func_312D68
    ctx->pc = 0x314A40u;
    SET_GPR_U32(ctx, 31, 0x314A48u);
    ctx->pc = 0x312D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312D68u, 0x314A40u, 0x314A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A48u;
label_314a48:
    // 0x314a48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x314a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x314a4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314a50:
    // 0x314a50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x314a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x314A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A5Cu;
        // 0x314a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314A64u;
    // 0x314a64: 0x0  nop
    ctx->pc = 0x314a64u;
    // NOP
    ctx->pc = 0x314a68u;
}
