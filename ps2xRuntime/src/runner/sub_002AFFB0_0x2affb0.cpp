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

// Function: sub_002AFFB0
// Address: 0x2affb0 - 0x2b0010
void sub_002AFFB0_0x2affb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFFB0_0x2affb0");
#endif

    switch (ctx->pc) {
        case 0x2affb0u: goto label_2affb0;
        case 0x2affb4u: goto label_2affb4;
        case 0x2affb8u: goto label_2affb8;
        case 0x2affbcu: goto label_2affbc;
        case 0x2affc0u: goto label_2affc0;
        case 0x2affc4u: goto label_2affc4;
        case 0x2affc8u: goto label_2affc8;
        case 0x2affccu: goto label_2affcc;
        case 0x2affd0u: goto label_2affd0;
        case 0x2affd4u: goto label_2affd4;
        case 0x2affd8u: goto label_2affd8;
        case 0x2affdcu: goto label_2affdc;
        case 0x2affe0u: goto label_2affe0;
        case 0x2affe4u: goto label_2affe4;
        case 0x2affe8u: goto label_2affe8;
        case 0x2affecu: goto label_2affec;
        case 0x2afff0u: goto label_2afff0;
        case 0x2afff4u: goto label_2afff4;
        case 0x2afff8u: goto label_2afff8;
        case 0x2afffcu: goto label_2afffc;
        case 0x2b0000u: goto label_2b0000;
        case 0x2b0004u: goto label_2b0004;
        case 0x2b0008u: goto label_2b0008;
        case 0x2b000cu: goto label_2b000c;
        default: break;
    }

    ctx->pc = 0x2affb0u;

label_2affb0:
    // 0x2affb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2affb4:
    // 0x2affb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2affb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2affb8:
    // 0x2affb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2affb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2affbc:
    // 0x2affbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2affbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2affc0:
    // 0x2affc0: 0x8f83bc68  lw          $v1, -0x4398($gp)
    ctx->pc = 0x2affc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
label_2affc4:
    // 0x2affc4: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x2affc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
label_2affc8:
    // 0x2affc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2affc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2affcc:
    // 0x2affcc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2affd0:
    if (ctx->pc == 0x2AFFD0u) {
        ctx->pc = 0x2AFFD4u;
        goto label_2affd4;
    }
    ctx->pc = 0x2AFFCCu;
    {
        const bool branch_taken_0x2affcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affcc) {
            ctx->pc = 0x2AFFF0u;
            goto label_2afff0;
        }
    }
    ctx->pc = 0x2AFFD4u;
label_2affd4:
    // 0x2affd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2affd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2affd8:
    // 0x2affd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2affd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2affdc:
    // 0x2affdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2affdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2affe0:
    // 0x2affe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2affe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2affe4:
    // 0x2affe4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2affe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2affe8:
    // 0x2affe8: 0x320f809  jalr        $t9
label_2affec:
    if (ctx->pc == 0x2AFFECu) {
        ctx->pc = 0x2AFFF0u;
        goto label_2afff0;
    }
    ctx->pc = 0x2AFFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AFFF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFFE8u, 0x2AFFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AFFF0u;
label_2afff0:
    // 0x2afff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2afff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2afff4:
    // 0x2afff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2afff8:
    // 0x2afff8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2afff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2afffc:
    // 0x2afffc: 0x3e00008  jr          $ra
label_2b0000:
    if (ctx->pc == 0x2B0000u) {
        ctx->pc = 0x2B0004u;
        goto label_2b0004;
    }
    ctx->pc = 0x2AFFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0004u;
label_2b0004:
    // 0x2b0004: 0x0  nop
    ctx->pc = 0x2b0004u;
    // NOP
label_2b0008:
    // 0x2b0008: 0x0  nop
    ctx->pc = 0x2b0008u;
    // NOP
label_2b000c:
    // 0x2b000c: 0x0  nop
    ctx->pc = 0x2b000cu;
    // NOP
    ctx->pc = 0x2b0010u;
}
