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

// Function: sub_0033E6C8
// Address: 0x33e6c8 - 0x33e7e8
void sub_0033E6C8_0x33e6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E6C8_0x33e6c8");
#endif

    switch (ctx->pc) {
        case 0x33e700u: goto label_33e700;
        case 0x33e718u: goto label_33e718;
        case 0x33e738u: goto label_33e738;
        case 0x33e748u: goto label_33e748;
        case 0x33e760u: goto label_33e760;
        case 0x33e780u: goto label_33e780;
        case 0x33e790u: goto label_33e790;
        case 0x33e7a8u: goto label_33e7a8;
        case 0x33e7c8u: goto label_33e7c8;
        default: break;
    }

    ctx->pc = 0x33e6c8u;

    // 0x33e6c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33e6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33e6cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33e6d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33e6d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33e6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33e6dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33e6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e6e4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e6ec: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e6f0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x33e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x33e6f4: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x33e6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33e6f8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E6F8u;
    SET_GPR_U32(ctx, 31, 0x33E700u);
    ctx->pc = 0x33E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6F8u;
    // 0x33e6fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E6F8u, 0x33E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E700u;
label_33e700:
    // 0x33e700: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33E700u;
    {
        const bool branch_taken_0x33e700 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E700u;
        // 0x33e704: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e700) {
            ctx->pc = 0x33E738u;
            goto label_33e738;
        }
    }
    ctx->pc = 0x33E708u;
    // 0x33e708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e70c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e710: 0xc103440  jal         func_40D100
    ctx->pc = 0x33E710u;
    SET_GPR_U32(ctx, 31, 0x33E718u);
    ctx->pc = 0x33E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E710u;
    // 0x33e714: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x33E710u, 0x33E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E718u;
label_33e718:
    // 0x33e718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33e718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e71c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E71Cu;
    {
        const bool branch_taken_0x33e71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E71Cu;
        // 0x33e720: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e71c) {
            ctx->pc = 0x33E738u;
            goto label_33e738;
        }
    }
    ctx->pc = 0x33E724u;
    // 0x33e724: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33e724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33e728: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33e728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33e72c: 0x3012  mflo        $a2
    ctx->pc = 0x33e72cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e730: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33E730u;
    SET_GPR_U32(ctx, 31, 0x33E738u);
    ctx->pc = 0x33E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E730u;
    // 0x33e734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33E730u, 0x33E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E738u;
label_33e738:
    // 0x33e738: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e73c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e740: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E740u;
    SET_GPR_U32(ctx, 31, 0x33E748u);
    ctx->pc = 0x33E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E740u;
    // 0x33e744: 0x34a50003  ori         $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E740u, 0x33E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E748u;
label_33e748:
    // 0x33e748: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33E748u;
    {
        const bool branch_taken_0x33e748 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E748u;
        // 0x33e74c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e748) {
            ctx->pc = 0x33E780u;
            goto label_33e780;
        }
    }
    ctx->pc = 0x33E750u;
    // 0x33e750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e758: 0xc103440  jal         func_40D100
    ctx->pc = 0x33E758u;
    SET_GPR_U32(ctx, 31, 0x33E760u);
    ctx->pc = 0x33E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E758u;
    // 0x33e75c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x33E758u, 0x33E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E760u;
label_33e760:
    // 0x33e760: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E764u;
    {
        const bool branch_taken_0x33e764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E764u;
        // 0x33e768: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e764) {
            ctx->pc = 0x33E780u;
            goto label_33e780;
        }
    }
    ctx->pc = 0x33E76Cu;
    // 0x33e76c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33e770: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33e770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33e774: 0x3012  mflo        $a2
    ctx->pc = 0x33e774u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e778: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33E778u;
    SET_GPR_U32(ctx, 31, 0x33E780u);
    ctx->pc = 0x33E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E778u;
    // 0x33e77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33E778u, 0x33E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E780u;
label_33e780:
    // 0x33e780: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e788: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E788u;
    SET_GPR_U32(ctx, 31, 0x33E790u);
    ctx->pc = 0x33E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E788u;
    // 0x33e78c: 0x34a50005  ori         $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E788u, 0x33E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E790u;
label_33e790:
    // 0x33e790: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33E790u;
    {
        const bool branch_taken_0x33e790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E790u;
        // 0x33e794: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e790) {
            ctx->pc = 0x33E7C8u;
            goto label_33e7c8;
        }
    }
    ctx->pc = 0x33E798u;
    // 0x33e798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e79c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e7a0: 0xc103440  jal         func_40D100
    ctx->pc = 0x33E7A0u;
    SET_GPR_U32(ctx, 31, 0x33E7A8u);
    ctx->pc = 0x33E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7A0u;
    // 0x33e7a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x33E7A0u, 0x33E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7A8u;
label_33e7a8:
    // 0x33e7a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e7ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E7ACu;
    {
        const bool branch_taken_0x33e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7ACu;
        // 0x33e7b0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e7ac) {
            ctx->pc = 0x33E7C8u;
            goto label_33e7c8;
        }
    }
    ctx->pc = 0x33E7B4u;
    // 0x33e7b4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33e7b8: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33e7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33e7bc: 0x3012  mflo        $a2
    ctx->pc = 0x33e7bcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e7c0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33E7C0u;
    SET_GPR_U32(ctx, 31, 0x33E7C8u);
    ctx->pc = 0x33E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7C0u;
    // 0x33e7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33E7C0u, 0x33E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7C8u;
label_33e7c8:
    // 0x33e7c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33e7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e7cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33e7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e7d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33e7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e7d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e7d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33e7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x33E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7E0u;
        // 0x33e7e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E7E8u;
}
