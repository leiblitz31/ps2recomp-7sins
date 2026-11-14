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

// Function: sub_00381590
// Address: 0x381590 - 0x381628
void sub_00381590_0x381590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381590_0x381590");
#endif

    switch (ctx->pc) {
        case 0x3815b4u: goto label_3815b4;
        case 0x3815e0u: goto label_3815e0;
        case 0x381600u: goto label_381600;
        case 0x381610u: goto label_381610;
        default: break;
    }

    ctx->pc = 0x381590u;

    // 0x381590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x381594: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x381594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x381598: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x381598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x38159c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3815a0: 0x24c616a8  addiu       $a2, $a2, 0x16A8
    ctx->pc = 0x3815a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5800));
    // 0x3815a4: 0x24e71728  addiu       $a3, $a3, 0x1728
    ctx->pc = 0x3815a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5928));
    // 0x3815a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3815a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3815ac: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3815ACu;
    SET_GPR_U32(ctx, 31, 0x3815B4u);
    ctx->pc = 0x3815B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815ACu;
    // 0x3815b0: 0x24050124  addiu       $a1, $zero, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3815ACu, 0x3815B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3815B4u;
label_3815b4:
    // 0x3815b4: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3815B4u;
    {
        const bool branch_taken_0x3815b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3815B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815B4u;
        // 0x3815b8: 0xaf82a918  sw          $v0, -0x56E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815b4) {
            ctx->pc = 0x381618u;
            goto label_381618;
        }
    }
    ctx->pc = 0x3815BCu;
    // 0x3815bc: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3815bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3815c0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3815c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3815c4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x3815c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x3815c8: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x3815c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x3815cc: 0x24e7ffa8  addiu       $a3, $a3, -0x58
    ctx->pc = 0x3815ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967208));
    // 0x3815d0: 0x2508f4b0  addiu       $t0, $t0, -0xB50
    ctx->pc = 0x3815d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964400));
    // 0x3815d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3815d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3815d8: 0xc0e39f6  jal         func_38E7D8
    ctx->pc = 0x3815D8u;
    SET_GPR_U32(ctx, 31, 0x3815E0u);
    ctx->pc = 0x3815DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815D8u;
    // 0x3815dc: 0x24050124  addiu       $a1, $zero, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x3815D8u, 0x3815E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3815E0u;
label_3815e0:
    // 0x3815e0: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3815E0u;
    {
        const bool branch_taken_0x3815e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3815E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815E0u;
        // 0x3815e4: 0xaf82a8f8  sw          $v0, -0x5708($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815e0) {
            ctx->pc = 0x381618u;
            goto label_381618;
        }
    }
    ctx->pc = 0x3815E8u;
    // 0x3815e8: 0x24050124  addiu       $a1, $zero, 0x124
    ctx->pc = 0x3815e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x3815ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3815ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3815f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3815f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3815f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3815f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3815f8: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x3815F8u;
    SET_GPR_U32(ctx, 31, 0x381600u);
    ctx->pc = 0x3815FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3815F8u;
    // 0x3815fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x3815F8u, 0x381600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381600u;
label_381600:
    // 0x381600: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x381600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x381604: 0x24040124  addiu       $a0, $zero, 0x124
    ctx->pc = 0x381604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x381608: 0xc0e2928  jal         func_38A4A0
    ctx->pc = 0x381608u;
    SET_GPR_U32(ctx, 31, 0x381610u);
    ctx->pc = 0x38160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381608u;
    // 0x38160c: 0x24a5eca0  addiu       $a1, $a1, -0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4A0u, 0x381608u, 0x381610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381610u;
label_381610:
    // 0x381610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x381610u;
    {
        const bool branch_taken_0x381610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381610u;
        // 0x381614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381610) {
            ctx->pc = 0x38161Cu;
            goto label_38161c;
        }
    }
    ctx->pc = 0x381618u;
label_381618:
    // 0x381618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x381618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38161c:
    // 0x38161c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381620: 0x3e00008  jr          $ra
    ctx->pc = 0x381620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381620u;
        // 0x381624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381628u;
}
