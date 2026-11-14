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

// Function: sub_00193520
// Address: 0x193520 - 0x193570
void sub_00193520_0x193520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193520_0x193520");
#endif

    switch (ctx->pc) {
        case 0x193544u: goto label_193544;
        default: break;
    }

    ctx->pc = 0x193520u;

    // 0x193520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x193528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19352c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x193530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193534: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x193534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x193538: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x193538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19353c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x19353Cu;
    SET_GPR_U32(ctx, 31, 0x193544u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x19353Cu, 0x193544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193544u;
label_193544:
    // 0x193544: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x193544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193548: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x193548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19354c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193550: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x193550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x193554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193558: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x193558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19355c: 0x3e00008  jr          $ra
    ctx->pc = 0x19355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193564u;
    // 0x193564: 0x0  nop
    ctx->pc = 0x193564u;
    // NOP
    // 0x193568: 0x0  nop
    ctx->pc = 0x193568u;
    // NOP
    // 0x19356c: 0x0  nop
    ctx->pc = 0x19356cu;
    // NOP
    ctx->pc = 0x193570u;
}
