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

// Function: sub_002B0FB0
// Address: 0x2b0fb0 - 0x2b10a0
void sub_002B0FB0_0x2b0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0FB0_0x2b0fb0");
#endif

    switch (ctx->pc) {
        case 0x2b0fd4u: goto label_2b0fd4;
        case 0x2b0ff0u: goto label_2b0ff0;
        case 0x2b1024u: goto label_2b1024;
        case 0x2b1034u: goto label_2b1034;
        case 0x2b1054u: goto label_2b1054;
        case 0x2b107cu: goto label_2b107c;
        default: break;
    }

    ctx->pc = 0x2b0fb0u;

    // 0x2b0fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b0fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b0fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0fc0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b0fc4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b0fc8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0fcc: 0xc0ac48c  jal         func_2B1230
    ctx->pc = 0x2B0FCCu;
    SET_GPR_U32(ctx, 31, 0x2B0FD4u);
    ctx->pc = 0x2B1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1230u, 0x2B0FCCu, 0x2B0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FD4u;
label_2b0fd4:
    // 0x2b0fd4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0fd8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2b0fd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b0fdc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B0FDCu;
    {
        const bool branch_taken_0x2b0fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0fdc) {
            ctx->pc = 0x2B107Cu;
            goto label_2b107c;
        }
    }
    ctx->pc = 0x2B0FE4u;
    // 0x2b0fe4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0fe8: 0xc0ac114  jal         func_2B0450
    ctx->pc = 0x2B0FE8u;
    SET_GPR_U32(ctx, 31, 0x2B0FF0u);
    ctx->pc = 0x2B0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0450u, 0x2B0FE8u, 0x2B0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FF0u;
label_2b0ff0:
    // 0x2b0ff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ff4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0ff8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0ffc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B0FFCu;
    {
        const bool branch_taken_0x2b0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ffc) {
            ctx->pc = 0x2B103Cu;
            goto label_2b103c;
        }
    }
    ctx->pc = 0x2B1004u;
    // 0x2b1004: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b1004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1008: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b100c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1010: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b1010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1014: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b1014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1018: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2b1018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b101c: 0xc0ac428  jal         func_2B10A0
    ctx->pc = 0x2B101Cu;
    SET_GPR_U32(ctx, 31, 0x2B1024u);
    ctx->pc = 0x2B10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B10A0u, 0x2B101Cu, 0x2B1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1024u;
label_2b1024:
    // 0x2b1024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1028: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b1028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b102c: 0xc0ac0d8  jal         func_2B0360
    ctx->pc = 0x2B102Cu;
    SET_GPR_U32(ctx, 31, 0x2B1034u);
    ctx->pc = 0x2B0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0360u, 0x2B102Cu, 0x2B1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1034u;
label_2b1034:
    // 0x2b1034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1034u;
    {
        const bool branch_taken_0x2b1034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1034) {
            ctx->pc = 0x2B1058u;
            goto label_2b1058;
        }
    }
    ctx->pc = 0x2B103Cu;
label_2b103c:
    // 0x2b103c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1040: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b1044: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b1044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b104c: 0xc0ac218  jal         func_2B0860
    ctx->pc = 0x2B104Cu;
    SET_GPR_U32(ctx, 31, 0x2B1054u);
    ctx->pc = 0x2B0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0860u, 0x2B104Cu, 0x2B1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1054u;
label_2b1054:
    // 0x2b1054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1058:
    // 0x2b1058: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b1058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b105c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2b105cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b1060: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b1064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1068: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x2b1068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b106c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1074: 0xc0ac0c4  jal         func_2B0310
    ctx->pc = 0x2B1074u;
    SET_GPR_U32(ctx, 31, 0x2B107Cu);
    ctx->pc = 0x2B0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0310u, 0x2B1074u, 0x2B107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B107Cu;
label_2b107c:
    // 0x2b107c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b1080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1088: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b1088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b108c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1094u;
    // 0x2b1094: 0x0  nop
    ctx->pc = 0x2b1094u;
    // NOP
    // 0x2b1098: 0x0  nop
    ctx->pc = 0x2b1098u;
    // NOP
    // 0x2b109c: 0x0  nop
    ctx->pc = 0x2b109cu;
    // NOP
    ctx->pc = 0x2b10a0u;
}
