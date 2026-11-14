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

// Function: sub_004184B8
// Address: 0x4184b8 - 0x418528
void sub_004184B8_0x4184b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004184B8_0x4184b8");
#endif

    switch (ctx->pc) {
        case 0x4184e0u: goto label_4184e0;
        case 0x4184e8u: goto label_4184e8;
        case 0x4184f8u: goto label_4184f8;
        case 0x418500u: goto label_418500;
        case 0x418510u: goto label_418510;
        default: break;
    }

    ctx->pc = 0x4184b8u;

    // 0x4184b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4184b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4184bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4184bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4184c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4184c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4184c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4184c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4184c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4184c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4184cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4184ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4184d0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4184D0u;
    {
        const bool branch_taken_0x4184d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4184d0) {
            ctx->pc = 0x4184F0u;
            goto label_4184f0;
        }
    }
    ctx->pc = 0x4184D8u;
    // 0x4184d8: 0xc105cae  jal         func_4172B8
    ctx->pc = 0x4184D8u;
    SET_GPR_U32(ctx, 31, 0x4184E0u);
    ctx->pc = 0x4172B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4172B8u, 0x4184D8u, 0x4184E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4184E0u;
label_4184e0:
    // 0x4184e0: 0xc105a7c  jal         func_4169F0
    ctx->pc = 0x4184E0u;
    SET_GPR_U32(ctx, 31, 0x4184E8u);
    ctx->pc = 0x4184E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4184E0u;
    // 0x4184e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4169F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4169F0u, 0x4184E0u, 0x4184E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4184E8u;
label_4184e8:
    // 0x4184e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4184E8u;
    {
        const bool branch_taken_0x4184e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4184ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4184E8u;
        // 0x4184ec: 0x2604010c  addiu       $a0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4184e8) {
            ctx->pc = 0x418504u;
            goto label_418504;
        }
    }
    ctx->pc = 0x4184F0u;
label_4184f0:
    // 0x4184f0: 0xc105e74  jal         func_4179D0
    ctx->pc = 0x4184F0u;
    SET_GPR_U32(ctx, 31, 0x4184F8u);
    ctx->pc = 0x4184F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4184F0u;
    // 0x4184f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4179D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4179D0u, 0x4184F0u, 0x4184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4184F8u;
label_4184f8:
    // 0x4184f8: 0xc105d24  jal         func_417490
    ctx->pc = 0x4184F8u;
    SET_GPR_U32(ctx, 31, 0x418500u);
    ctx->pc = 0x4184FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4184F8u;
    // 0x4184fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417490u, 0x4184F8u, 0x418500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418500u;
label_418500:
    // 0x418500: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x418500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_418504:
    // 0x418504: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x418504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x418508: 0xc1053ce  jal         func_414F38
    ctx->pc = 0x418508u;
    SET_GPR_U32(ctx, 31, 0x418510u);
    ctx->pc = 0x41850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418508u;
    // 0x41850c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414F38u, 0x418508u, 0x418510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418510u;
label_418510:
    // 0x418510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x418510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x418518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41851c: 0x3e00008  jr          $ra
    ctx->pc = 0x41851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41851Cu;
        // 0x418520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418524u;
    // 0x418524: 0x0  nop
    ctx->pc = 0x418524u;
    // NOP
    ctx->pc = 0x418528u;
}
