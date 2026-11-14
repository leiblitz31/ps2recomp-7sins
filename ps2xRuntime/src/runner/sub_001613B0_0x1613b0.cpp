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

// Function: sub_001613B0
// Address: 0x1613b0 - 0x1614d0
void sub_001613B0_0x1613b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001613B0_0x1613b0");
#endif

    switch (ctx->pc) {
        case 0x1614a8u: goto label_1614a8;
        default: break;
    }

    ctx->pc = 0x1613b0u;

    // 0x1613b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1613b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1613b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1613b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1613b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1613b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1613bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1613bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1613c0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x1613c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x1613c4: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x1613c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1613c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1613C8u;
    {
        const bool branch_taken_0x1613c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613c8) {
            ctx->pc = 0x161438u;
            goto label_161438;
        }
    }
    ctx->pc = 0x1613D0u;
    // 0x1613d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1613d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1613d8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1613dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1613DCu;
    {
        const bool branch_taken_0x1613dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1613dc) {
            ctx->pc = 0x1613F0u;
            goto label_1613f0;
        }
    }
    ctx->pc = 0x1613E4u;
    // 0x1613e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1613e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1613e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1613ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1613ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1613f0:
    // 0x1613f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1613f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1613f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1613f8: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x1613f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1613fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1613FCu;
    {
        const bool branch_taken_0x1613fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1613fc) {
            ctx->pc = 0x161410u;
            goto label_161410;
        }
    }
    ctx->pc = 0x161404u;
    // 0x161404: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x161404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16140c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16140cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_161410:
    // 0x161410: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161414: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161418: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x16141c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16141Cu;
    {
        const bool branch_taken_0x16141c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16141c) {
            ctx->pc = 0x161498u;
            goto label_161498;
        }
    }
    ctx->pc = 0x161424u;
    // 0x161424: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x161424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16142c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x161430: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x161430u;
    {
        const bool branch_taken_0x161430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161430) {
            ctx->pc = 0x161498u;
            goto label_161498;
        }
    }
    ctx->pc = 0x161438u;
label_161438:
    // 0x161438: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16143c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161440: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x161440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x161444: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161444u;
    {
        const bool branch_taken_0x161444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161444) {
            ctx->pc = 0x161458u;
            goto label_161458;
        }
    }
    ctx->pc = 0x16144Cu;
    // 0x16144c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161450: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x161454: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x161454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_161458:
    // 0x161458: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x161458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16145c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161460: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x161460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x161464: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161464u;
    {
        const bool branch_taken_0x161464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161464) {
            ctx->pc = 0x161478u;
            goto label_161478;
        }
    }
    ctx->pc = 0x16146Cu;
    // 0x16146c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x161474: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x161474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_161478:
    // 0x161478: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x161478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16147c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161480: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x161480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x161484: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161484u;
    {
        const bool branch_taken_0x161484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161484) {
            ctx->pc = 0x161498u;
            goto label_161498;
        }
    }
    ctx->pc = 0x16148Cu;
    // 0x16148c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x161494: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x161494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_161498:
    // 0x161498: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x161498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16149c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16149cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1614a0: 0xc057954  jal         func_15E550
    ctx->pc = 0x1614A0u;
    SET_GPR_U32(ctx, 31, 0x1614A8u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x1614A0u, 0x1614A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614A8u;
label_1614a8:
    // 0x1614a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1614a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1614ac: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1614acu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1614b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1614b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1614b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1614b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1614bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1614BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614C4u;
    // 0x1614c4: 0x0  nop
    ctx->pc = 0x1614c4u;
    // NOP
    // 0x1614c8: 0x0  nop
    ctx->pc = 0x1614c8u;
    // NOP
    // 0x1614cc: 0x0  nop
    ctx->pc = 0x1614ccu;
    // NOP
    ctx->pc = 0x1614d0u;
}
