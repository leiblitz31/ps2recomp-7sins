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

// Function: sub_0041D878
// Address: 0x41d878 - 0x41d8e0
void sub_0041D878_0x41d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D878_0x41d878");
#endif

    switch (ctx->pc) {
        case 0x41d8b0u: goto label_41d8b0;
        default: break;
    }

    ctx->pc = 0x41d878u;

    // 0x41d878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41d87c: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
    // 0x41d880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41d884: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41d888: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41d88c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x41d88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x41d890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d898: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41d898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41d89c: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x41d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x41d8a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41D8A0u;
    {
        const bool branch_taken_0x41d8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d8a0) {
            ctx->pc = 0x41D8BCu;
            goto label_41d8bc;
        }
    }
    ctx->pc = 0x41D8A8u;
    // 0x41d8a8: 0xc104284  jal         func_410A10
    ctx->pc = 0x41D8A8u;
    SET_GPR_U32(ctx, 31, 0x41D8B0u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41D8A8u, 0x41D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D8B0u;
label_41d8b0:
    // 0x41d8b0: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
    // 0x41d8b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41d8b8: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x41d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_41d8bc:
    // 0x41d8bc: 0x8f83be14  lw          $v1, -0x41EC($gp)
    ctx->pc = 0x41d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950420)));
    // 0x41d8c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d8c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41d8c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x41d8cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d8d4: 0xaf83be14  sw          $v1, -0x41EC($gp)
    ctx->pc = 0x41d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950420), GPR_U32(ctx, 3));
    // 0x41d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D8D8u;
        // 0x41d8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D8E0u;
}
