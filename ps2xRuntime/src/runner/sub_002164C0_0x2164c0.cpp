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

// Function: sub_002164C0
// Address: 0x2164c0 - 0x216550
void sub_002164C0_0x2164c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002164C0_0x2164c0");
#endif

    switch (ctx->pc) {
        case 0x2164dcu: goto label_2164dc;
        case 0x2164ecu: goto label_2164ec;
        case 0x2164fcu: goto label_2164fc;
        default: break;
    }

    ctx->pc = 0x2164c0u;

    // 0x2164c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2164c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2164c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2164c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2164c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2164c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2164cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2164ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164d0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2164d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2164d4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2164D4u;
    SET_GPR_U32(ctx, 31, 0x2164DCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2164D4u, 0x2164DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164DCu;
label_2164dc:
    // 0x2164dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2164dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164e0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2164e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2164e4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2164E4u;
    SET_GPR_U32(ctx, 31, 0x2164ECu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2164E4u, 0x2164ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164ECu;
label_2164ec:
    // 0x2164ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164f0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2164f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2164f4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2164F4u;
    SET_GPR_U32(ctx, 31, 0x2164FCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2164F4u, 0x2164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164FCu;
label_2164fc:
    // 0x2164fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2164fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216500: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x216500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x216504: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x216504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x216508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21650c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216510: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x216510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x216514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216518: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x216518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x21651c: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x21651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x216520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216528: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x216528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x21652c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216530: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x216530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x216534: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216538: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x216538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x21653c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216544: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x216544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x216548: 0x3e00008  jr          $ra
    ctx->pc = 0x216548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216550u;
}
