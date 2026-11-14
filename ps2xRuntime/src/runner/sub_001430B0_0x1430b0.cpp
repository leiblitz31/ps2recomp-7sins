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

// Function: sub_001430B0
// Address: 0x1430b0 - 0x143170
void sub_001430B0_0x1430b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001430B0_0x1430b0");
#endif

    switch (ctx->pc) {
        case 0x1430d8u: goto label_1430d8;
        case 0x1430f0u: goto label_1430f0;
        case 0x143100u: goto label_143100;
        case 0x14310cu: goto label_14310c;
        case 0x143118u: goto label_143118;
        case 0x143128u: goto label_143128;
        case 0x14313cu: goto label_14313c;
        case 0x143148u: goto label_143148;
        default: break;
    }

    ctx->pc = 0x1430b0u;

    // 0x1430b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1430b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1430b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1430b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1430b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1430bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1430bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1430c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1430c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1430c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1430c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1430c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1430c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1430cc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1430ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1430d0: 0xc0412dc  jal         func_104B70
    ctx->pc = 0x1430D0u;
    SET_GPR_U32(ctx, 31, 0x1430D8u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x1430D0u, 0x1430D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430D8u;
label_1430d8:
    // 0x1430d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1430d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430dc: 0x1011001c  beq         $zero, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1430DCu;
    {
        const bool branch_taken_0x1430dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x1430dc) {
            ctx->pc = 0x143150u;
            goto label_143150;
        }
    }
    ctx->pc = 0x1430E4u;
    // 0x1430e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1430e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430e8: 0xc090590  jal         func_241640
    ctx->pc = 0x1430E8u;
    SET_GPR_U32(ctx, 31, 0x1430F0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1430E8u, 0x1430F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430F0u;
label_1430f0:
    // 0x1430f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1430f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1430f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1430f8: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x1430F8u;
    SET_GPR_U32(ctx, 31, 0x143100u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1430F8u, 0x143100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143100u;
label_143100:
    // 0x143100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143104: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x143104u;
    {
        const bool branch_taken_0x143104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143104) {
            ctx->pc = 0x14313Cu;
            goto label_14313c;
        }
    }
    ctx->pc = 0x14310Cu;
label_14310c:
    // 0x14310c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14310cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143110: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x143110u;
    SET_GPR_U32(ctx, 31, 0x143118u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x143110u, 0x143118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143118u;
label_143118:
    // 0x143118: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x143118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14311c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143120: 0xc08551c  jal         func_215470
    ctx->pc = 0x143120u;
    SET_GPR_U32(ctx, 31, 0x143128u);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x143120u, 0x143128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143128u;
label_143128:
    // 0x143128: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x143128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14312c: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x14312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x143130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143134: 0xc041c7c  jal         func_1071F0
    ctx->pc = 0x143134u;
    SET_GPR_U32(ctx, 31, 0x14313Cu);
    ctx->pc = 0x1071F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1071F0u, 0x143134u, 0x14313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14313Cu;
label_14313c:
    // 0x14313c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14313cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143140: 0xc040e70  jal         func_1039C0
    ctx->pc = 0x143140u;
    SET_GPR_U32(ctx, 31, 0x143148u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x143140u, 0x143148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143148u;
label_143148:
    // 0x143148: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x143148u;
    {
        const bool branch_taken_0x143148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143148) {
            ctx->pc = 0x14310Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14310c;
        }
    }
    ctx->pc = 0x143150u;
label_143150:
    // 0x143150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x143150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14315c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14315cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143160: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143164: 0x3e00008  jr          $ra
    ctx->pc = 0x143164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14316Cu;
    // 0x14316c: 0x0  nop
    ctx->pc = 0x14316cu;
    // NOP
    ctx->pc = 0x143170u;
}
