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

// Function: sub_003B3F68
// Address: 0x3b3f68 - 0x3b3fa0
void sub_003B3F68_0x3b3f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3F68_0x3b3f68");
#endif

    switch (ctx->pc) {
        case 0x3b3f80u: goto label_3b3f80;
        default: break;
    }

    ctx->pc = 0x3b3f68u;

    // 0x3b3f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3f6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b3f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b3f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b3f78: 0xc0eb2c4  jal         func_3ACB10
    ctx->pc = 0x3B3F78u;
    SET_GPR_U32(ctx, 31, 0x3B3F80u);
    ctx->pc = 0x3B3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F78u;
    // 0x3b3f7c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACB10u, 0x3B3F78u, 0x3B3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F80u;
label_3b3f80:
    // 0x3b3f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b3f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b3f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f8c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x3b3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x3b3f90: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x3b3f90u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x3b3f94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b3f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3f98: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F98u;
        // 0x3b3f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3FA0u;
}
