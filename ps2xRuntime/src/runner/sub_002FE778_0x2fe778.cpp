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

// Function: sub_002FE778
// Address: 0x2fe778 - 0x2fe860
void sub_002FE778_0x2fe778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE778_0x2fe778");
#endif

    switch (ctx->pc) {
        case 0x2fe7a8u: goto label_2fe7a8;
        case 0x2fe7b0u: goto label_2fe7b0;
        case 0x2fe7c8u: goto label_2fe7c8;
        case 0x2fe7f0u: goto label_2fe7f0;
        case 0x2fe810u: goto label_2fe810;
        case 0x2fe830u: goto label_2fe830;
        case 0x2fe850u: goto label_2fe850;
        default: break;
    }

    ctx->pc = 0x2fe778u;

    // 0x2fe778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe77c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe78c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2fe78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2fe790: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fe790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fe794: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fe794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fe798: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE798u;
    {
        const bool branch_taken_0x2fe798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe798) {
            ctx->pc = 0x2FE7A8u;
            goto label_2fe7a8;
        }
    }
    ctx->pc = 0x2FE7A0u;
    // 0x2fe7a0: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE7A0u;
    SET_GPR_U32(ctx, 31, 0x2FE7A8u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE7A0u, 0x2FE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7A8u;
label_2fe7a8:
    // 0x2fe7a8: 0xc0bf630  jal         func_2FD8C0
    ctx->pc = 0x2FE7A8u;
    SET_GPR_U32(ctx, 31, 0x2FE7B0u);
    ctx->pc = 0x2FE7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7A8u;
    // 0x2fe7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD8C0u, 0x2FE7A8u, 0x2FE7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7B0u;
label_2fe7b0:
    // 0x2fe7b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fe7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7b4: 0xf  sync
    ctx->pc = 0x2fe7b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe7b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE7B8u;
    {
        const bool branch_taken_0x2fe7b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7B8u;
        // 0x2fe7bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7b8) {
            ctx->pc = 0x2FE7CCu;
            goto label_2fe7cc;
        }
    }
    ctx->pc = 0x2FE7C0u;
    // 0x2fe7c0: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2FE7C0u;
    SET_GPR_U32(ctx, 31, 0x2FE7C8u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2FE7C0u, 0x2FE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7C8u;
label_2fe7c8:
    // 0x2fe7c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe7cc:
    // 0x2fe7cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe7d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7D8u;
        // 0x2fe7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE7E0u;
    // 0x2fe7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe7e8: 0xc0bf640  jal         func_2FD900
    ctx->pc = 0x2FE7E8u;
    SET_GPR_U32(ctx, 31, 0x2FE7F0u);
    ctx->pc = 0x2FD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD900u, 0x2FE7E8u, 0x2FE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7F0u;
label_2fe7f0:
    // 0x2fe7f0: 0xf  sync
    ctx->pc = 0x2fe7f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7F8u;
        // 0x2fe7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE800u;
    // 0x2fe800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe808: 0xc0bf644  jal         func_2FD910
    ctx->pc = 0x2FE808u;
    SET_GPR_U32(ctx, 31, 0x2FE810u);
    ctx->pc = 0x2FD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD910u, 0x2FE808u, 0x2FE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE810u;
label_2fe810:
    // 0x2fe810: 0xf  sync
    ctx->pc = 0x2fe810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe818: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE818u;
        // 0x2fe81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE820u;
    // 0x2fe820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe828: 0xc0bf648  jal         func_2FD920
    ctx->pc = 0x2FE828u;
    SET_GPR_U32(ctx, 31, 0x2FE830u);
    ctx->pc = 0x2FD920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD920u, 0x2FE828u, 0x2FE830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE830u;
label_2fe830:
    // 0x2fe830: 0xf  sync
    ctx->pc = 0x2fe830u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe838: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE838u;
        // 0x2fe83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE840u;
    // 0x2fe840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe848: 0xc0bf64c  jal         func_2FD930
    ctx->pc = 0x2FE848u;
    SET_GPR_U32(ctx, 31, 0x2FE850u);
    ctx->pc = 0x2FD930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD930u, 0x2FE848u, 0x2FE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE850u;
label_2fe850:
    // 0x2fe850: 0xf  sync
    ctx->pc = 0x2fe850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe858: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE858u;
        // 0x2fe85c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE860u;
}
