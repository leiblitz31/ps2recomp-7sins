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

// Function: sub_0023FB90
// Address: 0x23fb90 - 0x23fc20
void sub_0023FB90_0x23fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FB90_0x23fb90");
#endif

    switch (ctx->pc) {
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fc0cu: goto label_23fc0c;
        default: break;
    }

    ctx->pc = 0x23fb90u;

    // 0x23fb90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fb98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23fb9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23fba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fba4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23fbb0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23FBB0u;
    {
        const bool branch_taken_0x23fbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fbb0) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FBB8u;
    // 0x23fbb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fbc0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fbc4: 0xc08ffe4  jal         func_23FF90
    ctx->pc = 0x23FBC4u;
    SET_GPR_U32(ctx, 31, 0x23FBCCu);
    ctx->pc = 0x23FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF90u, 0x23FBC4u, 0x23FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBCCu;
label_23fbcc:
    // 0x23fbcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23fbd4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23fbd8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x23fbdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23FBDCu;
    {
        const bool branch_taken_0x23fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fbdc) {
            ctx->pc = 0x23FC0Cu;
            goto label_23fc0c;
        }
    }
    ctx->pc = 0x23FBE4u;
label_23fbe4:
    // 0x23fbe4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbe8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x23fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fbec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbf0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fbf4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fbf8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23fbfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23fbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fc00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fc04: 0xc08ff08  jal         func_23FC20
    ctx->pc = 0x23FC04u;
    SET_GPR_U32(ctx, 31, 0x23FC0Cu);
    ctx->pc = 0x23FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC20u, 0x23FC04u, 0x23FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC0Cu;
label_23fc0c:
    // 0x23fc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fc10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23fc14: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC1Cu;
    // 0x23fc1c: 0x0  nop
    ctx->pc = 0x23fc1cu;
    // NOP
    ctx->pc = 0x23fc20u;
}
