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

// Function: sub_002D8EB0
// Address: 0x2d8eb0 - 0x2d8fa0
void sub_002D8EB0_0x2d8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8EB0_0x2d8eb0");
#endif

    switch (ctx->pc) {
        case 0x2d8ed4u: goto label_2d8ed4;
        case 0x2d8ef0u: goto label_2d8ef0;
        case 0x2d8f24u: goto label_2d8f24;
        case 0x2d8f34u: goto label_2d8f34;
        case 0x2d8f54u: goto label_2d8f54;
        case 0x2d8f7cu: goto label_2d8f7c;
        default: break;
    }

    ctx->pc = 0x2d8eb0u;

    // 0x2d8eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d8eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8ec0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d8ec4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d8ec8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8ecc: 0xc0b644c  jal         func_2D9130
    ctx->pc = 0x2D8ECCu;
    SET_GPR_U32(ctx, 31, 0x2D8ED4u);
    ctx->pc = 0x2D9130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9130u, 0x2D8ECCu, 0x2D8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8ED4u;
label_2d8ed4:
    // 0x2d8ed4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8ed8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2d8ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d8edc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D8EDCu;
    {
        const bool branch_taken_0x2d8edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8edc) {
            ctx->pc = 0x2D8F7Cu;
            goto label_2d8f7c;
        }
    }
    ctx->pc = 0x2D8EE4u;
    // 0x2d8ee4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8ee8: 0xc0b4638  jal         func_2D18E0
    ctx->pc = 0x2D8EE8u;
    SET_GPR_U32(ctx, 31, 0x2D8EF0u);
    ctx->pc = 0x2D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18E0u, 0x2D8EE8u, 0x2D8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EF0u;
label_2d8ef0:
    // 0x2d8ef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ef4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8ef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8efc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8EFCu;
    {
        const bool branch_taken_0x2d8efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8efc) {
            ctx->pc = 0x2D8F3Cu;
            goto label_2d8f3c;
        }
    }
    ctx->pc = 0x2D8F04u;
    // 0x2d8f04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f0c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f10: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d8f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8f14: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2d8f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8f18: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d8f1c: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F24u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8F1Cu, 0x2D8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F24u;
label_2d8f24:
    // 0x2d8f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f2c: 0xc0b45c4  jal         func_2D1710
    ctx->pc = 0x2D8F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F34u);
    ctx->pc = 0x2D1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1710u, 0x2D8F2Cu, 0x2D8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F34u;
label_2d8f34:
    // 0x2d8f34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8F34u;
    {
        const bool branch_taken_0x2d8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8f34) {
            ctx->pc = 0x2D8F58u;
            goto label_2d8f58;
        }
    }
    ctx->pc = 0x2D8F3Cu;
label_2d8f3c:
    // 0x2d8f3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f40: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d8f44: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d8f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f4c: 0xc0b6328  jal         func_2D8CA0
    ctx->pc = 0x2D8F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F54u);
    ctx->pc = 0x2D8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8CA0u, 0x2D8F4Cu, 0x2D8F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F54u;
label_2d8f54:
    // 0x2d8f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f58:
    // 0x2d8f58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d8f5c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2d8f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d8f60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d8f68: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x2d8f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d8f6c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f74: 0xc0b45b0  jal         func_2D16C0
    ctx->pc = 0x2D8F74u;
    SET_GPR_U32(ctx, 31, 0x2D8F7Cu);
    ctx->pc = 0x2D16C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D16C0u, 0x2D8F74u, 0x2D8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F7Cu;
label_2d8f7c:
    // 0x2d8f7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8f88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d8f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8F94u;
    // 0x2d8f94: 0x0  nop
    ctx->pc = 0x2d8f94u;
    // NOP
    // 0x2d8f98: 0x0  nop
    ctx->pc = 0x2d8f98u;
    // NOP
    // 0x2d8f9c: 0x0  nop
    ctx->pc = 0x2d8f9cu;
    // NOP
    ctx->pc = 0x2d8fa0u;
}
