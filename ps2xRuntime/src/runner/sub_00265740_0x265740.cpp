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

// Function: sub_00265740
// Address: 0x265740 - 0x2657f0
void sub_00265740_0x265740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265740_0x265740");
#endif

    switch (ctx->pc) {
        case 0x26576cu: goto label_26576c;
        case 0x265790u: goto label_265790;
        case 0x2657a0u: goto label_2657a0;
        case 0x2657b0u: goto label_2657b0;
        case 0x2657c0u: goto label_2657c0;
        case 0x2657d0u: goto label_2657d0;
        default: break;
    }

    ctx->pc = 0x265740u;

    // 0x265740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26574c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26574cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x265750: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x265750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x265754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265758: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26575c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265760: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x265760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x265764: 0xc099778  jal         func_265DE0
    ctx->pc = 0x265764u;
    SET_GPR_U32(ctx, 31, 0x26576Cu);
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x265764u, 0x26576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26576Cu;
label_26576c:
    // 0x26576c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265770: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265774: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x265774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x265778: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26577c: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x26577cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x265780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265784: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x265784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x265788: 0xc048bc4  jal         func_122F10
    ctx->pc = 0x265788u;
    SET_GPR_U32(ctx, 31, 0x265790u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x265788u, 0x265790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265790u;
label_265790:
    // 0x265790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265794: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x265794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x265798: 0xc048bc4  jal         func_122F10
    ctx->pc = 0x265798u;
    SET_GPR_U32(ctx, 31, 0x2657A0u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x265798u, 0x2657A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657A0u;
label_2657a0:
    // 0x2657a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2657a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2657a4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2657a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2657a8: 0xc099720  jal         func_265C80
    ctx->pc = 0x2657A8u;
    SET_GPR_U32(ctx, 31, 0x2657B0u);
    ctx->pc = 0x265C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C80u, 0x2657A8u, 0x2657B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657B0u;
label_2657b0:
    // 0x2657b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2657b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2657b4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2657b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2657b8: 0xc099720  jal         func_265C80
    ctx->pc = 0x2657B8u;
    SET_GPR_U32(ctx, 31, 0x2657C0u);
    ctx->pc = 0x265C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C80u, 0x2657B8u, 0x2657C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657C0u;
label_2657c0:
    // 0x2657c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2657c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2657c4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x2657c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2657c8: 0xc088560  jal         func_221580
    ctx->pc = 0x2657C8u;
    SET_GPR_U32(ctx, 31, 0x2657D0u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x2657C8u, 0x2657D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657D0u;
label_2657d0:
    // 0x2657d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2657d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2657d4: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x2657d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2657d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2657d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2657dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2657dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2657e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2657e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2657e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2657E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2657E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2657ECu;
    // 0x2657ec: 0x0  nop
    ctx->pc = 0x2657ecu;
    // NOP
    ctx->pc = 0x2657f0u;
}
