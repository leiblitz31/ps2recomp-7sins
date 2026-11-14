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

// Function: sub_002258A0
// Address: 0x2258a0 - 0x225990
void sub_002258A0_0x2258a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002258A0_0x2258a0");
#endif

    switch (ctx->pc) {
        case 0x2258c4u: goto label_2258c4;
        case 0x2258e0u: goto label_2258e0;
        case 0x225914u: goto label_225914;
        case 0x225924u: goto label_225924;
        case 0x225944u: goto label_225944;
        case 0x22596cu: goto label_22596c;
        default: break;
    }

    ctx->pc = 0x2258a0u;

    // 0x2258a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2258a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2258a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2258a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2258a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2258a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2258ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2258acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2258b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2258b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2258b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2258b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2258b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2258b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2258bc: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x2258BCu;
    SET_GPR_U32(ctx, 31, 0x2258C4u);
    ctx->pc = 0x225B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B20u, 0x2258BCu, 0x2258C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258C4u;
label_2258c4:
    // 0x2258c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2258c8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2258c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2258cc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2258CCu;
    {
        const bool branch_taken_0x2258cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258cc) {
            ctx->pc = 0x22596Cu;
            goto label_22596c;
        }
    }
    ctx->pc = 0x2258D4u;
    // 0x2258d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2258d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2258d8: 0xc088670  jal         func_2219C0
    ctx->pc = 0x2258D8u;
    SET_GPR_U32(ctx, 31, 0x2258E0u);
    ctx->pc = 0x2219C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219C0u, 0x2258D8u, 0x2258E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258E0u;
label_2258e0:
    // 0x2258e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2258e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2258e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2258e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2258e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2258ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2258ECu;
    {
        const bool branch_taken_0x2258ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258ec) {
            ctx->pc = 0x22592Cu;
            goto label_22592c;
        }
    }
    ctx->pc = 0x2258F4u;
    // 0x2258f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2258f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2258f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2258f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2258fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2258fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225900: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x225900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225904: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x225904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225908: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22590c: 0xc089664  jal         func_225990
    ctx->pc = 0x22590Cu;
    SET_GPR_U32(ctx, 31, 0x225914u);
    ctx->pc = 0x225990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225990u, 0x22590Cu, 0x225914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225914u;
label_225914:
    // 0x225914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225918: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x225918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22591c: 0xc088610  jal         func_221840
    ctx->pc = 0x22591Cu;
    SET_GPR_U32(ctx, 31, 0x225924u);
    ctx->pc = 0x221840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221840u, 0x22591Cu, 0x225924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225924u;
label_225924:
    // 0x225924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225924u;
    {
        const bool branch_taken_0x225924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225924) {
            ctx->pc = 0x225948u;
            goto label_225948;
        }
    }
    ctx->pc = 0x22592Cu;
label_22592c:
    // 0x22592c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225930: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x225930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x225934: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x225934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22593c: 0xc089510  jal         func_225440
    ctx->pc = 0x22593Cu;
    SET_GPR_U32(ctx, 31, 0x225944u);
    ctx->pc = 0x225440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225440u, 0x22593Cu, 0x225944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225944u;
label_225944:
    // 0x225944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225948:
    // 0x225948: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x225948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22594c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x22594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x225950: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225958: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x225958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22595c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22595cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225964: 0xc0885fc  jal         func_2217F0
    ctx->pc = 0x225964u;
    SET_GPR_U32(ctx, 31, 0x22596Cu);
    ctx->pc = 0x2217F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2217F0u, 0x225964u, 0x22596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22596Cu;
label_22596c:
    // 0x22596c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225978: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x225978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22597c: 0x3e00008  jr          $ra
    ctx->pc = 0x22597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225984u;
    // 0x225984: 0x0  nop
    ctx->pc = 0x225984u;
    // NOP
    // 0x225988: 0x0  nop
    ctx->pc = 0x225988u;
    // NOP
    // 0x22598c: 0x0  nop
    ctx->pc = 0x22598cu;
    // NOP
    ctx->pc = 0x225990u;
}
