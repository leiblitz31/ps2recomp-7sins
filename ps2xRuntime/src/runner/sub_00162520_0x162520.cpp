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

// Function: sub_00162520
// Address: 0x162520 - 0x162590
void sub_00162520_0x162520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162520_0x162520");
#endif

    switch (ctx->pc) {
        case 0x162520u: goto label_162520;
        case 0x162524u: goto label_162524;
        case 0x162528u: goto label_162528;
        case 0x16252cu: goto label_16252c;
        case 0x162530u: goto label_162530;
        case 0x162534u: goto label_162534;
        case 0x162538u: goto label_162538;
        case 0x16253cu: goto label_16253c;
        case 0x162540u: goto label_162540;
        case 0x162544u: goto label_162544;
        case 0x162548u: goto label_162548;
        case 0x16254cu: goto label_16254c;
        case 0x162550u: goto label_162550;
        case 0x162554u: goto label_162554;
        case 0x162558u: goto label_162558;
        case 0x16255cu: goto label_16255c;
        case 0x162560u: goto label_162560;
        case 0x162564u: goto label_162564;
        case 0x162568u: goto label_162568;
        case 0x16256cu: goto label_16256c;
        case 0x162570u: goto label_162570;
        case 0x162574u: goto label_162574;
        case 0x162578u: goto label_162578;
        case 0x16257cu: goto label_16257c;
        case 0x162580u: goto label_162580;
        case 0x162584u: goto label_162584;
        case 0x162588u: goto label_162588;
        case 0x16258cu: goto label_16258c;
        default: break;
    }

    ctx->pc = 0x162520u;

label_162520:
    // 0x162520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x162520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_162524:
    // 0x162524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_162528:
    // 0x162528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16252c:
    // 0x16252c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x16252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_162530:
    // 0x162530: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x162530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_162534:
    // 0x162534: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x162534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_162538:
    // 0x162538: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x162538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_16253c:
    // 0x16253c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162540:
    // 0x162540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162544:
    // 0x162544: 0xc058974  jal         func_1625D0
label_162548:
    if (ctx->pc == 0x162548u) {
        ctx->pc = 0x16254Cu;
        goto label_16254c;
    }
    ctx->pc = 0x162544u;
    SET_GPR_U32(ctx, 31, 0x16254Cu);
    ctx->pc = 0x1625D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625D0u, 0x162544u, 0x16254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16254Cu;
label_16254c:
    // 0x16254c: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x16254cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
label_162550:
    // 0x162550: 0x261021d0  addiu       $s0, $s0, 0x21D0
    ctx->pc = 0x162550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8656));
label_162554:
    // 0x162554: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x162554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_162558:
    // 0x162558: 0x200f809  jalr        $s0
label_16255c:
    if (ctx->pc == 0x16255Cu) {
        ctx->pc = 0x162560u;
        goto label_162560;
    }
    ctx->pc = 0x162558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x162560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162558u, 0x162560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162560u;
label_162560:
    // 0x162560: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_162564:
    // 0x162564: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x162564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_162568:
    // 0x162568: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x162568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16256c:
    // 0x16256c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_162570:
    // 0x162570: 0xc058964  jal         func_162590
label_162574:
    if (ctx->pc == 0x162574u) {
        ctx->pc = 0x162578u;
        goto label_162578;
    }
    ctx->pc = 0x162570u;
    SET_GPR_U32(ctx, 31, 0x162578u);
    ctx->pc = 0x162590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162590u, 0x162570u, 0x162578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162578u;
label_162578:
    // 0x162578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16257c:
    // 0x16257c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16257cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162580:
    // 0x162580: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x162580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_162584:
    // 0x162584: 0x3e00008  jr          $ra
label_162588:
    if (ctx->pc == 0x162588u) {
        ctx->pc = 0x16258Cu;
        goto label_16258c;
    }
    ctx->pc = 0x162584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16258Cu;
label_16258c:
    // 0x16258c: 0x0  nop
    ctx->pc = 0x16258cu;
    // NOP
    ctx->pc = 0x162590u;
}
