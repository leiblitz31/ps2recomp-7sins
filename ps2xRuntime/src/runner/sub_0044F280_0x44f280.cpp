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

// Function: sub_0044F280
// Address: 0x44f280 - 0x44f2f0
void sub_0044F280_0x44f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F280_0x44f280");
#endif

    switch (ctx->pc) {
        case 0x44f280u: goto label_44f280;
        case 0x44f284u: goto label_44f284;
        case 0x44f288u: goto label_44f288;
        case 0x44f28cu: goto label_44f28c;
        case 0x44f290u: goto label_44f290;
        case 0x44f294u: goto label_44f294;
        case 0x44f298u: goto label_44f298;
        case 0x44f29cu: goto label_44f29c;
        case 0x44f2a0u: goto label_44f2a0;
        case 0x44f2a4u: goto label_44f2a4;
        case 0x44f2a8u: goto label_44f2a8;
        case 0x44f2acu: goto label_44f2ac;
        case 0x44f2b0u: goto label_44f2b0;
        case 0x44f2b4u: goto label_44f2b4;
        case 0x44f2b8u: goto label_44f2b8;
        case 0x44f2bcu: goto label_44f2bc;
        case 0x44f2c0u: goto label_44f2c0;
        case 0x44f2c4u: goto label_44f2c4;
        case 0x44f2c8u: goto label_44f2c8;
        case 0x44f2ccu: goto label_44f2cc;
        case 0x44f2d0u: goto label_44f2d0;
        case 0x44f2d4u: goto label_44f2d4;
        case 0x44f2d8u: goto label_44f2d8;
        case 0x44f2dcu: goto label_44f2dc;
        case 0x44f2e0u: goto label_44f2e0;
        case 0x44f2e4u: goto label_44f2e4;
        case 0x44f2e8u: goto label_44f2e8;
        case 0x44f2ecu: goto label_44f2ec;
        default: break;
    }

    ctx->pc = 0x44f280u;

label_44f280:
    // 0x44f280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f284:
    // 0x44f284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44f288:
    // 0x44f288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44f28c:
    // 0x44f28c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f290:
    // 0x44f290: 0xc113b08  jal         func_44EC20
label_44f294:
    if (ctx->pc == 0x44F294u) {
        ctx->pc = 0x44F298u;
        goto label_44f298;
    }
    ctx->pc = 0x44F290u;
    SET_GPR_U32(ctx, 31, 0x44F298u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44F290u, 0x44F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F298u;
label_44f298:
    // 0x44f298: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44f298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44f29c:
    // 0x44f29c: 0x24636ab0  addiu       $v1, $v1, 0x6AB0
    ctx->pc = 0x44f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_44f2a0:
    // 0x44f2a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f2a4:
    // 0x44f2a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f2a8:
    // 0x44f2a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f2ac:
    // 0x44f2ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f2b0:
    // 0x44f2b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f2b4:
    // 0x44f2b4: 0x320f809  jalr        $t9
label_44f2b8:
    if (ctx->pc == 0x44F2B8u) {
        ctx->pc = 0x44F2BCu;
        goto label_44f2bc;
    }
    ctx->pc = 0x44F2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F2BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F2B4u, 0x44F2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F2BCu;
label_44f2bc:
    // 0x44f2bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f2c0:
    // 0x44f2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f2c4:
    // 0x44f2c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f2c8:
    // 0x44f2c8: 0x3e00008  jr          $ra
label_44f2cc:
    if (ctx->pc == 0x44F2CCu) {
        ctx->pc = 0x44F2D0u;
        goto label_44f2d0;
    }
    ctx->pc = 0x44F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F2D0u;
label_44f2d0:
    // 0x44f2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f2d4:
    // 0x44f2d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f2d8:
    // 0x44f2d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f2dc:
    // 0x44f2dc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44f2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44f2e0:
    // 0x44f2e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f2e4:
    // 0x44f2e4: 0x3e00008  jr          $ra
label_44f2e8:
    if (ctx->pc == 0x44F2E8u) {
        ctx->pc = 0x44F2ECu;
        goto label_44f2ec;
    }
    ctx->pc = 0x44F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F2ECu;
label_44f2ec:
    // 0x44f2ec: 0x0  nop
    ctx->pc = 0x44f2ecu;
    // NOP
    ctx->pc = 0x44f2f0u;
}
