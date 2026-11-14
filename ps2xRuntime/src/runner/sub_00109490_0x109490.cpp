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

// Function: sub_00109490
// Address: 0x109490 - 0x109580
void sub_00109490_0x109490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109490_0x109490");
#endif

    switch (ctx->pc) {
        case 0x1094b4u: goto label_1094b4;
        case 0x1094d0u: goto label_1094d0;
        case 0x109504u: goto label_109504;
        case 0x109514u: goto label_109514;
        case 0x109534u: goto label_109534;
        case 0x10955cu: goto label_10955c;
        default: break;
    }

    ctx->pc = 0x109490u;

    // 0x109490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x109494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x109498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10949c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1094a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1094a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1094a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1094a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1094a8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1094a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094ac: 0xc0425c4  jal         func_109710
    ctx->pc = 0x1094ACu;
    SET_GPR_U32(ctx, 31, 0x1094B4u);
    ctx->pc = 0x109710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109710u, 0x1094ACu, 0x1094B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094B4u;
label_1094b4:
    // 0x1094b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1094b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1094b8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1094b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1094bc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1094BCu;
    {
        const bool branch_taken_0x1094bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1094bc) {
            ctx->pc = 0x10955Cu;
            goto label_10955c;
        }
    }
    ctx->pc = 0x1094C4u;
    // 0x1094c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1094c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094c8: 0xc041968  jal         func_1065A0
    ctx->pc = 0x1094C8u;
    SET_GPR_U32(ctx, 31, 0x1094D0u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x1094C8u, 0x1094D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094D0u;
label_1094d0:
    // 0x1094d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1094d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1094d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1094d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1094dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1094DCu;
    {
        const bool branch_taken_0x1094dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1094dc) {
            ctx->pc = 0x10951Cu;
            goto label_10951c;
        }
    }
    ctx->pc = 0x1094E4u;
    // 0x1094e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1094e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1094e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1094ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094f0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1094f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1094f4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1094f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1094f8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1094f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1094fc: 0xc042560  jal         func_109580
    ctx->pc = 0x1094FCu;
    SET_GPR_U32(ctx, 31, 0x109504u);
    ctx->pc = 0x109580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109580u, 0x1094FCu, 0x109504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109504u;
label_109504:
    // 0x109504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109508: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x109508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10950c: 0xc0418f8  jal         func_1063E0
    ctx->pc = 0x10950Cu;
    SET_GPR_U32(ctx, 31, 0x109514u);
    ctx->pc = 0x1063E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063E0u, 0x10950Cu, 0x109514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109514u;
label_109514:
    // 0x109514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109514u;
    {
        const bool branch_taken_0x109514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109514) {
            ctx->pc = 0x109538u;
            goto label_109538;
        }
    }
    ctx->pc = 0x10951Cu;
label_10951c:
    // 0x10951c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109520: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x109520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x109524: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x109524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10952c: 0xc042430  jal         func_1090C0
    ctx->pc = 0x10952Cu;
    SET_GPR_U32(ctx, 31, 0x109534u);
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x10952Cu, 0x109534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109534u;
label_109534:
    // 0x109534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109538:
    // 0x109538: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x109538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10953c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x10953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x109540: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x109540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109548: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x109548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10954c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109554: 0xc0418e4  jal         func_106390
    ctx->pc = 0x109554u;
    SET_GPR_U32(ctx, 31, 0x10955Cu);
    ctx->pc = 0x106390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106390u, 0x109554u, 0x10955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10955Cu;
label_10955c:
    // 0x10955c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109568: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x109568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10956c: 0x3e00008  jr          $ra
    ctx->pc = 0x10956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10956Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109574u;
    // 0x109574: 0x0  nop
    ctx->pc = 0x109574u;
    // NOP
    // 0x109578: 0x0  nop
    ctx->pc = 0x109578u;
    // NOP
    // 0x10957c: 0x0  nop
    ctx->pc = 0x10957cu;
    // NOP
    ctx->pc = 0x109580u;
}
