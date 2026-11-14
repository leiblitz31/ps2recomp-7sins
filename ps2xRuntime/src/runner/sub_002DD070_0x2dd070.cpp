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

// Function: sub_002DD070
// Address: 0x2dd070 - 0x2dd0f0
void sub_002DD070_0x2dd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD070_0x2dd070");
#endif

    switch (ctx->pc) {
        case 0x2dd070u: goto label_2dd070;
        case 0x2dd074u: goto label_2dd074;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd084u: goto label_2dd084;
        case 0x2dd088u: goto label_2dd088;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd094u: goto label_2dd094;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd09cu: goto label_2dd09c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0a4u: goto label_2dd0a4;
        case 0x2dd0a8u: goto label_2dd0a8;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0b0u: goto label_2dd0b0;
        case 0x2dd0b4u: goto label_2dd0b4;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0bcu: goto label_2dd0bc;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0c4u: goto label_2dd0c4;
        case 0x2dd0c8u: goto label_2dd0c8;
        case 0x2dd0ccu: goto label_2dd0cc;
        case 0x2dd0d0u: goto label_2dd0d0;
        case 0x2dd0d4u: goto label_2dd0d4;
        case 0x2dd0d8u: goto label_2dd0d8;
        case 0x2dd0dcu: goto label_2dd0dc;
        case 0x2dd0e0u: goto label_2dd0e0;
        case 0x2dd0e4u: goto label_2dd0e4;
        case 0x2dd0e8u: goto label_2dd0e8;
        case 0x2dd0ecu: goto label_2dd0ec;
        default: break;
    }

    ctx->pc = 0x2dd070u;

label_2dd070:
    // 0x2dd070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dd074:
    // 0x2dd074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dd078:
    // 0x2dd078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dd078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2dd07c:
    // 0x2dd07c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dd07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd080:
    // 0x2dd080: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dd080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dd084:
    // 0x2dd084: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dd084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd088:
    // 0x2dd088: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dd088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dd08c:
    // 0x2dd08c: 0x320f809  jalr        $t9
label_2dd090:
    if (ctx->pc == 0x2DD090u) {
        ctx->pc = 0x2DD094u;
        goto label_2dd094;
    }
    ctx->pc = 0x2DD08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD094u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD08Cu, 0x2DD094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD094u;
label_2dd094:
    // 0x2dd094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd098:
    // 0x2dd098: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dd098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2dd09c:
    // 0x2dd09c: 0x3e00008  jr          $ra
label_2dd0a0:
    if (ctx->pc == 0x2DD0A0u) {
        ctx->pc = 0x2DD0A4u;
        goto label_2dd0a4;
    }
    ctx->pc = 0x2DD09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD0A4u;
label_2dd0a4:
    // 0x2dd0a4: 0x0  nop
    ctx->pc = 0x2dd0a4u;
    // NOP
label_2dd0a8:
    // 0x2dd0a8: 0x0  nop
    ctx->pc = 0x2dd0a8u;
    // NOP
label_2dd0ac:
    // 0x2dd0ac: 0x0  nop
    ctx->pc = 0x2dd0acu;
    // NOP
label_2dd0b0:
    // 0x2dd0b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2dd0b4:
    // 0x2dd0b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2dd0b8:
    // 0x2dd0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd0bc:
    // 0x2dd0bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2dd0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2dd0c0:
    // 0x2dd0c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dd0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2dd0c4:
    // 0x2dd0c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dd0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd0c8:
    // 0x2dd0c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dd0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd0cc:
    // 0x2dd0cc: 0xc0911dc  jal         func_244770
label_2dd0d0:
    if (ctx->pc == 0x2DD0D0u) {
        ctx->pc = 0x2DD0D4u;
        goto label_2dd0d4;
    }
    ctx->pc = 0x2DD0CCu;
    SET_GPR_U32(ctx, 31, 0x2DD0D4u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x2DD0CCu, 0x2DD0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0D4u;
label_2dd0d4:
    // 0x2dd0d4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2dd0d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dd0d8:
    // 0x2dd0d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dd0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd0dc:
    // 0x2dd0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd0e0:
    // 0x2dd0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd0e4:
    // 0x2dd0e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dd0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2dd0e8:
    // 0x2dd0e8: 0x3e00008  jr          $ra
label_2dd0ec:
    if (ctx->pc == 0x2DD0ECu) {
        ctx->pc = 0x2DD0F0u;
        goto label_fallthrough_0x2dd0e8;
    }
    ctx->pc = 0x2DD0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dd0e8:
    ctx->pc = 0x2DD0F0u;
}
