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

// Function: sub_0047B4E0
// Address: 0x47b4e0 - 0x47b570
void sub_0047B4E0_0x47b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B4E0_0x47b4e0");
#endif

    switch (ctx->pc) {
        case 0x47b51cu: goto label_47b51c;
        case 0x47b55cu: goto label_47b55c;
        default: break;
    }

    ctx->pc = 0x47b4e0u;

    // 0x47b4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47b4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b4e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47b4ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x47b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x47b4f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b4f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x47b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47b4f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b4fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x47b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47b500: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x47B500u;
    {
        const bool branch_taken_0x47b500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x47b500) {
            ctx->pc = 0x47B534u;
            goto label_47b534;
        }
    }
    ctx->pc = 0x47B508u;
    // 0x47b508: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b50c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47b510: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x47b510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47b514: 0xc09e1ac  jal         func_2786B0
    ctx->pc = 0x47B514u;
    SET_GPR_U32(ctx, 31, 0x47B51Cu);
    ctx->pc = 0x2786B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786B0u, 0x47B514u, 0x47B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B51Cu;
label_47b51c:
    // 0x47b51c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b520: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x47b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47b524: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x47b524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x47b528: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x47b528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x47b52c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x47B52Cu;
    {
        const bool branch_taken_0x47b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b52c) {
            ctx->pc = 0x47B55Cu;
            goto label_47b55c;
        }
    }
    ctx->pc = 0x47B534u;
label_47b534:
    // 0x47b534: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b538: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x47b538u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x47b53c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b540: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47b540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47b544: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x47b544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47b548: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x47b548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x47b54c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x47b54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47b550: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x47b550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47b554: 0xc11ed5c  jal         func_47B570
    ctx->pc = 0x47B554u;
    SET_GPR_U32(ctx, 31, 0x47B55Cu);
    ctx->pc = 0x47B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47B570u, 0x47B554u, 0x47B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B55Cu;
label_47b55c:
    // 0x47b55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b560: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47b564: 0x3e00008  jr          $ra
    ctx->pc = 0x47B564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B56Cu;
    // 0x47b56c: 0x0  nop
    ctx->pc = 0x47b56cu;
    // NOP
    ctx->pc = 0x47b570u;
}
