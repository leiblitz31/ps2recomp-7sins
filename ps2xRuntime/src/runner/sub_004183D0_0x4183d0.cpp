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

// Function: sub_004183D0
// Address: 0x4183d0 - 0x418438
void sub_004183D0_0x4183d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004183D0_0x4183d0");
#endif

    switch (ctx->pc) {
        case 0x418408u: goto label_418408;
        default: break;
    }

    ctx->pc = 0x4183d0u;

    // 0x4183d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4183d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4183d4: 0x8f83bdf8  lw          $v1, -0x4208($gp)
    ctx->pc = 0x4183d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950392)));
    // 0x4183d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4183d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4183dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4183e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4183e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4183e4: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x4183e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4183e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4183e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4183ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4183ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4183f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4183f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4183f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4183f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4183f8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4183F8u;
    {
        const bool branch_taken_0x4183f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4183f8) {
            ctx->pc = 0x418414u;
            goto label_418414;
        }
    }
    ctx->pc = 0x418400u;
    // 0x418400: 0xc104284  jal         func_410A10
    ctx->pc = 0x418400u;
    SET_GPR_U32(ctx, 31, 0x418408u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x418400u, 0x418408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418408u;
label_418408:
    // 0x418408: 0x8f83bdf8  lw          $v1, -0x4208($gp)
    ctx->pc = 0x418408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950392)));
    // 0x41840c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x418410: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x418410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_418414:
    // 0x418414: 0x8f83bdfc  lw          $v1, -0x4204($gp)
    ctx->pc = 0x418414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950396)));
    // 0x418418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x418418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41841c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41841cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x418420: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x418420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x418424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x418424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x418428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41842c: 0xaf83bdfc  sw          $v1, -0x4204($gp)
    ctx->pc = 0x41842cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950396), GPR_U32(ctx, 3));
    // 0x418430: 0x3e00008  jr          $ra
    ctx->pc = 0x418430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418430u;
        // 0x418434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418438u;
}
