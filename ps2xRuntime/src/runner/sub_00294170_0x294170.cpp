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

// Function: sub_00294170
// Address: 0x294170 - 0x294200
void sub_00294170_0x294170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294170_0x294170");
#endif

    switch (ctx->pc) {
        case 0x2941acu: goto label_2941ac;
        case 0x2941ecu: goto label_2941ec;
        default: break;
    }

    ctx->pc = 0x294170u;

    // 0x294170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294178: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x294178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29417c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29417cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x294180: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294184: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x294184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29418c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x29418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x294190: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x294190u;
    {
        const bool branch_taken_0x294190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x294190) {
            ctx->pc = 0x2941C4u;
            goto label_2941c4;
        }
    }
    ctx->pc = 0x294198u;
    // 0x294198: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29419c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2941a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2941a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2941a4: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2941A4u;
    SET_GPR_U32(ctx, 31, 0x2941ACu);
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2941A4u, 0x2941ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2941ACu;
label_2941ac:
    // 0x2941ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2941acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2941b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2941b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2941b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2941b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2941b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2941b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2941bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2941BCu;
    {
        const bool branch_taken_0x2941bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2941bc) {
            ctx->pc = 0x2941ECu;
            goto label_2941ec;
        }
    }
    ctx->pc = 0x2941C4u;
label_2941c4:
    // 0x2941c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2941c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2941c8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2941c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2941cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2941ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2941d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2941d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2941d4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2941d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2941d8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2941d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2941dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2941dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2941e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2941e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2941e4: 0xc0a5080  jal         func_294200
    ctx->pc = 0x2941E4u;
    SET_GPR_U32(ctx, 31, 0x2941ECu);
    ctx->pc = 0x294200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294200u, 0x2941E4u, 0x2941ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2941ECu;
label_2941ec:
    // 0x2941ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2941ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2941f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2941f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2941f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2941F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2941FCu;
    // 0x2941fc: 0x0  nop
    ctx->pc = 0x2941fcu;
    // NOP
    ctx->pc = 0x294200u;
}
