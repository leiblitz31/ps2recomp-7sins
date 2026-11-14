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

// Function: sub_00322730
// Address: 0x322730 - 0x3227f0
void sub_00322730_0x322730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322730_0x322730");
#endif

    switch (ctx->pc) {
        case 0x322730u: goto label_322730;
        case 0x322734u: goto label_322734;
        case 0x322738u: goto label_322738;
        case 0x32273cu: goto label_32273c;
        case 0x322740u: goto label_322740;
        case 0x322744u: goto label_322744;
        case 0x322748u: goto label_322748;
        case 0x32274cu: goto label_32274c;
        case 0x322750u: goto label_322750;
        case 0x322754u: goto label_322754;
        case 0x322758u: goto label_322758;
        case 0x32275cu: goto label_32275c;
        case 0x322760u: goto label_322760;
        case 0x322764u: goto label_322764;
        case 0x322768u: goto label_322768;
        case 0x32276cu: goto label_32276c;
        case 0x322770u: goto label_322770;
        case 0x322774u: goto label_322774;
        case 0x322778u: goto label_322778;
        case 0x32277cu: goto label_32277c;
        case 0x322780u: goto label_322780;
        case 0x322784u: goto label_322784;
        case 0x322788u: goto label_322788;
        case 0x32278cu: goto label_32278c;
        case 0x322790u: goto label_322790;
        case 0x322794u: goto label_322794;
        case 0x322798u: goto label_322798;
        case 0x32279cu: goto label_32279c;
        case 0x3227a0u: goto label_3227a0;
        case 0x3227a4u: goto label_3227a4;
        case 0x3227a8u: goto label_3227a8;
        case 0x3227acu: goto label_3227ac;
        case 0x3227b0u: goto label_3227b0;
        case 0x3227b4u: goto label_3227b4;
        case 0x3227b8u: goto label_3227b8;
        case 0x3227bcu: goto label_3227bc;
        case 0x3227c0u: goto label_3227c0;
        case 0x3227c4u: goto label_3227c4;
        case 0x3227c8u: goto label_3227c8;
        case 0x3227ccu: goto label_3227cc;
        case 0x3227d0u: goto label_3227d0;
        case 0x3227d4u: goto label_3227d4;
        case 0x3227d8u: goto label_3227d8;
        case 0x3227dcu: goto label_3227dc;
        case 0x3227e0u: goto label_3227e0;
        case 0x3227e4u: goto label_3227e4;
        case 0x3227e8u: goto label_3227e8;
        case 0x3227ecu: goto label_3227ec;
        default: break;
    }

    ctx->pc = 0x322730u;

label_322730:
    // 0x322730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_322734:
    // 0x322734: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322738:
    // 0x322738: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x322738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_32273c:
    // 0x32273c: 0x8c62b1ac  lw          $v0, -0x4E54($v1)
    ctx->pc = 0x32273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947244)));
label_322740:
    // 0x322740: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x322740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322744:
    // 0x322744: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x322744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_322748:
    // 0x322748: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x322748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_32274c:
    // 0x32274c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_322750:
    // 0x322750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_322754:
    // 0x322754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x322754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_322758:
    // 0x322758: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x322758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32275c:
    // 0x32275c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_322760:
    if (ctx->pc == 0x322760u) {
        ctx->pc = 0x322760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32275Cu;
        // 0x322760: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322764u;
        goto label_322764;
    }
    ctx->pc = 0x32275Cu;
    {
        const bool branch_taken_0x32275c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x322760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32275Cu;
        // 0x322760: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32275c) {
            ctx->pc = 0x3227D0u;
            goto label_3227d0;
        }
    }
    ctx->pc = 0x322764u;
label_322764:
    // 0x322764: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x322764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_322768:
    // 0x322768: 0x40f809  jalr        $v0
label_32276c:
    if (ctx->pc == 0x32276Cu) {
        ctx->pc = 0x322770u;
        goto label_322770;
    }
    ctx->pc = 0x322768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322770u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322768u, 0x322770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322770u;
label_322770:
    // 0x322770: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_322774:
    if (ctx->pc == 0x322774u) {
        ctx->pc = 0x322774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322770u;
        // 0x322774: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322778u;
        goto label_322778;
    }
    ctx->pc = 0x322770u;
    {
        const bool branch_taken_0x322770 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x322774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322770u;
        // 0x322774: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322770) {
            ctx->pc = 0x322780u;
            goto label_322780;
        }
    }
    ctx->pc = 0x322778u;
label_322778:
    // 0x322778: 0x10000004  b           . + 4 + (0x4 << 2)
label_32277c:
    if (ctx->pc == 0x32277Cu) {
        ctx->pc = 0x32277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322778u;
        // 0x32277c: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322780u;
        goto label_322780;
    }
    ctx->pc = 0x322778u;
    {
        const bool branch_taken_0x322778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322778u;
        // 0x32277c: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322778) {
            ctx->pc = 0x32278Cu;
            goto label_32278c;
        }
    }
    ctx->pc = 0x322780u;
label_322780:
    // 0x322780: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x322780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_322784:
    // 0x322784: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x322784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_322788:
    // 0x322788: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x322788u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_32278c:
    // 0x32278c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_322790:
    // 0x322790: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x322790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_322794:
    // 0x322794: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x322794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_322798:
    // 0x322798: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32279c:
    // 0x32279c: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
label_3227a0:
    if (ctx->pc == 0x3227A0u) {
        ctx->pc = 0x3227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32279Cu;
        // 0x3227a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227A4u;
        goto label_3227a4;
    }
    ctx->pc = 0x32279Cu;
    {
        const bool branch_taken_0x32279c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32279Cu;
        // 0x3227a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32279c) {
            ctx->pc = 0x3227B0u;
            goto label_3227b0;
        }
    }
    ctx->pc = 0x3227A4u;
label_3227a4:
    // 0x3227a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3227a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3227a8:
    // 0x3227a8: 0xc0e2836  jal         func_38A0D8
label_3227ac:
    if (ctx->pc == 0x3227ACu) {
        ctx->pc = 0x3227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227A8u;
        // 0x3227ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227B0u;
        goto label_3227b0;
    }
    ctx->pc = 0x3227A8u;
    SET_GPR_U32(ctx, 31, 0x3227B0u);
    ctx->pc = 0x3227ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227A8u;
    // 0x3227ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3227A8u, 0x3227B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227B0u;
label_3227b0:
    // 0x3227b0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3227b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3227b4:
    // 0x3227b4: 0x10180a  movz        $v1, $zero, $s0
    ctx->pc = 0x3227b4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3227b8:
    // 0x3227b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3227bc:
    if (ctx->pc == 0x3227BCu) {
        ctx->pc = 0x3227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227B8u;
        // 0x3227bc: 0xae510014  sw          $s1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227C0u;
        goto label_3227c0;
    }
    ctx->pc = 0x3227B8u;
    {
        const bool branch_taken_0x3227b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227B8u;
        // 0x3227bc: 0xae510014  sw          $s1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3227b8) {
            ctx->pc = 0x3227D0u;
            goto label_3227d0;
        }
    }
    ctx->pc = 0x3227C0u;
label_3227c0:
    // 0x3227c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3227c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3227c4:
    // 0x3227c4: 0x40f809  jalr        $v0
label_3227c8:
    if (ctx->pc == 0x3227C8u) {
        ctx->pc = 0x3227C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227C4u;
        // 0x3227c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227CCu;
        goto label_3227cc;
    }
    ctx->pc = 0x3227C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3227CCu);
        ctx->pc = 0x3227C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227C4u;
        // 0x3227c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3227C4u, 0x3227CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3227CCu;
label_3227cc:
    // 0x3227cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3227ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3227d0:
    // 0x3227d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3227d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3227d4:
    // 0x3227d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3227d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3227d8:
    // 0x3227d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3227d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3227dc:
    // 0x3227dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3227dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3227e0:
    // 0x3227e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3227e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3227e4:
    // 0x3227e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3227e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3227e8:
    // 0x3227e8: 0x3e00008  jr          $ra
label_3227ec:
    if (ctx->pc == 0x3227ECu) {
        ctx->pc = 0x3227ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227E8u;
        // 0x3227ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227F0u;
        goto label_fallthrough_0x3227e8;
    }
    ctx->pc = 0x3227E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3227ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227E8u;
        // 0x3227ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3227E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3227e8:
    ctx->pc = 0x3227F0u;
}
