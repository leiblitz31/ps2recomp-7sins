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

// Function: sub_0038A6A8
// Address: 0x38a6a8 - 0x38a6f0
void sub_0038A6A8_0x38a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A6A8_0x38a6a8");
#endif

    switch (ctx->pc) {
        case 0x38a6d0u: goto label_38a6d0;
        default: break;
    }

    ctx->pc = 0x38a6a8u;

    // 0x38a6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a6ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38a6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a6b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38a6bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x38a6c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A6C0u;
    {
        const bool branch_taken_0x38a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a6c0) {
            ctx->pc = 0x38A6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A6C0u;
            // 0x38a6c4: 0x92030003  lbu         $v1, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A6D4u;
            goto label_38a6d4;
        }
    }
    ctx->pc = 0x38A6C8u;
    // 0x38a6c8: 0xc0e1fec  jal         func_387FB0
    ctx->pc = 0x38A6C8u;
    SET_GPR_U32(ctx, 31, 0x38A6D0u);
    ctx->pc = 0x387FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387FB0u, 0x38A6C8u, 0x38A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6D0u;
label_38a6d0:
    // 0x38a6d0: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x38a6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_38a6d4:
    // 0x38a6d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a6dc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x38a6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x38a6e0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x38a6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x38a6e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38a6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6E8u;
        // 0x38a6ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A6F0u;
}
