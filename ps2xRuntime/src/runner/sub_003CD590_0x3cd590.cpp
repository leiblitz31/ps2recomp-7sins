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

// Function: sub_003CD590
// Address: 0x3cd590 - 0x3cd5d0
void sub_003CD590_0x3cd590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD590_0x3cd590");
#endif

    switch (ctx->pc) {
        case 0x3cd5bcu: goto label_3cd5bc;
        default: break;
    }

    ctx->pc = 0x3cd590u;

    // 0x3cd590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cd590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cd594: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3cd594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3cd598: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cd598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3cd59c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cd59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cd5a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cd5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cd5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cd5a8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3cd5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3cd5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5b0: 0x0  nop
    ctx->pc = 0x3cd5b0u;
    // NOP
    // 0x3cd5b4: 0xc0e7126  jal         func_39C498
    ctx->pc = 0x3CD5B4u;
    SET_GPR_U32(ctx, 31, 0x3CD5BCu);
    ctx->pc = 0x3CD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5B4u;
    // 0x3cd5b8: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C498u, 0x3CD5B4u, 0x3CD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5BCu;
label_3cd5bc:
    // 0x3cd5bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cd5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cd5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd5c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cd5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5C8u;
        // 0x3cd5cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD5D0u;
}
