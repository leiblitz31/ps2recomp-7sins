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

// Function: sub_00106E40
// Address: 0x106e40 - 0x106e90
void sub_00106E40_0x106e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E40_0x106e40");
#endif

    switch (ctx->pc) {
        case 0x106e40u: goto label_106e40;
        case 0x106e44u: goto label_106e44;
        case 0x106e48u: goto label_106e48;
        case 0x106e4cu: goto label_106e4c;
        case 0x106e50u: goto label_106e50;
        case 0x106e54u: goto label_106e54;
        case 0x106e58u: goto label_106e58;
        case 0x106e5cu: goto label_106e5c;
        case 0x106e60u: goto label_106e60;
        case 0x106e64u: goto label_106e64;
        case 0x106e68u: goto label_106e68;
        case 0x106e6cu: goto label_106e6c;
        case 0x106e70u: goto label_106e70;
        case 0x106e74u: goto label_106e74;
        case 0x106e78u: goto label_106e78;
        case 0x106e7cu: goto label_106e7c;
        case 0x106e80u: goto label_106e80;
        case 0x106e84u: goto label_106e84;
        case 0x106e88u: goto label_106e88;
        case 0x106e8cu: goto label_106e8c;
        default: break;
    }

    ctx->pc = 0x106e40u;

label_106e40:
    // 0x106e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_106e44:
    // 0x106e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106e48:
    // 0x106e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_106e4c:
    // 0x106e4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_106e50:
    // 0x106e50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x106e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_106e54:
    // 0x106e54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_106e58:
    // 0x106e58: 0xc086230  jal         func_2188C0
label_106e5c:
    if (ctx->pc == 0x106E5Cu) {
        ctx->pc = 0x106E60u;
        goto label_106e60;
    }
    ctx->pc = 0x106E58u;
    SET_GPR_U32(ctx, 31, 0x106E60u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x106E58u, 0x106E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E60u;
label_106e60:
    // 0x106e60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106e64:
    // 0x106e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106e68:
    // 0x106e68: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x106e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_106e6c:
    // 0x106e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106e70:
    // 0x106e70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x106e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_106e74:
    // 0x106e74: 0x320f809  jalr        $t9
label_106e78:
    if (ctx->pc == 0x106E78u) {
        ctx->pc = 0x106E7Cu;
        goto label_106e7c;
    }
    ctx->pc = 0x106E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106E7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E74u, 0x106E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106E7Cu;
label_106e7c:
    // 0x106e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106e80:
    // 0x106e80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_106e84:
    // 0x106e84: 0x3e00008  jr          $ra
label_106e88:
    if (ctx->pc == 0x106E88u) {
        ctx->pc = 0x106E8Cu;
        goto label_106e8c;
    }
    ctx->pc = 0x106E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E8Cu;
label_106e8c:
    // 0x106e8c: 0x0  nop
    ctx->pc = 0x106e8cu;
    // NOP
    ctx->pc = 0x106e90u;
}
