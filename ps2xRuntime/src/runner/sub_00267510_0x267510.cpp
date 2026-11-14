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

// Function: sub_00267510
// Address: 0x267510 - 0x2675a0
void sub_00267510_0x267510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267510_0x267510");
#endif

    switch (ctx->pc) {
        case 0x26754cu: goto label_26754c;
        case 0x26758cu: goto label_26758c;
        default: break;
    }

    ctx->pc = 0x267510u;

    // 0x267510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x267514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267518: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x267518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26751c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26751cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x267520: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267524: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x267524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267528: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26752c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x267530: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267530u;
    {
        const bool branch_taken_0x267530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267530) {
            ctx->pc = 0x267564u;
            goto label_267564;
        }
    }
    ctx->pc = 0x267538u;
    // 0x267538: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26753c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267540: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x267540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267544: 0xc099e40  jal         func_267900
    ctx->pc = 0x267544u;
    SET_GPR_U32(ctx, 31, 0x26754Cu);
    ctx->pc = 0x267900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267900u, 0x267544u, 0x26754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26754Cu;
label_26754c:
    // 0x26754c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267550: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x267550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x267554: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x267554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x267558: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x267558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x26755c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26755Cu;
    {
        const bool branch_taken_0x26755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26755c) {
            ctx->pc = 0x26758Cu;
            goto label_26758c;
        }
    }
    ctx->pc = 0x267564u;
label_267564:
    // 0x267564: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267568: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x267568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x26756c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267570: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x267570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267574: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x267574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267578: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x267578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26757c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26757cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267580: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x267580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267584: 0xc099d68  jal         func_2675A0
    ctx->pc = 0x267584u;
    SET_GPR_U32(ctx, 31, 0x26758Cu);
    ctx->pc = 0x2675A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2675A0u, 0x267584u, 0x26758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26758Cu;
label_26758c:
    // 0x26758c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267590: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x267590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x267594: 0x3e00008  jr          $ra
    ctx->pc = 0x267594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26759Cu;
    // 0x26759c: 0x0  nop
    ctx->pc = 0x26759cu;
    // NOP
    ctx->pc = 0x2675a0u;
}
