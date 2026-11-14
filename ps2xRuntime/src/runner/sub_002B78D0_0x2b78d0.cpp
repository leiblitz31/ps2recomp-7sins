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

// Function: sub_002B78D0
// Address: 0x2b78d0 - 0x2b79a0
void sub_002B78D0_0x2b78d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B78D0_0x2b78d0");
#endif

    switch (ctx->pc) {
        case 0x2b78ecu: goto label_2b78ec;
        case 0x2b7924u: goto label_2b7924;
        case 0x2b7970u: goto label_2b7970;
        default: break;
    }

    ctx->pc = 0x2b78d0u;

    // 0x2b78d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b78d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b78d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b78d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b78d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b78dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b78e0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2b78e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b78e4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b78e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b78e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b78ec:
    // 0x2b78ec: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2b78ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b78f0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2b78f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2b78f4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2b78f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2b78f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b78fc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b78fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7900: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2b7900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b7904: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2b7904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2b7908: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B7908u;
    {
        const bool branch_taken_0x2b7908 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2b7908) {
            ctx->pc = 0x2B78ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b78ec;
        }
    }
    ctx->pc = 0x2B7910u;
    // 0x2b7910: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b7910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7918: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x2b7918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b791c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2b791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b7920: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b7920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b7924:
    // 0x2b7924: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2b7924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b7928: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2b7928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2b792c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2b792cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2b7930: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b7934: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b7934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7938: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2b7938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b793c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2b793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2b7940: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B7940u;
    {
        const bool branch_taken_0x2b7940 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2b7940) {
            ctx->pc = 0x2B7924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7924;
        }
    }
    ctx->pc = 0x2B7948u;
    // 0x2b7948: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b794c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2b794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2b7950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7954: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2b7954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x2b7958: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b7958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b795c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7960: 0x24640044  addiu       $a0, $v1, 0x44
    ctx->pc = 0x2b7960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x2b7964: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x2b7964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2b7968: 0xc0ade68  jal         func_2B79A0
    ctx->pc = 0x2B7968u;
    SET_GPR_U32(ctx, 31, 0x2B7970u);
    ctx->pc = 0x2B79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79A0u, 0x2B7968u, 0x2B7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7970u;
label_2b7970:
    // 0x2b7970: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7974: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2b7974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2b7978: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b797c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2b797cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2b7980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7988: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b7988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b798c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7994u;
    // 0x2b7994: 0x0  nop
    ctx->pc = 0x2b7994u;
    // NOP
    // 0x2b7998: 0x0  nop
    ctx->pc = 0x2b7998u;
    // NOP
    // 0x2b799c: 0x0  nop
    ctx->pc = 0x2b799cu;
    // NOP
    ctx->pc = 0x2b79a0u;
}
