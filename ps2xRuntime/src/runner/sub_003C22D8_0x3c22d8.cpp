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

// Function: sub_003C22D8
// Address: 0x3c22d8 - 0x3c2390
void sub_003C22D8_0x3c22d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C22D8_0x3c22d8");
#endif

    ctx->pc = 0x3c22d8u;

    // 0x3c22d8: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x3c22d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c22dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c22e0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C22E0u;
    {
        const bool branch_taken_0x3c22e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c22e0) {
            ctx->pc = 0x3C22F8u;
            goto label_3c22f8;
        }
    }
    ctx->pc = 0x3C22E8u;
    // 0x3c22e8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3c22e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c22ec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3c22ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c22f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C22F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22F0u;
        // 0x3c22f4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C22F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C22F8u;
label_3c22f8:
    // 0x3c22f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C22F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22F8u;
        // 0x3c22fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C22F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2300u;
    // 0x3c2300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2304: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2304u;
    {
        const bool branch_taken_0x3c2304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2304u;
        // 0x3c2308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2304) {
            ctx->pc = 0x3C231Cu;
            goto label_3c231c;
        }
    }
    ctx->pc = 0x3C230Cu;
    // 0x3c230c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C230Cu;
    {
        const bool branch_taken_0x3c230c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C230Cu;
        // 0x3c2310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c230c) {
            ctx->pc = 0x3C2324u;
            goto label_3c2324;
        }
    }
    ctx->pc = 0x3C2314u;
    // 0x3c2314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C2314u;
    {
        const bool branch_taken_0x3c2314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2314) {
            ctx->pc = 0x3C2330u;
            goto label_3c2330;
        }
    }
    ctx->pc = 0x3C231Cu;
label_3c231c:
    // 0x3c231c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C231Cu;
    {
        const bool branch_taken_0x3c231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C231Cu;
        // 0x3c2320: 0xac860020  sw          $a2, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c231c) {
            ctx->pc = 0x3C2328u;
            goto label_3c2328;
        }
    }
    ctx->pc = 0x3C2324u;
label_3c2324:
    // 0x3c2324: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x3c2324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
label_3c2328:
    // 0x3c2328: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2328u;
        // 0x3c232c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2330u;
label_3c2330:
    // 0x3c2330: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2338u;
    // 0x3c2338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c233c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C233Cu;
    {
        const bool branch_taken_0x3c233c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C233Cu;
        // 0x3c2340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c233c) {
            ctx->pc = 0x3C2354u;
            goto label_3c2354;
        }
    }
    ctx->pc = 0x3C2344u;
    // 0x3c2344: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2344u;
    {
        const bool branch_taken_0x3c2344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2344u;
        // 0x3c2348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2344) {
            ctx->pc = 0x3C2368u;
            goto label_3c2368;
        }
    }
    ctx->pc = 0x3C234Cu;
    // 0x3c234c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C234Cu;
    {
        const bool branch_taken_0x3c234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c234c) {
            ctx->pc = 0x3C2384u;
            goto label_3c2384;
        }
    }
    ctx->pc = 0x3C2354u;
label_3c2354:
    // 0x3c2354: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3c2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3c2358: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2358u;
    {
        const bool branch_taken_0x3c2358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2358) {
            ctx->pc = 0x3C237Cu;
            goto label_3c237c;
        }
    }
    ctx->pc = 0x3C2360u;
    // 0x3c2360: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2368u;
label_3c2368:
    // 0x3c2368: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3c2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3c236c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C236Cu;
    {
        const bool branch_taken_0x3c236c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c236c) {
            ctx->pc = 0x3C237Cu;
            goto label_3c237c;
        }
    }
    ctx->pc = 0x3C2374u;
    // 0x3c2374: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C237Cu;
label_3c237c:
    // 0x3c237c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C237Cu;
        // 0x3c2380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2384u;
label_3c2384:
    // 0x3c2384: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C238Cu;
    // 0x3c238c: 0x0  nop
    ctx->pc = 0x3c238cu;
    // NOP
    ctx->pc = 0x3c2390u;
}
