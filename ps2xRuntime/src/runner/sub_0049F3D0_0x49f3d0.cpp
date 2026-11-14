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

// Function: sub_0049F3D0
// Address: 0x49f3d0 - 0x49f420
void sub_0049F3D0_0x49f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F3D0_0x49f3d0");
#endif

    switch (ctx->pc) {
        case 0x49f3ecu: goto label_49f3ec;
        case 0x49f404u: goto label_49f404;
        default: break;
    }

    ctx->pc = 0x49f3d0u;

    // 0x49f3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49f3d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49f3d8: 0x858818  mult        $s1, $a0, $a1
    ctx->pc = 0x49f3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49f3dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49f3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f3e4: 0xc0bb484  jal         func_2ED210
    ctx->pc = 0x49F3E4u;
    SET_GPR_U32(ctx, 31, 0x49F3ECu);
    ctx->pc = 0x49F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F3E4u;
    // 0x49f3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED210u, 0x49F3E4u, 0x49F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F3ECu;
label_49f3ec:
    // 0x49f3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49f3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f3f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F3F0u;
    {
        const bool branch_taken_0x49f3f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F3F0u;
        // 0x49f3f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f3f0) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F3F8u;
    // 0x49f3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f3fc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x49F3FCu;
    SET_GPR_U32(ctx, 31, 0x49F404u);
    ctx->pc = 0x49F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F3FCu;
    // 0x49f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x49F3FCu, 0x49F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F404u;
label_49f404:
    // 0x49f404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49f404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f40c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49f40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f414: 0x3e00008  jr          $ra
    ctx->pc = 0x49F414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F414u;
        // 0x49f418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F41Cu;
    // 0x49f41c: 0x0  nop
    ctx->pc = 0x49f41cu;
    // NOP
    ctx->pc = 0x49f420u;
}
