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

// Function: sub_00247500
// Address: 0x247500 - 0x2475f0
void sub_00247500_0x247500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247500_0x247500");
#endif

    switch (ctx->pc) {
        case 0x247524u: goto label_247524;
        case 0x247540u: goto label_247540;
        case 0x247574u: goto label_247574;
        case 0x247584u: goto label_247584;
        case 0x2475a4u: goto label_2475a4;
        case 0x2475ccu: goto label_2475cc;
        default: break;
    }

    ctx->pc = 0x247500u;

    // 0x247500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x247504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x247508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24750c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x247510: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x247510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x247514: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x247514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x247518: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x247518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24751c: 0xc0710b4  jal         func_1C42D0
    ctx->pc = 0x24751Cu;
    SET_GPR_U32(ctx, 31, 0x247524u);
    ctx->pc = 0x1C42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42D0u, 0x24751Cu, 0x247524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247524u;
label_247524:
    // 0x247524: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x247524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247528: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x247528u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24752c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x24752Cu;
    {
        const bool branch_taken_0x24752c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24752c) {
            ctx->pc = 0x2475CCu;
            goto label_2475cc;
        }
    }
    ctx->pc = 0x247534u;
    // 0x247534: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247538: 0xc044598  jal         func_111660
    ctx->pc = 0x247538u;
    SET_GPR_U32(ctx, 31, 0x247540u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x247538u, 0x247540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247540u;
label_247540:
    // 0x247540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247544: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x247544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x247548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24754c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24754Cu;
    {
        const bool branch_taken_0x24754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24754c) {
            ctx->pc = 0x24758Cu;
            goto label_24758c;
        }
    }
    ctx->pc = 0x247554u;
    // 0x247554: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247558: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x247558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24755c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247560: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247564: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247568: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x247568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24756c: 0xc091d7c  jal         func_2475F0
    ctx->pc = 0x24756Cu;
    SET_GPR_U32(ctx, 31, 0x247574u);
    ctx->pc = 0x2475F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2475F0u, 0x24756Cu, 0x247574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247574u;
label_247574:
    // 0x247574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247578: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24757c: 0xc04455c  jal         func_111570
    ctx->pc = 0x24757Cu;
    SET_GPR_U32(ctx, 31, 0x247584u);
    ctx->pc = 0x111570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111570u, 0x24757Cu, 0x247584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247584u;
label_247584:
    // 0x247584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x247584u;
    {
        const bool branch_taken_0x247584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247584) {
            ctx->pc = 0x2475A8u;
            goto label_2475a8;
        }
    }
    ctx->pc = 0x24758Cu;
label_24758c:
    // 0x24758c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247590: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x247594: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24759c: 0xc04484c  jal         func_112130
    ctx->pc = 0x24759Cu;
    SET_GPR_U32(ctx, 31, 0x2475A4u);
    ctx->pc = 0x112130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112130u, 0x24759Cu, 0x2475A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475A4u;
label_2475a4:
    // 0x2475a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2475a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2475a8:
    // 0x2475a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2475ac: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2475b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2475b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2475b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2475b8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x2475b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2475bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2475bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2475c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2475c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475c4: 0xc044548  jal         func_111520
    ctx->pc = 0x2475C4u;
    SET_GPR_U32(ctx, 31, 0x2475CCu);
    ctx->pc = 0x111520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111520u, 0x2475C4u, 0x2475CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475CCu;
label_2475cc:
    // 0x2475cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2475ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2475d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2475d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2475d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2475d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2475d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2475d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2475dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2475DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2475DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2475E4u;
    // 0x2475e4: 0x0  nop
    ctx->pc = 0x2475e4u;
    // NOP
    // 0x2475e8: 0x0  nop
    ctx->pc = 0x2475e8u;
    // NOP
    // 0x2475ec: 0x0  nop
    ctx->pc = 0x2475ecu;
    // NOP
    ctx->pc = 0x2475f0u;
}
