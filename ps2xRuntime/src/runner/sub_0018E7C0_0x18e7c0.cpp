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

// Function: sub_0018E7C0
// Address: 0x18e7c0 - 0x18e8a0
void sub_0018E7C0_0x18e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E7C0_0x18e7c0");
#endif

    switch (ctx->pc) {
        case 0x18e830u: goto label_18e830;
        case 0x18e868u: goto label_18e868;
        default: break;
    }

    ctx->pc = 0x18e7c0u;

    // 0x18e7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e7c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18e7c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x18e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18e7cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e7d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e7d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e7d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18e7dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e7e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e7e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e7e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18e7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18e7ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e7f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e7f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e7f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18e7fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e800: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x18e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e804: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e808: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18e80c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e810: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18e814: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e818: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x18e818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x18e81c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e820: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e824: 0x24660014  addiu       $a2, $v1, 0x14
    ctx->pc = 0x18e824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x18e828: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18e82c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18e830:
    // 0x18e830: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e834: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x18e834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x18e838: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x18e83c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18e840: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x18e840u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e844: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x18e844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e848: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x18e848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x18e84c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18E84Cu;
    {
        const bool branch_taken_0x18e84c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18e84c) {
            ctx->pc = 0x18E830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e830;
        }
    }
    ctx->pc = 0x18E854u;
    // 0x18e854: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e858: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e85c: 0x24660034  addiu       $a2, $v1, 0x34
    ctx->pc = 0x18e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x18e860: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x18e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18e864: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18e868:
    // 0x18e868: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x18e868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e86c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x18e870: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x18e870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x18e874: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18e878: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x18e878u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e87c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x18e87cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e880: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x18e884: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18E884u;
    {
        const bool branch_taken_0x18e884 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18e884) {
            ctx->pc = 0x18E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e868;
        }
    }
    ctx->pc = 0x18E88Cu;
    // 0x18e88c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e890: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e894: 0x3e00008  jr          $ra
    ctx->pc = 0x18E894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E89Cu;
    // 0x18e89c: 0x0  nop
    ctx->pc = 0x18e89cu;
    // NOP
    ctx->pc = 0x18e8a0u;
}
