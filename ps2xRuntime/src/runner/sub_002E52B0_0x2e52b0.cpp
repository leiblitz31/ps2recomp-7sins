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

// Function: sub_002E52B0
// Address: 0x2e52b0 - 0x2e53a0
void sub_002E52B0_0x2e52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E52B0_0x2e52b0");
#endif

    switch (ctx->pc) {
        case 0x2e52fcu: goto label_2e52fc;
        case 0x2e5338u: goto label_2e5338;
        case 0x2e5348u: goto label_2e5348;
        case 0x2e535cu: goto label_2e535c;
        case 0x2e5378u: goto label_2e5378;
        case 0x2e5388u: goto label_2e5388;
        default: break;
    }

    ctx->pc = 0x2e52b0u;

    // 0x2e52b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e52b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e52b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e52bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e52bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e52c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e52c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e52c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e52c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e52d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2e52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e52d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e52d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e52dc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E52DCu;
    {
        const bool branch_taken_0x2e52dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e52dc) {
            ctx->pc = 0x2E52F4u;
            goto label_2e52f4;
        }
    }
    ctx->pc = 0x2E52E4u;
    // 0x2e52e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e52e8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2e52e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e52ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E52ECu;
    {
        const bool branch_taken_0x2e52ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e52ec) {
            ctx->pc = 0x2E5324u;
            goto label_2e5324;
        }
    }
    ctx->pc = 0x2E52F4u;
label_2e52f4:
    // 0x2e52f4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2E52F4u;
    SET_GPR_U32(ctx, 31, 0x2E52FCu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2E52F4u, 0x2E52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52FCu;
label_2e52fc:
    // 0x2e52fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5300: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2e5300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e5304: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5308: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2e5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e530c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e5310: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e5310u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e5314: 0x1810  mfhi        $v1
    ctx->pc = 0x2e5314u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e5318: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e531c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e5320: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2e5320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e5324:
    // 0x2e5324: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e5324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5328: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2e5328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e532c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5330: 0xc0b9234  jal         func_2E48D0
    ctx->pc = 0x2E5330u;
    SET_GPR_U32(ctx, 31, 0x2E5338u);
    ctx->pc = 0x2E48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48D0u, 0x2E5330u, 0x2E5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5338u;
label_2e5338:
    // 0x2e5338: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2e5338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e533c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e5340: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E5340u;
    SET_GPR_U32(ctx, 31, 0x2E5348u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E5340u, 0x2E5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5348u;
label_2e5348:
    // 0x2e5348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e534c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5350: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e5350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e5354: 0xc0b3520  jal         func_2CD480
    ctx->pc = 0x2E5354u;
    SET_GPR_U32(ctx, 31, 0x2E535Cu);
    ctx->pc = 0x2CD480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD480u, 0x2E5354u, 0x2E535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E535Cu;
label_2e535c:
    // 0x2e535c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E535Cu;
    {
        const bool branch_taken_0x2e535c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e535c) {
            ctx->pc = 0x2E5388u;
            goto label_2e5388;
        }
    }
    ctx->pc = 0x2E5364u;
    // 0x2e5364: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5368: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e5368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e536c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e536cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5370: 0xc09d660  jal         func_275980
    ctx->pc = 0x2E5370u;
    SET_GPR_U32(ctx, 31, 0x2E5378u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2E5370u, 0x2E5378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5378u;
label_2e5378:
    // 0x2e5378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e537c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e537cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5380: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2E5380u;
    SET_GPR_U32(ctx, 31, 0x2E5388u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2E5380u, 0x2E5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5388u;
label_2e5388:
    // 0x2e5388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e538c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e538cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5394: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e5394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e5398: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E53A0u;
}
