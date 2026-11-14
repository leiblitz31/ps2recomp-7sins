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

// Function: sub_004B0518
// Address: 0x4b0518 - 0x4b0578
void sub_004B0518_0x4b0518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0518_0x4b0518");
#endif

    switch (ctx->pc) {
        case 0x4b0528u: goto label_4b0528;
        case 0x4b0538u: goto label_4b0538;
        case 0x4b0548u: goto label_4b0548;
        case 0x4b0558u: goto label_4b0558;
        default: break;
    }

    ctx->pc = 0x4b0518u;

    // 0x4b0518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b051c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0520: 0xc12cfd6  jal         func_4B3F58
    ctx->pc = 0x4B0520u;
    SET_GPR_U32(ctx, 31, 0x4B0528u);
    ctx->pc = 0x4B3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3F58u, 0x4B0520u, 0x4B0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0528u;
label_4b0528:
    // 0x4b0528: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B0528u;
    {
        const bool branch_taken_0x4b0528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0528u;
        // 0x4b052c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0528) {
            ctx->pc = 0x4B0568u;
            goto label_4b0568;
        }
    }
    ctx->pc = 0x4B0530u;
    // 0x4b0530: 0xc12cc68  jal         func_4B31A0
    ctx->pc = 0x4B0530u;
    SET_GPR_U32(ctx, 31, 0x4B0538u);
    ctx->pc = 0x4B31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31A0u, 0x4B0530u, 0x4B0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0538u;
label_4b0538:
    // 0x4b0538: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0538u;
    {
        const bool branch_taken_0x4b0538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0538u;
        // 0x4b053c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0538) {
            ctx->pc = 0x4B0568u;
            goto label_4b0568;
        }
    }
    ctx->pc = 0x4B0540u;
    // 0x4b0540: 0xc12be62  jal         func_4AF988
    ctx->pc = 0x4B0540u;
    SET_GPR_U32(ctx, 31, 0x4B0548u);
    ctx->pc = 0x4AF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF988u, 0x4B0540u, 0x4B0548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0548u;
label_4b0548:
    // 0x4b0548: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B0548u;
    {
        const bool branch_taken_0x4b0548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0548) {
            ctx->pc = 0x4B054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0548u;
            // 0x4b054c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0568u;
            goto label_4b0568;
        }
    }
    ctx->pc = 0x4B0550u;
    // 0x4b0550: 0xc12c608  jal         func_4B1820
    ctx->pc = 0x4B0550u;
    SET_GPR_U32(ctx, 31, 0x4B0558u);
    ctx->pc = 0x4B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1820u, 0x4B0550u, 0x4B0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0558u;
label_4b0558:
    // 0x4b0558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b0558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b055c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B055Cu;
    {
        const bool branch_taken_0x4b055c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B055Cu;
        // 0x4b0560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b055c) {
            ctx->pc = 0x4B0568u;
            goto label_4b0568;
        }
    }
    ctx->pc = 0x4B0564u;
    // 0x4b0564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b0564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0568:
    // 0x4b0568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b056c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B056Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B056Cu;
        // 0x4b0570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B056Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0574u;
    // 0x4b0574: 0x0  nop
    ctx->pc = 0x4b0574u;
    // NOP
    ctx->pc = 0x4b0578u;
}
