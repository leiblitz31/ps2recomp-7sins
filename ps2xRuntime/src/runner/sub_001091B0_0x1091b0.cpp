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

// Function: sub_001091B0
// Address: 0x1091b0 - 0x109250
void sub_001091B0_0x1091b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001091B0_0x1091b0");
#endif

    switch (ctx->pc) {
        case 0x1091b0u: goto label_1091b0;
        case 0x1091b4u: goto label_1091b4;
        case 0x1091b8u: goto label_1091b8;
        case 0x1091bcu: goto label_1091bc;
        case 0x1091c0u: goto label_1091c0;
        case 0x1091c4u: goto label_1091c4;
        case 0x1091c8u: goto label_1091c8;
        case 0x1091ccu: goto label_1091cc;
        case 0x1091d0u: goto label_1091d0;
        case 0x1091d4u: goto label_1091d4;
        case 0x1091d8u: goto label_1091d8;
        case 0x1091dcu: goto label_1091dc;
        case 0x1091e0u: goto label_1091e0;
        case 0x1091e4u: goto label_1091e4;
        case 0x1091e8u: goto label_1091e8;
        case 0x1091ecu: goto label_1091ec;
        case 0x1091f0u: goto label_1091f0;
        case 0x1091f4u: goto label_1091f4;
        case 0x1091f8u: goto label_1091f8;
        case 0x1091fcu: goto label_1091fc;
        case 0x109200u: goto label_109200;
        case 0x109204u: goto label_109204;
        case 0x109208u: goto label_109208;
        case 0x10920cu: goto label_10920c;
        case 0x109210u: goto label_109210;
        case 0x109214u: goto label_109214;
        case 0x109218u: goto label_109218;
        case 0x10921cu: goto label_10921c;
        case 0x109220u: goto label_109220;
        case 0x109224u: goto label_109224;
        case 0x109228u: goto label_109228;
        case 0x10922cu: goto label_10922c;
        case 0x109230u: goto label_109230;
        case 0x109234u: goto label_109234;
        case 0x109238u: goto label_109238;
        case 0x10923cu: goto label_10923c;
        case 0x109240u: goto label_109240;
        case 0x109244u: goto label_109244;
        case 0x109248u: goto label_109248;
        case 0x10924cu: goto label_10924c;
        default: break;
    }

    ctx->pc = 0x1091b0u;

label_1091b0:
    // 0x1091b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1091b4:
    // 0x1091b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1091b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1091b8:
    // 0x1091b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1091b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1091bc:
    // 0x1091bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1091bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1091c0:
    // 0x1091c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1091c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1091c4:
    // 0x1091c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1091c8:
    // 0x1091c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1091cc:
    if (ctx->pc == 0x1091CCu) {
        ctx->pc = 0x1091D0u;
        goto label_1091d0;
    }
    ctx->pc = 0x1091C8u;
    {
        const bool branch_taken_0x1091c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1091c8) {
            ctx->pc = 0x1091D8u;
            goto label_1091d8;
        }
    }
    ctx->pc = 0x1091D0u;
label_1091d0:
    // 0x1091d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1091d4:
    // 0x1091d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1091d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1091d8:
    // 0x1091d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1091dc:
    // 0x1091dc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1091dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1091e0:
    // 0x1091e0: 0xc119b68  jal         func_466DA0
label_1091e4:
    if (ctx->pc == 0x1091E4u) {
        ctx->pc = 0x1091E8u;
        goto label_1091e8;
    }
    ctx->pc = 0x1091E0u;
    SET_GPR_U32(ctx, 31, 0x1091E8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1091E0u, 0x1091E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091E8u;
label_1091e8:
    // 0x1091e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1091e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1091ec:
    // 0x1091ec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1091f0:
    if (ctx->pc == 0x1091F0u) {
        ctx->pc = 0x1091F4u;
        goto label_1091f4;
    }
    ctx->pc = 0x1091ECu;
    {
        const bool branch_taken_0x1091ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1091ec) {
            ctx->pc = 0x109200u;
            goto label_109200;
        }
    }
    ctx->pc = 0x1091F4u;
label_1091f4:
    // 0x1091f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1091f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1091f8:
    // 0x1091f8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1091fc:
    if (ctx->pc == 0x1091FCu) {
        ctx->pc = 0x109200u;
        goto label_109200;
    }
    ctx->pc = 0x1091F8u;
    {
        const bool branch_taken_0x1091f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1091f8) {
            ctx->pc = 0x109234u;
            goto label_109234;
        }
    }
    ctx->pc = 0x109200u;
label_109200:
    // 0x109200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x109200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109204:
    // 0x109204: 0xc0ba088  jal         func_2E8220
label_109208:
    if (ctx->pc == 0x109208u) {
        ctx->pc = 0x10920Cu;
        goto label_10920c;
    }
    ctx->pc = 0x109204u;
    SET_GPR_U32(ctx, 31, 0x10920Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x109204u, 0x10920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10920Cu;
label_10920c:
    // 0x10920c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10920cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109210:
    // 0x109210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109214:
    // 0x109214: 0xc0ba088  jal         func_2E8220
label_109218:
    if (ctx->pc == 0x109218u) {
        ctx->pc = 0x10921Cu;
        goto label_10921c;
    }
    ctx->pc = 0x109214u;
    SET_GPR_U32(ctx, 31, 0x10921Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x109214u, 0x10921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10921Cu;
label_10921c:
    // 0x10921c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_109220:
    if (ctx->pc == 0x109220u) {
        ctx->pc = 0x109224u;
        goto label_109224;
    }
    ctx->pc = 0x10921Cu;
    {
        const bool branch_taken_0x10921c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10921c) {
            ctx->pc = 0x1091D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091d8;
        }
    }
    ctx->pc = 0x109224u;
label_109224:
    // 0x109224: 0x200f809  jalr        $s0
label_109228:
    if (ctx->pc == 0x109228u) {
        ctx->pc = 0x10922Cu;
        goto label_10922c;
    }
    ctx->pc = 0x109224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x10922Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109224u, 0x10922Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10922Cu;
label_10922c:
    // 0x10922c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_109230:
    if (ctx->pc == 0x109230u) {
        ctx->pc = 0x109234u;
        goto label_109234;
    }
    ctx->pc = 0x10922Cu;
    {
        const bool branch_taken_0x10922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10922c) {
            ctx->pc = 0x1091D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091d8;
        }
    }
    ctx->pc = 0x109234u;
label_109234:
    // 0x109234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109238:
    // 0x109238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10923c:
    // 0x10923c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10923cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_109240:
    // 0x109240: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x109240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_109244:
    // 0x109244: 0x3e00008  jr          $ra
label_109248:
    if (ctx->pc == 0x109248u) {
        ctx->pc = 0x10924Cu;
        goto label_10924c;
    }
    ctx->pc = 0x109244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10924Cu;
label_10924c:
    // 0x10924c: 0x0  nop
    ctx->pc = 0x10924cu;
    // NOP
    ctx->pc = 0x109250u;
}
