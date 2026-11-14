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

// Function: sub_001A1B20
// Address: 0x1a1b20 - 0x1a1bd0
void sub_001A1B20_0x1a1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1B20_0x1a1b20");
#endif

    switch (ctx->pc) {
        case 0x1a1b3cu: goto label_1a1b3c;
        case 0x1a1b5cu: goto label_1a1b5c;
        case 0x1a1b6cu: goto label_1a1b6c;
        case 0x1a1b7cu: goto label_1a1b7c;
        case 0x1a1b8cu: goto label_1a1b8c;
        case 0x1a1ba8u: goto label_1a1ba8;
        default: break;
    }

    ctx->pc = 0x1a1b20u;

    // 0x1a1b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1b2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b30: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a1b34: 0xc064924  jal         func_192490
    ctx->pc = 0x1A1B34u;
    SET_GPR_U32(ctx, 31, 0x1A1B3Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1A1B34u, 0x1A1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B3Cu;
label_1a1b3c:
    // 0x1a1b3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a1b40: 0x24634630  addiu       $v1, $v1, 0x4630
    ctx->pc = 0x1a1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17968));
    // 0x1a1b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b50: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a1b54: 0xc056254  jal         func_158950
    ctx->pc = 0x1A1B54u;
    SET_GPR_U32(ctx, 31, 0x1A1B5Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1A1B54u, 0x1A1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B5Cu;
label_1a1b5c:
    // 0x1a1b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b60: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a1b64: 0xc0480a4  jal         func_120290
    ctx->pc = 0x1A1B64u;
    SET_GPR_U32(ctx, 31, 0x1A1B6Cu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x1A1B64u, 0x1A1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B6Cu;
label_1a1b6c:
    // 0x1a1b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b70: 0x24440128  addiu       $a0, $v0, 0x128
    ctx->pc = 0x1a1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x1a1b74: 0xc06885c  jal         func_1A2170
    ctx->pc = 0x1A1B74u;
    SET_GPR_U32(ctx, 31, 0x1A1B7Cu);
    ctx->pc = 0x1A2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2170u, 0x1A1B74u, 0x1A1B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B7Cu;
label_1a1b7c:
    // 0x1a1b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b80: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a1b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a1b84: 0xc068804  jal         func_1A2010
    ctx->pc = 0x1A1B84u;
    SET_GPR_U32(ctx, 31, 0x1A1B8Cu);
    ctx->pc = 0x1A2010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2010u, 0x1A1B84u, 0x1A1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B8Cu;
label_1a1b8c:
    // 0x1a1b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b90: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1a1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1a1b94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a1b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a1b98: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x1a1b9c: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1a1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a1ba0: 0xc08e514  jal         func_239450
    ctx->pc = 0x1A1BA0u;
    SET_GPR_U32(ctx, 31, 0x1A1BA8u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1A1BA0u, 0x1A1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BA8u;
label_1a1ba8:
    // 0x1a1ba8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1bac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1bb0: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1a1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1a1bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1bbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a1bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1BC8u;
    // 0x1a1bc8: 0x0  nop
    ctx->pc = 0x1a1bc8u;
    // NOP
    // 0x1a1bcc: 0x0  nop
    ctx->pc = 0x1a1bccu;
    // NOP
    ctx->pc = 0x1a1bd0u;
}
