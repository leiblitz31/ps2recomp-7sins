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

// Function: sub_0044FFE0
// Address: 0x44ffe0 - 0x450070
void sub_0044FFE0_0x44ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FFE0_0x44ffe0");
#endif

    switch (ctx->pc) {
        case 0x45001cu: goto label_45001c;
        case 0x45005cu: goto label_45005c;
        default: break;
    }

    ctx->pc = 0x44ffe0u;

    // 0x44ffe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44ffe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44ffe8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x44ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x44ffec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x44ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x44fff0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44fff4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x44fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x44fff8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44fffc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x44fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x450000: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x450000u;
    {
        const bool branch_taken_0x450000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x450000) {
            ctx->pc = 0x450034u;
            goto label_450034;
        }
    }
    ctx->pc = 0x450008u;
    // 0x450008: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45000c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450010: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x450010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450014: 0xc1140b0  jal         func_4502C0
    ctx->pc = 0x450014u;
    SET_GPR_U32(ctx, 31, 0x45001Cu);
    ctx->pc = 0x4502C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4502C0u, 0x450014u, 0x45001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45001Cu;
label_45001c:
    // 0x45001c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450020: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x450020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x450024: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x450024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x450028: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x450028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x45002c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45002Cu;
    {
        const bool branch_taken_0x45002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45002c) {
            ctx->pc = 0x45005Cu;
            goto label_45005c;
        }
    }
    ctx->pc = 0x450034u;
label_450034:
    // 0x450034: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450038: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x450038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x45003c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450040: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x450040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450044: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x450044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450048: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x450048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x45004c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x45004cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x450050: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x450050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x450054: 0xc11401c  jal         func_450070
    ctx->pc = 0x450054u;
    SET_GPR_U32(ctx, 31, 0x45005Cu);
    ctx->pc = 0x450070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450070u, 0x450054u, 0x45005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45005Cu;
label_45005c:
    // 0x45005c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45005cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450060: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x450060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x450064: 0x3e00008  jr          $ra
    ctx->pc = 0x450064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45006Cu;
    // 0x45006c: 0x0  nop
    ctx->pc = 0x45006cu;
    // NOP
    ctx->pc = 0x450070u;
}
