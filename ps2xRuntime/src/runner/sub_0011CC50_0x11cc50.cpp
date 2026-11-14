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

// Function: sub_0011CC50
// Address: 0x11cc50 - 0x11cca0
void sub_0011CC50_0x11cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CC50_0x11cc50");
#endif

    switch (ctx->pc) {
        case 0x11cc50u: goto label_11cc50;
        case 0x11cc54u: goto label_11cc54;
        case 0x11cc58u: goto label_11cc58;
        case 0x11cc5cu: goto label_11cc5c;
        case 0x11cc60u: goto label_11cc60;
        case 0x11cc64u: goto label_11cc64;
        case 0x11cc68u: goto label_11cc68;
        case 0x11cc6cu: goto label_11cc6c;
        case 0x11cc70u: goto label_11cc70;
        case 0x11cc74u: goto label_11cc74;
        case 0x11cc78u: goto label_11cc78;
        case 0x11cc7cu: goto label_11cc7c;
        case 0x11cc80u: goto label_11cc80;
        case 0x11cc84u: goto label_11cc84;
        case 0x11cc88u: goto label_11cc88;
        case 0x11cc8cu: goto label_11cc8c;
        case 0x11cc90u: goto label_11cc90;
        case 0x11cc94u: goto label_11cc94;
        case 0x11cc98u: goto label_11cc98;
        case 0x11cc9cu: goto label_11cc9c;
        default: break;
    }

    ctx->pc = 0x11cc50u;

label_11cc50:
    // 0x11cc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11cc54:
    // 0x11cc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11cc58:
    // 0x11cc58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11cc5c:
    // 0x11cc5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_11cc60:
    // 0x11cc60: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x11cc60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_11cc64:
    // 0x11cc64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11cc68:
    // 0x11cc68: 0xc086230  jal         func_2188C0
label_11cc6c:
    if (ctx->pc == 0x11CC6Cu) {
        ctx->pc = 0x11CC70u;
        goto label_11cc70;
    }
    ctx->pc = 0x11CC68u;
    SET_GPR_U32(ctx, 31, 0x11CC70u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x11CC68u, 0x11CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC70u;
label_11cc70:
    // 0x11cc70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11cc74:
    // 0x11cc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cc78:
    // 0x11cc78: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x11cc78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_11cc7c:
    // 0x11cc7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11cc7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11cc80:
    // 0x11cc80: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11cc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11cc84:
    // 0x11cc84: 0x320f809  jalr        $t9
label_11cc88:
    if (ctx->pc == 0x11CC88u) {
        ctx->pc = 0x11CC8Cu;
        goto label_11cc8c;
    }
    ctx->pc = 0x11CC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11CC8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC84u, 0x11CC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CC8Cu;
label_11cc8c:
    // 0x11cc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cc90:
    // 0x11cc90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11cc94:
    // 0x11cc94: 0x3e00008  jr          $ra
label_11cc98:
    if (ctx->pc == 0x11CC98u) {
        ctx->pc = 0x11CC9Cu;
        goto label_11cc9c;
    }
    ctx->pc = 0x11CC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC9Cu;
label_11cc9c:
    // 0x11cc9c: 0x0  nop
    ctx->pc = 0x11cc9cu;
    // NOP
    ctx->pc = 0x11cca0u;
}
