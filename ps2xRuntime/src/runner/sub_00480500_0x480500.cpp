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

// Function: sub_00480500
// Address: 0x480500 - 0x480580
void sub_00480500_0x480500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480500_0x480500");
#endif

    switch (ctx->pc) {
        case 0x480538u: goto label_480538;
        case 0x480544u: goto label_480544;
        case 0x480550u: goto label_480550;
        case 0x480568u: goto label_480568;
        default: break;
    }

    ctx->pc = 0x480500u;

    // 0x480500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x480500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x480504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x480508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48050c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48050cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x480510: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x480510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x480514: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x480514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x480518: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x480518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x48051c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x48051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x480520: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480524: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x480524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x480528: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x480528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48052c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48052cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480530: 0xc0c8e40  jal         func_323900
    ctx->pc = 0x480530u;
    SET_GPR_U32(ctx, 31, 0x480538u);
    ctx->pc = 0x323900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323900u, 0x480530u, 0x480538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480538u;
label_480538:
    // 0x480538: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x480538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48053c: 0xc0f52ba  jal         func_3D4AE8
    ctx->pc = 0x48053Cu;
    SET_GPR_U32(ctx, 31, 0x480544u);
    ctx->pc = 0x3D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AE8u, 0x48053Cu, 0x480544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480544u;
label_480544:
    // 0x480544: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x480544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480548: 0xc12019c  jal         func_480670
    ctx->pc = 0x480548u;
    SET_GPR_U32(ctx, 31, 0x480550u);
    ctx->pc = 0x480670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480670u, 0x480548u, 0x480550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480550u;
label_480550:
    // 0x480550: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x480550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x480554: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x480554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480558: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x480558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x48055c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480560: 0xc0f5048  jal         func_3D4120
    ctx->pc = 0x480560u;
    SET_GPR_U32(ctx, 31, 0x480568u);
    ctx->pc = 0x3D4120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4120u, 0x480560u, 0x480568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480568u;
label_480568:
    // 0x480568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48056c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x48056cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x480570: 0x3e00008  jr          $ra
    ctx->pc = 0x480570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480578u;
    // 0x480578: 0x0  nop
    ctx->pc = 0x480578u;
    // NOP
    // 0x48057c: 0x0  nop
    ctx->pc = 0x48057cu;
    // NOP
    ctx->pc = 0x480580u;
}
