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

// Function: sub_0016BE10
// Address: 0x16be10 - 0x16be70
void sub_0016BE10_0x16be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BE10_0x16be10");
#endif

    switch (ctx->pc) {
        case 0x16be10u: goto label_16be10;
        case 0x16be14u: goto label_16be14;
        case 0x16be18u: goto label_16be18;
        case 0x16be1cu: goto label_16be1c;
        case 0x16be20u: goto label_16be20;
        case 0x16be24u: goto label_16be24;
        case 0x16be28u: goto label_16be28;
        case 0x16be2cu: goto label_16be2c;
        case 0x16be30u: goto label_16be30;
        case 0x16be34u: goto label_16be34;
        case 0x16be38u: goto label_16be38;
        case 0x16be3cu: goto label_16be3c;
        case 0x16be40u: goto label_16be40;
        case 0x16be44u: goto label_16be44;
        case 0x16be48u: goto label_16be48;
        case 0x16be4cu: goto label_16be4c;
        case 0x16be50u: goto label_16be50;
        case 0x16be54u: goto label_16be54;
        case 0x16be58u: goto label_16be58;
        case 0x16be5cu: goto label_16be5c;
        case 0x16be60u: goto label_16be60;
        case 0x16be64u: goto label_16be64;
        case 0x16be68u: goto label_16be68;
        case 0x16be6cu: goto label_16be6c;
        default: break;
    }

    ctx->pc = 0x16be10u;

label_16be10:
    // 0x16be10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16be14:
    // 0x16be14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16be18:
    // 0x16be18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16be1c:
    // 0x16be1c: 0xc05548c  jal         func_155230
label_16be20:
    if (ctx->pc == 0x16BE20u) {
        ctx->pc = 0x16BE24u;
        goto label_16be24;
    }
    ctx->pc = 0x16BE1Cu;
    SET_GPR_U32(ctx, 31, 0x16BE24u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16BE1Cu, 0x16BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE24u;
label_16be24:
    // 0x16be24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16be28:
    // 0x16be28: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16be28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_16be2c:
    // 0x16be2c: 0xc0553d4  jal         func_154F50
label_16be30:
    if (ctx->pc == 0x16BE30u) {
        ctx->pc = 0x16BE34u;
        goto label_16be34;
    }
    ctx->pc = 0x16BE2Cu;
    SET_GPR_U32(ctx, 31, 0x16BE34u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x16BE2Cu, 0x16BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE34u;
label_16be34:
    // 0x16be34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16be34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16be38:
    // 0x16be38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16be38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16be3c:
    // 0x16be3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16be40:
    // 0x16be40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16be44:
    // 0x16be44: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16be44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16be48:
    // 0x16be48: 0x320f809  jalr        $t9
label_16be4c:
    if (ctx->pc == 0x16BE4Cu) {
        ctx->pc = 0x16BE50u;
        goto label_16be50;
    }
    ctx->pc = 0x16BE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BE50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE48u, 0x16BE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BE50u;
label_16be50:
    // 0x16be50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16be50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16be54:
    // 0x16be54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16be54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16be58:
    // 0x16be58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16be58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16be5c:
    // 0x16be5c: 0x3e00008  jr          $ra
label_16be60:
    if (ctx->pc == 0x16BE60u) {
        ctx->pc = 0x16BE64u;
        goto label_16be64;
    }
    ctx->pc = 0x16BE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BE64u;
label_16be64:
    // 0x16be64: 0x0  nop
    ctx->pc = 0x16be64u;
    // NOP
label_16be68:
    // 0x16be68: 0x0  nop
    ctx->pc = 0x16be68u;
    // NOP
label_16be6c:
    // 0x16be6c: 0x0  nop
    ctx->pc = 0x16be6cu;
    // NOP
    ctx->pc = 0x16be70u;
}
