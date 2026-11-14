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

// Function: sub_00327490
// Address: 0x327490 - 0x327548
void sub_00327490_0x327490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327490_0x327490");
#endif

    switch (ctx->pc) {
        case 0x3274b4u: goto label_3274b4;
        case 0x3274d8u: goto label_3274d8;
        case 0x327504u: goto label_327504;
        case 0x32752cu: goto label_32752c;
        default: break;
    }

    ctx->pc = 0x327490u;

    // 0x327490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327494: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x327494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x327498: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x327498u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x32749c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3274a0: 0x24c67860  addiu       $a2, $a2, 0x7860
    ctx->pc = 0x3274a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30816));
    // 0x3274a4: 0x24e77878  addiu       $a3, $a3, 0x7878
    ctx->pc = 0x3274a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30840));
    // 0x3274a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3274a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3274ac: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3274ACu;
    SET_GPR_U32(ctx, 31, 0x3274B4u);
    ctx->pc = 0x3274B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274ACu;
    // 0x3274b0: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3274ACu, 0x3274B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3274B4u;
label_3274b4:
    // 0x3274b4: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3274B4u;
    {
        const bool branch_taken_0x3274b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3274B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274B4u;
        // 0x3274b8: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274b4) {
            ctx->pc = 0x327538u;
            goto label_327538;
        }
    }
    ctx->pc = 0x3274BCu;
    // 0x3274bc: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3274bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3274c0: 0x24c67890  addiu       $a2, $a2, 0x7890
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30864));
    // 0x3274c4: 0x250878b0  addiu       $t0, $t0, 0x78B0
    ctx->pc = 0x3274c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30896));
    // 0x3274c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3274c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3274cc: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x3274ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x3274d0: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x3274D0u;
    SET_GPR_U32(ctx, 31, 0x3274D8u);
    ctx->pc = 0x3274D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274D0u;
    // 0x3274d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x3274D0u, 0x3274D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3274D8u;
label_3274d8:
    // 0x3274d8: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3274D8u;
    {
        const bool branch_taken_0x3274d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3274DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274D8u;
        // 0x3274dc: 0xaf82a650  sw          $v0, -0x59B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274d8) {
            ctx->pc = 0x327538u;
            goto label_327538;
        }
    }
    ctx->pc = 0x3274E0u;
    // 0x3274e0: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3274e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3274e4: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3274e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3274e8: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3274e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3274ec: 0x24c67d18  addiu       $a2, $a2, 0x7D18
    ctx->pc = 0x3274ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32024));
    // 0x3274f0: 0x24e77a08  addiu       $a3, $a3, 0x7A08
    ctx->pc = 0x3274f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31240));
    // 0x3274f4: 0x25087a60  addiu       $t0, $t0, 0x7A60
    ctx->pc = 0x3274f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31328));
    // 0x3274f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3274f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3274fc: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x3274FCu;
    SET_GPR_U32(ctx, 31, 0x327504u);
    ctx->pc = 0x327500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274FCu;
    // 0x327500: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x3274FCu, 0x327504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327504u;
label_327504:
    // 0x327504: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x327504u;
    {
        const bool branch_taken_0x327504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x327508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327504u;
        // 0x327508: 0xaf82a654  sw          $v0, -0x59AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327504) {
            ctx->pc = 0x327538u;
            goto label_327538;
        }
    }
    ctx->pc = 0x32750Cu;
    // 0x32750c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x32750cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x327510: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x327510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x327514: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x327514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x327518: 0x24a57be0  addiu       $a1, $a1, 0x7BE0
    ctx->pc = 0x327518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31712));
    // 0x32751c: 0x24c67af8  addiu       $a2, $a2, 0x7AF8
    ctx->pc = 0x32751cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31480));
    // 0x327520: 0x24e77cf0  addiu       $a3, $a3, 0x7CF0
    ctx->pc = 0x327520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31984));
    // 0x327524: 0xc0e345c  jal         func_38D170
    ctx->pc = 0x327524u;
    SET_GPR_U32(ctx, 31, 0x32752Cu);
    ctx->pc = 0x327528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327524u;
    // 0x327528: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x327524u, 0x32752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32752Cu;
label_32752c:
    // 0x32752c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x32752cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x327530: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x327530u;
    {
        const bool branch_taken_0x327530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327530u;
        // 0x327534: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327530) {
            ctx->pc = 0x32753Cu;
            goto label_32753c;
        }
    }
    ctx->pc = 0x327538u;
label_327538:
    // 0x327538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32753c:
    // 0x32753c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32753cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327540: 0x3e00008  jr          $ra
    ctx->pc = 0x327540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327540u;
        // 0x327544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327548u;
}
