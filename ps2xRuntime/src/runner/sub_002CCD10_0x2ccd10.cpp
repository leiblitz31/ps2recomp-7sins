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

// Function: sub_002CCD10
// Address: 0x2ccd10 - 0x2cce10
void sub_002CCD10_0x2ccd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCD10_0x2ccd10");
#endif

    switch (ctx->pc) {
        case 0x2ccd40u: goto label_2ccd40;
        case 0x2ccd58u: goto label_2ccd58;
        case 0x2ccdb4u: goto label_2ccdb4;
        default: break;
    }

    ctx->pc = 0x2ccd10u;

    // 0x2ccd10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ccd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ccd14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ccd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ccd18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ccd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ccd1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ccd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ccd20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ccd24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ccd28: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2ccd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2ccd2c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2ccd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2ccd30: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2ccd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2ccd34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ccd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd38: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2CCD38u;
    SET_GPR_U32(ctx, 31, 0x2CCD40u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2CCD38u, 0x2CCD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD40u;
label_2ccd40:
    // 0x2ccd40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ccd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ccd44: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ccd44u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ccd48: 0x9010  mfhi        $s2
    ctx->pc = 0x2ccd48u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x2ccd4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ccd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd50: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CCD50u;
    {
        const bool branch_taken_0x2ccd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd50) {
            ctx->pc = 0x2CCDD4u;
            goto label_2ccdd4;
        }
    }
    ctx->pc = 0x2CCD58u;
label_2ccd58:
    // 0x2ccd58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ccd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccd5c: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CCD5Cu;
    {
        const bool branch_taken_0x2ccd5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ccd5c) {
            ctx->pc = 0x2CCD98u;
            goto label_2ccd98;
        }
    }
    ctx->pc = 0x2CCD64u;
    // 0x2ccd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccd68: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCD68u;
    {
        const bool branch_taken_0x2ccd68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ccd68) {
            ctx->pc = 0x2CCD8Cu;
            goto label_2ccd8c;
        }
    }
    ctx->pc = 0x2CCD70u;
    // 0x2ccd70: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCD70u;
    {
        const bool branch_taken_0x2ccd70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd70) {
            ctx->pc = 0x2CCD80u;
            goto label_2ccd80;
        }
    }
    ctx->pc = 0x2CCD78u;
    // 0x2ccd78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCD78u;
    {
        const bool branch_taken_0x2ccd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd78) {
            ctx->pc = 0x2CCD9Cu;
            goto label_2ccd9c;
        }
    }
    ctx->pc = 0x2CCD80u;
label_2ccd80:
    // 0x2ccd80: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x2ccd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ccd84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCD84u;
    {
        const bool branch_taken_0x2ccd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd84) {
            ctx->pc = 0x2CCD9Cu;
            goto label_2ccd9c;
        }
    }
    ctx->pc = 0x2CCD8Cu;
label_2ccd8c:
    // 0x2ccd8c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ccd8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccd90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCD90u;
    {
        const bool branch_taken_0x2ccd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd90) {
            ctx->pc = 0x2CCD9Cu;
            goto label_2ccd9c;
        }
    }
    ctx->pc = 0x2CCD98u;
label_2ccd98:
    // 0x2ccd98: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2ccd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ccd9c:
    // 0x2ccd9c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2ccd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ccda0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ccda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccda4: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2ccda4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccda8: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2ccda8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccdac: 0xc0b31d0  jal         func_2CC740
    ctx->pc = 0x2CCDACu;
    SET_GPR_U32(ctx, 31, 0x2CCDB4u);
    ctx->pc = 0x2CC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC740u, 0x2CCDACu, 0x2CCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDB4u;
label_2ccdb4:
    // 0x2ccdb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ccdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdb8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCDB8u;
    {
        const bool branch_taken_0x2ccdb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdb8) {
            ctx->pc = 0x2CCDD0u;
            goto label_2ccdd0;
        }
    }
    ctx->pc = 0x2CCDC0u;
    // 0x2ccdc0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2ccdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ccdc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ccdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ccdc8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2ccdc8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ccdcc: 0x9010  mfhi        $s2
    ctx->pc = 0x2ccdccu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2ccdd0:
    // 0x2ccdd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ccdd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2ccdd4:
    // 0x2ccdd4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCDD4u;
    {
        const bool branch_taken_0x2ccdd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdd4) {
            ctx->pc = 0x2CCDE8u;
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCDDCu;
    // 0x2ccddc: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2ccddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ccde0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2CCDE0u;
    {
        const bool branch_taken_0x2ccde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccde0) {
            ctx->pc = 0x2CCD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccd58;
        }
    }
    ctx->pc = 0x2CCDE8u;
label_2ccde8:
    // 0x2ccde8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ccde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ccdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ccdf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ccdf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccdf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ccdf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccdf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccdf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccdfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cce00: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2cce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cce04: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCE0Cu;
    // 0x2cce0c: 0x0  nop
    ctx->pc = 0x2cce0cu;
    // NOP
    ctx->pc = 0x2cce10u;
}
