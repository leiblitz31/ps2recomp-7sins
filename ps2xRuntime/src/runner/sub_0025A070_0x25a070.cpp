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

// Function: sub_0025A070
// Address: 0x25a070 - 0x25a130
void sub_0025A070_0x25a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A070_0x25a070");
#endif

    ctx->pc = 0x25a070u;

    // 0x25a070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a074: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a078: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25a078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25a07c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a080: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x25a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25a084: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25A084u;
    {
        const bool branch_taken_0x25a084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a084) {
            ctx->pc = 0x25A100u;
            goto label_25a100;
        }
    }
    ctx->pc = 0x25A08Cu;
    // 0x25a08c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a090: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25A090u;
    {
        const bool branch_taken_0x25a090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a090) {
            ctx->pc = 0x25A0F0u;
            goto label_25a0f0;
        }
    }
    ctx->pc = 0x25A098u;
    // 0x25a098: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A098u;
    {
        const bool branch_taken_0x25a098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a098) {
            ctx->pc = 0x25A0E0u;
            goto label_25a0e0;
        }
    }
    ctx->pc = 0x25A0A0u;
    // 0x25a0a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a0a4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A0A4u;
    {
        const bool branch_taken_0x25a0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a0a4) {
            ctx->pc = 0x25A0D0u;
            goto label_25a0d0;
        }
    }
    ctx->pc = 0x25A0ACu;
    // 0x25a0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a0b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A0B0u;
    {
        const bool branch_taken_0x25a0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a0b0) {
            ctx->pc = 0x25A0C0u;
            goto label_25a0c0;
        }
    }
    ctx->pc = 0x25A0B8u;
    // 0x25a0b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25A0B8u;
    {
        const bool branch_taken_0x25a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0b8) {
            ctx->pc = 0x25A110u;
            goto label_25a110;
        }
    }
    ctx->pc = 0x25A0C0u;
label_25a0c0:
    // 0x25a0c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a0c4: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x25a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x25a0c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25A0C8u;
    {
        const bool branch_taken_0x25a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0c8) {
            ctx->pc = 0x25A118u;
            goto label_25a118;
        }
    }
    ctx->pc = 0x25A0D0u;
label_25a0d0:
    // 0x25a0d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a0d4: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x25a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x25a0d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25A0D8u;
    {
        const bool branch_taken_0x25a0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0d8) {
            ctx->pc = 0x25A118u;
            goto label_25a118;
        }
    }
    ctx->pc = 0x25A0E0u;
label_25a0e0:
    // 0x25a0e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a0e4: 0x244200a4  addiu       $v0, $v0, 0xA4
    ctx->pc = 0x25a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x25a0e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25A0E8u;
    {
        const bool branch_taken_0x25a0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0e8) {
            ctx->pc = 0x25A118u;
            goto label_25a118;
        }
    }
    ctx->pc = 0x25A0F0u;
label_25a0f0:
    // 0x25a0f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a0f4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x25a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x25a0f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25A0F8u;
    {
        const bool branch_taken_0x25a0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0f8) {
            ctx->pc = 0x25A118u;
            goto label_25a118;
        }
    }
    ctx->pc = 0x25A100u;
label_25a100:
    // 0x25a100: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a104: 0x244200bc  addiu       $v0, $v0, 0xBC
    ctx->pc = 0x25a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x25a108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25A108u;
    {
        const bool branch_taken_0x25a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a108) {
            ctx->pc = 0x25A118u;
            goto label_25a118;
        }
    }
    ctx->pc = 0x25A110u;
label_25a110:
    // 0x25a110: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a114: 0x244200a4  addiu       $v0, $v0, 0xA4
    ctx->pc = 0x25a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_25a118:
    // 0x25a118: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a11c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A124u;
    // 0x25a124: 0x0  nop
    ctx->pc = 0x25a124u;
    // NOP
    // 0x25a128: 0x0  nop
    ctx->pc = 0x25a128u;
    // NOP
    // 0x25a12c: 0x0  nop
    ctx->pc = 0x25a12cu;
    // NOP
    ctx->pc = 0x25a130u;
}
