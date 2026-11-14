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

// Function: sub_0044F160
// Address: 0x44f160 - 0x44f1e0
void sub_0044F160_0x44f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F160_0x44f160");
#endif

    switch (ctx->pc) {
        case 0x44f160u: goto label_44f160;
        case 0x44f164u: goto label_44f164;
        case 0x44f168u: goto label_44f168;
        case 0x44f16cu: goto label_44f16c;
        case 0x44f170u: goto label_44f170;
        case 0x44f174u: goto label_44f174;
        case 0x44f178u: goto label_44f178;
        case 0x44f17cu: goto label_44f17c;
        case 0x44f180u: goto label_44f180;
        case 0x44f184u: goto label_44f184;
        case 0x44f188u: goto label_44f188;
        case 0x44f18cu: goto label_44f18c;
        case 0x44f190u: goto label_44f190;
        case 0x44f194u: goto label_44f194;
        case 0x44f198u: goto label_44f198;
        case 0x44f19cu: goto label_44f19c;
        case 0x44f1a0u: goto label_44f1a0;
        case 0x44f1a4u: goto label_44f1a4;
        case 0x44f1a8u: goto label_44f1a8;
        case 0x44f1acu: goto label_44f1ac;
        case 0x44f1b0u: goto label_44f1b0;
        case 0x44f1b4u: goto label_44f1b4;
        case 0x44f1b8u: goto label_44f1b8;
        case 0x44f1bcu: goto label_44f1bc;
        case 0x44f1c0u: goto label_44f1c0;
        case 0x44f1c4u: goto label_44f1c4;
        case 0x44f1c8u: goto label_44f1c8;
        case 0x44f1ccu: goto label_44f1cc;
        case 0x44f1d0u: goto label_44f1d0;
        case 0x44f1d4u: goto label_44f1d4;
        case 0x44f1d8u: goto label_44f1d8;
        case 0x44f1dcu: goto label_44f1dc;
        default: break;
    }

    ctx->pc = 0x44f160u;

label_44f160:
    // 0x44f160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f164:
    // 0x44f164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44f168:
    // 0x44f168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44f16c:
    // 0x44f16c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f170:
    // 0x44f170: 0xc113b08  jal         func_44EC20
label_44f174:
    if (ctx->pc == 0x44F174u) {
        ctx->pc = 0x44F178u;
        goto label_44f178;
    }
    ctx->pc = 0x44F170u;
    SET_GPR_U32(ctx, 31, 0x44F178u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44F170u, 0x44F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F178u;
label_44f178:
    // 0x44f178: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44f17c:
    // 0x44f17c: 0x24636ad0  addiu       $v1, $v1, 0x6AD0
    ctx->pc = 0x44f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27344));
label_44f180:
    // 0x44f180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f184:
    // 0x44f184: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f188:
    // 0x44f188: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f18c:
    // 0x44f18c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f190:
    // 0x44f190: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f194:
    // 0x44f194: 0x320f809  jalr        $t9
label_44f198:
    if (ctx->pc == 0x44F198u) {
        ctx->pc = 0x44F19Cu;
        goto label_44f19c;
    }
    ctx->pc = 0x44F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F19Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F194u, 0x44F19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F19Cu;
label_44f19c:
    // 0x44f19c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f1a0:
    // 0x44f1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f1a4:
    // 0x44f1a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f1a8:
    // 0x44f1a8: 0x3e00008  jr          $ra
label_44f1ac:
    if (ctx->pc == 0x44F1ACu) {
        ctx->pc = 0x44F1B0u;
        goto label_44f1b0;
    }
    ctx->pc = 0x44F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F1B0u;
label_44f1b0:
    // 0x44f1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f1b4:
    // 0x44f1b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f1b8:
    // 0x44f1b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f1bc:
    // 0x44f1bc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44f1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44f1c0:
    // 0x44f1c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f1c4:
    // 0x44f1c4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x44f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_44f1c8:
    // 0x44f1c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f1cc:
    // 0x44f1cc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x44f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_44f1d0:
    // 0x44f1d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f1d4:
    // 0x44f1d4: 0x3e00008  jr          $ra
label_44f1d8:
    if (ctx->pc == 0x44F1D8u) {
        ctx->pc = 0x44F1DCu;
        goto label_44f1dc;
    }
    ctx->pc = 0x44F1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F1DCu;
label_44f1dc:
    // 0x44f1dc: 0x0  nop
    ctx->pc = 0x44f1dcu;
    // NOP
    ctx->pc = 0x44f1e0u;
}
