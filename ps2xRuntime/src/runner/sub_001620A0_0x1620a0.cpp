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

// Function: sub_001620A0
// Address: 0x1620a0 - 0x1621d0
void sub_001620A0_0x1620a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001620A0_0x1620a0");
#endif

    switch (ctx->pc) {
        case 0x1620d4u: goto label_1620d4;
        case 0x162104u: goto label_162104;
        case 0x162138u: goto label_162138;
        default: break;
    }

    ctx->pc = 0x1620a0u;

    // 0x1620a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1620a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1620a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1620a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1620a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1620a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1620ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1620acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1620b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1620b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1620b4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1620b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1620b8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1620b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1620bc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1620bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1620c0: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1620c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1620c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1620c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1620c8: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1620c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1620cc: 0xc057954  jal         func_15E550
    ctx->pc = 0x1620CCu;
    SET_GPR_U32(ctx, 31, 0x1620D4u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x1620CCu, 0x1620D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1620D4u;
label_1620d4:
    // 0x1620d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1620d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1620d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1620e0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1620E0u;
    {
        const bool branch_taken_0x1620e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1620e0) {
            ctx->pc = 0x1620ECu;
            goto label_1620ec;
        }
    }
    ctx->pc = 0x1620E8u;
    // 0x1620e8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1620e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1620ec:
    // 0x1620ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1620f0: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1620F0u;
    {
        const bool branch_taken_0x1620f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1620f0) {
            ctx->pc = 0x162190u;
            goto label_162190;
        }
    }
    ctx->pc = 0x1620F8u;
    // 0x1620f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1620fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1620FCu;
    {
        const bool branch_taken_0x1620fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1620fc) {
            ctx->pc = 0x162190u;
            goto label_162190;
        }
    }
    ctx->pc = 0x162104u;
label_162104:
    // 0x162104: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x162108: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x162108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x16210c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16210Cu;
    {
        const bool branch_taken_0x16210c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16210c) {
            ctx->pc = 0x162120u;
            goto label_162120;
        }
    }
    ctx->pc = 0x162114u;
    // 0x162114: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x162114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x162118: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x162118u;
    {
        const bool branch_taken_0x162118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162118) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x162120u;
label_162120:
    // 0x162120: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x162120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x162124: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x162124u;
    {
        const bool branch_taken_0x162124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x162124) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x16212Cu;
    // 0x16212c: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x162130: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162130u;
    {
        const bool branch_taken_0x162130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162130) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x162138u;
label_162138:
    // 0x162138: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x162138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x16213c: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x16213cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x162140: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x162140u;
    {
        const bool branch_taken_0x162140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162140) {
            ctx->pc = 0x162154u;
            goto label_162154;
        }
    }
    ctx->pc = 0x162148u;
    // 0x162148: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x16214c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16214Cu;
    {
        const bool branch_taken_0x16214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16214c) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x162154u;
label_162154:
    // 0x162154: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x162154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x162158: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x162158u;
    {
        const bool branch_taken_0x162158 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x162158) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x162160u;
    // 0x162160: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x162160u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_162164:
    // 0x162164: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162168: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x16216c: 0x1050fff2  beq         $v0, $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x16216Cu;
    {
        const bool branch_taken_0x16216c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x16216c) {
            ctx->pc = 0x162138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162138;
        }
    }
    ctx->pc = 0x162174u;
    // 0x162174: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x162174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162178: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x16217c: 0x1050ffee  beq         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16217Cu;
    {
        const bool branch_taken_0x16217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x16217c) {
            ctx->pc = 0x162138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162138;
        }
    }
    ctx->pc = 0x162184u;
    // 0x162184: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162188: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16218c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x16218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_162190:
    // 0x162190: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162194u;
    {
        const bool branch_taken_0x162194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162194) {
            ctx->pc = 0x1621ACu;
            goto label_1621ac;
        }
    }
    ctx->pc = 0x16219Cu;
    // 0x16219c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1621a0: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1621a4: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1621A4u;
    {
        const bool branch_taken_0x1621a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1621a4) {
            ctx->pc = 0x162104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162104;
        }
    }
    ctx->pc = 0x1621ACu;
label_1621ac:
    // 0x1621ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1621acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1621b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1621b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1621b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1621b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1621b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1621bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1621bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1621c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1621C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1621C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1621CCu;
    // 0x1621cc: 0x0  nop
    ctx->pc = 0x1621ccu;
    // NOP
    ctx->pc = 0x1621d0u;
}
