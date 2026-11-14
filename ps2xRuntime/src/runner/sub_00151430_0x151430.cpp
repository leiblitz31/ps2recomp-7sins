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

// Function: sub_00151430
// Address: 0x151430 - 0x151520
void sub_00151430_0x151430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151430_0x151430");
#endif

    switch (ctx->pc) {
        case 0x15149cu: goto label_15149c;
        case 0x1514a8u: goto label_1514a8;
        case 0x1514fcu: goto label_1514fc;
        default: break;
    }

    ctx->pc = 0x151430u;

    // 0x151430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x151430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x151434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15143c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151440: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x151440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x151444: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x151444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x151448: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x151448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x15144c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x15144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151450: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151454: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151454u;
    {
        const bool branch_taken_0x151454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151454) {
            ctx->pc = 0x151468u;
            goto label_151468;
        }
    }
    ctx->pc = 0x15145Cu;
    // 0x15145c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15145cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151460u;
    {
        const bool branch_taken_0x151460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151460) {
            ctx->pc = 0x15146Cu;
            goto label_15146c;
        }
    }
    ctx->pc = 0x151468u;
label_151468:
    // 0x151468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x151468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15146c:
    // 0x15146c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x15146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151470: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x151474: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151474u;
    {
        const bool branch_taken_0x151474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151474) {
            ctx->pc = 0x151488u;
            goto label_151488;
        }
    }
    ctx->pc = 0x15147Cu;
    // 0x15147c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15147cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151480u;
    {
        const bool branch_taken_0x151480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151480) {
            ctx->pc = 0x15148Cu;
            goto label_15148c;
        }
    }
    ctx->pc = 0x151488u;
label_151488:
    // 0x151488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x151488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15148c:
    // 0x15148c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x15148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x151490: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151494: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x151494u;
    SET_GPR_U32(ctx, 31, 0x15149Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x151494u, 0x15149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15149Cu;
label_15149c:
    // 0x15149c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514a0: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x1514A0u;
    SET_GPR_U32(ctx, 31, 0x1514A8u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x1514A0u, 0x1514A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514A8u;
label_1514a8:
    // 0x1514a8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1514a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1514ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1514b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1514b4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1514b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1514b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1514b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1514bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1514bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1514c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1514c4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1514c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1514c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1514c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1514cc: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1514ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1514d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1514D0u;
    {
        const bool branch_taken_0x1514d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514d0) {
            ctx->pc = 0x1514E8u;
            goto label_1514e8;
        }
    }
    ctx->pc = 0x1514D8u;
    // 0x1514d8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1514d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1514dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1514dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1514e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1514e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1514e4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1514e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_1514e8:
    // 0x1514e8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x1514e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x1514ec: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1514ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1514f0: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1514f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1514f4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1514F4u;
    SET_GPR_U32(ctx, 31, 0x1514FCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1514F4u, 0x1514FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514FCu;
label_1514fc:
    // 0x1514fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1514fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151508: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15150c: 0x3e00008  jr          $ra
    ctx->pc = 0x15150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151514u;
    // 0x151514: 0x0  nop
    ctx->pc = 0x151514u;
    // NOP
    // 0x151518: 0x0  nop
    ctx->pc = 0x151518u;
    // NOP
    // 0x15151c: 0x0  nop
    ctx->pc = 0x15151cu;
    // NOP
    ctx->pc = 0x151520u;
}
