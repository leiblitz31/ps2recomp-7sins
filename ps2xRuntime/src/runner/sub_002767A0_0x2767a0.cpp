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

// Function: sub_002767A0
// Address: 0x2767a0 - 0x276850
void sub_002767A0_0x2767a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002767A0_0x2767a0");
#endif

    switch (ctx->pc) {
        case 0x2767bcu: goto label_2767bc;
        case 0x27681cu: goto label_27681c;
        case 0x27683cu: goto label_27683c;
        default: break;
    }

    ctx->pc = 0x2767a0u;

    // 0x2767a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2767a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2767a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2767a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2767a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2767a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2767ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2767acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2767b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2767b4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2767B4u;
    SET_GPR_U32(ctx, 31, 0x2767BCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2767B4u, 0x2767BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767BCu;
label_2767bc:
    // 0x2767bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2767bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767c0: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x2767c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2767c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2767c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2767cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2767ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2767d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2767D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2767D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2767D8u;
    // 0x2767d8: 0x0  nop
    ctx->pc = 0x2767d8u;
    // NOP
    // 0x2767dc: 0x0  nop
    ctx->pc = 0x2767dcu;
    // NOP
    // 0x2767e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2767e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2767e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2767e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2767e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2767e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2767ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2767ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2767f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2767F4u;
    {
        const bool branch_taken_0x2767f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2767f4) {
            ctx->pc = 0x27683Cu;
            goto label_27683c;
        }
    }
    ctx->pc = 0x2767FCu;
    // 0x2767fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2767fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x276800: 0x24635d50  addiu       $v1, $v1, 0x5D50
    ctx->pc = 0x276800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23888));
    // 0x276804: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276808: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27680c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276814: 0xc09d150  jal         func_274540
    ctx->pc = 0x276814u;
    SET_GPR_U32(ctx, 31, 0x27681Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x276814u, 0x27681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27681Cu;
label_27681c:
    // 0x27681c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276820: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x276820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x276824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x276824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x276828: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276828u;
    {
        const bool branch_taken_0x276828 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x276828) {
            ctx->pc = 0x27683Cu;
            goto label_27683c;
        }
    }
    ctx->pc = 0x276830u;
    // 0x276830: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276834: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x276834u;
    SET_GPR_U32(ctx, 31, 0x27683Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x276834u, 0x27683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27683Cu;
label_27683c:
    // 0x27683c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276844: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276848: 0x3e00008  jr          $ra
    ctx->pc = 0x276848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276850u;
}
