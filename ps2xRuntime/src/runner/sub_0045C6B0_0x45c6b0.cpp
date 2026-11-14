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

// Function: sub_0045C6B0
// Address: 0x45c6b0 - 0x45c740
void sub_0045C6B0_0x45c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C6B0_0x45c6b0");
#endif

    switch (ctx->pc) {
        case 0x45c6b0u: goto label_45c6b0;
        case 0x45c6b4u: goto label_45c6b4;
        case 0x45c6b8u: goto label_45c6b8;
        case 0x45c6bcu: goto label_45c6bc;
        case 0x45c6c0u: goto label_45c6c0;
        case 0x45c6c4u: goto label_45c6c4;
        case 0x45c6c8u: goto label_45c6c8;
        case 0x45c6ccu: goto label_45c6cc;
        case 0x45c6d0u: goto label_45c6d0;
        case 0x45c6d4u: goto label_45c6d4;
        case 0x45c6d8u: goto label_45c6d8;
        case 0x45c6dcu: goto label_45c6dc;
        case 0x45c6e0u: goto label_45c6e0;
        case 0x45c6e4u: goto label_45c6e4;
        case 0x45c6e8u: goto label_45c6e8;
        case 0x45c6ecu: goto label_45c6ec;
        case 0x45c6f0u: goto label_45c6f0;
        case 0x45c6f4u: goto label_45c6f4;
        case 0x45c6f8u: goto label_45c6f8;
        case 0x45c6fcu: goto label_45c6fc;
        case 0x45c700u: goto label_45c700;
        case 0x45c704u: goto label_45c704;
        case 0x45c708u: goto label_45c708;
        case 0x45c70cu: goto label_45c70c;
        case 0x45c710u: goto label_45c710;
        case 0x45c714u: goto label_45c714;
        case 0x45c718u: goto label_45c718;
        case 0x45c71cu: goto label_45c71c;
        case 0x45c720u: goto label_45c720;
        case 0x45c724u: goto label_45c724;
        case 0x45c728u: goto label_45c728;
        case 0x45c72cu: goto label_45c72c;
        case 0x45c730u: goto label_45c730;
        case 0x45c734u: goto label_45c734;
        case 0x45c738u: goto label_45c738;
        case 0x45c73cu: goto label_45c73c;
        default: break;
    }

    ctx->pc = 0x45c6b0u;

label_45c6b0:
    // 0x45c6b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_45c6b4:
    // 0x45c6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45c6b8:
    // 0x45c6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45c6bc:
    // 0x45c6bc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x45c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_45c6c0:
    // 0x45c6c0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x45c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_45c6c4:
    // 0x45c6c4: 0xc0f0c58  jal         func_3C3160
label_45c6c8:
    if (ctx->pc == 0x45C6C8u) {
        ctx->pc = 0x45C6CCu;
        goto label_45c6cc;
    }
    ctx->pc = 0x45C6C4u;
    SET_GPR_U32(ctx, 31, 0x45C6CCu);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45C6C4u, 0x45C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C6CCu;
label_45c6cc:
    // 0x45c6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c6d0:
    // 0x45c6d0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_45c6d4:
    if (ctx->pc == 0x45C6D4u) {
        ctx->pc = 0x45C6D8u;
        goto label_45c6d8;
    }
    ctx->pc = 0x45C6D0u;
    {
        const bool branch_taken_0x45c6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c6d0) {
            ctx->pc = 0x45C724u;
            goto label_45c724;
        }
    }
    ctx->pc = 0x45C6D8u;
label_45c6d8:
    // 0x45c6d8: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x45c6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_45c6dc:
    // 0x45c6dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x45c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_45c6e0:
    // 0x45c6e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x45c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45c6e4:
    // 0x45c6e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x45c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_45c6e8:
    // 0x45c6e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x45c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_45c6ec:
    // 0x45c6ec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x45c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_45c6f0:
    // 0x45c6f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x45c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_45c6f4:
    // 0x45c6f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x45c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_45c6f8:
    // 0x45c6f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x45c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_45c6fc:
    // 0x45c6fc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_45c700:
    // 0x45c700: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_45c704:
    if (ctx->pc == 0x45C704u) {
        ctx->pc = 0x45C708u;
        goto label_45c708;
    }
    ctx->pc = 0x45C700u;
    {
        const bool branch_taken_0x45c700 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x45c700) {
            ctx->pc = 0x45C6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c6e4;
        }
    }
    ctx->pc = 0x45C708u;
label_45c708:
    // 0x45c708: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x45c708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_45c70c:
    // 0x45c70c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c710:
    // 0x45c710: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x45c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_45c714:
    // 0x45c714: 0x40f809  jalr        $v0
label_45c718:
    if (ctx->pc == 0x45C718u) {
        ctx->pc = 0x45C71Cu;
        goto label_45c71c;
    }
    ctx->pc = 0x45C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C71Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C714u, 0x45C71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C71Cu;
label_45c71c:
    // 0x45c71c: 0x10000002  b           . + 4 + (0x2 << 2)
label_45c720:
    if (ctx->pc == 0x45C720u) {
        ctx->pc = 0x45C724u;
        goto label_45c724;
    }
    ctx->pc = 0x45C71Cu;
    {
        const bool branch_taken_0x45c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c71c) {
            ctx->pc = 0x45C728u;
            goto label_45c728;
        }
    }
    ctx->pc = 0x45C724u;
label_45c724:
    // 0x45c724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45c728:
    // 0x45c728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45c72c:
    // 0x45c72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45c730:
    // 0x45c730: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45c734:
    // 0x45c734: 0x3e00008  jr          $ra
label_45c738:
    if (ctx->pc == 0x45C738u) {
        ctx->pc = 0x45C73Cu;
        goto label_45c73c;
    }
    ctx->pc = 0x45C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45C73Cu;
label_45c73c:
    // 0x45c73c: 0x0  nop
    ctx->pc = 0x45c73cu;
    // NOP
    ctx->pc = 0x45c740u;
}
