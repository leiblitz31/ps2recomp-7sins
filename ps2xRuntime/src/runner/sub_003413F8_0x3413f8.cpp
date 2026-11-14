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

// Function: sub_003413F8
// Address: 0x3413f8 - 0x3414b8
void sub_003413F8_0x3413f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003413F8_0x3413f8");
#endif

    switch (ctx->pc) {
        case 0x3413f8u: goto label_3413f8;
        case 0x3413fcu: goto label_3413fc;
        case 0x341400u: goto label_341400;
        case 0x341404u: goto label_341404;
        case 0x341408u: goto label_341408;
        case 0x34140cu: goto label_34140c;
        case 0x341410u: goto label_341410;
        case 0x341414u: goto label_341414;
        case 0x341418u: goto label_341418;
        case 0x34141cu: goto label_34141c;
        case 0x341420u: goto label_341420;
        case 0x341424u: goto label_341424;
        case 0x341428u: goto label_341428;
        case 0x34142cu: goto label_34142c;
        case 0x341430u: goto label_341430;
        case 0x341434u: goto label_341434;
        case 0x341438u: goto label_341438;
        case 0x34143cu: goto label_34143c;
        case 0x341440u: goto label_341440;
        case 0x341444u: goto label_341444;
        case 0x341448u: goto label_341448;
        case 0x34144cu: goto label_34144c;
        case 0x341450u: goto label_341450;
        case 0x341454u: goto label_341454;
        case 0x341458u: goto label_341458;
        case 0x34145cu: goto label_34145c;
        case 0x341460u: goto label_341460;
        case 0x341464u: goto label_341464;
        case 0x341468u: goto label_341468;
        case 0x34146cu: goto label_34146c;
        case 0x341470u: goto label_341470;
        case 0x341474u: goto label_341474;
        case 0x341478u: goto label_341478;
        case 0x34147cu: goto label_34147c;
        case 0x341480u: goto label_341480;
        case 0x341484u: goto label_341484;
        case 0x341488u: goto label_341488;
        case 0x34148cu: goto label_34148c;
        case 0x341490u: goto label_341490;
        case 0x341494u: goto label_341494;
        case 0x341498u: goto label_341498;
        case 0x34149cu: goto label_34149c;
        case 0x3414a0u: goto label_3414a0;
        case 0x3414a4u: goto label_3414a4;
        case 0x3414a8u: goto label_3414a8;
        case 0x3414acu: goto label_3414ac;
        case 0x3414b0u: goto label_3414b0;
        case 0x3414b4u: goto label_3414b4;
        default: break;
    }

    ctx->pc = 0x3413f8u;

label_3413f8:
    // 0x3413f8: 0x3e00008  jr          $ra
label_3413fc:
    if (ctx->pc == 0x3413FCu) {
        ctx->pc = 0x3413FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413F8u;
        // 0x3413fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341400u;
        goto label_341400;
    }
    ctx->pc = 0x3413F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3413FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413F8u;
        // 0x3413fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3413F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341400u;
label_341400:
    // 0x341400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341404:
    // 0x341404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x341404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341408:
    // 0x341408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34140c:
    // 0x34140c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x34140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_341410:
    // 0x341410: 0xc0bb7e6  jal         func_2EDF98
label_341414:
    if (ctx->pc == 0x341414u) {
        ctx->pc = 0x341414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341410u;
        // 0x341414: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341418u;
        goto label_341418;
    }
    ctx->pc = 0x341410u;
    SET_GPR_U32(ctx, 31, 0x341418u);
    ctx->pc = 0x341414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341410u;
    // 0x341414: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x341410u, 0x341418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341418u;
label_341418:
    // 0x341418: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x341418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34141c:
    // 0x34141c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341420:
    // 0x341420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_341424:
    // 0x341424: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x341424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_341428:
    // 0x341428: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x341428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34142c:
    // 0x34142c: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x34142cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_341430:
    // 0x341430: 0xac7d0004  sw          $sp, 0x4($v1)
    ctx->pc = 0x341430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 29));
label_341434:
    // 0x341434: 0x3e00008  jr          $ra
label_341438:
    if (ctx->pc == 0x341438u) {
        ctx->pc = 0x341438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341434u;
        // 0x341438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34143Cu;
        goto label_34143c;
    }
    ctx->pc = 0x341434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341434u;
        // 0x341438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34143Cu;
label_34143c:
    // 0x34143c: 0x0  nop
    ctx->pc = 0x34143cu;
    // NOP
label_341440:
    // 0x341440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341444:
    // 0x341444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x341444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_341448:
    // 0x341448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34144c:
    // 0x34144c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34144cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341450:
    // 0x341450: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x341450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_341454:
    // 0x341454: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_341458:
    if (ctx->pc == 0x341458u) {
        ctx->pc = 0x341458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341454u;
        // 0x341458: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34145Cu;
        goto label_34145c;
    }
    ctx->pc = 0x341454u;
    {
        const bool branch_taken_0x341454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341454u;
        // 0x341458: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341454) {
            ctx->pc = 0x341468u;
            goto label_341468;
        }
    }
    ctx->pc = 0x34145Cu;
label_34145c:
    // 0x34145c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x34145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_341460:
    // 0x341460: 0x40f809  jalr        $v0
label_341464:
    if (ctx->pc == 0x341464u) {
        ctx->pc = 0x341468u;
        goto label_341468;
    }
    ctx->pc = 0x341460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341460u, 0x341468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341468u;
label_341468:
    // 0x341468: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x341468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_34146c:
    // 0x34146c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_341470:
    if (ctx->pc == 0x341470u) {
        ctx->pc = 0x341470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34146Cu;
        // 0x341470: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341474u;
        goto label_341474;
    }
    ctx->pc = 0x34146Cu;
    {
        const bool branch_taken_0x34146c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34146Cu;
        // 0x341470: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34146c) {
            ctx->pc = 0x341480u;
            goto label_341480;
        }
    }
    ctx->pc = 0x341474u;
label_341474:
    // 0x341474: 0xc0d1054  jal         func_344150
label_341478:
    if (ctx->pc == 0x341478u) {
        ctx->pc = 0x34147Cu;
        goto label_34147c;
    }
    ctx->pc = 0x341474u;
    SET_GPR_U32(ctx, 31, 0x34147Cu);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x341474u, 0x34147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34147Cu;
label_34147c:
    // 0x34147c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34147cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341480:
    // 0x341480: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x341480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_341484:
    // 0x341484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x341484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341488:
    // 0x341488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34148c:
    // 0x34148c: 0x3e00008  jr          $ra
label_341490:
    if (ctx->pc == 0x341490u) {
        ctx->pc = 0x341490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34148Cu;
        // 0x341490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341494u;
        goto label_341494;
    }
    ctx->pc = 0x34148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34148Cu;
        // 0x341490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34148Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341494u;
label_341494:
    // 0x341494: 0x0  nop
    ctx->pc = 0x341494u;
    // NOP
label_341498:
    // 0x341498: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_34149c:
    if (ctx->pc == 0x34149Cu) {
        ctx->pc = 0x34149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341498u;
        // 0x34149c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3414A0u;
        goto label_3414a0;
    }
    ctx->pc = 0x341498u;
    {
        const bool branch_taken_0x341498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x341498) {
            ctx->pc = 0x34149Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341498u;
            // 0x34149c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3414A8u;
            goto label_3414a8;
        }
    }
    ctx->pc = 0x3414A0u;
label_3414a0:
    // 0x3414a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3414a4:
    if (ctx->pc == 0x3414A4u) {
        ctx->pc = 0x3414A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414A0u;
        // 0x3414a4: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3414A8u;
        goto label_3414a8;
    }
    ctx->pc = 0x3414A0u;
    {
        const bool branch_taken_0x3414a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3414A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414A0u;
        // 0x3414a4: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414a0) {
            ctx->pc = 0x3414B0u;
            goto label_3414b0;
        }
    }
    ctx->pc = 0x3414A8u;
label_3414a8:
    // 0x3414a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3414a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3414ac:
    // 0x3414ac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3414acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3414b0:
    // 0x3414b0: 0x3e00008  jr          $ra
label_3414b4:
    if (ctx->pc == 0x3414B4u) {
        ctx->pc = 0x3414B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414B0u;
        // 0x3414b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3414B8u;
        goto label_fallthrough_0x3414b0;
    }
    ctx->pc = 0x3414B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3414B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414B0u;
        // 0x3414b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3414B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3414b0:
    ctx->pc = 0x3414B8u;
}
