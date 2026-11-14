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

// Function: sub_001BB6B0
// Address: 0x1bb6b0 - 0x1bb740
void sub_001BB6B0_0x1bb6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB6B0_0x1bb6b0");
#endif

    ctx->pc = 0x1bb6b0u;

    // 0x1bb6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb6b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bb6b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bb6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb6c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bb6cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6d0: 0x80430004  lb          $v1, 0x4($v0)
    ctx->pc = 0x1bb6d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb6d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6d8: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1bb6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb6dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6e0: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1bb6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bb6e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6e8: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1bb6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bb6ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6f0: 0x80430008  lb          $v1, 0x8($v0)
    ctx->pc = 0x1bb6f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bb6f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6f8: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1bb6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb6fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb700: 0x80430009  lb          $v1, 0x9($v0)
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1bb704: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb708: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x1bb708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb70c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb710: 0x8043000a  lb          $v1, 0xA($v0)
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1bb714: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb718: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x1bb718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb71c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb720: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x1bb720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1bb724: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb728: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x1bb728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb72c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb730: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bb734: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB73Cu;
    // 0x1bb73c: 0x0  nop
    ctx->pc = 0x1bb73cu;
    // NOP
    ctx->pc = 0x1bb740u;
}
