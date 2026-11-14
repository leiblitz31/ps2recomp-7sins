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

// Function: sub_003293A0
// Address: 0x3293a0 - 0x3293f8
void sub_003293A0_0x3293a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003293A0_0x3293a0");
#endif

    switch (ctx->pc) {
        case 0x3293d4u: goto label_3293d4;
        default: break;
    }

    ctx->pc = 0x3293a0u;

    // 0x3293a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3293a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3293a4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x3293a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x3293a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3293a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3293ac: 0x8c622320  lw          $v0, 0x2320($v1)
    ctx->pc = 0x3293acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2320u));
    // 0x3293b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3293b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3293b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3293b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3293b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3293b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3293bc: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x3293bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3293c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3293c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3293c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3293C4u;
    {
        const bool branch_taken_0x3293c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3293c4) {
            ctx->pc = 0x3293C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3293C4u;
            // 0x3293c8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3293D8u;
            goto label_3293d8;
        }
    }
    ctx->pc = 0x3293CCu;
    // 0x3293cc: 0xc0ca09c  jal         func_328270
    ctx->pc = 0x3293CCu;
    SET_GPR_U32(ctx, 31, 0x3293D4u);
    ctx->pc = 0x328270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328270u, 0x3293CCu, 0x3293D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293D4u;
label_3293d4:
    // 0x3293d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3293d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3293d8:
    // 0x3293d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3293d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3293dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3293dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3293e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3293e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3293e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3293e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3293e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3293e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3293ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3293ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3293F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293ECu;
        // 0x3293f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3293ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3293F4u;
    // 0x3293f4: 0x0  nop
    ctx->pc = 0x3293f4u;
    // NOP
    ctx->pc = 0x3293f8u;
}
