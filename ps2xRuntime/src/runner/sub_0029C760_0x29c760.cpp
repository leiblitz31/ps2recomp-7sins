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

// Function: sub_0029C760
// Address: 0x29c760 - 0x29c800
void sub_0029C760_0x29c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C760_0x29c760");
#endif

    switch (ctx->pc) {
        case 0x29c778u: goto label_29c778;
        case 0x29c7d0u: goto label_29c7d0;
        default: break;
    }

    ctx->pc = 0x29c760u;

    // 0x29c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29c76c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c770: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x29C770u;
    SET_GPR_U32(ctx, 31, 0x29C778u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x29C770u, 0x29C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C778u;
label_29c778:
    // 0x29c778: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29c778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x29c77c: 0x246361c0  addiu       $v1, $v1, 0x61C0
    ctx->pc = 0x29c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25024));
    // 0x29c780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c784: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29c784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29c788: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c78c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x29c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x29c790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c794: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x29c794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x29c798: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c79c: 0xa040005c  sb          $zero, 0x5C($v0)
    ctx->pc = 0x29c79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x29c7a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c7a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7a8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x29c7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x29c7ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7b0: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x29c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x29c7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c7b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7bc: 0xa0430068  sb          $v1, 0x68($v0)
    ctx->pc = 0x29c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x29c7c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7c4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x29c7c8: 0xc09934c  jal         func_264D30
    ctx->pc = 0x29C7C8u;
    SET_GPR_U32(ctx, 31, 0x29C7D0u);
    ctx->pc = 0x264D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D30u, 0x29C7C8u, 0x29C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7D0u;
label_29c7d0:
    // 0x29c7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7d4: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x29c7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x29c7d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7dc: 0xa040007d  sb          $zero, 0x7D($v0)
    ctx->pc = 0x29c7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x29c7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c7e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7e8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x29c7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x29c7ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c7f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C800u;
}
