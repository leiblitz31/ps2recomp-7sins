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

// Function: sub_00477800
// Address: 0x477800 - 0x477890
void sub_00477800_0x477800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477800_0x477800");
#endif

    switch (ctx->pc) {
        case 0x47783cu: goto label_47783c;
        case 0x47787cu: goto label_47787c;
        default: break;
    }

    ctx->pc = 0x477800u;

    // 0x477800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x477800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x477804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477808: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x477808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47780c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x47780cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x477810: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x477810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477814: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x477814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477818: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x477818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47781c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x47781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x477820: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x477820u;
    {
        const bool branch_taken_0x477820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x477820) {
            ctx->pc = 0x477854u;
            goto label_477854;
        }
    }
    ctx->pc = 0x477828u;
    // 0x477828: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x477828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47782c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477830: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x477830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477834: 0xc11df00  jal         func_477C00
    ctx->pc = 0x477834u;
    SET_GPR_U32(ctx, 31, 0x47783Cu);
    ctx->pc = 0x477C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477C00u, 0x477834u, 0x47783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47783Cu;
label_47783c:
    // 0x47783c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477840: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x477840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x477844: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x477844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x477848: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x477848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x47784c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x47784Cu;
    {
        const bool branch_taken_0x47784c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47784c) {
            ctx->pc = 0x47787Cu;
            goto label_47787c;
        }
    }
    ctx->pc = 0x477854u;
label_477854:
    // 0x477854: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x477854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477858: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x477858u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x47785c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477860: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x477860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477864: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x477864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477868: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x477868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x47786c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x47786cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477870: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x477870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477874: 0xc11de24  jal         func_477890
    ctx->pc = 0x477874u;
    SET_GPR_U32(ctx, 31, 0x47787Cu);
    ctx->pc = 0x477890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477890u, 0x477874u, 0x47787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47787Cu;
label_47787c:
    // 0x47787c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47787cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477880: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x477880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x477884: 0x3e00008  jr          $ra
    ctx->pc = 0x477884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47788Cu;
    // 0x47788c: 0x0  nop
    ctx->pc = 0x47788cu;
    // NOP
    ctx->pc = 0x477890u;
}
