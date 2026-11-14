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

// Function: sub_00267F70
// Address: 0x267f70 - 0x2680b0
void sub_00267F70_0x267f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267F70_0x267f70");
#endif

    switch (ctx->pc) {
        case 0x267fccu: goto label_267fcc;
        case 0x267fdcu: goto label_267fdc;
        case 0x267fecu: goto label_267fec;
        case 0x267ff8u: goto label_267ff8;
        case 0x268014u: goto label_268014;
        case 0x268028u: goto label_268028;
        default: break;
    }

    ctx->pc = 0x267f70u;

    // 0x267f70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x267f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x267f74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x267f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x267f78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267f8c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x267f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x267f90: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x267f90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x267f94: 0xa3a60080  sb          $a2, 0x80($sp)
    ctx->pc = 0x267f94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x267f98: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x267f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267f9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267F9Cu;
    {
        const bool branch_taken_0x267f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f9c) {
            ctx->pc = 0x267FB4u;
            goto label_267fb4;
        }
    }
    ctx->pc = 0x267FA4u;
    // 0x267fa4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x267fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267fa8: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x267fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x267fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267FACu;
    {
        const bool branch_taken_0x267fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267fac) {
            ctx->pc = 0x267FBCu;
            goto label_267fbc;
        }
    }
    ctx->pc = 0x267FB4u;
label_267fb4:
    // 0x267fb4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x267fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267fb8: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x267fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_267fbc:
    // 0x267fbc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x267fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fc4: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x267FC4u;
    SET_GPR_U32(ctx, 31, 0x267FCCu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x267FC4u, 0x267FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FCCu;
label_267fcc:
    // 0x267fcc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x267fccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x267fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fd4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x267FD4u;
    {
        const bool branch_taken_0x267fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267fd4) {
            ctx->pc = 0x268070u;
            goto label_268070;
        }
    }
    ctx->pc = 0x267FDCu;
label_267fdc:
    // 0x267fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fe4: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x267FE4u;
    SET_GPR_U32(ctx, 31, 0x267FECu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x267FE4u, 0x267FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FECu;
label_267fec:
    // 0x267fec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267ff0: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x267FF0u;
    SET_GPR_U32(ctx, 31, 0x267FF8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x267FF0u, 0x267FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FF8u;
label_267ff8:
    // 0x267ff8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267ffc: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x267FFCu;
    {
        const bool branch_taken_0x267ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267ffc) {
            ctx->pc = 0x26806Cu;
            goto label_26806c;
        }
    }
    ctx->pc = 0x268004u;
    // 0x268004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26800c: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26800Cu;
    SET_GPR_U32(ctx, 31, 0x268014u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26800Cu, 0x268014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268014u;
label_268014:
    // 0x268014: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x268014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268018: 0x24050487  addiu       $a1, $zero, 0x487
    ctx->pc = 0x268018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
    // 0x26801c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26801cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268020: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x268020u;
    SET_GPR_U32(ctx, 31, 0x268028u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x268020u, 0x268028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268028u;
label_268028:
    // 0x268028: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x268028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26802c: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x26802Cu;
    {
        const bool branch_taken_0x26802c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x26802c) {
            ctx->pc = 0x26804Cu;
            goto label_26804c;
        }
    }
    ctx->pc = 0x268034u;
    // 0x268034: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x268034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268038u;
    {
        const bool branch_taken_0x268038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268038) {
            ctx->pc = 0x26804Cu;
            goto label_26804c;
        }
    }
    ctx->pc = 0x268040u;
    // 0x268040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268044: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x268044u;
    {
        const bool branch_taken_0x268044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268044) {
            ctx->pc = 0x268080u;
            goto label_268080;
        }
    }
    ctx->pc = 0x26804Cu;
label_26804c:
    // 0x26804c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x26804Cu;
    {
        const bool branch_taken_0x26804c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26804c) {
            ctx->pc = 0x26806Cu;
            goto label_26806c;
        }
    }
    ctx->pc = 0x268054u;
    // 0x268054: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x268054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268058u;
    {
        const bool branch_taken_0x268058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268058) {
            ctx->pc = 0x26806Cu;
            goto label_26806c;
        }
    }
    ctx->pc = 0x268060u;
    // 0x268060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268064: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x268064u;
    {
        const bool branch_taken_0x268064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268064) {
            ctx->pc = 0x268080u;
            goto label_268080;
        }
    }
    ctx->pc = 0x26806Cu;
label_26806c:
    // 0x26806c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26806cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_268070:
    // 0x268070: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x268070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x268074: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x268074u;
    {
        const bool branch_taken_0x268074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268074) {
            ctx->pc = 0x267FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267fdc;
        }
    }
    ctx->pc = 0x26807Cu;
    // 0x26807c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26807cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268080:
    // 0x268080: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x268080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268084: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x268084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268088: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26808c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26808cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268098: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x268098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26809c: 0x3e00008  jr          $ra
    ctx->pc = 0x26809Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26809Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2680A4u;
    // 0x2680a4: 0x0  nop
    ctx->pc = 0x2680a4u;
    // NOP
    // 0x2680a8: 0x0  nop
    ctx->pc = 0x2680a8u;
    // NOP
    // 0x2680ac: 0x0  nop
    ctx->pc = 0x2680acu;
    // NOP
    ctx->pc = 0x2680b0u;
}
