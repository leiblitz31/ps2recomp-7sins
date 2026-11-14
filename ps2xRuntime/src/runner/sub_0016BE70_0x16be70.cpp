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

// Function: sub_0016BE70
// Address: 0x16be70 - 0x16bed0
void sub_0016BE70_0x16be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BE70_0x16be70");
#endif

    switch (ctx->pc) {
        case 0x16be70u: goto label_16be70;
        case 0x16be74u: goto label_16be74;
        case 0x16be78u: goto label_16be78;
        case 0x16be7cu: goto label_16be7c;
        case 0x16be80u: goto label_16be80;
        case 0x16be84u: goto label_16be84;
        case 0x16be88u: goto label_16be88;
        case 0x16be8cu: goto label_16be8c;
        case 0x16be90u: goto label_16be90;
        case 0x16be94u: goto label_16be94;
        case 0x16be98u: goto label_16be98;
        case 0x16be9cu: goto label_16be9c;
        case 0x16bea0u: goto label_16bea0;
        case 0x16bea4u: goto label_16bea4;
        case 0x16bea8u: goto label_16bea8;
        case 0x16beacu: goto label_16beac;
        case 0x16beb0u: goto label_16beb0;
        case 0x16beb4u: goto label_16beb4;
        case 0x16beb8u: goto label_16beb8;
        case 0x16bebcu: goto label_16bebc;
        case 0x16bec0u: goto label_16bec0;
        case 0x16bec4u: goto label_16bec4;
        case 0x16bec8u: goto label_16bec8;
        case 0x16beccu: goto label_16becc;
        default: break;
    }

    ctx->pc = 0x16be70u;

label_16be70:
    // 0x16be70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16be74:
    // 0x16be74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16be78:
    // 0x16be78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16be78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16be7c:
    // 0x16be7c: 0xc05548c  jal         func_155230
label_16be80:
    if (ctx->pc == 0x16BE80u) {
        ctx->pc = 0x16BE84u;
        goto label_16be84;
    }
    ctx->pc = 0x16BE7Cu;
    SET_GPR_U32(ctx, 31, 0x16BE84u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16BE7Cu, 0x16BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE84u;
label_16be84:
    // 0x16be84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16be88:
    // 0x16be88: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_16be8c:
    // 0x16be8c: 0xc0553d4  jal         func_154F50
label_16be90:
    if (ctx->pc == 0x16BE90u) {
        ctx->pc = 0x16BE94u;
        goto label_16be94;
    }
    ctx->pc = 0x16BE8Cu;
    SET_GPR_U32(ctx, 31, 0x16BE94u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x16BE8Cu, 0x16BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE94u;
label_16be94:
    // 0x16be94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16be94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16be98:
    // 0x16be98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16be9c:
    // 0x16be9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16bea0:
    // 0x16bea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16bea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16bea4:
    // 0x16bea4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16bea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16bea8:
    // 0x16bea8: 0x320f809  jalr        $t9
label_16beac:
    if (ctx->pc == 0x16BEACu) {
        ctx->pc = 0x16BEB0u;
        goto label_16beb0;
    }
    ctx->pc = 0x16BEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BEB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BEA8u, 0x16BEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BEB0u;
label_16beb0:
    // 0x16beb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16beb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16beb4:
    // 0x16beb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16beb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16beb8:
    // 0x16beb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16beb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16bebc:
    // 0x16bebc: 0x3e00008  jr          $ra
label_16bec0:
    if (ctx->pc == 0x16BEC0u) {
        ctx->pc = 0x16BEC4u;
        goto label_16bec4;
    }
    ctx->pc = 0x16BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BEC4u;
label_16bec4:
    // 0x16bec4: 0x0  nop
    ctx->pc = 0x16bec4u;
    // NOP
label_16bec8:
    // 0x16bec8: 0x0  nop
    ctx->pc = 0x16bec8u;
    // NOP
label_16becc:
    // 0x16becc: 0x0  nop
    ctx->pc = 0x16beccu;
    // NOP
    ctx->pc = 0x16bed0u;
}
