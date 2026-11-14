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

// Function: sub_002B2BF0
// Address: 0x2b2bf0 - 0x2b2c60
void sub_002B2BF0_0x2b2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2BF0_0x2b2bf0");
#endif

    switch (ctx->pc) {
        case 0x2b2c2cu: goto label_2b2c2c;
        case 0x2b2c4cu: goto label_2b2c4c;
        default: break;
    }

    ctx->pc = 0x2b2bf0u;

    // 0x2b2bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b2bfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b2bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b2c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B2C04u;
    {
        const bool branch_taken_0x2b2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c04) {
            ctx->pc = 0x2B2C4Cu;
            goto label_2b2c4c;
        }
    }
    ctx->pc = 0x2B2C0Cu;
    // 0x2b2c0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b2c10: 0x246365d0  addiu       $v1, $v1, 0x65D0
    ctx->pc = 0x2b2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26064));
    // 0x2b2c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b2c1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b2c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c24: 0xc0ad6d4  jal         func_2B5B50
    ctx->pc = 0x2B2C24u;
    SET_GPR_U32(ctx, 31, 0x2B2C2Cu);
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x2B2C24u, 0x2B2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C2Cu;
label_2b2c2c:
    // 0x2b2c2c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b2c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b2c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b2c34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b2c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b2c38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2C38u;
    {
        const bool branch_taken_0x2b2c38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b2c38) {
            ctx->pc = 0x2B2C4Cu;
            goto label_2b2c4c;
        }
    }
    ctx->pc = 0x2B2C40u;
    // 0x2b2c40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c44: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B2C44u;
    SET_GPR_U32(ctx, 31, 0x2B2C4Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B2C44u, 0x2B2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C4Cu;
label_2b2c4c:
    // 0x2b2c4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2c54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b2c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b2c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C60u;
}
