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

// Function: sub_002285E0
// Address: 0x2285e0 - 0x228680
void sub_002285E0_0x2285e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002285E0_0x2285e0");
#endif

    switch (ctx->pc) {
        case 0x228630u: goto label_228630;
        default: break;
    }

    ctx->pc = 0x2285e0u;

    // 0x2285e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2285e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2285e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2285e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2285e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2285ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2285ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2285f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2285f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2285f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2285f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2285f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2285fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2285fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228600: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x228600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x228604: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228608: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x228608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22860c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228618: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x228618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x22861c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228620: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228624: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x228624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x228628: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x228628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22862c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22862cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_228630:
    // 0x228630: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x228630u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x228634: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x228638: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x228638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x22863c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x22863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x228640: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x228640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x228644: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x228644u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x228648: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x228648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x22864c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22864Cu;
    {
        const bool branch_taken_0x22864c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x22864c) {
            ctx->pc = 0x228630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228630;
        }
    }
    ctx->pc = 0x228654u;
    // 0x228654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x228654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228658: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x228658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x22865c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228660: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x228660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x228664: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228668: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x228668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22866c: 0x3e00008  jr          $ra
    ctx->pc = 0x22866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228674u;
    // 0x228674: 0x0  nop
    ctx->pc = 0x228674u;
    // NOP
    // 0x228678: 0x0  nop
    ctx->pc = 0x228678u;
    // NOP
    // 0x22867c: 0x0  nop
    ctx->pc = 0x22867cu;
    // NOP
    ctx->pc = 0x228680u;
}
