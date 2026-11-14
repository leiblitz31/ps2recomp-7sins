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

// Function: sub_00137860
// Address: 0x137860 - 0x137960
void sub_00137860_0x137860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137860_0x137860");
#endif

    switch (ctx->pc) {
        case 0x137884u: goto label_137884;
        case 0x1378a0u: goto label_1378a0;
        case 0x1378d4u: goto label_1378d4;
        case 0x1378e4u: goto label_1378e4;
        case 0x137904u: goto label_137904;
        case 0x13793cu: goto label_13793c;
        default: break;
    }

    ctx->pc = 0x137860u;

    // 0x137860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x137860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x137864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13786c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137870: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x137870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x137874: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x137874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x137878: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x137878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13787c: 0xc04df00  jal         func_137C00
    ctx->pc = 0x13787Cu;
    SET_GPR_U32(ctx, 31, 0x137884u);
    ctx->pc = 0x137C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C00u, 0x13787Cu, 0x137884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137884u;
label_137884:
    // 0x137884: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x137884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137888: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x137888u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13788c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x13788Cu;
    {
        const bool branch_taken_0x13788c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13788c) {
            ctx->pc = 0x13793Cu;
            goto label_13793c;
        }
    }
    ctx->pc = 0x137894u;
    // 0x137894: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x137894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137898: 0xc04def0  jal         func_137BC0
    ctx->pc = 0x137898u;
    SET_GPR_U32(ctx, 31, 0x1378A0u);
    ctx->pc = 0x137BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BC0u, 0x137898u, 0x1378A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378A0u;
label_1378a0:
    // 0x1378a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1378a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1378a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1378ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1378ACu;
    {
        const bool branch_taken_0x1378ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378ac) {
            ctx->pc = 0x1378ECu;
            goto label_1378ec;
        }
    }
    ctx->pc = 0x1378B4u;
    // 0x1378b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1378b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1378bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378c0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1378c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1378c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1378c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1378c8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1378cc: 0xc04de88  jal         func_137A20
    ctx->pc = 0x1378CCu;
    SET_GPR_U32(ctx, 31, 0x1378D4u);
    ctx->pc = 0x137A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A20u, 0x1378CCu, 0x1378D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378D4u;
label_1378d4:
    // 0x1378d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1378d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378dc: 0xc04de6c  jal         func_1379B0
    ctx->pc = 0x1378DCu;
    SET_GPR_U32(ctx, 31, 0x1378E4u);
    ctx->pc = 0x1379B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1379B0u, 0x1378DCu, 0x1378E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378E4u;
label_1378e4:
    // 0x1378e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1378E4u;
    {
        const bool branch_taken_0x1378e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378e4) {
            ctx->pc = 0x137908u;
            goto label_137908;
        }
    }
    ctx->pc = 0x1378ECu;
label_1378ec:
    // 0x1378ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1378ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378f0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1378f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1378f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1378f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1378f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1378f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378fc: 0xc04df10  jal         func_137C40
    ctx->pc = 0x1378FCu;
    SET_GPR_U32(ctx, 31, 0x137904u);
    ctx->pc = 0x137C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C40u, 0x1378FCu, 0x137904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137904u;
label_137904:
    // 0x137904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137908:
    // 0x137908: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x137908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13790c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x137910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137914: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137918: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13791c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x137920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137928: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x137928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13792c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13792cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137934: 0xc04de58  jal         func_137960
    ctx->pc = 0x137934u;
    SET_GPR_U32(ctx, 31, 0x13793Cu);
    ctx->pc = 0x137960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137960u, 0x137934u, 0x13793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13793Cu;
label_13793c:
    // 0x13793c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13793cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137948: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x137948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13794c: 0x3e00008  jr          $ra
    ctx->pc = 0x13794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137954u;
    // 0x137954: 0x0  nop
    ctx->pc = 0x137954u;
    // NOP
    // 0x137958: 0x0  nop
    ctx->pc = 0x137958u;
    // NOP
    // 0x13795c: 0x0  nop
    ctx->pc = 0x13795cu;
    // NOP
    ctx->pc = 0x137960u;
}
