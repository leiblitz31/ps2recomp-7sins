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

// Function: sub_001328C0
// Address: 0x1328c0 - 0x132960
void sub_001328C0_0x1328c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001328C0_0x1328c0");
#endif

    switch (ctx->pc) {
        case 0x132944u: goto label_132944;
        default: break;
    }

    ctx->pc = 0x1328c0u;

    // 0x1328c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1328c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1328c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1328c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1328c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1328c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328cc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1328ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1328d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1328D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1328D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1328D8u;
    // 0x1328d8: 0x0  nop
    ctx->pc = 0x1328d8u;
    // NOP
    // 0x1328dc: 0x0  nop
    ctx->pc = 0x1328dcu;
    // NOP
    // 0x1328e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1328e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1328e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1328e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1328e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1328e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1328ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1328ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1328f0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1328f4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1328F4u;
    {
        const bool branch_taken_0x1328f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1328f4) {
            ctx->pc = 0x132944u;
            goto label_132944;
        }
    }
    ctx->pc = 0x1328FCu;
    // 0x1328fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1328fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132900: 0x0  nop
    ctx->pc = 0x132900u;
    // NOP
    // 0x132904: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x132904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x132908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13290c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132910: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x132910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x132914: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x132914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132918: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x132918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13291c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132920: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x132920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x132924: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x132924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132928: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x132928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13292c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132930: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x132930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x132934: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x132934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x132938: 0x24470034  addiu       $a3, $v0, 0x34
    ctx->pc = 0x132938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x13293c: 0xc04d10c  jal         func_134430
    ctx->pc = 0x13293Cu;
    SET_GPR_U32(ctx, 31, 0x132944u);
    ctx->pc = 0x134430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134430u, 0x13293Cu, 0x132944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132944u;
label_132944:
    // 0x132944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132948: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13294c: 0x3e00008  jr          $ra
    ctx->pc = 0x13294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132954u;
    // 0x132954: 0x0  nop
    ctx->pc = 0x132954u;
    // NOP
    // 0x132958: 0x0  nop
    ctx->pc = 0x132958u;
    // NOP
    // 0x13295c: 0x0  nop
    ctx->pc = 0x13295cu;
    // NOP
    ctx->pc = 0x132960u;
}
