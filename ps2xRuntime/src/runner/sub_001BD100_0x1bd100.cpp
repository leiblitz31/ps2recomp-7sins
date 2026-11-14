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

// Function: sub_001BD100
// Address: 0x1bd100 - 0x1bd190
void sub_001BD100_0x1bd100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD100_0x1bd100");
#endif

    switch (ctx->pc) {
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd17cu: goto label_1bd17c;
        default: break;
    }

    ctx->pc = 0x1bd100u;

    // 0x1bd100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd108: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bd108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bd10c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bd10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bd110: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd114: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1bd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd118: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd11c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bd120: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BD120u;
    {
        const bool branch_taken_0x1bd120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd120) {
            ctx->pc = 0x1BD154u;
            goto label_1bd154;
        }
    }
    ctx->pc = 0x1BD128u;
    // 0x1bd128: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd12c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bd12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd130: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1bd130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd134: 0xc06f4f8  jal         func_1BD3E0
    ctx->pc = 0x1BD134u;
    SET_GPR_U32(ctx, 31, 0x1BD13Cu);
    ctx->pc = 0x1BD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3E0u, 0x1BD134u, 0x1BD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD13Cu;
label_1bd13c:
    // 0x1bd13c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd140: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bd140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd144: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1bd144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1bd148: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1bd148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1bd14c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD14Cu;
    {
        const bool branch_taken_0x1bd14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd14c) {
            ctx->pc = 0x1BD17Cu;
            goto label_1bd17c;
        }
    }
    ctx->pc = 0x1BD154u;
label_1bd154:
    // 0x1bd154: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd158: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1bd158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd15c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd160: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd164: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1bd164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd168: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1bd16c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bd16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd170: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bd170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd174: 0xc06f464  jal         func_1BD190
    ctx->pc = 0x1BD174u;
    SET_GPR_U32(ctx, 31, 0x1BD17Cu);
    ctx->pc = 0x1BD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD190u, 0x1BD174u, 0x1BD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD17Cu;
label_1bd17c:
    // 0x1bd17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd180: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd184: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD18Cu;
    // 0x1bd18c: 0x0  nop
    ctx->pc = 0x1bd18cu;
    // NOP
    ctx->pc = 0x1bd190u;
}
