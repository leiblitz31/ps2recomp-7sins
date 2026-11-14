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

// Function: sub_00257120
// Address: 0x257120 - 0x2571d0
void sub_00257120_0x257120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257120_0x257120");
#endif

    switch (ctx->pc) {
        case 0x257120u: goto label_257120;
        case 0x257124u: goto label_257124;
        case 0x257128u: goto label_257128;
        case 0x25712cu: goto label_25712c;
        case 0x257130u: goto label_257130;
        case 0x257134u: goto label_257134;
        case 0x257138u: goto label_257138;
        case 0x25713cu: goto label_25713c;
        case 0x257140u: goto label_257140;
        case 0x257144u: goto label_257144;
        case 0x257148u: goto label_257148;
        case 0x25714cu: goto label_25714c;
        case 0x257150u: goto label_257150;
        case 0x257154u: goto label_257154;
        case 0x257158u: goto label_257158;
        case 0x25715cu: goto label_25715c;
        case 0x257160u: goto label_257160;
        case 0x257164u: goto label_257164;
        case 0x257168u: goto label_257168;
        case 0x25716cu: goto label_25716c;
        case 0x257170u: goto label_257170;
        case 0x257174u: goto label_257174;
        case 0x257178u: goto label_257178;
        case 0x25717cu: goto label_25717c;
        case 0x257180u: goto label_257180;
        case 0x257184u: goto label_257184;
        case 0x257188u: goto label_257188;
        case 0x25718cu: goto label_25718c;
        case 0x257190u: goto label_257190;
        case 0x257194u: goto label_257194;
        case 0x257198u: goto label_257198;
        case 0x25719cu: goto label_25719c;
        case 0x2571a0u: goto label_2571a0;
        case 0x2571a4u: goto label_2571a4;
        case 0x2571a8u: goto label_2571a8;
        case 0x2571acu: goto label_2571ac;
        case 0x2571b0u: goto label_2571b0;
        case 0x2571b4u: goto label_2571b4;
        case 0x2571b8u: goto label_2571b8;
        case 0x2571bcu: goto label_2571bc;
        case 0x2571c0u: goto label_2571c0;
        case 0x2571c4u: goto label_2571c4;
        case 0x2571c8u: goto label_2571c8;
        case 0x2571ccu: goto label_2571cc;
        default: break;
    }

    ctx->pc = 0x257120u;

label_257120:
    // 0x257120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x257120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_257124:
    // 0x257124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_257128:
    // 0x257128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25712c:
    // 0x25712c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_257130:
    // 0x257130: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x257130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_257134:
    // 0x257134: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x257134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_257138:
    // 0x257138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25713c:
    if (ctx->pc == 0x25713Cu) {
        ctx->pc = 0x257140u;
        goto label_257140;
    }
    ctx->pc = 0x257138u;
    {
        const bool branch_taken_0x257138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257138) {
            ctx->pc = 0x257148u;
            goto label_257148;
        }
    }
    ctx->pc = 0x257140u;
label_257140:
    // 0x257140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257144:
    // 0x257144: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x257144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_257148:
    // 0x257148: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x257148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25714c:
    // 0x25714c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25714cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_257150:
    // 0x257150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_257154:
    // 0x257154: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x257154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_257158:
    // 0x257158: 0xc119b68  jal         func_466DA0
label_25715c:
    if (ctx->pc == 0x25715Cu) {
        ctx->pc = 0x257160u;
        goto label_257160;
    }
    ctx->pc = 0x257158u;
    SET_GPR_U32(ctx, 31, 0x257160u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x257158u, 0x257160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257160u;
label_257160:
    // 0x257160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257164:
    // 0x257164: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_257168:
    if (ctx->pc == 0x257168u) {
        ctx->pc = 0x25716Cu;
        goto label_25716c;
    }
    ctx->pc = 0x257164u;
    {
        const bool branch_taken_0x257164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x257164) {
            ctx->pc = 0x257178u;
            goto label_257178;
        }
    }
    ctx->pc = 0x25716Cu;
label_25716c:
    // 0x25716c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25716cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257170:
    // 0x257170: 0x1000000e  b           . + 4 + (0xE << 2)
label_257174:
    if (ctx->pc == 0x257174u) {
        ctx->pc = 0x257178u;
        goto label_257178;
    }
    ctx->pc = 0x257170u;
    {
        const bool branch_taken_0x257170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257170) {
            ctx->pc = 0x2571ACu;
            goto label_2571ac;
        }
    }
    ctx->pc = 0x257178u;
label_257178:
    // 0x257178: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x257178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25717c:
    // 0x25717c: 0xc0ba088  jal         func_2E8220
label_257180:
    if (ctx->pc == 0x257180u) {
        ctx->pc = 0x257184u;
        goto label_257184;
    }
    ctx->pc = 0x25717Cu;
    SET_GPR_U32(ctx, 31, 0x257184u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25717Cu, 0x257184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257184u;
label_257184:
    // 0x257184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257188:
    // 0x257188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25718c:
    // 0x25718c: 0xc0ba088  jal         func_2E8220
label_257190:
    if (ctx->pc == 0x257190u) {
        ctx->pc = 0x257194u;
        goto label_257194;
    }
    ctx->pc = 0x25718Cu;
    SET_GPR_U32(ctx, 31, 0x257194u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25718Cu, 0x257194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257194u;
label_257194:
    // 0x257194: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_257198:
    if (ctx->pc == 0x257198u) {
        ctx->pc = 0x25719Cu;
        goto label_25719c;
    }
    ctx->pc = 0x257194u;
    {
        const bool branch_taken_0x257194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x257194) {
            ctx->pc = 0x257148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257148;
        }
    }
    ctx->pc = 0x25719Cu;
label_25719c:
    // 0x25719c: 0x200f809  jalr        $s0
label_2571a0:
    if (ctx->pc == 0x2571A0u) {
        ctx->pc = 0x2571A4u;
        goto label_2571a4;
    }
    ctx->pc = 0x25719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2571A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25719Cu, 0x2571A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2571A4u;
label_2571a4:
    // 0x2571a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_2571a8:
    if (ctx->pc == 0x2571A8u) {
        ctx->pc = 0x2571ACu;
        goto label_2571ac;
    }
    ctx->pc = 0x2571A4u;
    {
        const bool branch_taken_0x2571a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2571a4) {
            ctx->pc = 0x257148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257148;
        }
    }
    ctx->pc = 0x2571ACu;
label_2571ac:
    // 0x2571ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2571acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2571b0:
    // 0x2571b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2571b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2571b4:
    // 0x2571b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2571b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2571b8:
    // 0x2571b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2571b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2571bc:
    // 0x2571bc: 0x3e00008  jr          $ra
label_2571c0:
    if (ctx->pc == 0x2571C0u) {
        ctx->pc = 0x2571C4u;
        goto label_2571c4;
    }
    ctx->pc = 0x2571BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2571BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2571C4u;
label_2571c4:
    // 0x2571c4: 0x0  nop
    ctx->pc = 0x2571c4u;
    // NOP
label_2571c8:
    // 0x2571c8: 0x0  nop
    ctx->pc = 0x2571c8u;
    // NOP
label_2571cc:
    // 0x2571cc: 0x0  nop
    ctx->pc = 0x2571ccu;
    // NOP
    ctx->pc = 0x2571d0u;
}
