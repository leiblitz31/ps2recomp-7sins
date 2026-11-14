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

// Function: sub_00227770
// Address: 0x227770 - 0x227810
void sub_00227770_0x227770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227770_0x227770");
#endif

    switch (ctx->pc) {
        case 0x227788u: goto label_227788;
        case 0x2277d8u: goto label_2277d8;
        default: break;
    }

    ctx->pc = 0x227770u;

    // 0x227770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22777c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227780: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x227780u;
    SET_GPR_U32(ctx, 31, 0x227788u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x227780u, 0x227788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227788u;
label_227788:
    // 0x227788: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x227788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x22778c: 0x24635330  addiu       $v1, $v1, 0x5330
    ctx->pc = 0x22778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21296));
    // 0x227790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227794: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x227794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x227798: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22779c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x22779cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2277a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277a4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2277a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2277a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277ac: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2277acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2277b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277b4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2277b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2277b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277bc: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2277bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2277c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277c4: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2277c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2277c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277cc: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2277ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2277d0: 0xc089eac  jal         func_227AB0
    ctx->pc = 0x2277D0u;
    SET_GPR_U32(ctx, 31, 0x2277D8u);
    ctx->pc = 0x227AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227AB0u, 0x2277D0u, 0x2277D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277D8u;
label_2277d8:
    // 0x2277d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277dc: 0xaf82bb84  sw          $v0, -0x447C($gp)
    ctx->pc = 0x2277dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949764), GPR_U32(ctx, 2));
    // 0x2277e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277e4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2277e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2277e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277ec: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2277ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2277f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2277f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2277f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2277f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2277f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2277fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2277FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2277FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227804u;
    // 0x227804: 0x0  nop
    ctx->pc = 0x227804u;
    // NOP
    // 0x227808: 0x0  nop
    ctx->pc = 0x227808u;
    // NOP
    // 0x22780c: 0x0  nop
    ctx->pc = 0x22780cu;
    // NOP
    ctx->pc = 0x227810u;
}
