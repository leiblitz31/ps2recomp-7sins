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

// Function: sub_0038E408
// Address: 0x38e408 - 0x38e470
void sub_0038E408_0x38e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E408_0x38e408");
#endif

    switch (ctx->pc) {
        case 0x38e440u: goto label_38e440;
        default: break;
    }

    ctx->pc = 0x38e408u;

    // 0x38e408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e40c: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
    // 0x38e410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e414: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38e414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x38e418: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38e41c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x38e41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x38e420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e428: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x38e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x38e42c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38e430: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E430u;
    {
        const bool branch_taken_0x38e430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e430) {
            ctx->pc = 0x38E44Cu;
            goto label_38e44c;
        }
    }
    ctx->pc = 0x38E438u;
    // 0x38e438: 0xc104284  jal         func_410A10
    ctx->pc = 0x38E438u;
    SET_GPR_U32(ctx, 31, 0x38E440u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x38E438u, 0x38E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E440u;
label_38e440:
    // 0x38e440: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
    // 0x38e444: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x38e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x38e448: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38e448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_38e44c:
    // 0x38e44c: 0x8f83bd44  lw          $v1, -0x42BC($gp)
    ctx->pc = 0x38e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950212)));
    // 0x38e450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38e450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e454: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e458: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38e458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38e45c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e464: 0xaf83bd44  sw          $v1, -0x42BC($gp)
    ctx->pc = 0x38e464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950212), GPR_U32(ctx, 3));
    // 0x38e468: 0x3e00008  jr          $ra
    ctx->pc = 0x38E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E468u;
        // 0x38e46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E470u;
}
