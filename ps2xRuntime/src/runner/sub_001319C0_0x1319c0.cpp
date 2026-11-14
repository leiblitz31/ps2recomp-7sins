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

// Function: sub_001319C0
// Address: 0x1319c0 - 0x131ab0
void sub_001319C0_0x1319c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001319C0_0x1319c0");
#endif

    switch (ctx->pc) {
        case 0x1319e4u: goto label_1319e4;
        case 0x131a00u: goto label_131a00;
        case 0x131a34u: goto label_131a34;
        case 0x131a44u: goto label_131a44;
        case 0x131a64u: goto label_131a64;
        case 0x131a8cu: goto label_131a8c;
        default: break;
    }

    ctx->pc = 0x1319c0u;

    // 0x1319c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1319c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1319c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1319c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1319c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1319c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1319cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1319ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1319d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1319d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1319d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1319d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1319d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1319d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1319dc: 0xc04c764  jal         func_131D90
    ctx->pc = 0x1319DCu;
    SET_GPR_U32(ctx, 31, 0x1319E4u);
    ctx->pc = 0x131D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D90u, 0x1319DCu, 0x1319E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319E4u;
label_1319e4:
    // 0x1319e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1319e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1319e8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1319e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1319ec: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1319ECu;
    {
        const bool branch_taken_0x1319ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319ec) {
            ctx->pc = 0x131A8Cu;
            goto label_131a8c;
        }
    }
    ctx->pc = 0x1319F4u;
    // 0x1319f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1319f8: 0xc04c754  jal         func_131D50
    ctx->pc = 0x1319F8u;
    SET_GPR_U32(ctx, 31, 0x131A00u);
    ctx->pc = 0x131D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D50u, 0x1319F8u, 0x131A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A00u;
label_131a00:
    // 0x131a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131a0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x131A0Cu;
    {
        const bool branch_taken_0x131a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a0c) {
            ctx->pc = 0x131A4Cu;
            goto label_131a4c;
        }
    }
    ctx->pc = 0x131A14u;
    // 0x131a14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x131a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a20: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131a24: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x131a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131a28: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x131a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131a2c: 0xc04c6e0  jal         func_131B80
    ctx->pc = 0x131A2Cu;
    SET_GPR_U32(ctx, 31, 0x131A34u);
    ctx->pc = 0x131B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B80u, 0x131A2Cu, 0x131A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A34u;
label_131a34:
    // 0x131a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a38: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a3c: 0xc04c6c0  jal         func_131B00
    ctx->pc = 0x131A3Cu;
    SET_GPR_U32(ctx, 31, 0x131A44u);
    ctx->pc = 0x131B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B00u, 0x131A3Cu, 0x131A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A44u;
label_131a44:
    // 0x131a44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x131A44u;
    {
        const bool branch_taken_0x131a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a44) {
            ctx->pc = 0x131A68u;
            goto label_131a68;
        }
    }
    ctx->pc = 0x131A4Cu;
label_131a4c:
    // 0x131a4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a50: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x131a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x131a54: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a5c: 0xc04c8a0  jal         func_132280
    ctx->pc = 0x131A5Cu;
    SET_GPR_U32(ctx, 31, 0x131A64u);
    ctx->pc = 0x132280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132280u, 0x131A5Cu, 0x131A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A64u;
label_131a64:
    // 0x131a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131a68:
    // 0x131a68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x131a6c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x131a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131a70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131a74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131a78: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x131a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131a7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a84: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x131A84u;
    SET_GPR_U32(ctx, 31, 0x131A8Cu);
    ctx->pc = 0x131AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131AB0u, 0x131A84u, 0x131A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A8Cu;
label_131a8c:
    // 0x131a8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131a98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x131A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131AA4u;
    // 0x131aa4: 0x0  nop
    ctx->pc = 0x131aa4u;
    // NOP
    // 0x131aa8: 0x0  nop
    ctx->pc = 0x131aa8u;
    // NOP
    // 0x131aac: 0x0  nop
    ctx->pc = 0x131aacu;
    // NOP
    ctx->pc = 0x131ab0u;
}
