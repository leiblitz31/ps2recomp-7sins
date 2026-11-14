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

// Function: sub_004A08A8
// Address: 0x4a08a8 - 0x4a0938
void sub_004A08A8_0x4a08a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A08A8_0x4a08a8");
#endif

    switch (ctx->pc) {
        case 0x4a08c4u: goto label_4a08c4;
        case 0x4a08d0u: goto label_4a08d0;
        case 0x4a0904u: goto label_4a0904;
        case 0x4a0914u: goto label_4a0914;
        default: break;
    }

    ctx->pc = 0x4a08a8u;

    // 0x4a08a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a08a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a08ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a08acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a08b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a08b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a08b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a08b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a08b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a08bc: 0xc12a47e  jal         func_4A91F8
    ctx->pc = 0x4A08BCu;
    SET_GPR_U32(ctx, 31, 0x4A08C4u);
    ctx->pc = 0x4A08C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A08BCu;
    // 0x4a08c0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x4A08BCu, 0x4A08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A08C4u;
label_4a08c4:
    // 0x4a08c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a08c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a08c8: 0xc12a448  jal         func_4A9120
    ctx->pc = 0x4A08C8u;
    SET_GPR_U32(ctx, 31, 0x4A08D0u);
    ctx->pc = 0x4A08CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A08C8u;
    // 0x4a08cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x4A08C8u, 0x4A08D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A08D0u;
label_4a08d0:
    // 0x4a08d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a08d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a08d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a08d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a08d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a08d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a08dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a08dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a08e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A08E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A08E0u;
        // 0x4a08e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A08E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A08E8u;
    // 0x4a08e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a08e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a08ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a08ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a08f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a08f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a08f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a08f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a08f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a08f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a08fc: 0xc12a45c  jal         func_4A9170
    ctx->pc = 0x4A08FCu;
    SET_GPR_U32(ctx, 31, 0x4A0904u);
    ctx->pc = 0x4A0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A08FCu;
    // 0x4a0900: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x4A08FCu, 0x4A0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0904u;
label_4a0904:
    // 0x4a0904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0904u;
    {
        const bool branch_taken_0x4a0904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0904u;
        // 0x4a0908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0904) {
            ctx->pc = 0x4A0920u;
            goto label_4a0920;
        }
    }
    ctx->pc = 0x4A090Cu;
    // 0x4a090c: 0xc12a424  jal         func_4A9090
    ctx->pc = 0x4A090Cu;
    SET_GPR_U32(ctx, 31, 0x4A0914u);
    ctx->pc = 0x4A0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A090Cu;
    // 0x4a0910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x4A090Cu, 0x4A0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0914u;
label_4a0914:
    // 0x4a0914: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a0914u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a0918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A0918u;
    {
        const bool branch_taken_0x4a0918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0918u;
        // 0x4a091c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0918) {
            ctx->pc = 0x4A0924u;
            goto label_4a0924;
        }
    }
    ctx->pc = 0x4A0920u;
label_4a0920:
    // 0x4a0920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a0920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0924:
    // 0x4a0924: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a0924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a092c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0930: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0930u;
        // 0x4a0934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0938u;
}
