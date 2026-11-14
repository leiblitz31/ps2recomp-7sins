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

// Function: sub_003453F8
// Address: 0x3453f8 - 0x345478
void sub_003453F8_0x3453f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003453F8_0x3453f8");
#endif

    switch (ctx->pc) {
        case 0x34541cu: goto label_34541c;
        case 0x34542cu: goto label_34542c;
        case 0x34543cu: goto label_34543c;
        case 0x34544cu: goto label_34544c;
        case 0x34545cu: goto label_34545c;
        default: break;
    }

    ctx->pc = 0x3453f8u;

    // 0x3453f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3453f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3453fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3453fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x345400: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x345400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x345404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x345408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34540c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34540cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345414: 0xc10480a  jal         func_412028
    ctx->pc = 0x345414u;
    SET_GPR_U32(ctx, 31, 0x34541Cu);
    ctx->pc = 0x345418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345414u;
    // 0x345418: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x345414u, 0x34541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34541Cu;
label_34541c:
    // 0x34541c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345420: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x345420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x345424: 0xc10480a  jal         func_412028
    ctx->pc = 0x345424u;
    SET_GPR_U32(ctx, 31, 0x34542Cu);
    ctx->pc = 0x345428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345424u;
    // 0x345428: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x345424u, 0x34542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34542Cu;
label_34542c:
    // 0x34542c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345430: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x345434: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x345434u;
    SET_GPR_U32(ctx, 31, 0x34543Cu);
    ctx->pc = 0x345438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345434u;
    // 0x345438: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x345434u, 0x34543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34543Cu;
label_34543c:
    // 0x34543c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345440: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x345440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x345444: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x345444u;
    SET_GPR_U32(ctx, 31, 0x34544Cu);
    ctx->pc = 0x345448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345444u;
    // 0x345448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x345444u, 0x34544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34544Cu;
label_34544c:
    // 0x34544c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345450: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x345450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x345454: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x345454u;
    SET_GPR_U32(ctx, 31, 0x34545Cu);
    ctx->pc = 0x345458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345454u;
    // 0x345458: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x345454u, 0x34545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34545Cu;
label_34545c:
    // 0x34545c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34545cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x345460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34546c: 0x3e00008  jr          $ra
    ctx->pc = 0x34546Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34546Cu;
        // 0x345470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34546Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345474u;
    // 0x345474: 0x0  nop
    ctx->pc = 0x345474u;
    // NOP
    ctx->pc = 0x345478u;
}
