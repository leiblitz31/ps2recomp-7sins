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

// Function: sub_001A3290
// Address: 0x1a3290 - 0x1a3320
void sub_001A3290_0x1a3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3290_0x1a3290");
#endif

    switch (ctx->pc) {
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a330cu: goto label_1a330c;
        default: break;
    }

    ctx->pc = 0x1a3290u;

    // 0x1a3290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3298: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a3298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a329c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a329cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a32a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a32a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a32a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a32a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a32ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a32b0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A32B0u;
    {
        const bool branch_taken_0x1a32b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a32b0) {
            ctx->pc = 0x1A32E4u;
            goto label_1a32e4;
        }
    }
    ctx->pc = 0x1A32B8u;
    // 0x1a32b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a32bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a32c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a32c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a32c4: 0xc068d5c  jal         func_1A3570
    ctx->pc = 0x1A32C4u;
    SET_GPR_U32(ctx, 31, 0x1A32CCu);
    ctx->pc = 0x1A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3570u, 0x1A32C4u, 0x1A32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32CCu;
label_1a32cc:
    // 0x1a32cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a32ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a32d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a32d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a32d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1a32dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A32DCu;
    {
        const bool branch_taken_0x1a32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a32dc) {
            ctx->pc = 0x1A330Cu;
            goto label_1a330c;
        }
    }
    ctx->pc = 0x1A32E4u;
label_1a32e4:
    // 0x1a32e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a32e8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1a32e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a32ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a32ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a32f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a32f4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a32f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a32f8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1a32f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a32fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3300: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a3300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3304: 0xc068cc8  jal         func_1A3320
    ctx->pc = 0x1A3304u;
    SET_GPR_U32(ctx, 31, 0x1A330Cu);
    ctx->pc = 0x1A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3320u, 0x1A3304u, 0x1A330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A330Cu;
label_1a330c:
    // 0x1a330c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a3310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a3314: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A331Cu;
    // 0x1a331c: 0x0  nop
    ctx->pc = 0x1a331cu;
    // NOP
    ctx->pc = 0x1a3320u;
}
