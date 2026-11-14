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

// Function: sub_0044F2F0
// Address: 0x44f2f0 - 0x44f370
void sub_0044F2F0_0x44f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F2F0_0x44f2f0");
#endif

    switch (ctx->pc) {
        case 0x44f2f0u: goto label_44f2f0;
        case 0x44f2f4u: goto label_44f2f4;
        case 0x44f2f8u: goto label_44f2f8;
        case 0x44f2fcu: goto label_44f2fc;
        case 0x44f300u: goto label_44f300;
        case 0x44f304u: goto label_44f304;
        case 0x44f308u: goto label_44f308;
        case 0x44f30cu: goto label_44f30c;
        case 0x44f310u: goto label_44f310;
        case 0x44f314u: goto label_44f314;
        case 0x44f318u: goto label_44f318;
        case 0x44f31cu: goto label_44f31c;
        case 0x44f320u: goto label_44f320;
        case 0x44f324u: goto label_44f324;
        case 0x44f328u: goto label_44f328;
        case 0x44f32cu: goto label_44f32c;
        case 0x44f330u: goto label_44f330;
        case 0x44f334u: goto label_44f334;
        case 0x44f338u: goto label_44f338;
        case 0x44f33cu: goto label_44f33c;
        case 0x44f340u: goto label_44f340;
        case 0x44f344u: goto label_44f344;
        case 0x44f348u: goto label_44f348;
        case 0x44f34cu: goto label_44f34c;
        case 0x44f350u: goto label_44f350;
        case 0x44f354u: goto label_44f354;
        case 0x44f358u: goto label_44f358;
        case 0x44f35cu: goto label_44f35c;
        case 0x44f360u: goto label_44f360;
        case 0x44f364u: goto label_44f364;
        case 0x44f368u: goto label_44f368;
        case 0x44f36cu: goto label_44f36c;
        default: break;
    }

    ctx->pc = 0x44f2f0u;

label_44f2f0:
    // 0x44f2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f2f4:
    // 0x44f2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44f2f8:
    // 0x44f2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44f2fc:
    // 0x44f2fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f300:
    // 0x44f300: 0xc113b08  jal         func_44EC20
label_44f304:
    if (ctx->pc == 0x44F304u) {
        ctx->pc = 0x44F308u;
        goto label_44f308;
    }
    ctx->pc = 0x44F300u;
    SET_GPR_U32(ctx, 31, 0x44F308u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44F300u, 0x44F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F308u;
label_44f308:
    // 0x44f308: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44f308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44f30c:
    // 0x44f30c: 0x24636aa0  addiu       $v1, $v1, 0x6AA0
    ctx->pc = 0x44f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27296));
label_44f310:
    // 0x44f310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f314:
    // 0x44f314: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f318:
    // 0x44f318: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f31c:
    // 0x44f31c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f320:
    // 0x44f320: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f324:
    // 0x44f324: 0x320f809  jalr        $t9
label_44f328:
    if (ctx->pc == 0x44F328u) {
        ctx->pc = 0x44F32Cu;
        goto label_44f32c;
    }
    ctx->pc = 0x44F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F32Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F324u, 0x44F32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F32Cu;
label_44f32c:
    // 0x44f32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f330:
    // 0x44f330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f334:
    // 0x44f334: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f338:
    // 0x44f338: 0x3e00008  jr          $ra
label_44f33c:
    if (ctx->pc == 0x44F33Cu) {
        ctx->pc = 0x44F340u;
        goto label_44f340;
    }
    ctx->pc = 0x44F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F340u;
label_44f340:
    // 0x44f340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f344:
    // 0x44f344: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f348:
    // 0x44f348: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f34c:
    // 0x44f34c: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44f350:
    // 0x44f350: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f354:
    // 0x44f354: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x44f354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_44f358:
    // 0x44f358: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f35c:
    // 0x44f35c: 0x3e00008  jr          $ra
label_44f360:
    if (ctx->pc == 0x44F360u) {
        ctx->pc = 0x44F364u;
        goto label_44f364;
    }
    ctx->pc = 0x44F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F364u;
label_44f364:
    // 0x44f364: 0x0  nop
    ctx->pc = 0x44f364u;
    // NOP
label_44f368:
    // 0x44f368: 0x0  nop
    ctx->pc = 0x44f368u;
    // NOP
label_44f36c:
    // 0x44f36c: 0x0  nop
    ctx->pc = 0x44f36cu;
    // NOP
    ctx->pc = 0x44f370u;
}
