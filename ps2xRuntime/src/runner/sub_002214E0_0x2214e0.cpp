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

// Function: sub_002214E0
// Address: 0x2214e0 - 0x221580
void sub_002214E0_0x2214e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002214E0_0x2214e0");
#endif

    switch (ctx->pc) {
        case 0x2214e0u: goto label_2214e0;
        case 0x2214e4u: goto label_2214e4;
        case 0x2214e8u: goto label_2214e8;
        case 0x2214ecu: goto label_2214ec;
        case 0x2214f0u: goto label_2214f0;
        case 0x2214f4u: goto label_2214f4;
        case 0x2214f8u: goto label_2214f8;
        case 0x2214fcu: goto label_2214fc;
        case 0x221500u: goto label_221500;
        case 0x221504u: goto label_221504;
        case 0x221508u: goto label_221508;
        case 0x22150cu: goto label_22150c;
        case 0x221510u: goto label_221510;
        case 0x221514u: goto label_221514;
        case 0x221518u: goto label_221518;
        case 0x22151cu: goto label_22151c;
        case 0x221520u: goto label_221520;
        case 0x221524u: goto label_221524;
        case 0x221528u: goto label_221528;
        case 0x22152cu: goto label_22152c;
        case 0x221530u: goto label_221530;
        case 0x221534u: goto label_221534;
        case 0x221538u: goto label_221538;
        case 0x22153cu: goto label_22153c;
        case 0x221540u: goto label_221540;
        case 0x221544u: goto label_221544;
        case 0x221548u: goto label_221548;
        case 0x22154cu: goto label_22154c;
        case 0x221550u: goto label_221550;
        case 0x221554u: goto label_221554;
        case 0x221558u: goto label_221558;
        case 0x22155cu: goto label_22155c;
        case 0x221560u: goto label_221560;
        case 0x221564u: goto label_221564;
        case 0x221568u: goto label_221568;
        case 0x22156cu: goto label_22156c;
        case 0x221570u: goto label_221570;
        case 0x221574u: goto label_221574;
        case 0x221578u: goto label_221578;
        case 0x22157cu: goto label_22157c;
        default: break;
    }

    ctx->pc = 0x2214e0u;

label_2214e0:
    // 0x2214e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2214e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2214e4:
    // 0x2214e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2214e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2214e8:
    // 0x2214e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2214e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2214ec:
    // 0x2214ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2214ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2214f0:
    // 0x2214f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2214f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2214f4:
    // 0x2214f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2214f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2214f8:
    // 0x2214f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2214fc:
    if (ctx->pc == 0x2214FCu) {
        ctx->pc = 0x221500u;
        goto label_221500;
    }
    ctx->pc = 0x2214F8u;
    {
        const bool branch_taken_0x2214f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2214f8) {
            ctx->pc = 0x221508u;
            goto label_221508;
        }
    }
    ctx->pc = 0x221500u;
label_221500:
    // 0x221500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221504:
    // 0x221504: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x221504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_221508:
    // 0x221508: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22150c:
    // 0x22150c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_221510:
    // 0x221510: 0xc119b68  jal         func_466DA0
label_221514:
    if (ctx->pc == 0x221514u) {
        ctx->pc = 0x221518u;
        goto label_221518;
    }
    ctx->pc = 0x221510u;
    SET_GPR_U32(ctx, 31, 0x221518u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x221510u, 0x221518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221518u;
label_221518:
    // 0x221518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x221518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22151c:
    // 0x22151c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_221520:
    if (ctx->pc == 0x221520u) {
        ctx->pc = 0x221524u;
        goto label_221524;
    }
    ctx->pc = 0x22151Cu;
    {
        const bool branch_taken_0x22151c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22151c) {
            ctx->pc = 0x221530u;
            goto label_221530;
        }
    }
    ctx->pc = 0x221524u;
label_221524:
    // 0x221524: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x221524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221528:
    // 0x221528: 0x1000000e  b           . + 4 + (0xE << 2)
label_22152c:
    if (ctx->pc == 0x22152Cu) {
        ctx->pc = 0x221530u;
        goto label_221530;
    }
    ctx->pc = 0x221528u;
    {
        const bool branch_taken_0x221528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221528) {
            ctx->pc = 0x221564u;
            goto label_221564;
        }
    }
    ctx->pc = 0x221530u;
label_221530:
    // 0x221530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x221530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221534:
    // 0x221534: 0xc0ba088  jal         func_2E8220
label_221538:
    if (ctx->pc == 0x221538u) {
        ctx->pc = 0x22153Cu;
        goto label_22153c;
    }
    ctx->pc = 0x221534u;
    SET_GPR_U32(ctx, 31, 0x22153Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x221534u, 0x22153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22153Cu;
label_22153c:
    // 0x22153c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22153cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221540:
    // 0x221540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_221544:
    // 0x221544: 0xc0ba088  jal         func_2E8220
label_221548:
    if (ctx->pc == 0x221548u) {
        ctx->pc = 0x22154Cu;
        goto label_22154c;
    }
    ctx->pc = 0x221544u;
    SET_GPR_U32(ctx, 31, 0x22154Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x221544u, 0x22154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22154Cu;
label_22154c:
    // 0x22154c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_221550:
    if (ctx->pc == 0x221550u) {
        ctx->pc = 0x221554u;
        goto label_221554;
    }
    ctx->pc = 0x22154Cu;
    {
        const bool branch_taken_0x22154c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22154c) {
            ctx->pc = 0x221508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221508;
        }
    }
    ctx->pc = 0x221554u;
label_221554:
    // 0x221554: 0x200f809  jalr        $s0
label_221558:
    if (ctx->pc == 0x221558u) {
        ctx->pc = 0x22155Cu;
        goto label_22155c;
    }
    ctx->pc = 0x221554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x22155Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221554u, 0x22155Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22155Cu;
label_22155c:
    // 0x22155c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_221560:
    if (ctx->pc == 0x221560u) {
        ctx->pc = 0x221564u;
        goto label_221564;
    }
    ctx->pc = 0x22155Cu;
    {
        const bool branch_taken_0x22155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22155c) {
            ctx->pc = 0x221508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221508;
        }
    }
    ctx->pc = 0x221564u;
label_221564:
    // 0x221564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x221564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_221568:
    // 0x221568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22156c:
    // 0x22156c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22156cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_221570:
    // 0x221570: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x221570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_221574:
    // 0x221574: 0x3e00008  jr          $ra
label_221578:
    if (ctx->pc == 0x221578u) {
        ctx->pc = 0x22157Cu;
        goto label_22157c;
    }
    ctx->pc = 0x221574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22157Cu;
label_22157c:
    // 0x22157c: 0x0  nop
    ctx->pc = 0x22157cu;
    // NOP
    ctx->pc = 0x221580u;
}
