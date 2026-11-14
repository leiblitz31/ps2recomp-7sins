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

// Function: sub_0038A990
// Address: 0x38a990 - 0x38a9e0
void sub_0038A990_0x38a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A990_0x38a990");
#endif

    switch (ctx->pc) {
        case 0x38a9b8u: goto label_38a9b8;
        default: break;
    }

    ctx->pc = 0x38a990u;

    // 0x38a990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38a998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38a99c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38a99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a9a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a9ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x38a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x38a9b0: 0xc0e3684  jal         func_38DA10
    ctx->pc = 0x38A9B0u;
    SET_GPR_U32(ctx, 31, 0x38A9B8u);
    ctx->pc = 0x38A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9B0u;
    // 0x38a9b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA10u, 0x38A9B0u, 0x38A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9B8u;
label_38a9b8:
    // 0x38a9b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a9c0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x38a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38a9c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a9c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38a9cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38a9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38a9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a9d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9D8u;
        // 0x38a9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A9E0u;
}
