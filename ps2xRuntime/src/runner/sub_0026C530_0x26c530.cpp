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

// Function: sub_0026C530
// Address: 0x26c530 - 0x26c650
void sub_0026C530_0x26c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C530_0x26c530");
#endif

    switch (ctx->pc) {
        case 0x26c558u: goto label_26c558;
        case 0x26c594u: goto label_26c594;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c604u: goto label_26c604;
        case 0x26c620u: goto label_26c620;
        case 0x26c63cu: goto label_26c63c;
        default: break;
    }

    ctx->pc = 0x26c530u;

    // 0x26c530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26c538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26c53c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26c540: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26c540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c544: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x26C544u;
    {
        const bool branch_taken_0x26c544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c544) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C54Cu;
    // 0x26c54c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c550: 0xc099938  jal         func_2664E0
    ctx->pc = 0x26C550u;
    SET_GPR_U32(ctx, 31, 0x26C558u);
    ctx->pc = 0x2664E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664E0u, 0x26C550u, 0x26C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C558u;
label_26c558:
    // 0x26c558: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x26c558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26c55c: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x26C55Cu;
    {
        const bool branch_taken_0x26c55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c55c) {
            ctx->pc = 0x26C628u;
            goto label_26c628;
        }
    }
    ctx->pc = 0x26C564u;
    // 0x26c564: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26c564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x26c568: 0x24638aa0  addiu       $v1, $v1, -0x7560
    ctx->pc = 0x26c568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937248));
    // 0x26c56c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c578: 0x400008  jr          $v0
    ctx->pc = 0x26C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C580u: goto label_26c580;
            case 0x26C59Cu: goto label_26c59c;
            case 0x26C5B8u: goto label_26c5b8;
            case 0x26C5D4u: goto label_26c5d4;
            case 0x26C5F0u: goto label_26c5f0;
            case 0x26C60Cu: goto label_26c60c;
            case 0x26C628u: goto label_26c628;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C578u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C580u;
label_26c580:
    // 0x26c580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c584: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26c588: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c58c: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C58Cu;
    SET_GPR_U32(ctx, 31, 0x26C594u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C58Cu, 0x26C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C594u;
label_26c594:
    // 0x26c594: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26C594u;
    {
        const bool branch_taken_0x26c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c594) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C59Cu;
label_26c59c:
    // 0x26c59c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c5a0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26c5a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c5a8: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C5A8u;
    SET_GPR_U32(ctx, 31, 0x26C5B0u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C5A8u, 0x26C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5B0u;
label_26c5b0:
    // 0x26c5b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26C5B0u;
    {
        const bool branch_taken_0x26c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5b0) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C5B8u;
label_26c5b8:
    // 0x26c5b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c5bc: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26c5c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c5c4: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C5C4u;
    SET_GPR_U32(ctx, 31, 0x26C5CCu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C5C4u, 0x26C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5CCu;
label_26c5cc:
    // 0x26c5cc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26C5CCu;
    {
        const bool branch_taken_0x26c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5cc) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C5D4u;
label_26c5d4:
    // 0x26c5d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c5d8: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26c5dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c5e0: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C5E0u;
    SET_GPR_U32(ctx, 31, 0x26C5E8u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C5E0u, 0x26C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5E8u;
label_26c5e8:
    // 0x26c5e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26C5E8u;
    {
        const bool branch_taken_0x26c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5e8) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C5F0u;
label_26c5f0:
    // 0x26c5f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c5f4: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26c5f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c5fc: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C5FCu;
    SET_GPR_U32(ctx, 31, 0x26C604u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C5FCu, 0x26C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C604u;
label_26c604:
    // 0x26c604: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26C604u;
    {
        const bool branch_taken_0x26c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c604) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C60Cu;
label_26c60c:
    // 0x26c60c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c610: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26c614: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c618: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C618u;
    SET_GPR_U32(ctx, 31, 0x26C620u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C618u, 0x26C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C620u;
label_26c620:
    // 0x26c620: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26C620u;
    {
        const bool branch_taken_0x26c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c620) {
            ctx->pc = 0x26C63Cu;
            goto label_26c63c;
        }
    }
    ctx->pc = 0x26C628u;
label_26c628:
    // 0x26c628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c62c: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26c630: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c634: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26C634u;
    SET_GPR_U32(ctx, 31, 0x26C63Cu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26C634u, 0x26C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C63Cu;
label_26c63c:
    // 0x26c63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c640: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26c644: 0x3e00008  jr          $ra
    ctx->pc = 0x26C644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C64Cu;
    // 0x26c64c: 0x0  nop
    ctx->pc = 0x26c64cu;
    // NOP
    ctx->pc = 0x26c650u;
}
