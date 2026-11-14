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

// Function: sub_0031D5C0
// Address: 0x31d5c0 - 0x31d630
void sub_0031D5C0_0x31d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D5C0_0x31d5c0");
#endif

    switch (ctx->pc) {
        case 0x31d5ecu: goto label_31d5ec;
        case 0x31d614u: goto label_31d614;
        default: break;
    }

    ctx->pc = 0x31d5c0u;

    // 0x31d5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d5c4: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x31d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x31d5c8: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x31d5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x31d5cc: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31d5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31d5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d5d4: 0x24c6da18  addiu       $a2, $a2, -0x25E8
    ctx->pc = 0x31d5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957592));
    // 0x31d5d8: 0x24e7da30  addiu       $a3, $a3, -0x25D0
    ctx->pc = 0x31d5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957616));
    // 0x31d5dc: 0x2508da88  addiu       $t0, $t0, -0x2578
    ctx->pc = 0x31d5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957704));
    // 0x31d5e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x31d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31d5e4: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x31D5E4u;
    SET_GPR_U32(ctx, 31, 0x31D5ECu);
    ctx->pc = 0x31D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5E4u;
    // 0x31d5e8: 0x24050122  addiu       $a1, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x31D5E4u, 0x31D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5ECu;
label_31d5ec:
    // 0x31d5ec: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31D5ECu;
    {
        const bool branch_taken_0x31d5ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5ECu;
        // 0x31d5f0: 0xaf82a5c0  sw          $v0, -0x5A40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5ec) {
            ctx->pc = 0x31D620u;
            goto label_31d620;
        }
    }
    ctx->pc = 0x31D5F4u;
    // 0x31d5f4: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31d5f8: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x31d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x31d5fc: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x31d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x31d600: 0x24a5c4e0  addiu       $a1, $a1, -0x3B20
    ctx->pc = 0x31d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952160));
    // 0x31d604: 0x24c6c840  addiu       $a2, $a2, -0x37C0
    ctx->pc = 0x31d604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953024));
    // 0x31d608: 0x24e7da90  addiu       $a3, $a3, -0x2570
    ctx->pc = 0x31d608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957712));
    // 0x31d60c: 0xc0e345c  jal         func_38D170
    ctx->pc = 0x31D60Cu;
    SET_GPR_U32(ctx, 31, 0x31D614u);
    ctx->pc = 0x31D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D60Cu;
    // 0x31d610: 0x24040122  addiu       $a0, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x31D60Cu, 0x31D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D614u;
label_31d614:
    // 0x31d614: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x31d614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31d618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D618u;
    {
        const bool branch_taken_0x31d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D618u;
        // 0x31d61c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d618) {
            ctx->pc = 0x31D624u;
            goto label_31d624;
        }
    }
    ctx->pc = 0x31D620u;
label_31d620:
    // 0x31d620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d624:
    // 0x31d624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d628: 0x3e00008  jr          $ra
    ctx->pc = 0x31D628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D628u;
        // 0x31d62c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D630u;
}
