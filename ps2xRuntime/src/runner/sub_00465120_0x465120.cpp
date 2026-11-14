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

// Function: sub_00465120
// Address: 0x465120 - 0x4651d0
void sub_00465120_0x465120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465120_0x465120");
#endif

    switch (ctx->pc) {
        case 0x465150u: goto label_465150;
        case 0x46516cu: goto label_46516c;
        case 0x46518cu: goto label_46518c;
        default: break;
    }

    ctx->pc = 0x465120u;

    // 0x465120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x465120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x465124: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x465124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x465128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46512c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x465130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x465134: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x465134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x465138: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x465138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x46513c: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x46513cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x465140: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x465140u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x465144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x465144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x465148u;
    {
        const bool branch_taken_0x465148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465148) {
            ctx->pc = 0x465158u;
            goto label_465158;
        }
    }
    ctx->pc = 0x465150u;
label_465150:
    // 0x465150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x465150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x465154: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x465154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_465158:
    // 0x465158: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x465158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46515c: 0x83a50060  lb          $a1, 0x60($sp)
    ctx->pc = 0x46515cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x465160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x465160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465164: 0xc043740  jal         func_10DD00
    ctx->pc = 0x465164u;
    SET_GPR_U32(ctx, 31, 0x46516Cu);
    ctx->pc = 0x10DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD00u, 0x465164u, 0x46516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46516Cu;
label_46516c:
    // 0x46516c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46516cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465170: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x465170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x465174: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x465174u;
    {
        const bool branch_taken_0x465174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x465174) {
            ctx->pc = 0x465150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465150;
        }
    }
    ctx->pc = 0x46517Cu;
    // 0x46517c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x465180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465184: 0xc043544  jal         func_10D510
    ctx->pc = 0x465184u;
    SET_GPR_U32(ctx, 31, 0x46518Cu);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x465184u, 0x46518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46518Cu;
label_46518c:
    // 0x46518c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x46518cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465190: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x465190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x465194: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x465194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x465198: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x465198u;
    {
        const bool branch_taken_0x465198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465198) {
            ctx->pc = 0x4651A4u;
            goto label_4651a4;
        }
    }
    ctx->pc = 0x4651A0u;
    // 0x4651a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4651a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4651a4:
    // 0x4651a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4651a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4651a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4651a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4651ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4651acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4651b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4651b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4651b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4651b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4651b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4651b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4651bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4651BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4651BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4651C4u;
    // 0x4651c4: 0x0  nop
    ctx->pc = 0x4651c4u;
    // NOP
    // 0x4651c8: 0x0  nop
    ctx->pc = 0x4651c8u;
    // NOP
    // 0x4651cc: 0x0  nop
    ctx->pc = 0x4651ccu;
    // NOP
    ctx->pc = 0x4651d0u;
}
