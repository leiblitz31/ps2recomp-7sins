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

// Function: sub_00159430
// Address: 0x159430 - 0x1595b0
void sub_00159430_0x159430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159430_0x159430");
#endif

    switch (ctx->pc) {
        case 0x159468u: goto label_159468;
        case 0x159490u: goto label_159490;
        case 0x1594b4u: goto label_1594b4;
        case 0x1594d8u: goto label_1594d8;
        case 0x159508u: goto label_159508;
        case 0x15953cu: goto label_15953c;
        case 0x159560u: goto label_159560;
        case 0x159574u: goto label_159574;
        default: break;
    }

    ctx->pc = 0x159430u;

    // 0x159430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15943c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x159440: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x159440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x159444: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x159444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x159448: 0xa7a70050  sh          $a3, 0x50($sp)
    ctx->pc = 0x159448u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x15944c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159450: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x159450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159454: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x159454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159458: 0x97a50050  lhu         $a1, 0x50($sp)
    ctx->pc = 0x159458u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15945c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15945cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159460: 0xc056628  jal         func_1598A0
    ctx->pc = 0x159460u;
    SET_GPR_U32(ctx, 31, 0x159468u);
    ctx->pc = 0x1598A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598A0u, 0x159460u, 0x159468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159468u;
label_159468:
    // 0x159468: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x159468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15946c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x15946cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x159470: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x159470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159478: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x159478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15947c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15947Cu;
    {
        const bool branch_taken_0x15947c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15947c) {
            ctx->pc = 0x1594E0u;
            goto label_1594e0;
        }
    }
    ctx->pc = 0x159484u;
    // 0x159484: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x159484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159488: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x159488u;
    SET_GPR_U32(ctx, 31, 0x159490u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x159488u, 0x159490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159490u;
label_159490:
    // 0x159490: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x159490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x159494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159494u;
    {
        const bool branch_taken_0x159494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159494) {
            ctx->pc = 0x1594A8u;
            goto label_1594a8;
        }
    }
    ctx->pc = 0x15949Cu;
    // 0x15949c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15949cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1594A0u;
    {
        const bool branch_taken_0x1594a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1594a0) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x1594A8u;
label_1594a8:
    // 0x1594a8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1594a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1594ac: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x1594ACu;
    SET_GPR_U32(ctx, 31, 0x1594B4u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x1594ACu, 0x1594B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594B4u;
label_1594b4:
    // 0x1594b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1594b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1594b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1594b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1594bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1594bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1594c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1594c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1594c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1594c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1594c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1594c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594cc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1594ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1594d0: 0xc056334  jal         func_158CD0
    ctx->pc = 0x1594D0u;
    SET_GPR_U32(ctx, 31, 0x1594D8u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x1594D0u, 0x1594D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594D8u;
label_1594d8:
    // 0x1594d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1594D8u;
    {
        const bool branch_taken_0x1594d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1594d8) {
            ctx->pc = 0x159560u;
            goto label_159560;
        }
    }
    ctx->pc = 0x1594E0u;
label_1594e0:
    // 0x1594e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1594e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1594e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1594e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1594E8u;
    {
        const bool branch_taken_0x1594e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1594e8) {
            ctx->pc = 0x159544u;
            goto label_159544;
        }
    }
    ctx->pc = 0x1594F0u;
    // 0x1594f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1594f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1594f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1594f8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1594f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1594fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159500: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x159500u;
    SET_GPR_U32(ctx, 31, 0x159508u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x159500u, 0x159508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159508u;
label_159508:
    // 0x159508: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x159508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15950c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15950cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x159510: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x159510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x159514: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x159514u;
    {
        const bool branch_taken_0x159514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159514) {
            ctx->pc = 0x159544u;
            goto label_159544;
        }
    }
    ctx->pc = 0x15951Cu;
    // 0x15951c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159520: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159524: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x159524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159528: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15952c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15952cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159530: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159534: 0xc056334  jal         func_158CD0
    ctx->pc = 0x159534u;
    SET_GPR_U32(ctx, 31, 0x15953Cu);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x159534u, 0x15953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15953Cu;
label_15953c:
    // 0x15953c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15953Cu;
    {
        const bool branch_taken_0x15953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15953c) {
            ctx->pc = 0x159560u;
            goto label_159560;
        }
    }
    ctx->pc = 0x159544u;
label_159544:
    // 0x159544: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x159544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159548: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15954c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15954cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159550: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159554: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x159554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159558: 0xc056334  jal         func_158CD0
    ctx->pc = 0x159558u;
    SET_GPR_U32(ctx, 31, 0x159560u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x159558u, 0x159560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159560u;
label_159560:
    // 0x159560: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159564: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x159564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159568: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15956c: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x15956Cu;
    SET_GPR_U32(ctx, 31, 0x159574u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x15956Cu, 0x159574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159574u;
label_159574:
    // 0x159574: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x159574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159578u;
    {
        const bool branch_taken_0x159578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159578) {
            ctx->pc = 0x159594u;
            goto label_159594;
        }
    }
    ctx->pc = 0x159580u;
    // 0x159580: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x159580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159588: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x159588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15958c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159590: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x159590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_159594:
    // 0x159594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159598:
    // 0x159598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15959c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15959cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1595a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1595a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1595A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1595A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595ACu;
    // 0x1595ac: 0x0  nop
    ctx->pc = 0x1595acu;
    // NOP
    ctx->pc = 0x1595b0u;
}
