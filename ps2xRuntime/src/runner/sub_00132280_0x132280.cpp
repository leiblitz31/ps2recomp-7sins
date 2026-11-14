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

// Function: sub_00132280
// Address: 0x132280 - 0x132320
void sub_00132280_0x132280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132280_0x132280");
#endif

    switch (ctx->pc) {
        case 0x132280u: goto label_132280;
        case 0x132284u: goto label_132284;
        case 0x132288u: goto label_132288;
        case 0x13228cu: goto label_13228c;
        case 0x132290u: goto label_132290;
        case 0x132294u: goto label_132294;
        case 0x132298u: goto label_132298;
        case 0x13229cu: goto label_13229c;
        case 0x1322a0u: goto label_1322a0;
        case 0x1322a4u: goto label_1322a4;
        case 0x1322a8u: goto label_1322a8;
        case 0x1322acu: goto label_1322ac;
        case 0x1322b0u: goto label_1322b0;
        case 0x1322b4u: goto label_1322b4;
        case 0x1322b8u: goto label_1322b8;
        case 0x1322bcu: goto label_1322bc;
        case 0x1322c0u: goto label_1322c0;
        case 0x1322c4u: goto label_1322c4;
        case 0x1322c8u: goto label_1322c8;
        case 0x1322ccu: goto label_1322cc;
        case 0x1322d0u: goto label_1322d0;
        case 0x1322d4u: goto label_1322d4;
        case 0x1322d8u: goto label_1322d8;
        case 0x1322dcu: goto label_1322dc;
        case 0x1322e0u: goto label_1322e0;
        case 0x1322e4u: goto label_1322e4;
        case 0x1322e8u: goto label_1322e8;
        case 0x1322ecu: goto label_1322ec;
        case 0x1322f0u: goto label_1322f0;
        case 0x1322f4u: goto label_1322f4;
        case 0x1322f8u: goto label_1322f8;
        case 0x1322fcu: goto label_1322fc;
        case 0x132300u: goto label_132300;
        case 0x132304u: goto label_132304;
        case 0x132308u: goto label_132308;
        case 0x13230cu: goto label_13230c;
        case 0x132310u: goto label_132310;
        case 0x132314u: goto label_132314;
        case 0x132318u: goto label_132318;
        case 0x13231cu: goto label_13231c;
        default: break;
    }

    ctx->pc = 0x132280u;

label_132280:
    // 0x132280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_132284:
    // 0x132284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x132284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_132288:
    // 0x132288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13228c:
    // 0x13228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_132290:
    // 0x132290: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x132290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_132294:
    // 0x132294: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x132294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_132298:
    // 0x132298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13229c:
    if (ctx->pc == 0x13229Cu) {
        ctx->pc = 0x1322A0u;
        goto label_1322a0;
    }
    ctx->pc = 0x132298u;
    {
        const bool branch_taken_0x132298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132298) {
            ctx->pc = 0x1322A8u;
            goto label_1322a8;
        }
    }
    ctx->pc = 0x1322A0u;
label_1322a0:
    // 0x1322a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1322a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1322a4:
    // 0x1322a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1322a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1322a8:
    // 0x1322a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1322ac:
    // 0x1322ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1322acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1322b0:
    // 0x1322b0: 0xc119b68  jal         func_466DA0
label_1322b4:
    if (ctx->pc == 0x1322B4u) {
        ctx->pc = 0x1322B8u;
        goto label_1322b8;
    }
    ctx->pc = 0x1322B0u;
    SET_GPR_U32(ctx, 31, 0x1322B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1322B0u, 0x1322B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322B8u;
label_1322b8:
    // 0x1322b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1322b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1322bc:
    // 0x1322bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1322c0:
    if (ctx->pc == 0x1322C0u) {
        ctx->pc = 0x1322C4u;
        goto label_1322c4;
    }
    ctx->pc = 0x1322BCu;
    {
        const bool branch_taken_0x1322bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322bc) {
            ctx->pc = 0x1322D0u;
            goto label_1322d0;
        }
    }
    ctx->pc = 0x1322C4u;
label_1322c4:
    // 0x1322c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1322c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1322c8:
    // 0x1322c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1322cc:
    if (ctx->pc == 0x1322CCu) {
        ctx->pc = 0x1322D0u;
        goto label_1322d0;
    }
    ctx->pc = 0x1322C8u;
    {
        const bool branch_taken_0x1322c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322c8) {
            ctx->pc = 0x132304u;
            goto label_132304;
        }
    }
    ctx->pc = 0x1322D0u;
label_1322d0:
    // 0x1322d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1322d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1322d4:
    // 0x1322d4: 0xc0ba088  jal         func_2E8220
label_1322d8:
    if (ctx->pc == 0x1322D8u) {
        ctx->pc = 0x1322DCu;
        goto label_1322dc;
    }
    ctx->pc = 0x1322D4u;
    SET_GPR_U32(ctx, 31, 0x1322DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1322D4u, 0x1322DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322DCu;
label_1322dc:
    // 0x1322dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1322dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1322e0:
    // 0x1322e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1322e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1322e4:
    // 0x1322e4: 0xc0ba088  jal         func_2E8220
label_1322e8:
    if (ctx->pc == 0x1322E8u) {
        ctx->pc = 0x1322ECu;
        goto label_1322ec;
    }
    ctx->pc = 0x1322E4u;
    SET_GPR_U32(ctx, 31, 0x1322ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1322E4u, 0x1322ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322ECu;
label_1322ec:
    // 0x1322ec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1322f0:
    if (ctx->pc == 0x1322F0u) {
        ctx->pc = 0x1322F4u;
        goto label_1322f4;
    }
    ctx->pc = 0x1322ECu;
    {
        const bool branch_taken_0x1322ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322ec) {
            ctx->pc = 0x1322A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1322a8;
        }
    }
    ctx->pc = 0x1322F4u;
label_1322f4:
    // 0x1322f4: 0x200f809  jalr        $s0
label_1322f8:
    if (ctx->pc == 0x1322F8u) {
        ctx->pc = 0x1322FCu;
        goto label_1322fc;
    }
    ctx->pc = 0x1322F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1322FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322F4u, 0x1322FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1322FCu;
label_1322fc:
    // 0x1322fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_132300:
    if (ctx->pc == 0x132300u) {
        ctx->pc = 0x132304u;
        goto label_132304;
    }
    ctx->pc = 0x1322FCu;
    {
        const bool branch_taken_0x1322fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322fc) {
            ctx->pc = 0x1322A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1322a8;
        }
    }
    ctx->pc = 0x132304u;
label_132304:
    // 0x132304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_132308:
    // 0x132308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13230c:
    // 0x13230c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_132310:
    // 0x132310: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x132310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_132314:
    // 0x132314: 0x3e00008  jr          $ra
label_132318:
    if (ctx->pc == 0x132318u) {
        ctx->pc = 0x13231Cu;
        goto label_13231c;
    }
    ctx->pc = 0x132314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13231Cu;
label_13231c:
    // 0x13231c: 0x0  nop
    ctx->pc = 0x13231cu;
    // NOP
    ctx->pc = 0x132320u;
}
