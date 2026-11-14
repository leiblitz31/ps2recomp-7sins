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

// Function: sub_002535D0
// Address: 0x2535d0 - 0x253650
void sub_002535D0_0x2535d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002535D0_0x2535d0");
#endif

    ctx->pc = 0x2535d0u;

    // 0x2535d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2535d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2535d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2535d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2535d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2535d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2535dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2535dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2535e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2535e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2535e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2535e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2535e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535ec: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2535ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2535f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2535f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535f4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2535f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2535f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2535fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x253600: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253604: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x253604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x253608: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25360c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x25360cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x253610: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253614: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x253614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x253618: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25361c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x25361cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x253620: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253624: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x253624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x253628: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x253628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25362c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x25362cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x253630: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253634: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x253634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x253638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25363c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x25363cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x253640: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253644: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253648: 0x3e00008  jr          $ra
    ctx->pc = 0x253648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253650u;
}
