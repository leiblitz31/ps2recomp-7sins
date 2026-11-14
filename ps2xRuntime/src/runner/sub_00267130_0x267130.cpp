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

// Function: sub_00267130
// Address: 0x267130 - 0x2671c0
void sub_00267130_0x267130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267130_0x267130");
#endif

    switch (ctx->pc) {
        case 0x26716cu: goto label_26716c;
        case 0x2671acu: goto label_2671ac;
        default: break;
    }

    ctx->pc = 0x267130u;

    // 0x267130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x267134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267138: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x267138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26713c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26713cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x267140: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267144: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x267144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267148: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26714c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x267150: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267150u;
    {
        const bool branch_taken_0x267150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267150) {
            ctx->pc = 0x267184u;
            goto label_267184;
        }
    }
    ctx->pc = 0x267158u;
    // 0x267158: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26715c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267160: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x267160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267164: 0xc099d04  jal         func_267410
    ctx->pc = 0x267164u;
    SET_GPR_U32(ctx, 31, 0x26716Cu);
    ctx->pc = 0x267410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267410u, 0x267164u, 0x26716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26716Cu;
label_26716c:
    // 0x26716c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267170: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x267174: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x267174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x267178: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x267178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x26717c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26717Cu;
    {
        const bool branch_taken_0x26717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26717c) {
            ctx->pc = 0x2671ACu;
            goto label_2671ac;
        }
    }
    ctx->pc = 0x267184u;
label_267184:
    // 0x267184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267188: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x267188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x26718c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267190: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x267190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267194: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x267194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267198: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x267198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26719c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26719cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2671a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2671a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2671a4: 0xc099c70  jal         func_2671C0
    ctx->pc = 0x2671A4u;
    SET_GPR_U32(ctx, 31, 0x2671ACu);
    ctx->pc = 0x2671C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671C0u, 0x2671A4u, 0x2671ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671ACu;
label_2671ac:
    // 0x2671ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2671acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2671b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2671b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2671b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2671B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2671B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2671BCu;
    // 0x2671bc: 0x0  nop
    ctx->pc = 0x2671bcu;
    // NOP
    ctx->pc = 0x2671c0u;
}
