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

// Function: sub_004789F0
// Address: 0x4789f0 - 0x478ae0
void sub_004789F0_0x4789f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004789F0_0x4789f0");
#endif

    switch (ctx->pc) {
        case 0x478a14u: goto label_478a14;
        case 0x478a30u: goto label_478a30;
        case 0x478a64u: goto label_478a64;
        case 0x478a74u: goto label_478a74;
        case 0x478a94u: goto label_478a94;
        case 0x478abcu: goto label_478abc;
        default: break;
    }

    ctx->pc = 0x4789f0u;

    // 0x4789f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4789f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4789f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4789f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4789f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4789f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4789fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4789fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x478a00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x478a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x478a04: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x478a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x478a08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a0c: 0xc11e2d4  jal         func_478B50
    ctx->pc = 0x478A0Cu;
    SET_GPR_U32(ctx, 31, 0x478A14u);
    ctx->pc = 0x478B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478B50u, 0x478A0Cu, 0x478A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478A14u;
label_478a14:
    // 0x478a14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x478a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478a18: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x478a18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x478a1c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x478A1Cu;
    {
        const bool branch_taken_0x478a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x478a1c) {
            ctx->pc = 0x478ABCu;
            goto label_478abc;
        }
    }
    ctx->pc = 0x478A24u;
    // 0x478a24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a28: 0xc11def0  jal         func_477BC0
    ctx->pc = 0x478A28u;
    SET_GPR_U32(ctx, 31, 0x478A30u);
    ctx->pc = 0x477BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477BC0u, 0x478A28u, 0x478A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478A30u;
label_478a30:
    // 0x478a30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x478a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x478a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478a3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x478A3Cu;
    {
        const bool branch_taken_0x478a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478a3c) {
            ctx->pc = 0x478A7Cu;
            goto label_478a7c;
        }
    }
    ctx->pc = 0x478A44u;
    // 0x478a44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x478a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a50: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478a54: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x478a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478a58: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x478a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x478a5c: 0xc11e2b8  jal         func_478AE0
    ctx->pc = 0x478A5Cu;
    SET_GPR_U32(ctx, 31, 0x478A64u);
    ctx->pc = 0x478AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478AE0u, 0x478A5Cu, 0x478A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478A64u;
label_478a64:
    // 0x478a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x478a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a6c: 0xc11de90  jal         func_477A40
    ctx->pc = 0x478A6Cu;
    SET_GPR_U32(ctx, 31, 0x478A74u);
    ctx->pc = 0x477A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477A40u, 0x478A6Cu, 0x478A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478A74u;
label_478a74:
    // 0x478a74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x478A74u;
    {
        const bool branch_taken_0x478a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478a74) {
            ctx->pc = 0x478A98u;
            goto label_478a98;
        }
    }
    ctx->pc = 0x478A7Cu;
label_478a7c:
    // 0x478a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478a80: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x478a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x478a84: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x478a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a8c: 0xc11e1fc  jal         func_4787F0
    ctx->pc = 0x478A8Cu;
    SET_GPR_U32(ctx, 31, 0x478A94u);
    ctx->pc = 0x4787F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4787F0u, 0x478A8Cu, 0x478A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478A94u;
label_478a94:
    // 0x478a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x478a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_478a98:
    // 0x478a98: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x478a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x478a9c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x478a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x478aa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x478aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478aa4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x478aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x478aa8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x478aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x478aac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478ab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x478ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478ab4: 0xc11de7c  jal         func_4779F0
    ctx->pc = 0x478AB4u;
    SET_GPR_U32(ctx, 31, 0x478ABCu);
    ctx->pc = 0x4779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4779F0u, 0x478AB4u, 0x478ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478ABCu;
label_478abc:
    // 0x478abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x478abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x478ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478ac8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x478ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x478acc: 0x3e00008  jr          $ra
    ctx->pc = 0x478ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478AD4u;
    // 0x478ad4: 0x0  nop
    ctx->pc = 0x478ad4u;
    // NOP
    // 0x478ad8: 0x0  nop
    ctx->pc = 0x478ad8u;
    // NOP
    // 0x478adc: 0x0  nop
    ctx->pc = 0x478adcu;
    // NOP
    ctx->pc = 0x478ae0u;
}
