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

// Function: sub_00247660
// Address: 0x247660 - 0x2476e0
void sub_00247660_0x247660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247660_0x247660");
#endif

    switch (ctx->pc) {
        case 0x24767cu: goto label_24767c;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476c4u: goto label_2476c4;
        default: break;
    }

    ctx->pc = 0x247660u;

    // 0x247660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24766c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247670: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x247670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x247674: 0xc091174  jal         func_2445D0
    ctx->pc = 0x247674u;
    SET_GPR_U32(ctx, 31, 0x24767Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x247674u, 0x24767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24767Cu;
label_24767c:
    // 0x24767c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x247680: 0x24635820  addiu       $v1, $v1, 0x5820
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22560));
    // 0x247684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x247688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24768c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247690: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x247690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x247694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247698: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x247698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x24769c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476a0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2476a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2476a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2476a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476a8: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2476a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2476ac: 0xc091f94  jal         func_247E50
    ctx->pc = 0x2476ACu;
    SET_GPR_U32(ctx, 31, 0x2476B4u);
    ctx->pc = 0x247E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247E50u, 0x2476ACu, 0x2476B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476B4u;
label_2476b4:
    // 0x2476b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2476b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476b8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2476b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2476bc: 0xc091ef0  jal         func_247BC0
    ctx->pc = 0x2476BCu;
    SET_GPR_U32(ctx, 31, 0x2476C4u);
    ctx->pc = 0x247BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BC0u, 0x2476BCu, 0x2476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C4u;
label_2476c4:
    // 0x2476c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2476c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2476c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2476cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2476ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2476d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2476D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2476D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2476D8u;
    // 0x2476d8: 0x0  nop
    ctx->pc = 0x2476d8u;
    // NOP
    // 0x2476dc: 0x0  nop
    ctx->pc = 0x2476dcu;
    // NOP
    ctx->pc = 0x2476e0u;
}
