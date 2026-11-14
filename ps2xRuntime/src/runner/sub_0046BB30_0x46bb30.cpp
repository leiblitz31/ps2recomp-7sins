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

// Function: sub_0046BB30
// Address: 0x46bb30 - 0x46bbd0
void sub_0046BB30_0x46bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BB30_0x46bb30");
#endif

    switch (ctx->pc) {
        case 0x46bb60u: goto label_46bb60;
        case 0x46bb70u: goto label_46bb70;
        case 0x46bb80u: goto label_46bb80;
        case 0x46bb90u: goto label_46bb90;
        case 0x46bba4u: goto label_46bba4;
        case 0x46bbb4u: goto label_46bbb4;
        default: break;
    }

    ctx->pc = 0x46bb30u;

    // 0x46bb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46bb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bb38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46bb3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46bb40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46bb44: 0x24636cd8  addiu       $v1, $v1, 0x6CD8
    ctx->pc = 0x46bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27864));
    // 0x46bb48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bb4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46bb50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bb54: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46bb58: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46BB58u;
    SET_GPR_U32(ctx, 31, 0x46BB60u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46BB58u, 0x46BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB60u;
label_46bb60:
    // 0x46bb60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bb64: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46bb68: 0xc0495d4  jal         func_125750
    ctx->pc = 0x46BB68u;
    SET_GPR_U32(ctx, 31, 0x46BB70u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46BB68u, 0x46BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB70u;
label_46bb70:
    // 0x46bb70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bb74: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x46bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x46bb78: 0xc0495d4  jal         func_125750
    ctx->pc = 0x46BB78u;
    SET_GPR_U32(ctx, 31, 0x46BB80u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46BB78u, 0x46BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB80u;
label_46bb80:
    // 0x46bb80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46bb84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46bb88: 0xc1194c4  jal         func_465310
    ctx->pc = 0x46BB88u;
    SET_GPR_U32(ctx, 31, 0x46BB90u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x46BB88u, 0x46BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB90u;
label_46bb90:
    // 0x46bb90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bb94: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46bb98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46bb9c: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46BB9Cu;
    SET_GPR_U32(ctx, 31, 0x46BBA4u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46BB9Cu, 0x46BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BBA4u;
label_46bba4:
    // 0x46bba4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46bba8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46bbac: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46BBACu;
    SET_GPR_U32(ctx, 31, 0x46BBB4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46BBACu, 0x46BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BBB4u;
label_46bbb4:
    // 0x46bbb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bbbc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46bbbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x46BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BBC8u;
    // 0x46bbc8: 0x0  nop
    ctx->pc = 0x46bbc8u;
    // NOP
    // 0x46bbcc: 0x0  nop
    ctx->pc = 0x46bbccu;
    // NOP
    ctx->pc = 0x46bbd0u;
}
