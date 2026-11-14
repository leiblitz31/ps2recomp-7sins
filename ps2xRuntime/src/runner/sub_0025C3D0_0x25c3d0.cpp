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

// Function: sub_0025C3D0
// Address: 0x25c3d0 - 0x25c450
void sub_0025C3D0_0x25c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C3D0_0x25c3d0");
#endif

    switch (ctx->pc) {
        case 0x25c3f8u: goto label_25c3f8;
        default: break;
    }

    ctx->pc = 0x25c3d0u;

    // 0x25c3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c3d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25c3dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25c3e0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x25c3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x25c3e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c3e8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x25c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25c3ec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c3f0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x25C3F0u;
    SET_GPR_U32(ctx, 31, 0x25C3F8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x25C3F0u, 0x25C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3F8u;
label_25c3f8:
    // 0x25c3f8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x25c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c3fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C3FCu;
    {
        const bool branch_taken_0x25c3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3fc) {
            ctx->pc = 0x25C420u;
            goto label_25c420;
        }
    }
    ctx->pc = 0x25C404u;
    // 0x25c404: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c408: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25c408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c40c: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x25c40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x25c410: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c414: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25c414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x25c418: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C418u;
    {
        const bool branch_taken_0x25c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c418) {
            ctx->pc = 0x25C434u;
            goto label_25c434;
        }
    }
    ctx->pc = 0x25C420u;
label_25c420:
    // 0x25c420: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c424: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25c424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c428: 0x306400fe  andi        $a0, $v1, 0xFE
    ctx->pc = 0x25c428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x25c42c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c430: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25c430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_25c434:
    // 0x25c434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c438: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C444u;
    // 0x25c444: 0x0  nop
    ctx->pc = 0x25c444u;
    // NOP
    // 0x25c448: 0x0  nop
    ctx->pc = 0x25c448u;
    // NOP
    // 0x25c44c: 0x0  nop
    ctx->pc = 0x25c44cu;
    // NOP
    ctx->pc = 0x25c450u;
}
