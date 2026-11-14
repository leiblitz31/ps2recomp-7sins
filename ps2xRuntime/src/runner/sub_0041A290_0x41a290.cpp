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

// Function: sub_0041A290
// Address: 0x41a290 - 0x41a2f8
void sub_0041A290_0x41a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A290_0x41a290");
#endif

    switch (ctx->pc) {
        case 0x41a2c8u: goto label_41a2c8;
        default: break;
    }

    ctx->pc = 0x41a290u;

    // 0x41a290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41a294: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x41a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
    // 0x41a298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41a29c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41a2a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41a2a4: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x41a2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x41a2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a2b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41a2b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41a2b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41A2B8u;
    {
        const bool branch_taken_0x41a2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a2b8) {
            ctx->pc = 0x41A2D4u;
            goto label_41a2d4;
        }
    }
    ctx->pc = 0x41A2C0u;
    // 0x41a2c0: 0xc104284  jal         func_410A10
    ctx->pc = 0x41A2C0u;
    SET_GPR_U32(ctx, 31, 0x41A2C8u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41A2C0u, 0x41A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A2C8u;
label_41a2c8:
    // 0x41a2c8: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x41a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
    // 0x41a2cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41a2d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x41a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_41a2d4:
    // 0x41a2d4: 0x8f83be04  lw          $v1, -0x41FC($gp)
    ctx->pc = 0x41a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950404)));
    // 0x41a2d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41a2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a2dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41a2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41a2e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x41a2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a2ec: 0xaf83be04  sw          $v1, -0x41FC($gp)
    ctx->pc = 0x41a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950404), GPR_U32(ctx, 3));
    // 0x41a2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x41A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2F0u;
        // 0x41a2f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A2F8u;
}
